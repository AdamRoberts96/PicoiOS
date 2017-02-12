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
 * The base64 interface provides methods for base64 encoding and decoding
 * strings and buffers.
 *
 */

#ifndef __BASE64_H
#define __BASE64_H (1)

#include "pico/buffer.h"
#include "pico/dllpublic.h"

// Defines

// Structure definitions

// Function prototypes

DLL_PUBLIC void base64_encode_buffer(Buffer const * bufferin, Buffer * bufferout);
DLL_PUBLIC void base64_encode_string(char const * stringin, Buffer * bufferout);
DLL_PUBLIC void base64_encode_mem(char const * memin, size_t length, Buffer * bufferout);
DLL_PUBLIC size_t base64_encode_size_max(size_t input);

DLL_PUBLIC void base64_decode_buffer(Buffer const * bufferin, Buffer * bufferout);
DLL_PUBLIC void base64_decode_string(char const * stringin, Buffer * bufferout);
DLL_PUBLIC void base64_decode_mem(char const * memin, size_t length, Buffer * bufferout);
DLL_PUBLIC size_t base64_decode_size_max(size_t input);

// Function definitions

#endif

