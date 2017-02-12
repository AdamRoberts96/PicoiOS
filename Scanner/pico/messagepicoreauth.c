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
 * The MessagePicoReAuth class allows an incoming PicoAuth message arriving at
 * the server from the Pico to be deserialized, decrypted and checked, and
 * for the relevant parts to be extracted for use in the protocol.
 * 
 * This represents a message sent as part of the continuous authentication
 * process.
 * QR-code (KeyAuth or KeyPair); Start; ServiceAuth; PicoAuth; Status;
 * Pico ReAuth; Service ReAuth (repeatedly).
 *
 * The structure of the message is as follows
 * {"encryptedData":"B64-ENC","iv":"B64","sessionId":0}
 * Where encryptedData contains the following sections
 * char reauthState | length | char sequenceNumber[length] | length | char extraData[length]
 *
 */
#include <stdio.h>
#include <string.h>
#include <openssl/ec.h>
#include "pico/debug.h"
#include "pico/keypair.h"
#include "pico/base64.h"
#include "pico/json.h"
#include "pico/buffer.h"
#include "pico/nonce.h"
#include "pico/cryptosupport.h"
#include "pico/log.h"
#include "pico/sequencenumber.h"
#include "pico/messagepicoreauth.h"

// Defines

// Structure definitions

/**
 * Structure containing the private fields of the class.
 */
struct _MessagePicoReAuth {
	Buffer * sharedKey;
	int sessionId;
	Buffer * iv;
	Buffer * encryptedData;
	
	SequenceNumber * sequenceNum;
	REAUTHSTATE reauthState;
	Buffer * extraData;
};

// Function prototypes

// Function definitions

/**
 * Create a new instance of the class.
 *
 * @return The newly created object.
 */
