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
 * The continuous class provides support for continuous authentication.
 *
 */

#ifndef __CONTINUOUS_H
#define __CONTINUOUS_H (1)

#include "pico/shared.h"
#include "pico/users.h"
#include "pico/buffer.h"
#include "pico/auth.h"
#include "pico/dllpublic.h"

// Defines

// Structure definitions

typedef struct _Continuous Continuous;

// Function prototypes

DLL_PUBLIC Continuous * continuous_new();
DLL_PUBLIC void continuous_delete(Continuous * continuous);

DLL_PUBLIC bool continuous_start(Continuous * continuous, Shared * shared, Users * authorizedUsers, Buffer * returnedStoredData, QrCallbackFunction qrCallback, void * data, Buffer * localSymmetricKey);
DLL_PUBLIC bool continuous_cycle_start(Continuous * continuous);
DLL_PUBLIC bool continuous_continue(Continuous * continuous, Buffer * returnedStoredData);
DLL_PUBLIC bool continuous_finish(Continuous * continuous);

DLL_PUBLIC void continuous_set_shared_key(Continuous * continuous, Buffer * sharedKey);
DLL_PUBLIC void continuous_get_shared_key(Continuous * continuous, Buffer * sharedKey);

DLL_PUBLIC void continuous_set_channel(Continuous * continuous, RVPChannel * channel);
DLL_PUBLIC RVPChannel * continuous_get_channel(Continuous * continuous);

// Function definitions

#endif

