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
 * The KeyPair class is a wrapper for OpenSSL Diffie Hellman Elliptic Curve
 * public/private key pairs for use by libpam. It also provides various
 * utilities for importing from and exporting to file.
 *
 */

#ifndef __KEYPAIR_H
#define __KEYPAIR_H (1)

#include <stdbool.h>
#include <openssl/ec.h>
#include "pico/buffer.h"
#include "pico/dllpublic.h"

// Defines

// Structure definitions

typedef struct _KeyPair KeyPair;

// Function prototypes

DLL_PUBLIC KeyPair * keypair_new();
DLL_PUBLIC void keypair_delete(KeyPair * keypair);
DLL_PUBLIC void keypair_generate(KeyPair * keypair);
DLL_PUBLIC void keypair_export(KeyPair * keypair, char const * key_public, char const * key_private);
DLL_PUBLIC bool keypair_import(KeyPair * keypair, char const * key_public, char const * key_private);

DLL_PUBLIC bool keypair_import_from_string(KeyPair * keypair, char const * key_public, char const * key_private);

DLL_PUBLIC EC_KEY * keypair_load_public_key_from_string(char const * string);
DLL_PUBLIC EVP_PKEY * keypair_load_private_key_from_string(char const * string);

DLL_PUBLIC void keypair_clear_keys(KeyPair * keypair);

DLL_PUBLIC void keypair_getpublicpem(KeyPair * keypair, Buffer * buffer);
DLL_PUBLIC void keypair_getpublicder(KeyPair * keypair, Buffer * buffer);

DLL_PUBLIC void keypair_getprivatepem(KeyPair * keypair, Buffer * buffer);
DLL_PUBLIC void keypair_getprivateder(KeyPair * keypair, Buffer * buffer);

DLL_PUBLIC EC_KEY * keypair_getpublickey(KeyPair * keypair);
DLL_PUBLIC EVP_PKEY * keypair_getprivatekey(KeyPair * keypair);
DLL_PUBLIC void keypair_sign_data(KeyPair * keypair, Buffer const * bufferin, Buffer * bufferout);

// Function definitions

#endif