MessagePicoReAuth * messagepicoreauth_new() {
	MessagePicoReAuth * messagepicoreauth;

	messagepicoreauth = CALLOC(sizeof(MessagePicoReAuth), 1);
	messagepicoreauth->sharedKey = buffer_new(0);
	messagepicoreauth->iv = buffer_new(CRYPTOSUPPORT_IV_SIZE);
	messagepicoreauth->encryptedData = buffer_new(0);

	messagepicoreauth->sequenceNum = sequencenumber_new();
	messagepicoreauth->reauthState = REAUTHSTATE_INVALID;
	messagepicoreauth->extraData = buffer_new(0);
	
	return messagepicoreauth;
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param messagepicoreauth The object to free.
 */
void messagepicoreauth_delete(MessagePicoReAuth * messagepicoreauth) {
	if (messagepicoreauth) {
		if (messagepicoreauth->sharedKey) {
			buffer_delete(messagepicoreauth->sharedKey);
		}
		if (messagepicoreauth->iv) {
			buffer_delete(messagepicoreauth->iv);
		}
		if (messagepicoreauth->encryptedData) {
			buffer_delete(messagepicoreauth->encryptedData);
		}
		if (messagepicoreauth->extraData) {
			buffer_delete(messagepicoreauth->extraData);
		}
		if (messagepicoreauth->sequenceNum) {
			sequencenumber_delete(messagepicoreauth->sequenceNum);
		}

		FREE(messagepicoreauth);
	}
}

/**
 * Populate the MessagePicoReAuth object with the data needed for it to function.
 *
 * @param messagepicoreauth The MessagePicoReAuth object to populate
 * @param shared An object containing the shared data needed for the protocol
 */
void messagepicoreauth_set(MessagePicoReAuth * messagepicoreauth, Buffer * sharedKey) {
	buffer_clear(messagepicoreauth->sharedKey);
	buffer_append_buffer(messagepicoreauth->sharedKey, sharedKey);
}

/**
 * Return the extra data sent by the Pico as part of the MessagePicoReAuth.
 *
 * @param messagepicoreauth The MessagePicoReAuth object to get the data from
 * @return Buffer object containing the extra data. This should not be freed.
 */
Buffer * messagepicoreauth_get_extra_data(MessagePicoReAuth * messagepicoreauth) {
    return messagepicoreauth->extraData;
}

/**
 * Return the sequence number sent by the Pico as part of the MessagePicoReAuth.
 *
 * @param messagepicoreauth The MessagePicoReAuth object to get the sequence
 *        number from
 * @param sequenceNum Allocated object to store the sequence number in.
 */
void messagepicoreauth_get_sequencenum(MessagePicoReAuth * messagepicoreauth, SequenceNumber * sequenceNum) {
	if (sequenceNum) {
		sequencenumber_copy(sequenceNum, messagepicoreauth->sequenceNum);
	}
}

/**
* Return the reauth state sent by the Pico as part of the MessagePicoReAuth.
*
* @param messagepicoreauth The MessagePicoReAuth object to get the state
* @return the reauth state
*/
REAUTHSTATE messagepicoreauth_get_reauthstate(MessagePicoReAuth * messagepicoreauth) {
	return messagepicoreauth->reauthState;
}

/**
 * Deserialize a PicoAuth JSON string (likely received by the protocol from
 * a Pico) and store the data collected from it into the messagepicoreauth
 * object.
 *
 * The function will return false if the deserialization fails. Reasons
 * for failure include:
 *  - A malformed JSON string
 *  - Failure for the encrypted data section to decrypt properly (the data is 
 *    encrypted using GCM, which includes a MAC and so incorrect decryption 
 *    will be identified)
 *  - An incorrect MAC
 *  - An invalid signature. 
 *
 * @param messagepicoreauth The MessagePicoReAuth object to store the deserialized
 *                        data into
 * @param buffer The JSON string to deserialize
 * @return true if the message was deserialized correctly, false o/w.
 */
bool messagepicoreauth_deserialize(MessagePicoReAuth * messagepicoreauth, Buffer * buffer) {
	Json * json;
	char const * value;
	Buffer * cleartext;
	size_t start;
	size_t next;
	bool result;

	Buffer * bytes;
	size_t length;

	json = json_new();
	result = json_deserialize_buffer(json, buffer);

	if (result) {
		if (json_get_type(json, "sessionId") == JSONTYPE_DECIMAL) {
			messagepicoreauth->sessionId = json_get_decimal(json, "sessionId");
		}
		else {
			LOG(LOG_ERR, "Missing sessionId\n");
			result = false;
		}
	}

	if (result) {
		value = json_get_string(json, "iv");
		if (value) {
			base64_decode_string(value, messagepicoreauth->iv);
		}
		else {
			LOG(LOG_ERR, "Missing iv\n");
			result = false;
		}
	}

	if (result) {
		value = json_get_string(json, "encryptedData");
		if (value) {
			base64_decode_string(value, messagepicoreauth->encryptedData);
		}
		else {
			LOG(LOG_ERR, "Missing encryptedData\n");
			result = false;
		}
	}

	cleartext = buffer_new(0);
	if (result) {
		//sharedKey = shared_get_shared_key(messagepicoreauth->shared);
		result = cryptosupport_decrypt(messagepicoreauth->sharedKey, messagepicoreauth->iv, messagepicoreauth->encryptedData, cleartext);
	}

	bytes = buffer_new(0);

	if (result) {
		length = buffer_get_pos(cleartext);
		start = 0;
		next = start + sizeof(char);
		if ((next > start) && (next < length)) {
			messagepicoreauth->reauthState = buffer_get_buffer(cleartext)[0];
			start = next;
		}
		else {
			LOG(LOG_ERR, "Error deserializing decrypted reauth state data\n");
			result = false;
		}

		buffer_clear(bytes);
		next = buffer_copy_lengthprepend(cleartext, start, bytes);
		length = buffer_get_pos(bytes);
		if ((next > start) && (length == SEQUENCE_NUMBER_LENGTH)) {
			sequencenumber_transfer_from_buffer(messagepicoreauth->sequenceNum, bytes);
			start = next;
		}
		else {
			LOG(LOG_ERR, "Error deserializing decrypted length-prepended challenge sequence number data\n");
			result = false;
		}

		next = buffer_copy_lengthprepend(cleartext, start, messagepicoreauth->extraData);
		if (next > start) {
			start = next;
		}
		else {
			LOG(LOG_ERR, "Error deserializing decrypted length-prepended extraData data\n");
			result = false;
		}
	}

	buffer_delete(bytes);
	buffer_delete(cleartext);

	json_delete(json);

	return result;
}


