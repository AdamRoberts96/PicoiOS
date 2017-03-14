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
 * The MessagePicoAuth class allows an incoming PicoAuth message arriving at
 * the server from the Pico to be deserialized, decrypted and checked, and
 * for the relevant parts to be extracted for use in the protocol.
 * 
 * This represents the first message forming the second round trip of the
 * Sigma-I protocol:
 * QR-code (KeyAuth or KeyPair); Start; ServiceAuth; PicoAuth; Status.
 *
 * The structure of the message is as follows
 * {"encryptedData":"B64-ENC","iv":"B64","sessionId":0}
 * length | char picoPublicKeyBytes[length] | length | char signature[length] |
 * length | char mac[length] | length | char extraData[length]
 *
 */
#include <stdio.h>
#include <openssl/ec.h>
#include "pico/debug.h"
#include "pico/keypair.h"
#include "pico/base64.h"
#include "pico/json.h"
#include "pico/buffer.h"
#include "pico/nonce.h"
#include "pico/cryptosupport.h"
#include "pico/log.h"
#include "pico/messagepicoauth.h"
#include <string.h>

// Defines

// Structure definitions

/**
 * Structure containing the private fields of the class.
 */
struct _MessagePicoAuth {
	Shared * shared;
	int sessionId;
	Buffer * iv;
	Buffer * encryptedData;
	
	Buffer * signature;
	Buffer * mac;
	Buffer * extraData;
};

// Function prototypes

void messagepicoauth_get_bytes_to_sign(MessagePicoAuth * messagepicoauth, Buffer * buffer);
bool messagepicoauth_verify_signature(MessagePicoAuth * messagepicoauth, Buffer * sigin);

// Function definitions

/**
 * Create a new instance of the class.
 *
 * @return The newly created object.
 */
