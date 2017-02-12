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

#include <stdio.h>
#include <string.h>
#include "pico/debug.h"
#include "pico/cencode.h"
#include "pico/cdecode.h"
#include "pico/buffer.h"
#include "pico/log.h"
#include "pico/base64.h"

// Defines

// Structure definitions

// Function prototypes

// Function definitions

/**
 * Base64 encode a buffer of bytes and store the result in a buffer.
 *
 * @param bufferin Buffer containing data to encode.
 * @param bufferout Buffer to store the returned base64-encoded string.
 */
void base64_encode_buffer(Buffer const * bufferin, Buffer * bufferout) {
	base64_encodestate state_in;
	size_t size;

	size = base64_encode_size_max(buffer_get_pos(bufferin));
	buffer_set_min_size(bufferout, size);

	base64_init_encodestate(& state_in);
	size = base64_encode_block(buffer_get_buffer(bufferin), buffer_get_pos(bufferin), buffer_get_buffer(bufferout), & state_in);
	size += base64_encode_blockend(buffer_get_buffer(bufferout) + size, & state_in);
	buffer_set_pos(bufferout, size);

	//printf ("Allocated: %lu\nSuggested: %lu\nUsed: %lu\n", buffer_get_size(bufferout), base64_encode_size_max(buffer_get_pos(bufferin)), size);
	//buffer_print(bufferout);
}

/**
 * Base64 encode a null-terminated string and store the result in a buffer.
 *
 * @param stringin Null-terminated character string to encode.
 * @param bufferout Buffer to store the returned base64-encoded string.
 */
void base64_encode_string(char const * stringin, Buffer * bufferout) {
	base64_encodestate state_in;
	size_t stringlen;
	size_t size;

	stringlen = strlen(stringin);
	size = base64_encode_size_max(stringlen);
	buffer_set_min_size(bufferout, size);

	base64_init_encodestate(& state_in);
	size = base64_encode_block(stringin, stringlen, buffer_get_buffer(bufferout), & state_in);
	size += base64_encode_blockend(buffer_get_buffer(bufferout) + size, & state_in);
	buffer_set_pos(bufferout, size);

	//printf ("Allocated: %lu\nSuggested: %lu\nUsed: %lu\n", buffer_get_size(bufferout), base64_encode_size_max(stringlen), size);
	//buffer_print(bufferout);
}

/**
 * Base64 encode a bounded chunk of memory and store the result in a buffer.
 *
 * @param memin The start of the memory chunk to encode.
 * @param length The length of the memory chunk to encode, in bytes.
 * @param bufferout Buffer to store the returned base64-encoded string.
 */
void base64_encode_mem(char const * memin, size_t length, Buffer * bufferout) {
	base64_encodestate state_in;
	size_t size;

	size = base64_encode_size_max(length);
	buffer_set_min_size(bufferout, size);

	base64_init_encodestate(& state_in);
	size = base64_encode_block(memin, length, buffer_get_buffer(bufferout), & state_in);
	size += base64_encode_blockend(buffer_get_buffer(bufferout) + size, & state_in);
	buffer_set_pos(bufferout, size);

	//printf ("Allocated: %lu\nSuggested: %lu\nUsed: %lu\n", buffer_get_size(bufferout), base64_encode_size_max(length), size);
	//buffer_print(bufferout);
}

/**
 * Base64 decode a buffer of bytes and store the result in a buffer.
 *
 * @param bufferin Buffer containing base64 character data to decode.
 * @param bufferout Buffer to store the returned byte data.
 */
void base64_decode_buffer(Buffer const * bufferin, Buffer * bufferout) {
	base64_decodestate state_in;
	size_t size;

	size = base64_decode_size_max(buffer_get_pos(bufferin));
	buffer_set_min_size(bufferout, size);

	base64_init_decodestate(& state_in);
	size = base64_decode_block(buffer_get_buffer(bufferin), buffer_get_pos(bufferin), buffer_get_buffer(bufferout), & state_in);
	buffer_set_pos(bufferout, size);

	//printf ("Allocated: %lu\nSuggested: %lu\nUsed: %lu\n", buffer_get_size(bufferout), base64_decode_size_max(buffer_get_pos(bufferin)), size);
	//buffer_print(bufferout);
}

/**
 * Base64 decode a null-terminated string and store the result in a buffer.
 *
 * @param stringin Null-terminated string containing base64 character data to decode.
 * @param bufferout Buffer to store the returned byte data.
 */
void base64_decode_string(char const * stringin, Buffer * bufferout) {
	base64_decodestate state_in;
	size_t stringlen;
	size_t size;

	stringlen = strlen(stringin);
	size = base64_decode_size_max(stringlen);
	buffer_set_min_size(bufferout, size);

	base64_init_decodestate(& state_in);
	size = base64_decode_block(stringin, stringlen, buffer_get_buffer(bufferout), & state_in);
	buffer_set_pos(bufferout, size);

	//printf ("Allocated: %lu\nSuggested: %lu\nUsed: %lu\n", buffer_get_size(bufferout), base64_decode_size_max(stringlen), size);
	//buffer_print(bufferout);
}

/**
 * Base64 decode a null-terminated string and store the result in a buffer.
 *
 * @param stringin Null-terminated string containing base64 character data to decode.
 * @param length The length of the memory chunk to decode, in bytes.
 * @param bufferout Buffer to store the returned byte data.
 */
void base64_decode_mem(char const * memin, size_t length, Buffer * bufferout) {
	base64_decodestate state_in;
	size_t size;

	size = base64_decode_size_max(length);
	buffer_set_min_size(bufferout, size);

	base64_init_decodestate(& state_in);
	size = base64_decode_block(memin, length, buffer_get_buffer(bufferout), & state_in);
	buffer_set_pos(bufferout, size);

	//printf ("Allocated: %lu\nSuggested: %lu\nUsed: %lu\n", buffer_get_size(bufferout), base64_decode_size_max(length), size);
	//buffer_print(bufferout);
}

/**
 * Calculate the maximum space needed to encode input of the given length into
 * a base64 representation.
 *
 * @param input Length of data to be encoded into base64 format.
 * @return Maximum space in bytes needed to store a base64-encoded data.
 */
size_t base64_encode_size_max(size_t input) {
	return ((int)((input + 2) / 3)) * 4;
}

/**
 * Calculate the maximum space needed to decode data in base64 representation
 * of the given length.
 *
 * @param input Length of base64-encoded data to be decoded.
 * @return Maximum space in bytes needed to store the decoded data.
 */
size_t base64_decode_size_max(size_t input) {
	return ((int)((input + 3) / 4)) * 3 + 1;
}

