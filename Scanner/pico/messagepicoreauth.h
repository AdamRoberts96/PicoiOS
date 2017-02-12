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
 * The MessagePicoReAuth class allows an incoming Re-Auth message arriving at
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

#ifndef __MESSAGEPICOREAUTH_H
#define __MESSAGEPICOREAUTH_H (1)

#include <openssl/ec.h>
#include "pico/shared.h"
#include "pico/nonce.h"
#include "pico/buffer.h"
#include "pico/sequencenumber.h"

// Defines

// Structure definitions

typedef enum _REAUTHSTATE {
	REAUTHSTATE_INVALID = -1,

	REAUTHSTATE_CONTINUE,
	REAUTHSTATE_PAUSE,
	REAUTHSTATE_STOP,
	REAUTHSTATE_ERROR,

	REAUTHSTATE_NUM
} REAUTHSTATE;

typedef struct _MessagePicoReAuth MessagePicoReAuth;

// Function prototypes

MessagePicoReAuth * messagepicoreauth_new();
void messagepicoreauth_delete(MessagePicoReAuth * messagepicoreauth);
void messagepicoreauth_set(MessagePicoReAuth * messagepicoreauth, Buffer * sharedKey);
void messagepicoreauth_get_sequencenum(MessagePicoReAuth * messagepicoreauth, SequenceNumber * sequenceNum);
REAUTHSTATE messagepicoreauth_get_reauthstate(MessagePicoReAuth * messagepicoreauth);
bool messagepicoreauth_deserialize(MessagePicoReAuth * messagepicoreauth, Buffer * buffer);

// Function definitions

#endif

