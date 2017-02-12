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

#ifndef __SEQUENCENUMBER_H
#define __SEQUENCENUMBER_H (1)

#include "pico/buffer.h"

// Defines

#define SEQUENCE_NUMBER_LENGTH (32)

// Structure definitions

typedef struct _SequenceNumber SequenceNumber;

// Function prototypes

SequenceNumber * sequencenumber_new();
void sequencenumber_delete(SequenceNumber * sequencenumber);

void sequencenumber_increment(SequenceNumber * sequencenumber);
void sequencenumber_print(SequenceNumber const * sequencenumber);
void sequencenumber_log(SequenceNumber const * sequencenumber);
void sequencenumber_copy(SequenceNumber * dest, SequenceNumber const * src);
bool sequencenumber_transfer_from_buffer(SequenceNumber * dest, Buffer const * src);
char const * sequencenumber_get_raw_bytes(SequenceNumber const * sequencenumber);

// Function definitions

#endif

