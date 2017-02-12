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
 * The KeyAuth class generates the json string used to bootstrap the 
 * authorisation process. This may be embedded in - say - a QR code, displayed
 * by the server. When scanned by a Pico, the serialized KeyAuth structure
 * contains enough details to allow the Pico to contact the server via the
 * Rendezvous Point and kickstart the authentication process.
 *
 * In essence, the KeyAuth class allows the generation of "KA"-type QR codes.
 * This can be contrasted with the KeyPairing class for generating "KP"-type
 * codes.
 *
 * The format of the serialized output is as follows.
 * {"t":"KA","sc":"B64","ed":"","sa":"URL","td":{}}
 *
 */

#ifndef __KEYAUTH_H
#define __KEYAUTH_H (1)

#include "pico/dllpublic.h"

// Defines

// Structure definitions

typedef struct _KeyAuth KeyAuth;

// Function prototypes

DLL_PUBLIC KeyAuth * keyauth_new();
DLL_PUBLIC void keyauth_delete(KeyAuth * keyauth);
DLL_PUBLIC void keyauth_set(KeyAuth * keyauth, Buffer const * serviceAddress, char const * terminalAddress, Buffer const * terminalCommitment, KeyPair * serviceIdentityKey);
DLL_PUBLIC void keyauth_print(KeyAuth * keyauth);
DLL_PUBLIC void keyauth_log(KeyAuth * keyauth);
DLL_PUBLIC size_t keyauth_serialize_size(KeyAuth * keyauth);
DLL_PUBLIC size_t keyauth_serialize(KeyAuth * keyauth, char * buffer, size_t size);

// Function definitions

#endif

