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
 * The cryptosupport functions offer various wrappers around the OpenSSL
 * functionality to simplify its operation. Encryption, decryption, signatures,
 * and macs are supported, as well as functionality for encoding and decoding
 * keys in various formats.
 *
 */

#ifndef __CRYPTOSUPPORT_H
#define __CRYPTOSUPPORT_H (1)

#include <openssl/ec.h>
#include "pico/buffer.h"
#include "pico/dllpublic.h"
#include "pico/keypair.h"

// Defines

#define CRYPTOSUPPORT_IV_SIZE (16)
#define CRYPTOSUPPORT_AESKEY_SIZE (16)

// Structure definitions

// Function prototypes

// Function definitions

DLL_PUBLIC void cryptosupport_getpublicpem(EC_KEY * eckey, Buffer * buffer);
DLL_PUBLIC void cryptosupport_getpublicder(EC_KEY * eckey, Buffer * buffer);

DLL_PUBLIC void cryptosupport_getprivatepem(EVP_PKEY * privkey, Buffer * buffer);
DLL_PUBLIC void cryptosupport_getprivateder(EVP_PKEY * privkey, Buffer * buffer);

DLL_PUBLIC bool cryptosupport_generate_mac(Buffer * macKey, Buffer * data, Buffer * bufferout);
DLL_PUBLIC bool cryptosupport_verify_signature(EC_KEY * publickey, Buffer const * bufferin, Buffer * sigin);
DLL_PUBLIC bool cryptosupport_encrypt(Buffer * key, Buffer * iv, Buffer * bufferin, Buffer * encryptedout);
DLL_PUBLIC bool cryptosupport_decrypt(Buffer * key, Buffer * iv, Buffer * bufferin, Buffer * cleartextout);
DLL_PUBLIC bool cryptosupport_encrypt_iv_base64(Buffer * key, Buffer * bufferin, Buffer * encryptedout);
DLL_PUBLIC bool cryptosupport_decrypt_iv_base64(Buffer * key, Buffer * bufferin, Buffer * cleartextout);
DLL_PUBLIC bool cryptosupport_generate_symmetric_key(Buffer * key, unsigned int size);
DLL_PUBLIC void cryptosupport_generate_iv(Buffer * iv);
DLL_PUBLIC bool cryptosupport_generate_sha256(Buffer * bufferin, Buffer * bufferout);
DLL_PUBLIC bool cryptosupport_generate_commitment(EC_KEY * publickey, Buffer * commitment);
DLL_PUBLIC bool cryptosupport_generate_commitment_base64(EC_KEY * publickey, Buffer * commitment);

DLL_PUBLIC EC_KEY * cryptosupport_read_base64_buffer_public_key(Buffer * keybuffer);
DLL_PUBLIC EC_KEY * cryptosupport_read_base64_string_public_key(char const * keystring);
DLL_PUBLIC EC_KEY * cryptosupport_read_buffer_public_key(Buffer * keybuffer);


#endif

