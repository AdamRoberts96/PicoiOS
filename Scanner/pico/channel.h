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
 * The channel class provides support for creating and using channels via
 * the Pico Rendezvous Point. It uses curl (HTTP) as the underlying means of
 * interacting with the Rendezvous Point.
 *
 */

#ifndef __CHANNEL_H
#define __CHANNEL_H (1)
#endif

#include "pico/buffer.h"
#include "pico/dllpublic.h"

// Defines

// Structure definitions

typedef struct _RVPChannel RVPChannel;
typedef struct _Buffer Buffer;

typedef bool (*ChannelDelete)(RVPChannel * channel);
typedef bool (*ChannelOpen)(RVPChannel * channel);
typedef bool (*ChannelClose)(RVPChannel * channel);
typedef bool (*ChannelWrite)(RVPChannel * channel, char * data, int length);
typedef bool (*ChannelRead)(RVPChannel * channel, Buffer * buffer);
typedef void (*ChannelGetUrl)(RVPChannel * channel, Buffer * buffer);
typedef bool (*ChannelSocketNeeded)(RVPChannel * channel, int socket);

// Function prototypes

DLL_PUBLIC RVPChannel * channel_connect(const char * name);
DLL_PUBLIC RVPChannel * channel_new();
DLL_PUBLIC void channel_delete(RVPChannel * channel);

DLL_PUBLIC void channel_set_data(RVPChannel * channel, void * data);
DLL_PUBLIC void * channel_get_data(RVPChannel * channel);

DLL_PUBLIC void channel_set_functions(RVPChannel * channel, ChannelDelete del, ChannelOpen open, ChannelClose close, ChannelWrite write, ChannelRead read, ChannelGetUrl get_url);
DLL_PUBLIC void channel_set_socket_needed_functions(RVPChannel * channel, ChannelSocketNeeded socket_needed);

DLL_PUBLIC bool channel_open(RVPChannel * channel);
DLL_PUBLIC bool channel_close(RVPChannel * channel);
DLL_PUBLIC bool channel_read(RVPChannel * channel, Buffer * buffer);
DLL_PUBLIC bool channel_write(RVPChannel * channel, char * data, int length);
DLL_PUBLIC bool channel_write_buffer(RVPChannel * channel, Buffer * buffer);
DLL_PUBLIC char const * channel_get_name(RVPChannel * channel);
DLL_PUBLIC void channel_set_name(RVPChannel * channel, char const * name);
DLL_PUBLIC void channel_get_url(RVPChannel * channel, Buffer * buffer);
DLL_PUBLIC void channel_reset_timeout(RVPChannel * channel);
DLL_PUBLIC void channel_set_timeout(RVPChannel * channel, double timeout);
DLL_PUBLIC double channel_get_timeout(RVPChannel * channel);
DLL_PUBLIC bool channel_socket_needed(RVPChannel * channel, int socket);

// Function definitions

