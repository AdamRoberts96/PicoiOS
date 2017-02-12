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
 * The keyagreement function generates a shared secret from the Pico's
 * (prover's) ephemerail public key and the service's (verifier's) ephemeral
 * private key. The shared secret is used to generate further shared secrets
 * that are then used for various purposes (encryption, mac, signing) as part
 * of the Sigma-I protocol.
 *
 * See the SigmaKeyDeriv class for details of the shared secret generation
 * process.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "pico/debug.h"
#include "pico/log.h"
#include "pico/keyagreement.h"

// Defines

// Structure definitions

// Function prototypes

// Function definitions

/**
 * Generate a shared secret from the combination of the server's private ECDH
 * key and the Pico's public ECDH key.
 *
 * @param vEphemPriv Verfiyer's (server's) ephemeral private ECDH key
 * @param pEphemPub Prover's (Pico's) ephemeral public ECDH key
 * @param sharedSecretOut Buffer to store the resulting generated shared secret
 */
void keyagreement_generate_secret(EVP_PKEY * vEphemPriv, EC_KEY * pEphemPub, Buffer * sharedSecretOut) {
	EVP_PKEY_CTX * ctx;
	EVP_PKEY * evpkey;
	size_t sharedSecretLength;

	ctx = EVP_PKEY_CTX_new(vEphemPriv, NULL);
	EVP_PKEY_derive_init(ctx);

	evpkey = EVP_PKEY_new();
	EVP_PKEY_assign_EC_KEY(evpkey, pEphemPub);

	EVP_PKEY_derive_set_peer(ctx, evpkey);

	EVP_PKEY_derive(ctx, NULL, & sharedSecretLength);
	buffer_set_min_size(sharedSecretOut, sharedSecretLength);

	EVP_PKEY_derive(ctx, (unsigned char *)buffer_get_buffer(sharedSecretOut), & sharedSecretLength);
	buffer_set_pos(sharedSecretOut, sharedSecretLength);

	EVP_PKEY_CTX_free(ctx);
}

