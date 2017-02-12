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
 * The json class provides serializing and deserializing for converting 
 * data in key-value pairs between json text and a linked list.
 * At present strings, integers and nested json structures are supported
 * but arrays are not supported (they're not needed by the Pico protocol).
 *
 */

#ifndef __JSON_H
#define __JSON_H (1)

#include "pico/buffer.h"
#include "pico/dllpublic.h"

// Defines

// Structure definitions

typedef enum _JSONTYPE {
	JSONTYPE_INVALID = -1,

	JSONTYPE_STRING,
	JSONTYPE_SUBLIST,
	JSONTYPE_DECIMAL,
	
	JSONTYPE_NUM
} JSONTYPE;

typedef struct _Json Json;

// Function prototypes

DLL_PUBLIC Json * json_new();
DLL_PUBLIC void json_delete(Json * json);
DLL_PUBLIC void json_add_string(Json * json, char const * key, char const * value);
DLL_PUBLIC void json_add_buffer(Json * json, char const * key, Buffer const * value);
DLL_PUBLIC void json_add_decimal(Json * json, char const * key, double value);
DLL_PUBLIC void json_add_sublist(Json * json, char const * key, Json * sublist);
DLL_PUBLIC size_t json_serialize_size(Json * json);
DLL_PUBLIC size_t json_serialize(Json * json, char * buffer, size_t size);
DLL_PUBLIC size_t json_serialize_buffer(Json * json, Buffer * buffer);
DLL_PUBLIC bool json_deserialize_string(Json * json, char const * json_string, size_t length);
DLL_PUBLIC bool json_deserialize_buffer(Json * json, Buffer const * buffer);
DLL_PUBLIC void json_print(Json * json);
DLL_PUBLIC void json_log(Json * json);
DLL_PUBLIC JSONTYPE json_get_type(Json * json, char const * key);
DLL_PUBLIC char const * json_get_string(Json * json, char const * key);
DLL_PUBLIC double json_get_decimal(Json * json, char const * key);

// Function definitions

#endif

