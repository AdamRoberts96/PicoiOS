/**
 * @file
 * @author  David Llewellyn-Jones <David.Llewellyn-Jones@cl.cam.ac.uk>
 * @version 1.0
 *
 * @section LICENSE
 *
 * Copyright Pico project, 2016
 *
 * @section DESCRIPTION
 *
 * The KeyPairing class generates the json string used to bootstrap the 
 * pairing process. This may be embedded in - say - a QR code, displayed
 * by the server. When scanned by a Pico, the serialized KeyPairing structure
 * contains enough details to allow the Pico to contact the server via the
 * Rendezvous Point and kickstart the pairing process.
 *
 * In essence, the KeyPairing class allows the generation of "PA"-type QR codes.
 * This can be contrasted with the KeyAuth class for generating "KA"-type codes.
 *
 * The format of the serialized output is as follows.
 * {"sn":"NAME","spk":"PUB-KEY","sig":"B64-SIG","ed":"","sa":"URL","td":{},"t":"KP"}
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <openssl/evp.h>
#include <openssl/rsa.h>
#include <openssl/err.h>
#include "pico/debug.h"
#include "pico/json.h"
#include "pico/buffer.h"
#include "pico/base64.h"
#include "pico/keypair.h"
#include "pico/log.h"
#include "pico/keypairing.h"

// Defines

// Structure definitions

/**
 * Structure containing the private fields of the class.
 */
struct _KeyPairing {
	Json * json;
	KeyPair * serviceIdentityKey;
};

// Function prototypes

void keypairing_getbytestosign(KeyPairing * keypairing, Buffer * buffer);
void keypairing_sign_self(KeyPairing * keypairing);

// Function definitions

/**
 * Create a new instance of the class.
 *
 * @return The newly created object.
 */
