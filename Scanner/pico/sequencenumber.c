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
 * Provides methods for handling 32-byte sequence numbers. Sequence numbers
 * can be stored, set and manipulated (e.g. incremented).
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pico/debug.h"
#include "pico/log.h"
#include "pico/sequencenumber.h"

// Defines

#define OUTPUT_MAX ((SEQUENCE_NUMBER_LENGTH * 2) + 1)

// Structure definitions

struct _SequenceNumber {
	unsigned char value[SEQUENCE_NUMBER_LENGTH];
};

// Function prototypes

// Function definitions

/**
 * Create a new instance of the class.
 *
 * @return The newly created object.
 */
SequenceNumber * sequencenumber_new() {
	SequenceNumber * sequencenumber;

	sequencenumber = calloc(sizeof(SequenceNumber), 1);
	memset(sequencenumber, 0, SEQUENCE_NUMBER_LENGTH);

	return sequencenumber;
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param sequencenumber The object to free.
 */
void sequencenumber_delete(SequenceNumber * sequencenumber) {
	if (sequencenumber) {
		free(sequencenumber);
	}
}

/**
 * Increment the sequence number by 1. If the value overflows, it will rotate
 * back round to zero.
 *
 * @param sequencenumber The SequenceNumber object to increment.
 */
void sequencenumber_increment(SequenceNumber * sequencenumber) {
	int pos;
	unsigned char byte;
	bool overflow;

	overflow = true;
	pos = SEQUENCE_NUMBER_LENGTH - 1;
	while ((overflow) && (pos >= 0)) {
		byte = sequencenumber->value[pos];
		if (byte < 0xff) {
			byte++;
			overflow = false;
		}
		else {
			byte = 0x00;
		}
		sequencenumber->value[pos] = byte;
		pos--;
	}
}

/**
 * Print the sequence number to stdout in hexadecimal notation, with the MSB
 * on the left and LSB on the right.
 *
 * @param sequencenumber The SequenceNumber object to print.
 */
void sequencenumber_print(SequenceNumber const * sequencenumber) {
	int pos;

	for (pos = 0; pos < SEQUENCE_NUMBER_LENGTH; pos++) {
		printf("%02x", sequencenumber->value[pos]);
	}
	printf("\n");
}

/**
 * Output the sequence number to the log in hexadecimal notation, with the MSB
 * on the left and LSB on the right.
 *
 * @param sequencenumber The SequenceNumber object to log.
 */
void sequencenumber_log(SequenceNumber const * sequencenumber) {
	int pos;
	int outputpos;
	char output[OUTPUT_MAX];

	for (pos = 0; pos < SEQUENCE_NUMBER_LENGTH; pos++) {
		outputpos = (pos * 2);
		snprintf(output + outputpos, OUTPUT_MAX - outputpos, "%02x", sequencenumber->value[pos]);
	}
	output[OUTPUT_MAX - 1] = 0;

	LOG(LOG_INFO, "%s\n", output);
}

/**
 * Copy the value of a sequence number from on object to another.
 *
 * @param dest The SequenceNumber object to store the value into.
 * @param src The SequenceNumber object to copy the value from.
 */
void sequencenumber_copy(SequenceNumber * dest, SequenceNumber const * src) {
	memcpy(dest->value, src->value, SEQUENCE_NUMBER_LENGTH);
}

/**
 * Take a raw byte representation of a sequence number stored in a buffer and
 * copy it to a SequenceNumber object. The buffer must contain exactly
 * SEQUENCE_NUMBER_LENGTH (32) bytes, with the MSB at the start of the buffer
 * and the LSB and the end of the buffer.
 *
 * @param dest The SequenceNumber object to store the value into.
 * @param src The Buffer object to copy the value from.
 * @return true if the value could be copied correctly (e.g. correct number of
 *         bytes) and false otherwise.
 */
bool sequencenumber_transfer_from_buffer(SequenceNumber * dest, Buffer const * src) {
	bool result;

	result = false;
	if (buffer_get_pos(src) == SEQUENCE_NUMBER_LENGTH) {
		memcpy(dest->value, buffer_get_buffer(src), SEQUENCE_NUMBER_LENGTH);
		result = true;
	}

	return result;
}

/**
 * Extract the sequence number data as a series of bytes. The output will be
 * a sequence of SEQUENCE_NUMBER_LENGTH (32) bytes, NOT null terminated, with
 * the MSB at the start of the buffer and the LSB and the end of the buffer.
 * The data is managed by the SequenceNumber object, so should not be altered
 * or freed.
 *
 * @param destsequencenumberThe SequenceNumber object to get the value from.
 * @return The sequence number stored as a series of bytes.
 */
char const * sequencenumber_get_raw_bytes(SequenceNumber const * sequencenumber) {
	return sequencenumber->value;
}


