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
 * The continuous class provides support for continuous authentication.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "pico/debug.h"
#include "pico/buffer.h"
#include "pico/keypair.h"
#include "pico/keyauth.h"
#include "pico/sigmaverifier.h"
#include "pico/messagepicoreauth.h"
#include "pico/messageservicereauth.h"
#include "pico/messagestatus.h"
#include "pico/sequencenumber.h"
#include "pico/continuous.h"

// Defines

// Structure definitions

struct _Continuous {
	RVPChannel * channel;
	Buffer * sharedKey;
};

// Function prototypes

// Function definitions

/**
 * Create a new instance of the class.
 *
 * @return The newly created object.
 */
Continuous * continuous_new() {
	Continuous * continuous;

	continuous = calloc(sizeof(Continuous), 1);
	continuous->channel = NULL;
	continuous->sharedKey = buffer_new(0);
	
	return continuous;
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param continuous The object to free.
 */
void continuous_delete(Continuous * continuous) {
	if (continuous) {
		if (continuous->sharedKey) {
			buffer_delete(continuous->sharedKey);
		}

		free(continuous);
	}
}

/**
 * Set the shared key to be used by the continuous authentication process
 * (the continuous_continue() part). Usually this would be set automatically
 * during the continuous_start() stage, but sometimes a service may want to
 * perform it's own initial authentication step, rather than using the standard
 * version in continuous_start(). In this case, it should set the key itself
 * using this function.
 * This will make a copy of the shared key, so it's safe to destroy the
 * original buffer independent of the continuous structure.
 *
 * @param continuous The object to set the shared key for.
 * @param sharedKey Buffer containing the key data to copy into the 
 *        continuous structure.
 */
void continuous_set_shared_key(Continuous * continuous, Buffer * sharedKey) {
	if (continuous) {
		buffer_clear(continuous->sharedKey);
		buffer_append_buffer(continuous->sharedKey, sharedKey);
	}
}

/**
 * Get the shared key being used by the continuous authentication process
 * (the continuous_continue() part).
 * This will make a copy of the shared key, so it's safe to destroy the
 * output buffer independent of the continuous structure.
 *
 * @param continuous The object to get the shared key from.
 * @param sharedKey Buffer to copy the key data into from the 
 *        continuous structure.
 */
void continuous_get_shared_key(Continuous * continuous, Buffer * sharedKey) {
	if (continuous && sharedKey) {
		buffer_clear(sharedKey);
		buffer_append_buffer(sharedKey, continuous->sharedKey);
	}
}

/**
 * Set the channel for the continuous prover.
 * The channel won't be destroyed when the continuous object is destroyed. 
 * Its lifecycle must be managed independent of the continuous lifecycle.
 *
 * @param continuous The object to set the channel for.
 * @param channel The channel to set it to.
 */
void continuous_set_channel(Continuous * continuous, RVPChannel * channel) {
	continuous->channel = channel;
}

/**
 * Get the channel of the continuous prover.
 * The channel won't be destroyed when the continuous object is destroyed. 
 * Its lifecycle must be managed independent of the continuous lifecycle.
 *
 * @return continuous The object to get the channel from.
 */
RVPChannel * continuous_get_channel(Continuous * continuous) {
	return continuous->channel;
}

/**
 * Server code for performing the start of a Pico continuous authorisation 
 * protocol.
 *
 * @param shared Structure for managing shared secrets.
 * @param authorizedUsers List of users authorized to complete successfully.
 * @param returnedStoredData If not NULL, is appended with a string
 *                          containing data returned from Pico.
 *                          This data was sent when paired.
 * @param qrCallback Function to be called in with the qrcode text 
 * @param data Pointer to be sent to qrCallback 
 * @param localSymmetricKey User's locally stored symmetric key
 * @return true if authentication completed successfully. false o/w.
 */
bool continuous_start(Continuous * continuous, Shared * shared, Users * authorizedUsers, Buffer * returnedStoredData, QrCallbackFunction qrCallback, void * data, Buffer * localSymmetricKey) {
	RVPChannel * channel;
	KeyPair * serviceIdentityKey;
	bool result;
	size_t size;
	char * qrtext;
	Buffer * buffer;
	KeyAuth * keyauth;
	Buffer * sharedKey;

	// Request a new rendezvous channel
	channel = continuous->channel;
	buffer = buffer_new(0);

	channel_get_url(channel, buffer);
	result = (buffer_get_pos(buffer) > 0);
	if (result) {
		serviceIdentityKey = shared_get_service_identity_key(shared);

		// SEND
		// Generate a visual QR code for Key Pairing
		// {"sn":"NAME","spk":"PUB-KEY","sig":"B64-SIG","ed":"","sa":"URL","td":{},"t":"KP"}
		keyauth = keyauth_new();
		keyauth_set(keyauth, buffer, "", NULL, serviceIdentityKey);

		size = keyauth_serialize_size(keyauth);
		qrtext = MALLOC(size + 1);
		keyauth_serialize(keyauth, qrtext, size + 1);
		keyauth_delete(keyauth);

		result = qrCallback(qrtext, data);
		FREE(qrtext);
	}
	
	if (result) {
		channel_open(channel);
		result = sigmaverifier_session(shared, channel, authorizedUsers, NULL, returnedStoredData, localSymmetricKey, true, 0);
		channel_close(channel);
	}

	if (result) {
		sharedKey = shared_get_shared_key(shared);
		buffer_clear(continuous->sharedKey);
		buffer_append_buffer(continuous->sharedKey, sharedKey);
	}

	buffer_delete(buffer);

	return result;
}

/**
 * Initialise the continuous part of the continuous authentication process.
 * This should be called after continuous_start(), but before the first
 * call to continuous_continue().
 *
 * @param continuous The continuous prover object.
 * @return true if everything was successfully set up.
 */
bool continuous_cycle_start(Continuous * continuous) {
	bool result;

	result = channel_open(continuous->channel);

	return result;
}

/**
 * Server code for performing the cyclic part of the continuous authentication
 * protocol. This should be called repeatedly until authentication fails. In
 * case authentication fails, this means either the connection was closed
 * (e.g. the Pico went out of range), or the Pico was unable to authenticate
 * successfully (e.g. someone tried unsuccessfully to imitate the Pico).
 *
 * @param continuous The continuous prover object.
 * @param returnedStoredData If not NULL, is appended with a string
 *        containing data returned from Pico.
 * @return true if authentication completed successfully. false o/w.
 */
bool continuous_continue(Continuous * continuous, Buffer * returnedStoredData) {
	bool result;
	Buffer * localSymmetricKey;
	Buffer * buffer;
	MessagePicoReAuth * messagepicoreauth;
	MessageServiceReAuth * messageservicereauth;
	SequenceNumber * sequenceNum;
	REAUTHSTATE receivedState = REAUTHSTATE_INVALID;

	buffer = buffer_new(0);
	localSymmetricKey = buffer_new(0);
	sequenceNum = sequencenumber_new();

	// RECEIVE
	// Read PicoReAuthMessage from client
	// {"encryptedData":"B64-ENC","iv":"B64","sessionId":0}
	buffer_clear(buffer);
	result = channel_read(continuous->channel, buffer);

	if (result) {
		// Deserialize the message
		messagepicoreauth = messagepicoreauth_new();
		messagepicoreauth_set(messagepicoreauth, continuous->sharedKey);
		result = messagepicoreauth_deserialize(messagepicoreauth, buffer);
		messagepicoreauth_get_sequencenum(messagepicoreauth, sequenceNum);
		receivedState = messagepicoreauth_get_reauthstate(messagepicoreauth);
		messagepicoreauth_delete(messagepicoreauth);
	}

	if (result) {
		// SEND
		// Reply with ServiceReAuthMessage
		// {"encryptedData":"B64-ENC","iv":"B64","sessionId":0}
		sequencenumber_increment(sequenceNum);
		messageservicereauth = messageservicereauth_new();
		messageservicereauth_set(messageservicereauth, continuous->sharedKey, CONTINUOUS_TIMEOUT_ACTIVE, receivedState, sequenceNum);
		buffer_clear(buffer);
		messageservicereauth_serialize(messageservicereauth, buffer);
		result = channel_write_buffer(continuous->channel, buffer);
		messageservicereauth_delete(messageservicereauth);
	}

	sequencenumber_delete(sequenceNum);
	buffer_delete(buffer);
	buffer_delete(localSymmetricKey);

	return result && receivedState == REAUTHSTATE_CONTINUE;
}

/**
 * Tidy up at the end of the continuous authentication process. This should
 * be called after the lasts call to continuous_continue() and before the
 * continuous structure is deleted.
 *
 * @param continuous The continuous prover object.
 * @return true if everything was successfully titied up, false o/w.
 */
bool continuous_finish(Continuous * continuous) {
	bool result;

	result = true;
	result = channel_close(continuous->channel);

	return result;
}




