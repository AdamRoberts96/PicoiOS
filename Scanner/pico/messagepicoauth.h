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
 *
 */

#ifndef __MESSAGEPICOAUTH_H
#define __MESSAGEPICOAUTH_H (1)

#include <openssl/ec.h>
#include "pico/shared.h"
#include "pico/nonce.h"
#include "pico/buffer.h"

// Defines

// Structure definitions

typedef struct _MessagePicoAuth MessagePicoAuth;

// Function prototypes

MessagePicoAuth * messagepicoauth_new();
void messagepicoauth_delete(MessagePicoAuth * messagepicoauth);
void messagepicoauth_set(MessagePicoAuth * messagepicoauth, Shared * shared);
Buffer * messagepicoauth_get_extra_data(MessagePicoAuth * messagepicoauth);
bool messagepicoauth_deserialize(MessagePicoAuth * messagepicoauth, Buffer * buffer);
void messagepicoauth_serialize(MessagePicoAuth * messagepicoauth, Buffer * buffer);


// Function definitions

#endif

