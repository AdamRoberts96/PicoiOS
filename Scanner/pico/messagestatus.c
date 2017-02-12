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
 * The MessageStatus class allows a Status message to ge generated by
 * the server to be sent to the Pico.
 * 
 * This represents the second message forming the second round trip of the
 * Sigma-I protocol:
 * QR-code (KeyAuth or KeyPair); Start; ServiceAuth; PicoAuth; Status.
 *
 * The structure of the message is as follows
 * {"iv":"B64","encryptedData":"B64-ENC","sessionId":0}
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "pico/debug.h"
#include "pico/cryptosupport.h"
#include "pico/json.h"
#include "pico/buffer.h"
#include "pico/base64.h"
#include "pico/log.h"
#include "pico/messagestatus.h"

// Defines

// Structure definitions

/**
 * Structure containing the private fields of the class.
 */
struct _MessageStatus {
	Shared * shared;
	int sessionId;
	char status;
	Buffer * extraData;
};

// Function prototypes

// Function definitions

/**
 * Create a new instance of the class.
 *
 * @return The newly created object.
 */
MessageStatus * messagestatus_new() {
	MessageStatus * messagestatus;

	messagestatus = CALLOC(sizeof(MessageStatus), 1);
	messagestatus->extraData = buffer_new(0);
	messagestatus->sessionId = 0;

	return messagestatus;
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param messagestatus The object to free.
 */
void messagestatus_delete(MessageStatus * messagestatus) {
	if (messagestatus) {
		if (messagestatus->extraData) {
			buffer_delete(messagestatus->extraData);
		}
		FREE(messagestatus);
	}
}

/**
 * Populate a Status message structure with the data it needs to be used.
 *
 * @param messagestatus The MessageStatus object to initalise
 * @param shared Object containing the data shared between all messages during
 *               the protocol run 
 * @param extraData string to be set as extra data
 */
void messagestatus_set(MessageStatus * messagestatus, Shared * shared, const char* extraData, char status) {
	messagestatus->shared = shared;
	buffer_clear(messagestatus->extraData);
	if (extraData) {
		buffer_append_string(messagestatus->extraData, extraData);
	}
	messagestatus->status = status;
}

/**
 * Serialize the Status data in JSON format.
 *
 * @param messagestatus The object for serialization
 * @param buffer Memory buffer to store the result in
 */
void messagestatus_serialize(MessageStatus * messagestatus, Buffer * buffer) {
	Json * json;
	Buffer * encrypted;
	Buffer * encoded;
	Buffer * iv;
	Buffer * toEncrypt;
	Buffer * vEncKey;

	json = json_new();

	// Encrypted data
	toEncrypt = buffer_new(1);

	// status
	buffer_append(toEncrypt, & messagestatus->status, 1);

	// extraData
	buffer_append_buffer_lengthprepend(toEncrypt, messagestatus->extraData);

	iv = buffer_new(CRYPTOSUPPORT_IV_SIZE);
	cryptosupport_generate_iv(iv);

	encrypted = buffer_new(0);
	vEncKey = shared_get_verifier_enc_key(messagestatus->shared);
	cryptosupport_encrypt(vEncKey, iv, toEncrypt, encrypted);

	json_add_decimal(json, "sessionId", messagestatus->sessionId);

	encoded = buffer_new(0);
	base64_encode_buffer(encrypted, encoded);
	json_add_buffer(json, "encryptedData", encoded);

	buffer_clear(encoded);
	base64_encode_buffer(iv, encoded);
	json_add_buffer(json, "iv", encoded);

	json_serialize_buffer(json, buffer);
	json_delete(json);

	buffer_delete(toEncrypt);
	buffer_delete(encrypted);
	buffer_delete(encoded);
	buffer_delete(iv);
}

/**
 * Set the session ID to return to Pico.
 *
 * @param messagestatus The object to set the session ID for
 * @param The integer to set the session ID to
 */
void messagestatus_set_session_id(MessageStatus * messagestatus, int sessionId) {
	messagestatus->sessionId = sessionId;
}


