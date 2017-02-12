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

#include <stdio.h>
#include <string.h>
#if defined(_WIN32) || defined(_WIN64)
#include "qrencode.h"
#else
#include <unistd.h>
#include <qrencode.h>
#endif
#include "pico/debug.h"
#include "pico/buffer.h"
#include "pico/log.h"
#include "pico/displayqr.h"

// Defines

#define ANSI_RESET        "\x1B[0m"
#define ANSI_BLACKONGREY  "\x1B[30;47;27m"
#define ANSI_WHITE        "\x1B[27m"
#define ANSI_BLACK        "\x1B[7m"
#define UTF8_BOTH         "\xE2\x96\x88"
#define UTF8_TOPHALF      "\xE2\x96\x80"
#define UTF8_BOTTOMHALF   "\xE2\x96\x84"
#define DOS_BOTH          " "
#define DOS_TOPHALF       "\xDC"
#define DOS_BOTTOMHALF    "\xDF"
#define DOS_EMPTY         "\xDB"

// Structure definitions

/**
 * Structure containing the private fields of the class..
 */
struct _DisplayQR {
	QRMODE qr_mode;
	void * mode_param;
	Buffer * output;
};

// Function prototypes

void displayqr_puts(DisplayQR * displayqr, char const * string);
void displayqr_printf(DisplayQR * displayqr, char const * string);

// Function definitions

/**
 * Create a new instance of the class.
 *
 * @return The newly created object.
 */
DisplayQR * displayqr_new() {
	DisplayQR * displayqr;

	displayqr = CALLOC(sizeof(DisplayQR), 1);
	displayqr->qr_mode = QRMODE_COLOR_UTF8;
	displayqr->mode_param = NULL;
	displayqr->output = buffer_new(0);

	return displayqr;
}

/**
 * Create a new instance of the class.
 *  
 * @param qr_mode The desired QRMODE
 * @return The newly created object.
 */
DisplayQR * displayqr_new_params(QRMODE qr_mode) {
	DisplayQR * displayqr;

	displayqr = CALLOC(sizeof(DisplayQR), 1);
	displayqr->qr_mode = qr_mode;
	displayqr->mode_param = NULL;
	displayqr->output = buffer_new(0);

	return displayqr;
}

