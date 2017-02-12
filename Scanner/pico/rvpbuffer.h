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
 * The RVPBuffer class encapsulates the data needed to buffer incoming data
 * arriving from a curl Rendezvous Point channel. It's convenient to use it
 * as the context for the curl write callback. At the end of the curl
 * operation the data received can be found in the buffer specified when the
 * RVPBuffer was created.
 *
 * Note that deleting the RVPBuffer does not delete the Buffer specified at
 * creation of the RVPBuffer (containing the received data), and so this
 * must be deleted separately when it's no longer needed.
 *
 */

#ifndef __RVPBUFFER_H
#define __RVPBUFFER_H (1)

// Defines

// Structure definitions

typedef struct _RVPBuffer RVPBuffer;

// Function prototypes

RVPBuffer * rvpbuffer_new(Buffer * buffer);
void rvpbuffer_delete(RVPBuffer * rvpbuffer);
size_t rvpbuffer_write(void * ptr, size_t size, size_t nmemb, void * userp);

// Function definitions

#endif

