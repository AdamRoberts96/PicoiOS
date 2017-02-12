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
 * The MessageStart class allows an incoming Start message arriving at
 * the server from the Pico to be deserialized and checked, and
 * for the relevant parts to be extracted for use in the protocol.
 * 
 * This represents the first message forming the first round trip of the
 * Sigma-I protocol:
 * QR-code (KeyAuth or KeyPair); Start; ServiceAuth; PicoAuth; Status.
 *
 * The structure of the message is as follows
 * {"picoEphemeralPublicKey":"B64-PUB-KEY","picoNonce":"B64-NONCE","picoVersion":2}
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "pico/debug.h"
#include "pico/nonce.h"
#include "pico/buffer.h"
#include "pico/json.h"
#include "pico/base64.h"
#include "pico/keypair.h"
#include "pico/cryptosupport.h"
#include "pico/shared.h"
#include "pico/log.h"
#include "pico/messagestart.h"

// Defines

// Structure definitions

/**
 * Structure containing the private fields of the class.
 */
struct _MessageStart {
	Shared * shared;
	unsigned char picoVersion;
};

// Function prototypes

// Function definitions

/**
 * Create a new instance of the class.
 *
 * @return The newly created object.
 */
MessageStart * messagestart_new() {
	MessageStart * messagestart;

	messagestart = CALLOC(sizeof(MessageStart), 1);
	
	return messagestart;
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param messagestart The object to free.
 */
void messagestart_delete(MessageStart * messagestart) {
	if (messagestart) {
		FREE(messagestart);
	}
}

/**
 * Populate a Start message structure with the data it needs to be used.
 *
 * @param messagestart The MessageStart object to initalise
 * @param shared Object containing the data shared between all messages during
 *               the protocol run 
 */
void messagestart_set(MessageStart * messagestart, Shared * shared) {
	messagestart->shared = shared;
}

/**
 * Deserialize a Start message JSON string (likely received by the protocol 
 * from a Pico) and store the data collected from it into the messagestart
 * object.
 *
 * The function will return false if the deserialization fails. Reasons
 * for failure include:
 *  - A malformed JSON string
 *  - Badly encoded public key
 *
 * @param messagestart The MessageStart object to store the deserialized
 *                     data into
 * @param buffer The JSON string to deserialize
 * @return true if the message was deserialized correctly, false o/w.
 */
bool messagestart_deserialize(MessageStart * messagestart, Buffer * buffer) {
	Json * json;
	char const * value;
	Buffer * base64;
	Nonce * picoNonce;
	bool result;

	result = true;
	json = json_new();
	result = json_deserialize_buffer(json, buffer);

	if (result) {
		if (json_get_type(json, "picoVersion") == JSONTYPE_DECIMAL) {
			messagestart->picoVersion = json_get_decimal(json, "picoVersion");
		}
		else {
			LOG(LOG_ERR, "Missing picoVersion\n");
			result = false;
		}
	}

	if (result) {
		value = json_get_string(json, "picoNonce");
		if (value) {
			picoNonce = shared_get_pico_nonce(messagestart->shared);
			base64 = buffer_new(NONCE_DEFAULT_BYTES);
			base64_decode_string(value, base64);
			nonce_set_buffer(picoNonce, base64);
			buffer_delete(base64);
		}
		else {
			LOG(LOG_ERR, "Missing picoNonce\n");
			result = false;
		}
	}

	if (result) {
		value = json_get_string(json, "picoEphemeralPublicKey");
		if (value) {
			shared_set_pico_ephemeral_public_key(messagestart->shared, cryptosupport_read_base64_string_public_key(value));
		}
		else {
			LOG(LOG_ERR, "Missing picoEphemeralPublicKey\n");
			result = false;
		}
	}

	json_delete(json);

	return result;
}

bool messagestart_serialize(MessageStart * messagestart, Buffer * buffer){
    bool result;
    result = true;
    Json * json;
    Buffer * picoEphemeralKeyBuffer;
    Shared * sharedData;
    Buffer * b64string;
    unsigned char const * nonceBuffer;
    sharedData = messagestart->shared;
    picoEphemeralKeyBuffer = buffer_new(34);
    cryptosupport_generate_commitment_base64(shared_get_pico_ephemeral_public_key(sharedData), picoEphemeralKeyBuffer);
    //buffer_append_string(picoEphemeralKeyBuffer, "A2+3D+9Aq/VQB8jdJ7+k1euTHX0iwas+mQ");
    json_add_buffer(json, "picoEphemeralPublicKey" , picoEphemeralKeyBuffer);
    Nonce * nonce;
    nonce = nonce_new();
    nonce_generate_random(nonce);
    
    b64string = buffer_new(NONCE_DEFAULT_BYTES);
    
    nonceBuffer = nonce_get_buffer(nonce);
    base64_decode_string((char const *)nonceBuffer, b64string);
    json_add_buffer(json, "picoNonce", b64string);
    
    json_add_decimal(json, "picoVersion", 2);
    json_serialize_buffer(json, buffer);
    
    return result;
}


