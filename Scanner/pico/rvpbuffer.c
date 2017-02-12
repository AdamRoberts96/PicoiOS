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

#include <stdio.h>
#include <inttypes.h>
#include "pico/debug.h"
#include "pico/buffer.h"
#include "pico/log.h"
#include "pico/rvpbuffer.h"

// Defines

// Structure definitions

/**
 * Structure containing the private fields of the class.
 */
struct _RVPBuffer {
	Buffer * buffer;
	size_t prefixPos;
	uint32_t expectedLength;
};

// Function prototypes

// Function definitions

/**
 * Create a new instance of the class.
 *
 * @param buffer The buffer to store the received data in.
 * @return The newly created object.
 */
RVPBuffer * rvpbuffer_new(Buffer * buffer) {
	RVPBuffer * rvpbuffer;

	rvpbuffer = CALLOC(sizeof(RVPBuffer), 1);
	rvpbuffer->expectedLength = 0;
	rvpbuffer->prefixPos = 0;
	rvpbuffer->buffer = buffer;
	
	return rvpbuffer;
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param rvpbuffer The object to free.
 */
void rvpbuffer_delete(RVPBuffer * rvpbuffer) {
	if (rvpbuffer) {
		FREE(rvpbuffer);
	}
}

/**
 * Convenience function for use as a CURL callback. Writes the data to a
 * user-provided buffer. This function should never be called directy, but
 * rather given to libcurl as a callback.
 *
 * When data is sent by the Pico protocol it is prepended with a length value
 * representing the length of data (stored as an integer) following the four 
 * bytes. This function serializes a sequence of length-prepended messages into
 * a single buffer. In practice, it's likely only one will every be sent at a
 * time, but this accommodates multiple serialized messages just in case.
 *
 * @param ptr Pointer to the data returned by libcurl
 * @param size Number of data items returned by libcurl
 * @param nmemb Size of each data item in bytes
 * @param userp Pointer to the user specified data, which should be a Buffer
 *              structure
 * @return Number of bytes dealt with, which should always be the same as the
 *         quantity of data provided by libcurl unless an error occurred
 */
size_t rvpbuffer_write(void * ptr, size_t size, size_t nmemb, void * userp) {
	RVPBuffer * rvpbuffer = (RVPBuffer *)userp;
	size_t pos;

	pos = 0;
	while ((rvpbuffer->prefixPos < 4) && (pos < (size * nmemb))) {
		rvpbuffer->expectedLength |= (uint32_t)((unsigned char*)ptr)[pos] << (3-rvpbuffer->prefixPos) * 8;
		rvpbuffer->prefixPos++;
		pos++;
	}

	if (rvpbuffer->prefixPos >= 4) {
		pos += buffer_append(rvpbuffer->buffer, (char*) ptr + pos, (size * nmemb) - pos);
	}

	return pos;
}

