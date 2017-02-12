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
//#include "pico/sigmaprover.h"


bool sigmaprover_session(RVPChannel * channel) {
	
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
    
    buffer = buffer_new(8);
    
    buffer_append_string(buffer, "test");

    result = channel_write_buffer(channel, buffer);
    
    return result;
}

