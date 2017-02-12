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
 * The sigmaverifier function performs the service's (verifier's) half of the
 * Sigma-I protocol over the Rendezvous Point channel provided.
 * 
 */

#ifndef __SIGMAVERIFIER_H
#define __SIGMAVERIFIER_H (1)

#include "pico/shared.h"
#include "pico/channel.h"
#include "pico/users.h"
#include "pico/buffer.h"
#include "pico/dllpublic.h"

// Defines

// Structure definitions

// Function prototypes

DLL_PUBLIC bool sigmaverifier(Shared * shared, RVPChannel * channel, Users * authorizedUsers, const char* extraData, Buffer * returnedStoredData, Buffer * localSymmetricKey);
DLL_PUBLIC bool sigmaverifier_session(Shared * shared, RVPChannel * channel, Users * authorizedUsers, const char* sendExtraData, Buffer * returnedExtraData, Buffer * localSymmetricKey, bool continuous, int sessionId);

// Function definitions

#endif