KeyPairing * keypairing_new() {
	KeyPairing * keypairing;
	
	keypairing = CALLOC(sizeof(KeyPairing), 1);
	keypairing->json = json_new();
	
	return keypairing;
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param keypairing The object to free.
 */
void keypairing_delete(KeyPairing * keypairing) {
	if (keypairing) {
		if (keypairing->json) {
			json_delete(keypairing->json);
		}
		// The serviceIdentityKey is now deleted when the Shared structure is deleted
		//if (keypairing->serviceIdentityKey) {
		//	keypair_delete(keypairing->serviceIdentityKey);
		//}
		FREE(keypairing);
	}
}

/**
 * Populate a KeyPairing structure with the initial data needed to genereate
 * a key pairing QR code..
 *
 * @param keypairing The object to populate.
 * @param serviceAddress The address of the service the Pico will be requested
 *                       to pair with.
 * @param terminalAddress The terminal through which the pairing is taking 
 *                        place (not currently used)
 * @param terminalCommitment Commitment to identify the terminal (not currently
 *                           used)
 * @param serviceName The name of the service the Pico will be requested to
 *                    pair with
 * @param serviceIdentityKey The service's long-term identity key pair
 */
void keypairing_set(KeyPairing * keypairing, Buffer const * serviceAddress, char const * terminalAddress, Buffer const * terminalCommitment, char const * serviceName, KeyPair * serviceIdentityKey) {
	Json * terminalDetails;
	//char * string;
	Buffer * buffer;

	keypairing->serviceIdentityKey = serviceIdentityKey;

	json_add_string(keypairing->json, "t", "KP");
	json_add_buffer(keypairing->json, "sa", serviceAddress);
	json_add_string(keypairing->json, "sn", serviceName);
	// The extra data value can be left empty
	json_add_string(keypairing->json, "ed", "");

	// Public key
	buffer = buffer_new(0);
	keypair_getpublicpem(keypairing->serviceIdentityKey, buffer);
	json_add_buffer(keypairing->json, "spk", buffer);
	buffer_delete(buffer);

	/*
	terminalDetails = json_new();
	json_add_string(terminalDetails, "ta", terminalAddress);

	string = buffer_copy_to_new_string(terminalCommitment);
	json_add_string(terminalDetails, "tc", string);
	FREE(string);

	json_add_sublist(keypairing->json, "td", terminalDetails);
	json_delete(terminalDetails);
	*/

	terminalDetails = json_new();
	json_add_sublist(keypairing->json, "td", terminalDetails);
	json_delete(terminalDetails);

	// The sig value is added automatically during signing
	//json_add_string(keypairing->json, "sig", "");
	keypairing_sign_self(keypairing);
}

/**
 * Serialize the KeyPairing data (the data that would be included in the QR
 * code) and print it to stdout. Handy for debugging.
 *
 * @param keypairing The KeyPairing object to print out.
 */
void keypairing_print(KeyPairing * keypairing) {
	json_print(keypairing->json);
}

/**
 * Serialize the KeyPairing data (the data that would be included in the QR
 * code) and log it using syslog. Handy for debugging.
 *
 * @param keypairing The KeyPairing object to log.
 */
void keypairing_log(KeyPairing * keypairing) {
	json_log(keypairing->json);
}

/**
 * The keypairing includes a signature of the service name and service address
 * concatenated together. This function performs the concatenation and returns
 * the data to be signed, but doesn't actually undertake the signing, which is
 * performed by keypairing_sign_self().
 *
 * @param keypairing The KeyParing object to collect the data from. This 
 *                   should already have been populated using keypairing_set()
 * @param buffer The buffer to store the resulting byte block in. This is the
 *               data to be signed.
 */
void keypairing_getbytestosign(KeyPairing * keypairing, Buffer * buffer) {
	char const * string;
	size_t length;

	buffer_clear(buffer);

	string = json_get_string(keypairing->json, "sn");
	length = strlen(string);
	buffer_append(buffer, string, length);

	string = json_get_string(keypairing->json, "sa");
	length = strlen(string);
	buffer_append(buffer, string, length);
}

/**
 * The keypairing includes a signature of the service name and service address
 * concatenated together. This function performs the signing. It calls
 * keypairing_getbytestosign() in order to gather together the data to be
 * signed. The resulting signature is stored back in the keypairing object
 * and will be serialized out when keypairing_serialize() is called.
 *
 * @param keypairing The KeyParing object to collect the data from. This  
 *                   should already have been populated using keypairing_set()
 */
void keypairing_sign_self(KeyPairing * keypairing) {
	Buffer * bufferin;
	Buffer * datasigned;
	Buffer * base64;
	
	bufferin = buffer_new(0);
	datasigned = buffer_new(0);
	base64 = buffer_new(0);

	keypairing_getbytestosign(keypairing, bufferin);

	keypair_sign_data(keypairing->serviceIdentityKey, bufferin, datasigned);
	
	buffer_delete(bufferin);

	base64_encode_buffer(datasigned, base64);

	buffer_delete(datasigned);

	json_add_buffer(keypairing->json, "sig", base64);

	buffer_delete(base64);
}

/**
 * Returns the amount of memory needed to serialize the keypairing data. This
 * doesn't include a null-terminator. Once serialized, the resulting JSON
 * string can be encoded in a QR code and presented to the Pico in order to
 * initiate the Pico pairing protocol.
 *
 * @param keypairing The KeyPairing object to serialize
 * @return The number of bytes needed to store the serialized data
 */
size_t keypairing_serialize_size(KeyPairing * keypairing) {
	return json_serialize_size(keypairing->json);
}

/**
 * Serialize the keypairing data as a JSON strong. This doesn't include a
 * null-terminator. Once serialized, the resulting JSON string can be encoded
 * in a QR code and presented to the Pico in order to initiate the Pico 
 * pairing protocol.
 *
 * The output buffer must be pre-allocated with enough space to hold the
 * serialized data. If the serialized data is too long, it will be truncated.
 * The resulting output is not null-terminated.
 *
 * @param keypairing The KeyPairing object to serialize
 * @param buffer A pre-allocated memory buffer for the serialized data to be
 *               stored into. The keypairing_serialize_size() can be used to
 *               establish how large this buffer should be.
 * @param size The amount of memory allocated to the buffer
 * @return The number of bytes stored into the buffer
 */
size_t keypairing_serialize(KeyPairing * keypairing, char * buffer, size_t size) {
	return json_serialize(keypairing->json, buffer, size);
}




