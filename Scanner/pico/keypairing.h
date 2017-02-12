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
 * The KeyPairing class generates the json string used to bootstrap the 
 * pairing process. This may be embedded in - say - a QR code, displayed
 * by the server. When scanned by a Pico, the serialized KeyPairing structure
 * contains enough details to allow the Pico to contact the server via the
 * Rendezvous Point and kickstart the pairing process.
 *
 * In essence, the KeyPairing class allows the generation of "PA"-type QR codes.
 * This can be contrasted with the KeyAuth class for generating "KA"-type codes.
 *
 * The format of the serialized output is as follows.
 * {"sn":"NAME","spk":"PUB-KEY","sig":"B64-SIG","ed":"","sa":"URL","td":{},"t":"KP"}
 */

#ifndef __KEYPAIRING_H
#define __KEYPAIRING_H (1)

#include "pico/dllpublic.h"

// Defines

// Structure definitions

typedef struct _KeyPairing KeyPairing;

// Function prototypes

DLL_PUBLIC KeyPairing * keypairing_new();
DLL_PUBLIC void keypairing_delete(KeyPairing * keypairing);
DLL_PUBLIC void keypairing_set(KeyPairing * keypairing, Buffer const * serviceAddress, char const * terminalAddress, Buffer const * terminalCommitment, char const * serviceName, KeyPair * serviceIdentityKey);
DLL_PUBLIC void keypairing_print(KeyPairing * keypairing);
DLL_PUBLIC void keypairing_log(KeyPairing * keypairing);
DLL_PUBLIC size_t keypairing_serialize_size(KeyPairing * keypairing);
DLL_PUBLIC size_t keypairing_serialize(KeyPairing * keypairing, char * buffer, size_t size);

// Function definitions

#endif

