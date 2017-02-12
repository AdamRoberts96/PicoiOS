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
 * The KeyAuth class generates the json string used to bootstrap the 
 * authorisation process. This may be embedded in - say - a QR code, displayed
 * by the server. When scanned by a Pico, the serialized KeyAuth structure
 * contains enough details to allow the Pico to contact the server via the
 * Rendezvous Point and kickstart the authentication process.
 *
 * In essence, the KeyAuth class allows the generation of "KA"-type QR codes.
 * This can be contrasted with the KeyPairing class for generating "KP"-type
 * codes.
 *
 * The format of the serialized output is as follows.
 * {"t":"KA","sc":"B64","ed":"","sa":"URL","td":{}}
 *
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
#include "pico/cryptosupport.h"
#include "pico/log.h"
#include "pico/keyauth.h"

// Defines

// Structure definitions

/**
 * Structure containing the private fields of the class.
 */
struct _KeyAuth {
	Json * json;
	KeyPair * serviceIdentityKey;
};

// Function prototypes

// Function definitions

/**
 * Create a new instance of the class.
 *
 * @return The newly created object.
 */
KeyAuth * keyauth_new() {
	KeyAuth * keyauth;
	
	keyauth = CALLOC(sizeof(KeyAuth), 1);
	keyauth->json = json_new();
	
	return keyauth;
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param keyauth The object to free.
 */
void keyauth_delete(KeyAuth * keyauth) {
	if (keyauth) {
		if (keyauth->json) {
			json_delete(keyauth->json);
		}
		// The serviceIdentityKey is now deleted when the Shared structure is deleted
		//if (keyauth->serviceIdentityKey) {
		//	keypair_delete(keyauth->serviceIdentityKey);
		//}
		FREE(keyauth);
	}
}

/**
 * Set up the KeyAuth structure.
 *
 * @param keyauth The object to populate
 * @param serviceAddress Address of the service for the Pico to authenticate to
 * @param terminalAddress Address of the terminal through which authentication
                          is taking place (not currently used)
 * @param terminalCommitment Commitment to identify the terminal (not currently
 *                           used)
 * @param serviceIdentityKey The service's long-term identity key pair
 */
void keyauth_set(KeyAuth * keyauth, Buffer const * serviceAddress, char const * terminalAddress, Buffer const * terminalCommitment, KeyPair * serviceIdentityKey) {
	Json * terminalDetails;
	Buffer * commitment;
	bool result;
	EC_KEY * publickey;

	keyauth->serviceIdentityKey = serviceIdentityKey;

	json_add_string(keyauth->json, "t", "KA");
	json_add_buffer(keyauth->json, "sa", serviceAddress);
	// The extra data value can be left empty
	json_add_string(keyauth->json, "ed", "");

	// Service commitment
	commitment = buffer_new(0);
	publickey = keypair_getpublickey(keyauth->serviceIdentityKey);
	result = cryptosupport_generate_commitment_base64(publickey, commitment);
	if (result) {
		json_add_buffer(keyauth->json, "sc", commitment);
	}
	else {
		LOG(LOG_ERR, "Error generating service commitment");
	}
	buffer_delete(commitment);

	terminalDetails = json_new();
	json_add_sublist(keyauth->json, "td", terminalDetails);
	json_delete(terminalDetails);

	// The sig value is added automatically during signing
	//json_add_string(keyauth->json, "sig", "");
	//keyauth_sign_self(keyauth);
}

/**
 * Print out the key auth data in JSON format to stdout. Handy for debugging.
 *
 * @param keyauth The object to print
 */
void keyauth_print(KeyAuth * keyauth) {
	json_print(keyauth->json);
}

/**
 * Log the key auth data in JSON format using syslog. Handy for debugging.
 *
 * @param keyauth The object to log
 */
void keyauth_log(KeyAuth * keyauth) {
	json_log(keyauth->json);
}

/**
 * Determine the memory required to store the serialized key auth data.
 *
 * @param keyauth The object for serialization
 * @return The number of bytes required to store the JSON serialized key auth
 */
size_t keyauth_serialize_size(KeyAuth * keyauth) {
	return json_serialize_size(keyauth->json);
}

/**
 * Serialize the key auth data in JSON format. The buffer should be
 * pre-allocated with enough space to store the required output. The size
 * required can be determined by calling keyauth_serialize_size().
 * The result won't be null-terminated.
 * If the allocated buffer becomes full, no more bytes will be written and
 * the result will therefore by truncated.
 *
 * @param keyauth The object for serialization
 * @param buffer Memory buffer to store the result in
 * @param size The size of the memory buffer to store the result in
 * @return The number of bytes output
 */
size_t keyauth_serialize(KeyAuth * keyauth, char * buffer, size_t size) {
	return json_serialize(keyauth->json, buffer, size);
}




