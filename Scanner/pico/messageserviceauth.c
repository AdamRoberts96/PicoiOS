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
 * The MessageServiceAuth class allows a ServiceAuth message to ge generated by
 * the server to be sent to the Pico.
 * 
 * This represents the second message forming the first round trip of the
 * Sigma-I protocol:
 * QR-code (KeyAuth or KeyPair); Start; ServiceAuth; PicoAuth; Status.
 *
 * The structure of the message is as follows
 * {"serviceEphemPublicKey":"B64-PUB-KEY","serviceNonce":"B64-NONCE","sessionId":0,"encryptedData":"B64-ENC","iv":"B64"}
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "pico/debug.h"
#include "pico/base64.h"
#include "pico/keypair.h"
#include "pico/sigmakeyderiv.h"
#include "pico/keyagreement.h"
#include "pico/json.h"
#include "pico/buffer.h"
#include "pico/cryptosupport.h"
#include "pico/log.h"
#include "pico/messageserviceauth.h"

// Defines

// Structure definitions

/**
 * Structure containing the private fields of the class.
 */
struct _MessageServiceAuth {
	Shared * shared;
	int sessionId;
    Buffer * iv;
    Buffer * encryptedData;
    
    Buffer * signature;
    Buffer * mac;
    Buffer * extraData;
};

// Function prototypes

void messageserviceauth_get_bytes_to_sign(MessageServiceAuth * messageserviceauth, Buffer * buffer);
void messageserviceauth_generate_signature(MessageServiceAuth * messageserviceauth, Buffer * bufferout);

// Function definitions

/**
 * Create a new instance of the class.
 *
 * @return The newly created object.
 */