/**
* Sets the mode parameters
* Currently only QRMODE_MONOCHROME_BITMAP accepts parameters, and for this case, it should be set as
* a pointer to an int containing the number of pixels per QR code dot.
* This memory will be copied and handled by the displayqr object.
*
* @param displayqr The displayqr object
* @param param	The parameter to set
* @return The newly created object.
*/
void displayqr_set_mode_params(DisplayQR * displayqr, void * param) {
	if (displayqr->qr_mode == QRMODE_MONOCHROME_BITMAP) {
		if (displayqr->mode_param != NULL) {
			FREE(displayqr->mode_param);
		}

		displayqr->mode_param = MALLOC(sizeof(int));
		memcpy(displayqr->mode_param, param, sizeof(int));
	}
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param displayqr The object to free.
 */
void displayqr_delete(DisplayQR * displayqr) {
	if (displayqr) {
		if (displayqr->output) {
			buffer_delete(displayqr->output);
		}
		if (displayqr->mode_param) {
			FREE(displayqr->mode_param);
		}
		FREE(displayqr);
	}
}

/**
 * Internal function replacing puts to print data to a buffer.
 *
 * @param displayqr DisplayqR object instance
 * @param string The string to append to the buffer
 */
void displayqr_puts(DisplayQR * displayqr, char const * string) {
	buffer_append_string(displayqr->output, string);
	buffer_append(displayqr->output, "\n", 1);
}

/**
 * Internal function replacing printf to print data to a buffer.
 *
 * @param displayqr DisplayqR object instance
 * @param string The string to append to the buffer
 */
void displayqr_printf(DisplayQR * displayqr, char const * string) {
	buffer_append_string(displayqr->output, string);
}

/**
 * Display generated QR data to stdout
 *
 * @param displayqr DisplayqR object instance
 */
void displayqr_output(DisplayQR * displayqr) {
	if (displayqr->output) {
		if (isatty(1)) {
			buffer_print(displayqr->output);
		}
	}
}

/**
 * 
 *
 * @param 
 * @return 
 */
Buffer * displayqr_get_output(DisplayQR * displayqr) {
	return displayqr->output;
}

/**
 * Internal function used by displayqr_generate
 * Generates a string containing the qr code using DOS characters.
 * https://en.wikipedia.org/wiki/Code_page_437
 *
 * This is expected to work in a dos terminal with black background and
 * white letters
 *
 * @param displayqr The DisplayQR where the bitmap will be output
 * @param qrcode The QRcode where the data was generated
 */
void displayqr_generate_dos(DisplayQR* displayqr, QRcode* qrcode) {
	char *ptr = (char *)qrcode->data;
	int i;
	int x;
	int y;
	for (i = 0; i < qrcode->width + 4; ++i) {
		displayqr_printf(displayqr, DOS_EMPTY);
	}
	displayqr_puts(displayqr, "");
	for (y = 0; y < qrcode->width; y += 2) {
		displayqr_printf(displayqr, DOS_EMPTY DOS_EMPTY);
		for (x = 0; x < qrcode->width; ++x) {
			int top = qrcode->data[y*qrcode->width + x] & 1;
			int bottom = 0;
			if (y + 1 < qrcode->width) {
				bottom = qrcode->data[(y + 1)*qrcode->width + x] & 1;
			}
			if (top) {
				if (bottom) {
					displayqr_printf(displayqr, DOS_BOTH);
				}
				else {
					displayqr_printf(displayqr, DOS_TOPHALF);
				}
			}
			else {
				if (bottom) {
					displayqr_printf(displayqr, DOS_BOTTOMHALF);
				}
				else {
					displayqr_printf(displayqr, DOS_EMPTY);
				}
			}
		}
		displayqr_puts(displayqr, DOS_EMPTY DOS_EMPTY);
	}
	for (i = 0; i < qrcode->width + 4; ++i) {
		displayqr_printf(displayqr, DOS_EMPTY);
	}
	displayqr_puts(displayqr, "");
}

/**
 * Internal function used by displayqr_generate
 * Generates a string containing the qr code using utf8 characters.
 * The characters are colored using ANSI color codes
 *
 * @param displayqr The DisplayQR where the bitmap will be output
 * @param qrcode The QRcode where the data was generated
 */
void displayqr_generate_color_utf8(DisplayQR* displayqr, QRcode* qrcode) {
	char *ptr = (char *)qrcode->data;
	int i;
	int y;
	int x;
	// Drawing the QRCode with Unicode block elements is desirable as
	// it makes the code much smaller, which is often easier to scan.
	// Unfortunately, many terminal emulators do not display these
	// Unicode characters properly.
	displayqr_printf(displayqr, ANSI_BLACKONGREY);
	for (i = 0; i < qrcode->width + 4; ++i) {
		displayqr_printf(displayqr, " ");
	}
	displayqr_puts(displayqr, ANSI_RESET);
	for (y = 0; y < qrcode->width; y += 2) {
		displayqr_printf(displayqr, ANSI_BLACKONGREY"  ");
		for (x = 0; x < qrcode->width; ++x) {
			int top = qrcode->data[y*qrcode->width + x] & 1;
			int bottom = 0;
			if (y+1 < qrcode->width) {
				bottom = qrcode->data[(y+1)*qrcode->width + x] & 1;
			}
			if (top) {
				if (bottom) {
					displayqr_printf(displayqr, UTF8_BOTH);
				} else {
					displayqr_printf(displayqr, UTF8_TOPHALF);
				}
			} else {
				if (bottom) {
					displayqr_printf(displayqr, UTF8_BOTTOMHALF);
				} else {
					displayqr_printf(displayqr, " ");
				}
			}
		}
		displayqr_puts(displayqr, "  "ANSI_RESET);
	}
	displayqr_printf(displayqr, ANSI_BLACKONGREY);
	for (i = 0; i < qrcode->width + 4; ++i) {
		displayqr_printf(displayqr, " ");
	}
	displayqr_puts(displayqr, ANSI_RESET);
}

/**
 * Internal function used by displayqr_generate
 * Generates a string containing the qr code using spaces.
 * We use two spaces for each dot, side by side, and they are colored
 * using ANSI color codes
 *
 * @param displayqr The DisplayQR where the bitmap will be output
 * @param qrcode The QRcode where the data was generated
 */
void displayqr_generate_color_spaces(DisplayQR* displayqr, QRcode* qrcode) {
	char *ptr = (char *)qrcode->data;
	int i;
	int y;
	int x;
	for (i = 0; i < 2; ++i) {
		displayqr_printf(displayqr, ANSI_BLACKONGREY);
		for (x = 0; x < qrcode->width + 4; ++x) displayqr_printf(displayqr, "  " );
		displayqr_puts(displayqr, ANSI_RESET);
	}
	for (y = 0; y < qrcode->width; ++y) {
		displayqr_printf(displayqr, ANSI_BLACKONGREY"    ");
		int isBlack = 0;
		for (x = 0; x < qrcode->width; ++x) {
			if (*ptr++ & 1) {
				if (!isBlack) {
					displayqr_printf(displayqr, ANSI_BLACK);
				}
				isBlack = 1;
			} else {
				if (isBlack) {
					displayqr_printf(displayqr, ANSI_WHITE);
				}
				isBlack = 0;
			}
			displayqr_printf(displayqr, "  ");
		}
		if (isBlack) {
			displayqr_printf(displayqr, ANSI_WHITE);
		}
		displayqr_puts(displayqr, "    "ANSI_RESET);
	}
	for (i = 0; i < 2; ++i) {
		displayqr_printf(displayqr, ANSI_BLACKONGREY);
		for (x = 0; x < qrcode->width + 4; ++x) displayqr_printf(displayqr, "  ");
		displayqr_puts(displayqr, ANSI_RESET);
	}
}

/**
 * Internal function for displayqr_monochrome_bitmap
 * It appends a single bit for a byte variable, and appends the whole byte to a buffer if completed
 *
 * @param buffer Buffer to be appended if byte is complete
 * @param byte single byte variable where we as keeping the constructed byte
 * @param count how many bits of byte where already filled. This should always be less than 8, otherwise
 * 				byte has a complete byte that should be in buffer.
 * @param bit The bit to be appended. 0 or 1.
 */
void append_bit(Buffer * buffer, unsigned char * byte, int * count, char bit) {
	if (bit & 1) {
		// Black
		(*count)++;
	}
	else {
		// White
		*byte |= (1 << (7 - *count));
		(*count)++;
	}

	if (*count == 8) {
		// If we completed a byte, append to the output
		buffer_append(buffer, byte, 1);
		*count = 0;
		*byte = 0x00;
	}
}

/**
 * Internal function used by displayqr_generate
 * Generates a buffer containing a monochrome bitmap according to Microsoft documentation
 * https://msdn.microsoft.com/en-us/library/windows/desktop/dd162461(v=vs.85).aspx
 *
 * @param displayqr The DisplayQR where the bitmap will be output
 * @param qrcode The QRcode where the data was generated
 */
void displayqr_monochrome_bitmap(DisplayQR* displayqr, QRcode* qrcode) {
	char *ptr = (char *)qrcode->data;
	int i;
	int y;
	int x;
	unsigned char byte = 0x00;
	int count = 0;
	int pixels = 1;

	if (displayqr->mode_param != NULL) {
		pixels = *(int*)displayqr->mode_param;
	}

	// According to Microsoft https://msdn.microsoft.com/en-us/library/windows/desktop/dd162962(v=vs.85).aspx
	// The array should be WORD aligned.
	// In Windows, WORD is 16 bits, and DWORD is 32 bits.
	const int alignment = 16;

	Buffer * row = buffer_new(0);

	// Two white rows
	for (i = 0; i < 2 * pixels; i++) {
		// Set all the bits as 1. This might overshoot in the last byte, but this is intended
		for (x = 0; x < (qrcode->width + 4) * pixels; x += 8) {
			buffer_append(displayqr->output, "\xff", 1);
		}
		// Append zero bytes if not aligned
		while (buffer_get_pos(displayqr->output) % (alignment >> 3) != 0) {
			buffer_append(displayqr->output, "\x00", 1);
		}
	}

	// Border
	for (i = 0; i < 2 * pixels; i++) {
		append_bit(row, &byte, &count, 0);
	}

	for (y = 0; y < qrcode->width * qrcode->width; y++) {
		for (i = 0; i < pixels; i++)
		{
			append_bit(row, &byte, &count, *ptr);
		}

		ptr++;
		
		if ((y + 1) % qrcode->width == 0) // Last pixel of a row
		{
			// Border
			for (i = 0; i < 2 * pixels; i++)
			{
				append_bit(row, &byte, &count, 0);
			}
			
			
			if (count > 0)
			{
				buffer_append(row, &byte, 1);
				count = 0;
				byte = 0x00;
			}

			// Append zeroes if not aligned
			while (buffer_get_pos(row) % (alignment / 8) != 0) {
					buffer_append(row, "\x00", 1);
			}

			for (i = 0; i < pixels; i++)
			{
				buffer_append_buffer(displayqr->output, row);
			}
			buffer_clear(row);

			// Border
			for (i = 0; i < 2 * pixels; i++)
			{
				append_bit(row, &byte, &count, 0);
			}
		}


	}

	// Two white rows again
	for (i = 0; i < 2 * pixels; i++) {
		for (x = 0; x < (qrcode->width + 4) * pixels; x += 8) {
			buffer_append(displayqr->output, "\xff", 1);
		}
		while (buffer_get_pos(displayqr->output) % (alignment / 8) != 0) {
			buffer_append(displayqr->output, "\x00", 1);
		}	
	}

	buffer_delete(row);
}

/**
 * Internal function used by displayqr_generate
 * Generates a string containing the qr code using utf8 characters 
 * The string can be printed with black characters in a white background with
 * monospace font. Each character is two qrcode bits.
 *
 * @param displayqr The DisplayQR where the bitmap will be output
 * @param qrcode The QRcode where the data was generated
 */
void displayqr_generate_colorless_utf8(DisplayQR* displayqr, QRcode* qrcode) {
	char *ptr = (char *)qrcode->data;
	int i;
	int y;
	int x;
	for (y = 0; y < qrcode->width; y += 2) {
		for (x = 0; x < qrcode->width; ++x) {
			int top = qrcode->data[y*qrcode->width + x] & 1;
			int bottom = 0;
			if (y+1 < qrcode->width) {
				bottom = qrcode->data[(y+1)*qrcode->width + x] & 1;
			}
			if (top) {
				if (bottom) {
					displayqr_printf(displayqr, UTF8_BOTH);
				} else {
					displayqr_printf(displayqr, UTF8_TOPHALF);
				}
			} else {
				if (bottom) {
					displayqr_printf(displayqr, UTF8_BOTTOMHALF);
				} else {
					displayqr_printf(displayqr, " ");
				}
			}
		}
		displayqr_puts(displayqr, "");
	}
}

/**
 * Generate a QR code from the provided text. The QR code is generated as
 * a series of either ANSI or UTF8 ASCII chracters.
 *
 * @param displayqr DisplayqR object instance
 * @param text The text to encode into the QR code
 * @return the side size of the qr code
 */
size_t displayqr_generate(DisplayQR * displayqr, const char * text) {
	size_t ret = 0;

	if (displayqr->qr_mode != QRMODE_NONE) {
		buffer_clear(displayqr->output);
		QRcode *qrcode = QRcode_encodeString8bit(text, 0, 1);
		// Output QRCode using ANSI colors. Instead of black on white, we
		// output black on grey, as that works independently of whether the
		// user runs his terminals in a black on white or white on black color
		// scheme.
		// But this requires that we print a border around the entire QR Code.
		// Otherwise, readers won't be able to recognize it.
		switch (displayqr->qr_mode) {
			case QRMODE_COLOR_UTF8:
				displayqr_generate_color_utf8(displayqr, qrcode);	
				break;
			case QRMODE_COLORLESS_UTF8:
				displayqr_generate_colorless_utf8(displayqr, qrcode);
				break;
			case QRMODE_DOS:
				displayqr_generate_dos(displayqr, qrcode);
				break;
			case QRMODE_MONOCHROME_BITMAP:
				displayqr_monochrome_bitmap(displayqr, qrcode);
				break;		
			default:
				displayqr_generate_color_spaces(displayqr, qrcode); 
		}

		ret = qrcode->width;

		QRcode_free(qrcode);
	}

	return ret;
}

