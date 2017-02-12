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
 * The Auth class encapsulates the Pico server authentication and pairing
 * protocol into single call. 
 *
 */

#ifndef __AUTH_H
#define __AUTH_H (1)

#include "pico/shared.h"
#include "pico/users.h"
#include "pico/buffer.h"
#include "pico/dllpublic.h"

// Defines
/**
 * Callback function to be used by auth and pair
 * 
 * @param qrtext Text to be presented to Pico
 * @param localdata General purpose pointer to be sent along
 * 				    the function calls
 * @return True if successful
 */ 
typedef bool (*QrCallbackFunction)(char * qrtext, void * localdata);

// Structure definitions

// Function prototypes

DLL_PUBLIC bool auth(Shared * shared, Users * authorizedUsers, Buffer * returnedStoredData, QrCallbackFunction qrCallback, void * data, Buffer * localSymmetricKey);
DLL_PUBLIC bool pair(Shared * shared, char const * servicename, char const * extraData,	Buffer * returnedStoredData, QrCallbackFunction qrCallback, void * data);
DLL_PUBLIC bool pair_loop(Shared * shared, char const * servicename, char const * extraData,	Buffer * returnedStoredData, QrCallbackFunction qrCallback, void * data, int loopVerifier);

// Function definitions

#endif

