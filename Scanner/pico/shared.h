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
 * The Shared class encapsulates all of the shared data and secrets needed to
 * perform the Sigma-I protocol. For example, identity keys, ephemeral keys,
 * nonces and shared generates secrets.
 *
 * Some of the contents are provided at creation (e.g. the service identity
 * key, whereas others are added as the protocol progresses.
 * 
 */

#ifndef __SHARED_H
#define __SHARED_H (1)

#include <openssl/ec.h>
#include "pico/keypair.h"
#include "pico/nonce.h"
#include "pico/dllpublic.h"


// Defines

// Structure definitions

typedef struct _Shared Shared;

// Function prototypes

DLL_PUBLIC Shared * shared_new();
DLL_PUBLIC void shared_delete(Shared * shared);
DLL_PUBLIC void shared_generate_shared_secrets(Shared * shared);
DLL_PUBLIC void shared_load_or_generate_keys(Shared * shared, char const * key_public, char const * key_private);

DLL_PUBLIC Nonce * shared_get_service_nonce(Shared * shared);
DLL_PUBLIC Nonce * shared_get_pico_nonce(Shared * shared);
DLL_PUBLIC KeyPair * shared_get_service_identity_key(Shared * shared);
DLL_PUBLIC KeyPair * shared_get_service_ephemeral_key(Shared * shared);
DLL_PUBLIC void shared_set_pico_identity_public_key(Shared * shared, EC_KEY * picoIdentityPublicKey);
DLL_PUBLIC EC_KEY * shared_get_pico_identity_public_key(Shared * shared);
DLL_PUBLIC void shared_set_pico_ephemeral_public_key(Shared * shared, EC_KEY * picoEphemeralPublicKey);
DLL_PUBLIC EC_KEY * shared_get_pico_ephemeral_public_key(Shared * shared);

DLL_PUBLIC Buffer * shared_get_prover_enc_key(Shared * shared) ;
DLL_PUBLIC Buffer * shared_get_verifier_enc_key(Shared * shared);
DLL_PUBLIC Buffer * shared_get_prover_mac_key(Shared * shared);
DLL_PUBLIC Buffer * shared_get_verifier_mac_key(Shared * shared);
DLL_PUBLIC Buffer * shared_get_shared_key(Shared * shared);

// Function definitions

#endif

