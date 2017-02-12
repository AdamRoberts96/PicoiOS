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
 * The Users class manages a list of users and their public keys. This list of
 * users can be provided to the sigmaverifier to represent a list of authorized
 * users. Only Pico's authenticating using private keys matching the public
 * keys in the list will generate a positive result when authenticating.
 *
 * The list of users can be imported/exported to file.
 * 
 */

#ifndef __USERS_H
#define __USERS_H (1)

#include "pico/dllpublic.h"

// Defines

// Structure definitions

typedef enum _USERFILE {
	USERFILE_INVALID = -1,

	USERFILE_SUCCESS,
	USERFILE_IOERROR,
	USERFILE_FORMATERROR,
	USERFILE_COMMITMENTERROR,

	USERFILE_NUM
} USERFILE;

typedef struct _Users Users;

// Function prototypes

DLL_PUBLIC Users * users_new();
DLL_PUBLIC void users_delete(Users * users);
DLL_PUBLIC void users_add_user(Users * users, char const * name, EC_KEY * picoIdentityPublicKey, Buffer const * symmetricKey);
DLL_PUBLIC USERFILE users_export(Users * users, char const * file);
DLL_PUBLIC USERFILE users_load(Users * users, char const * file);
DLL_PUBLIC Buffer const * users_search_by_key(Users * users, EC_KEY * picoIdentityPublicKey);
DLL_PUBLIC Buffer const * users_search_symmetrickey_by_key(Users * users, EC_KEY * picoIdentityPublicKey);
DLL_PUBLIC void users_delete_all(Users * users);
DLL_PUBLIC void users_print(Users * users);
DLL_PUBLIC void users_move_list(Users * from, Users * to);
DLL_PUBLIC int users_filter_by_name(Users * users, char const * name, Users * result);

// Function definitions

#endif

