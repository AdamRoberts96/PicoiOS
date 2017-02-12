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
 * The debug interface provides some methods for instrumenting memory 
 * management (malloc, calloc, realloc, free). The PICO_DEBUG define
 * can be used to turn on and off this functionality. When turned off
 * the instrumentation is completely removed from the compiled library.
 *
 */

#ifndef __DEBUG_H
#define __DEBUG_H (1)

#include <stdio.h>

// Defines

//#define PICO_DEBUG (1)
#undef PICO_DEBUG

#ifdef PICO_DEBUG
#define MALLOC debug_malloc
#define CALLOC debug_calloc
#define REALLOC debug_realloc
#define FREE debug_free
#define DEBUG_INIT debug_init()
#define DEBUG_FINAL debug_final()
#else
#define MALLOC malloc
#define CALLOC calloc
#define REALLOC realloc
#define FREE free
#define DEBUG_INIT
#define DEBUG_FINAL
#endif

// Structure definitions

// Function prototypes

#ifdef PICO_DEBUG
void debug_init();
void debug_final();

void * debug_malloc (size_t __size);
void * debug_calloc (size_t __nmemb, size_t __size);
void * debug_realloc (void *__ptr, size_t __size);
void debug_free (void *__ptr);
#endif

// Function definitions

#endif

