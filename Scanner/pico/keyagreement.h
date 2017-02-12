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

#ifndef __KEYAGREEMENT_H
#define __KEYAGREEMENT_H (1)

#include <openssl/evp.h>
#include "pico/buffer.h"
#include "pico/keypair.h"
#include "pico/dllpublic.h"

// Defines

// Structure definitions

//typedef struct _KeyAgreement KeyAgreement;

// Function prototypes

DLL_PUBLIC void keyagreement_generate_secret(EVP_PKEY * vEphemPriv, EC_KEY * pEphemPub, Buffer * sharedSecretOut);

// Function definitions

#endif

