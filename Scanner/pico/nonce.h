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
 * The Nonce class is used for managing nonces. It supports assignment (e.g. 
 * where a nonce is sent from the Pico to the server) and ganeration using
 * OpenSSL's secure random number generator.
 *
 */

#ifndef __STUB_H
#define __STUB_H (1)

#include "pico/buffer.h"
#include "pico/dllpublic.h"

// Defines

#define NONCE_DEFAULT_BYTES (8)

// Structure definitions

typedef struct _Nonce Nonce;

// Function prototypes

DLL_PUBLIC Nonce * nonce_new();
DLL_PUBLIC void nonce_delete(Nonce * nonce);
DLL_PUBLIC void nonce_set_buffer(Nonce * nonce, Buffer * value);
DLL_PUBLIC void nonce_generate_random(Nonce * nonce);
DLL_PUBLIC unsigned char const * nonce_get_buffer(Nonce * nonce);
DLL_PUBLIC size_t nonce_get_length(Nonce * nonce);

// Function definitions

#endif

