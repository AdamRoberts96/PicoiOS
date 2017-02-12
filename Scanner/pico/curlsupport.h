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
 * The curl library uses callbacks to provide or return data to or from a 
 * server. These functions offer some standard approaches to hooking in to this
 * using the libpico dynamic buffers.
 *
 */

#ifndef __CURLSUPPORT_H
#define __CURLSUPPORT_H (1)

// Defines

// Structure definitions

// Function prototypes

size_t write_data(void * ptr, size_t size, size_t nmemb, void * userp);
size_t print_data(void * ptr, size_t size, size_t nmemb, void * userp);
size_t log_data(void * ptr, size_t size, size_t nmemb, void * userp);

// Function definitions

#endif

