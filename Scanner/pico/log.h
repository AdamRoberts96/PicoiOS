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
 * The log interface provides various macros for logging, which simply
 * wrap the standard syslog calls.
 *
 */

#ifndef __LOG_H
#define __LOG_H (1)

#if defined(_WIN32) || defined(_WIN64) 
// Defines
#define LOG(level_, ...) printf(__VA_ARGS__);
#else
#include <syslog.h>

// Defines

#if !defined(LOG_AUTHPRIV) && defined(LOG_AUTH)
#define LOG_AUTHPRIV LOG_AUTH
#endif

//#define LOG(level_, ...) printf(__VA_ARGS__);
#define LOG(level_, ...) syslog((level_), __VA_ARGS__)
#endif

// Structure definitions

// Function prototypes

// Function definitions

#endif

