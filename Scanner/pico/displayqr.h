/**
 * @file
 * @author  Markus Gutschke
 * @version 1.0
 *
 * @section LICENSE
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * @section DESCRIPTION
 *
 * Originally from https://github.com/google/google-authenticator/blob/master/libpam/src/google-authenticator.c
 * Licensed under the Apache License, Version 2.0 (the "License");
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * The DisplayQR class allows qrcodes to be generated as ASCII (either 
 * ANSI or UTF8).
 *
 */

#ifndef __DISPLAYQR_H
#define __DISPLAYQR_H (1)

#include "pico/dllpublic.h"

// Defines

// Structure definitions

typedef struct _DisplayQR DisplayQR;

typedef enum _QRMODE {
	QRMODE_INVALID = -1,

	QRMODE_UNSET,
	QRMODE_NONE,
	QRMODE_ANSI,
	QRMODE_COLOR_UTF8,
	QRMODE_COLORLESS_UTF8,
	QRMODE_DOS,
	QRMODE_MONOCHROME_BITMAP,

	QRMODE_NUM
} QRMODE;


// Function prototypes

DLL_PUBLIC DisplayQR * displayqr_new();
DLL_PUBLIC DisplayQR * displayqr_new_params(QRMODE qr_mode);
DLL_PUBLIC void displayqr_set_mode_params(DisplayQR * displayqr, void * param);
DLL_PUBLIC void displayqr_delete(DisplayQR * displayqr);
DLL_PUBLIC size_t displayqr_generate(DisplayQR * displayqr, const char * text);
DLL_PUBLIC void displayqr_output(DisplayQR * displayqr);
DLL_PUBLIC Buffer * displayqr_get_output(DisplayQR * displayqr);

// Function definitions

#endif

