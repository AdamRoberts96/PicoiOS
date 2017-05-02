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
#include "pico/cryptosupport.h"
#include "pico/json.h"
#include <string.h>

bool sigmaprover(RVPChannel * channel, Shared * shared, const char * qrData) {
	
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
    Json * qrJson;
    
    buffer = buffer_new(0);
    
    qrJson = json_new();
    json_deserialize_string(qrJson, qrData, strlen(qrData));
    
    json_serialize_buffer(qrJson, buffer);
    
    
    buffer_clear(buffer);

    
    messagestart = messagestart_new();
    messagestart_set(messagestart, shared);
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
    
    messagestatus = messagestatus_new();
    messagestatus_set_prover(messagestatus, shared);
    result = messagesstatus_deserialize(messagestatus, buffer);
    char * test = shared_get_extra_data(shared);
    return result;
}