MessagePicoAuth * messagepicoauth_new() {
	MessagePicoAuth * messagepicoauth;

	messagepicoauth = CALLOC(sizeof(MessagePicoAuth), 1);
	messagepicoauth->iv = buffer_new(CRYPTOSUPPORT_IV_SIZE);
	messagepicoauth->encryptedData = buffer_new(0);

	messagepicoauth->signature = buffer_new(0);
	messagepicoauth->mac = buffer_new(0);
	messagepicoauth->extraData = buffer_new(0);
	
	return messagepicoauth;
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param messagepicoauth The object to free.
 */
void messagepicoauth_delete(MessagePicoAuth * messagepicoauth) {
	if (messagepicoauth) {
		if (messagepicoauth->iv) {
			buffer_delete(messagepicoauth->iv);
		}
		if (messagepicoauth->encryptedData) {
			buffer_delete(messagepicoauth->encryptedData);
		}
		if (messagepicoauth->signature) {
			buffer_delete(messagepicoauth->signature);
		}
		if (messagepicoauth->mac) {
			buffer_delete(messagepicoauth->mac);
		}
		if (messagepicoauth->extraData) {
			buffer_delete(messagepicoauth->extraData);
		}

		FREE(messagepicoauth);
	}
}

/**
 * Populate the MessagePicoAuth object with the data needed for it to function.
 *
 * @param messagepicoauth The MessagePicoAuth object to populate
 * @param shared An object containing the shared data needed for the protocol
 */
void messagepicoauth_set(MessagePicoAuth * messagepicoauth, Shared * shared) {
	messagepicoauth->shared = shared;
}


/**
 * Return the extra data sent by the Pico as part of the MessagePicoAuth.
 *
 * @param messagepicoauth The MessagePicoAuth object to get the data from
 * @return Buffer object containing the extra data. This should not be freed.
 */
Buffer * messagepicoauth_get_extra_data(MessagePicoAuth * messagepicoauth) {
    return messagepicoauth->extraData;
}

/**
 * Deserialize a PicoAuth JSON string (likely received by the protocol from
 * a Pico) and store the data collected from it into the messagepicoauth
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
 * @param messagepicoauth The MessagePicoAuth object to store the deserialized
 *                        data into
 * @param buffer The JSON string to deserialize
 * @return true if the message was deserialized correctly, false o/w.
 */
bool messagepicoauth_deserialize(MessagePicoAuth * messagepicoauth, Buffer * buffer) {
	Json * json;
	char const * value;
	Buffer * cleartext;
	size_t start;
	size_t next;
	Buffer * mac;
	bool result;
	Buffer * picoPublicKeyBytes;
	EC_KEY * picoIdentityPublicKey;
	Buffer * pEncKey;
	Buffer * pMacKey;
	Buffer * picoIdentityPubEncoded;

	json = json_new();
	result = json_deserialize_buffer(json, buffer);
	picoPublicKeyBytes = buffer_new(0);

	if (result) {
		if (json_get_type(json, "sessionId") == JSONTYPE_DECIMAL) {
			messagepicoauth->sessionId = json_get_decimal(json, "sessionId");
		}
		else {
			LOG(LOG_ERR, "Missing sessionId\n");
			result = false;
		}
	}

	if (result) {
		value = json_get_string(json, "iv");
		if (value) {
			base64_decode_string(value, messagepicoauth->iv);
		}
		else {
			LOG(LOG_ERR, "Missing iv\n");
			result = false;
		}
	}

	if (result) {
		value = json_get_string(json, "encryptedData");
		if (value) {
			base64_decode_string(value, messagepicoauth->encryptedData);
		}
		else {
			LOG(LOG_ERR, "Missing encryptedData\n");
			result = false;
		}
	}

	cleartext = buffer_new(0);
	if (result) {
		pEncKey = shared_get_prover_enc_key(messagepicoauth->shared);
		result = cryptosupport_decrypt(pEncKey, messagepicoauth->iv, messagepicoauth->encryptedData, cleartext);
	}

	if (result) {
		start = 0;
		next = buffer_copy_lengthprepend(cleartext, start, picoPublicKeyBytes);
		if (next > start) {
			picoIdentityPublicKey = cryptosupport_read_buffer_public_key(picoPublicKeyBytes);
			shared_set_pico_identity_public_key(messagepicoauth->shared, picoIdentityPublicKey);
			start = next;
		}
		else {
			LOG(LOG_ERR, "Error deserializing decrypted length-prepended picoPublicKeyBytes data\n");
			result = false;
		}

		next = buffer_copy_lengthprepend(cleartext, start, messagepicoauth->signature);
		if (next > start) {
			start = next;
		}
		else {
			LOG(LOG_ERR, "Error deserializing decrypted length-prepended signature data\n");
			result = false;
		}

		next = buffer_copy_lengthprepend(cleartext, start, messagepicoauth->mac);
		if (next > start) {
			start = next;
		}
		else {
			LOG(LOG_ERR, "Error deserializing decrypted length-prepended mac data\n");
			result = false;
		}

		next = buffer_copy_lengthprepend(cleartext, start, messagepicoauth->extraData);
		if (next > start) {
			start = next;
		}
		else {
			LOG(LOG_ERR, "Error deserializing decrypted length-prepended extraData data\n");
			result = false;
		}
	}

	buffer_delete(cleartext);

	if (result) {
		// Check the signature
		result = messagepicoauth_verify_signature(messagepicoauth, messagepicoauth->signature);
		if (!result) {
			LOG(LOG_ERR, "Invalid signature.\n");
		}
	}

	if (result) {
		// Check the mac
		mac = buffer_new(0);
		pMacKey = shared_get_prover_mac_key(messagepicoauth->shared);

		picoIdentityPubEncoded = buffer_new(0);
		picoIdentityPublicKey = shared_get_pico_identity_public_key(messagepicoauth->shared);
		cryptosupport_getpublicder(picoIdentityPublicKey, picoIdentityPubEncoded);
		cryptosupport_generate_mac(pMacKey, picoIdentityPubEncoded, mac);
		buffer_delete(picoIdentityPubEncoded);

		result = buffer_equals(mac, messagepicoauth->mac);
		if (!result) {
			LOG(LOG_ERR, "HMAC failure.\n");
		}
		buffer_delete(mac);
	}

	buffer_delete(picoPublicKeyBytes);
	json_delete(json);

	return result;
}

/**
 * Internal function used to pull together the data that the signature covers.
 *
 * @param messagepicoauth The MessagePicoAuth object to get the data from.
 * @param buffer A buffer for the output to be returned in
 */
void messagepicoauth_get_bytes_to_sign(MessagePicoAuth * messagepicoauth, Buffer * buffer) {
	unsigned char const * string;
	size_t length;
	char writeInt[4];
	Buffer * toAppend;
	Nonce * serviceNonce;
	EC_KEY * picoEphemeralPublicKey;

	buffer_clear(buffer);

	serviceNonce = shared_get_service_nonce(messagepicoauth->shared);
	string = nonce_get_buffer(serviceNonce);
	length = nonce_get_length(serviceNonce);
	buffer_append(buffer, string, length);

	writeInt[0] = ((char *)(& messagepicoauth->sessionId))[3];
	writeInt[1] = ((char *)(& messagepicoauth->sessionId))[2];
	writeInt[2] = ((char *)(& messagepicoauth->sessionId))[1];
	writeInt[3] = ((char *)(& messagepicoauth->sessionId))[0];
	buffer_append(buffer, writeInt, 4);

	toAppend = buffer_new(0);
	//keypair_getpublicder(messagepicoauth->picoEphemeralKey, toAppend);
	picoEphemeralPublicKey = shared_get_pico_ephemeral_public_key(messagepicoauth->shared);
	cryptosupport_getpublicder(picoEphemeralPublicKey, toAppend);

	buffer_append_buffer(buffer, toAppend);
	buffer_delete(toAppend);
}

/**
 * Verify the signature included in a PicoAuth message received from a Pico.
 * This will verify the signature using the Pico's long-term identity key
 * and the data collected using the messagepicoauth_get_bytes_to_sign()
 * function.
 *
 * @param messagepicoauth The MessagePicoAuth object to test the signature of
 * @param sigin The signature to check
 * @return true if the signature was valid, false if it was invalid, or 
 *         an error occurred during the validation process
 */
bool messagepicoauth_verify_signature(MessagePicoAuth * messagepicoauth, Buffer * sigin) {
	Buffer * bufferin;
	bool result;
	EC_KEY * picoIdentityPublicKey;
	
	bufferin = buffer_new(0);

	messagepicoauth_get_bytes_to_sign(messagepicoauth, bufferin);

	picoIdentityPublicKey = shared_get_pico_identity_public_key(messagepicoauth->shared);
	result = cryptosupport_verify_signature(picoIdentityPublicKey, bufferin, sigin);

	buffer_delete(bufferin);

	return result;
}

void messagepicoauth_generate_signature(MessagePicoAuth * messagepicoauth, Buffer * bufferout) {
    Buffer * bufferin;
    KeyPair * picoIdentityKey;
    
    bufferin = buffer_new(0);
    
    messagepicoauth_get_bytes_to_sign(messagepicoauth, bufferin);
    
    picoIdentityKey = shared_get_pico_identity_key(messagepicoauth->shared);
    keypair_sign_data(picoIdentityKey, bufferin, bufferout);
    
    buffer_delete(bufferin);
}

void messagepicoauth_serialize(MessagePicoAuth * messagepicoauth, Buffer * buffer) {
    Json * json;
    Buffer * encrypted;
    Buffer * iv;
    Buffer * encoded;
    Buffer * toEncrypt;
    Buffer * pEncKey;
    Buffer * pMacKey;
    Buffer * picoIdPubEncoded;
    KeyPair * picoIdentityKey;

    json = json_new();
    encoded = buffer_new(0);
    json_add_decimal(json, "sessionId", messagepicoauth->sessionId);
    toEncrypt = buffer_new(0);
    buffer_clear(encoded);
    
    picoIdentityKey = shared_get_pico_identity_key(messagepicoauth->shared);
    keypair_getpublicder(picoIdentityKey, encoded);
    buffer_append_buffer_lengthprepend(toEncrypt, encoded);
    buffer_clear(encoded);
    
    messagepicoauth_generate_signature(messagepicoauth, encoded);
    buffer_append_buffer_lengthprepend(toEncrypt, encoded);
    buffer_clear(encoded);
    
    picoIdPubEncoded = buffer_new(0);
    keypair_getpublicder(picoIdentityKey, picoIdPubEncoded);
    pMacKey = shared_get_prover_mac_key(messagepicoauth->shared);
    cryptosupport_generate_mac(pMacKey, picoIdPubEncoded, encoded);
    buffer_delete(picoIdPubEncoded);
    buffer_append_buffer_lengthprepend(toEncrypt, encoded);
    buffer_clear(encoded);
    
    const char * extraData = shared_get_extra_data(messagepicoauth->shared);
    
    buffer_append_lengthprepend(toEncrypt, extraData, strlen(extraData));
    
    //buffer_append_buffer_lengthprepend(toEncrypt, encoded); <- Inserts empty extraData field
    iv = buffer_new(CRYPTOSUPPORT_IV_SIZE);
    cryptosupport_generate_iv(iv);
    encrypted = buffer_new(0);
    pEncKey = shared_get_prover_enc_key(messagepicoauth->shared);
    cryptosupport_encrypt(pEncKey, iv, toEncrypt, encrypted);
    buffer_clear(encoded);
    base64_encode_buffer(encrypted, encoded);
    json_add_buffer(json, "encryptedData", encoded);
    buffer_clear(encoded);
    base64_encode_buffer(iv, encoded);
    json_add_buffer(json, "iv", encoded);
    buffer_delete(iv);
    buffer_delete(encrypted);
    buffer_delete(toEncrypt);
    buffer_delete(encoded);
    json_serialize_buffer(json, buffer);
    json_delete(json);
}



