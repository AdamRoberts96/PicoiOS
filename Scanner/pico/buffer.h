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
 * The buffer class provides a generic dynamically-defined buffer for
 * storing sequences of bytes. Buffers have a length and are not necessarily
 * zero-terminated. As data is appended to the buffer memory will be allocated
 * automatically in blocks. The block size can be set when the buffer is first
 * created.
 *
 */

#ifndef __BUFFER_H
#define __BUFFER_H (1)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pico/channel.h"
#include "pico/dllpublic.h"

// Defines

// Structure definitions

typedef struct _Buffer Buffer;

// Function prototypes

DLL_PUBLIC Buffer * buffer_new(size_t block_size);
DLL_PUBLIC void buffer_delete(Buffer * buffer);

DLL_PUBLIC size_t buffer_append(Buffer * buffer, void const * data, size_t size);
DLL_PUBLIC size_t buffer_append_string(Buffer * buffer, char const * data);
DLL_PUBLIC size_t buffer_append_buffer(Buffer * buffer, Buffer const * appendFrom);
DLL_PUBLIC size_t buffer_append_buffer_lengthprepend(Buffer * buffer, Buffer * appendFrom);
DLL_PUBLIC size_t buffer_append_lengthprepend(Buffer * buffer, void const * data, size_t size);
DLL_PUBLIC size_t buffer_copy_lengthprepend(Buffer * bufferin, size_t start, Buffer * bufferout);
DLL_PUBLIC void buffer_truncate(Buffer * buffer, size_t reduce_by);
DLL_PUBLIC void buffer_print(Buffer const * buffer);
DLL_PUBLIC void buffer_print_base64(Buffer * buffer);
DLL_PUBLIC void buffer_log(Buffer * buffer);
DLL_PUBLIC void buffer_log_base64(Buffer * buffer);
DLL_PUBLIC void buffer_clear(Buffer * buffer);
DLL_PUBLIC size_t buffer_copy_to_string(Buffer const * buffer, char * string, size_t max_length);
DLL_PUBLIC char * buffer_copy_to_new_string(Buffer const * buffer);
DLL_PUBLIC size_t buffer_get_pos(Buffer const * buffer);
DLL_PUBLIC char * buffer_get_buffer(Buffer const * buffer);
DLL_PUBLIC void buffer_set_min_size(Buffer * buffer, size_t size);
DLL_PUBLIC size_t buffer_get_size(Buffer const * buffer);
DLL_PUBLIC void buffer_set_pos(Buffer * buffer, size_t pos);
DLL_PUBLIC bool buffer_equals(Buffer const * buffer, Buffer const * compare);

// Function definitions

#endif

