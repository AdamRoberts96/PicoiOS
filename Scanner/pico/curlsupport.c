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

#include <stdio.h>
#include "pico/debug.h"
#include "pico/buffer.h"
#include "pico/log.h"
#include "pico/curlsupport.h"

// Defines

// Structure definitions

// Function prototypes

// Function definitions

/**
 * Convenience function for use as a CURL callback. Writes the data to a
 * user-provided buffer. This function should never be called directy, but
 * rather given to libcurl as a callback.
 *
 * @param ptr Pointer to the data returned by libcurl
 * @param size Number of data items returned by libcurl
 * @param nmemb Size of each data item in bytes
 * @param userp Pointer to the user specified data, which should be a Buffer
 *              structure
 * @return Number of bytes dealt with, which should always be the same as the
 *         quantity of data provided by libcurl unless an error occurred
 */
size_t write_data(void * ptr, size_t size, size_t nmemb, void * userp) {
	Buffer * buffer = (Buffer *)userp;
	size_t stored;

	stored = buffer_append(buffer, ptr, size * nmemb);
	
	return stored;
}

/**
 * Convenience function for use as a CURL callback. Prints the data to the
 * screen. This function should never be called directy, but
 * rather given to libcurl as a callback.
 *
 * @param ptr Pointer to the data returned by libcurl
 * @param size Number of data items returned by libcurl
 * @param nmemb Size of each data item in bytes
 * @param userp Unused; can be null, or indeed anything
 * @return Number of bytes dealt with, which should always be the same as the
 *         quantity of data provided by libcurl unless an error occurred
 */
size_t print_data(void * ptr, size_t size, size_t nmemb, void * userp) {
	Buffer * buffer;

	buffer = buffer_new(size * nmemb);
	buffer_append(buffer, ptr, size * nmemb);
	printf("Response: ");
	buffer_print(buffer);
	buffer_delete(buffer);

	return size * nmemb;
}

/**
 * Convenience function for use as a CURL callback. Logs the data using
 * syslog. This function should never be called directy, but
 * rather given to libcurl as a callback.
 *
 * @param ptr Pointer to the data returned by libcurl
 * @param size Number of data items returned by libcurl
 * @param nmemb Size of each data item in bytes
 * @param userp Unused; can be null, or indeed anything
 * @return Number of bytes dealt with, which should always be the same as the
 *         quantity of data provided by libcurl unless an error occurred
 */
size_t log_data(void * ptr, size_t size, size_t nmemb, void * userp) {
	Buffer * buffer;

	buffer = buffer_new(size * nmemb);
	buffer_append(buffer, ptr, size * nmemb);
	LOG(LOG_INFO, "Response: "); 
	buffer_log(buffer);
	buffer_delete(buffer);

	return size * nmemb;
}

