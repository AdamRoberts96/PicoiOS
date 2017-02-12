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

#ifndef __MESSAGESTART_H
#define __MESSAGESTART_H (1)

#include "pico/nonce.h"
#include "pico/shared.h"
#include "pico/buffer.h"

// Defines

// Structure definitions

typedef struct _MessageStart MessageStart;

// Function prototypes

MessageStart * messagestart_new();
void messagestart_delete(MessageStart * messagestart);
void messagestart_set(MessageStart * messagestart, Shared * shared);
bool messagestart_deserialize(MessageStart * messagestart, Buffer * buffer);
bool messagestart_serialize(MessageStart * messagestart, Buffer * buffer);

// Function definitions

#endif

