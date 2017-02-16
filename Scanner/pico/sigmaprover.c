/**
 * @file
 * @author  Adam Roberts <ar752@cam.ac.uk>
 * @version 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pico/debug.h"
#include "pico/shared.h"
#include "pico/channel.h"
#include "pico/messagestart.h"
#include "pico/messageserviceauth.h"
#include "pico/messagepicoauth.h"
#include "pico/messagestatus.h"
#include "pico/log.h"
#include "pico/users.h"
#include "pico/sigmaprover.h"


bool sigmaprover(RVPChannel * channel, Shared * shared) {
	
    KeyPair * serviceEphemeralKey;
	Buffer * buffer;
	MessageStart * messagestart;
	MessageServiceAuth * messageserviceauth;
	MessagePicoAuth * messagepicoauth;
	MessageStatus * messagestatus;
	bool result;
	Buffer const * username;
	Buffer const * symmetricKey;
	EC_KEY * picoIdentityPublicKey;
	char messageStatus;
    
    messagestart = messagestart_new();
    messagestart_set(messagestart, shared);
    buffer = buffer_new(0);
    messagestart_serialize(messagestart, buffer);
    channel_write_buffer(channel, buffer);
    buffer_clear(buffer);
    
    channel_read(channel, buffer);
    
    MessageServiceAuth * serviceauthmessage;
    
    serviceauthmessage = messageserviceauth_new();
    messageserviceauth_set(serviceauthmessage, shared, 0);
    messageserviceauth_deserialize(serviceauthmessage, buffer);
    
    messagepicoauth = messagepicoauth_new();
    messagepicoauth_set(messagepicoauth, shared);
    buffer_clear(buffer);
    messagepicoauth_serialize(messagepicoauth, buffer);
    channel_write_buffer(channel, buffer);
    
    buffer_clear(buffer);
    channel_read(channel, buffer);
    
    
    return result;
}