MessageServiceAuth * messageserviceauth_new() {
	MessageServiceAuth * messageserviceauth;

	messageserviceauth = CALLOC(sizeof(MessageServiceAuth), 1);
    messageserviceauth->iv = buffer_new(CRYPTOSUPPORT_IV_SIZE);
    messageserviceauth->encryptedData = buffer_new(0);
    
    messageserviceauth->signature = buffer_new(0);
    messageserviceauth->mac = buffer_new(0);
    messageserviceauth->extraData = buffer_new(0);
	
	return messageserviceauth;
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param messageserviceauth The object to free.
 */
void messageserviceauth_delete(MessageServiceAuth * messageserviceauth) {
	if (messageserviceauth) {
		FREE(messageserviceauth);
	}
}

/**
 * Populate the messageserviceauth object with data so it's ready for use.
 *
 * @param messageserviceauth The MessageServiceAuth object to set the data for
 * @param shared Object containing data shared across messages
 * @param sessionId The session ID. Currently this can be set to anything.
 */
void messageserviceauth_set(MessageServiceAuth * messageserviceauth, Shared * shared, int sessionId) {
	messageserviceauth->shared = shared;
	messageserviceauth->sessionId = sessionId;
}

/**
 * Internal function used to pull together the data that the signature covers.
 *
 * @param messageserviceauth The MessageServiceAuth object to get the data from.
 * @param buffer A buffer for the output to be returned in
 */
void messageserviceauth_get_bytes_to_sign(MessageServiceAuth * messageserviceauth, Buffer * buffer) {
	unsigned char const * string;
	size_t length;
	char writeInt[4];
	Buffer * toAppend;
	Nonce * picoNonce;
	EC_KEY * serviceEphemeralPublicKey;

	buffer_clear(buffer);


	picoNonce = shared_get_pico_nonce(messageserviceauth->shared);
	string = nonce_get_buffer(picoNonce);
	length = nonce_get_length(picoNonce);
	buffer_append(buffer, string, length);

	writeInt[0] = ((char *)(& messageserviceauth->sessionId))[3];
	writeInt[1] = ((char *)(& messageserviceauth->sessionId))[2];
	writeInt[2] = ((char *)(& messageserviceauth->sessionId))[1];
	writeInt[3] = ((char *)(& messageserviceauth->sessionId))[0];
	buffer_append(buffer, writeInt, 4);

	toAppend = buffer_new(0);
    serviceEphemeralPublicKey =  shared_get_service_ephemeral_public_key(messageserviceauth->shared);
	cryptosupport_getpublicder(serviceEphemeralPublicKey, toAppend);

	buffer_append_buffer(buffer, toAppend);
	buffer_delete(toAppend);
}

/**
 * Generate the signature included in a ServiceAuth message to be sent to the
 * Pico. This will generate the signature using the Service's long-term 
 * identity key and the data collected using the 
 * messageserviceauth_get_bytes_to_sign() function.
 *
 * @param messageserviceauth The MessageServiceAuth object to add the signature
 *                           to
 * @param buffer A buffer object to store the result in
 */
void messageserviceauth_generate_signature(MessageServiceAuth * messageserviceauth, Buffer * bufferout) {
	Buffer * bufferin;
	KeyPair * serviceIdentityKey;
	
	bufferin = buffer_new(0);

	messageserviceauth_get_bytes_to_sign(messageserviceauth, bufferin);


	serviceIdentityKey = shared_get_service_identity_key(messageserviceauth->shared);
	keypair_sign_data(serviceIdentityKey, bufferin, bufferout);

	buffer_delete(bufferin);
}

bool messageserviceauth_verify_signature(MessageServiceAuth * messageserviceauth, Buffer * sigin) {
    Buffer * bufferin;
    bool result;
    KeyPair * serviceIdentityKey;
    EC_KEY * serviceIdentityPublicKey;
    
    bufferin = buffer_new(0);
    
    messageserviceauth_get_bytes_to_sign(messageserviceauth, bufferin);
    
    serviceIdentityPublicKey = shared_get_service_identity_public_key(messageserviceauth->shared);
    result = cryptosupport_verify_signature(serviceIdentityPublicKey, bufferin, sigin);
    //result = true;

    
    buffer_delete(bufferin);
    return result;
}

/**
 * Serialize the Service Auth data in JSON format.
 *
 * @param keyauth The object for serialization
 * @param buffer Memory buffer to store the result in
 */
void messageserviceauth_serialize(MessageServiceAuth * messageserviceauth, Buffer * buffer) {
	Json * json;
	Buffer * encrypted;
	Buffer * iv;
	Buffer * encoded;
	Buffer * toEncrypt;
	Buffer * vEncKey;
	Buffer * vMacKey;
	Buffer * serviceIdPubEncoded;
	Nonce * serviceNonce;
	KeyPair * serviceEphemeralKey;
	KeyPair * serviceIdentityKey;

	json = json_new();
	encoded = buffer_new(0);
	
	json_add_decimal(json, "sessionId", messageserviceauth->sessionId);

	// Generate shared secrets
	//pMacKey = buffer_new(32); // 256 bits
	//pEncKey = buffer_new(16); // 128 bits
	//vMacKey = buffer_new(32); // 256 bits
	//vEncKey = buffer_new(16); // 128 bits
	//sharedKey = buffer_new(16); // 128 bits

	shared_generate_shared_secrets(messageserviceauth->shared);

	//buffer_delete(pMacKey);
	//buffer_delete(pEncKey);
	//buffer_delete(sharedKey);

	// Encrypted data
	toEncrypt = buffer_new(0);

	// servicePublicKeyBytes
	buffer_clear(encoded);
	serviceIdentityKey = shared_get_service_identity_key(messageserviceauth->shared);
	keypair_getpublicder(serviceIdentityKey, encoded);
	buffer_append_buffer_lengthprepend(toEncrypt, encoded);

	// signature
	buffer_clear(encoded);
	messageserviceauth_generate_signature(messageserviceauth, encoded);
	buffer_append_buffer_lengthprepend(toEncrypt, encoded);

	// mac
	buffer_clear(encoded);
	serviceIdPubEncoded = buffer_new(0);
	keypair_getpublicder(serviceIdentityKey, serviceIdPubEncoded);

	vMacKey = shared_get_verifier_mac_key(messageserviceauth->shared);
	cryptosupport_generate_mac(vMacKey, serviceIdPubEncoded, encoded);
	buffer_delete(serviceIdPubEncoded);

	buffer_append_buffer_lengthprepend(toEncrypt, encoded);

	// Perform the encryption
	iv = buffer_new(CRYPTOSUPPORT_IV_SIZE);
	cryptosupport_generate_iv(iv);

	encrypted = buffer_new(0);
	
	vEncKey = shared_get_verifier_enc_key(messageserviceauth->shared);	
	cryptosupport_encrypt(vEncKey, iv, toEncrypt, encrypted);

	buffer_clear(encoded);
	base64_encode_buffer(encrypted, encoded);

	json_add_buffer(json, "encryptedData", encoded);

	buffer_clear(encoded);
	base64_encode_buffer(iv, encoded);
	
	json_add_buffer(json, "iv", encoded);
	buffer_delete(iv);

	buffer_clear(encoded);
	serviceEphemeralKey = shared_get_service_ephemeral_key(messageserviceauth->shared);
	keypair_getpublicpem(serviceEphemeralKey, encoded);
	json_add_buffer(json, "serviceEphemPublicKey", encoded);

	buffer_clear(encoded);
	serviceNonce = shared_get_service_nonce(messageserviceauth->shared);
	base64_encode_mem((char const *)nonce_get_buffer(serviceNonce), nonce_get_length(serviceNonce), encoded);
	json_add_buffer(json, "serviceNonce", encoded);

	buffer_delete(encrypted);
	buffer_delete(toEncrypt);
	buffer_delete(encoded);

	json_serialize_buffer(json, buffer);
	json_delete(json);
}

bool messageserviceauth_deserialize(MessageServiceAuth * messageserviceauth, Buffer * buffer) {
    Json * json;
    char const * value;
    Buffer * cleartext;
    size_t start;
    size_t next;
    Buffer * mac;
    bool result;
    Buffer * servicePublicKeyBytes;
    EC_KEY * serviceIdentityPublicKey;
    Buffer * vEncKey;
    Buffer * vMacKey;
    Buffer * serviceIdentityPubEncoded;
    Nonce * verifierNonce;
    Buffer * base64;
    
    json = json_new();
    result = json_deserialize_buffer(json, buffer);
    servicePublicKeyBytes = buffer_new(0);
    if (result) {
        if (json_get_type(json, "sessionId") == JSONTYPE_DECIMAL) {
            messageserviceauth->sessionId = json_get_decimal(json, "sessionId");
        }
        else {
            LOG(LOG_ERR, "Missing sessionId\n");
            result = false;
        }
    }
    if (result) {
        value = json_get_string(json, "iv");
        if (value) {
            base64_decode_string(value, messageserviceauth->iv);
        }
        else {
            LOG(LOG_ERR, "Missing iv\n");
            result = false;
        }
    }
    if (result) {
        value = json_get_string(json, "serviceEphemPublicKey");
        if (value) {
            shared_set_service_ephemeral_public_key(messageserviceauth->shared, cryptosupport_read_base64_string_public_key(value));
            
            printf("\n Service ephemeral key");
            printf(value);
            
        }
        else {
            LOG(LOG_ERR, "Missing serviceEphemPublicKey\n");
            result = false;
        }
    }
    if (result) {
        value = json_get_string(json, "encryptedData");
        if (value) {
            base64_decode_string(value, messageserviceauth->encryptedData);
        }
        else {
            LOG(LOG_ERR, "Missing encryptedData\n");
            result = false;
        }
    }
    if (result) {
        value = json_get_string(json, "serviceNonce");
        if (value) {
            verifierNonce = shared_get_service_nonce(messageserviceauth->shared);
            base64 = buffer_new(NONCE_DEFAULT_BYTES);
            base64_decode_string(value, base64);
            nonce_set_buffer(verifierNonce, base64);
            buffer_delete(base64);
        }
        else {
            LOG(LOG_ERR, "Missing serviceNonce\n");
            result = false;
        }
    }
    shared_generate_shared_secrets_pico(messageserviceauth->shared);
    cleartext = buffer_new(0);
    if (result) {
        vEncKey = shared_get_verifier_enc_key(messageserviceauth->shared);
        result = cryptosupport_decrypt(vEncKey, messageserviceauth->iv, messageserviceauth->encryptedData, cleartext);
    }
    if (result) {
        start = 0;
        next =  (cleartext, start, servicePublicKeyBytes);
        if (next > start) {
            serviceIdentityPublicKey = cryptosupport_read_buffer_public_key(servicePublicKeyBytes);
            shared_set_service_identity_public_key(messageserviceauth->shared, serviceIdentityPublicKey);
            start = next;
        }
        else {
            LOG(LOG_ERR, "Error deserializing decrypted length-prepended servicePublicKeyBytes data\n");
            result = false;
        }
        next = buffer_copy_lengthprepend(cleartext, start, messageserviceauth->signature);
        if (next > start) {
            start = next;
        }
        else {
            LOG(LOG_ERR, "Error deserializing decrypted length-prepended signature data\n");
            result = false;
        }
        next = buffer_copy_lengthprepend(cleartext, start, messageserviceauth->mac);
        if (next > start) {
            start = next;
        }
        else {
            LOG(LOG_ERR, "Error deserializing decrypted length-prepended mac data\n");
            result = false;
        }
    }
    buffer_delete(cleartext);
    if (result) {
        result = messageserviceauth_verify_signature(messageserviceauth, messageserviceauth->signature);
        if (!result) {
            LOG(LOG_ERR, "Invalid signature.\n");
        }
    }
    if (result) {
        mac = buffer_new(0);
        vMacKey = shared_get_verifier_mac_key(messageserviceauth->shared);
        serviceIdentityPubEncoded = buffer_new(0);
        serviceIdentityPublicKey = shared_get_service_identity_public_key(messageserviceauth->shared);
        cryptosupport_getpublicder(serviceIdentityPublicKey, serviceIdentityPubEncoded);
        cryptosupport_generate_mac(vMacKey, serviceIdentityPubEncoded, mac);
        buffer_delete(serviceIdentityPubEncoded);
        
        result = buffer_equals(mac, messageserviceauth->mac);
        if (!result) {
            LOG(LOG_ERR, "HMAC failure.\n");
        }
        buffer_delete(mac);
    }
    buffer_delete(servicePublicKeyBytes);
    json_delete(json);
    return result;
}


