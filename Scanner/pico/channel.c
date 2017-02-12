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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "curl.h"
#include <openssl/rand.h>
#include "pico/debug.h"
#include "pico/buffer.h"
#include "pico/curlsupport.h"
#include "pico/rvpbuffer.h"
#include "pico/log.h"
#include "pico/channel.h"

#if !defined(WINDOWS) && (defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__))
#define WINDOWS
#endif

// Defines

#define RVP_URL	"http://rendezvous.mypico.org"
#define CHANNEL "/channel/"
#define CHANNEL_NAME_BYTES 16
#define CHANNEL_TIMEOUT (38)

#define PICO_SERVICE_UUID "00000000-0000-0000-0000-9C2A70314900"

// Structure definitions

/**
 * Structure containing the private fields of the class.
 */
struct _RVPChannel {
	char * name;
	time_t time_started;
	double timeout;

	void * data;

	ChannelDelete del;
	ChannelOpen open;
	ChannelClose close;
	ChannelWrite write;
	ChannelRead read;
	ChannelGetUrl get_url;
	ChannelSocketNeeded socket_needed;
};


typedef struct _BTChannel BTChannel;

// Function prototypes

int channel_xferinfofunction (void * clientp, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow);
bool channel_read_rvp(RVPChannel * channel, Buffer * buffer);
bool channel_write_rvp(RVPChannel * channel, char * data, int length);
void channel_get_url_rvp(RVPChannel * channel, Buffer * buffer);

bool channel_delete_bt(RVPChannel * channel);
bool channel_open_bt(RVPChannel * channel);
bool channel_close_bt(RVPChannel * channel);
bool channel_write_bt(RVPChannel * channel, char * data, int length);
bool channel_read_bt(RVPChannel * channel, Buffer * buffer);
void channel_get_url_bt(RVPChannel * channel, Buffer * buffer);
bool channel_socket_needed_bt(RVPChannel * channel, int socket);

// Function definitions

/**
 * Create a new instance of the class and connect to the named channel. To
 * create a new channel, use channel_new() instead.
 *
 * @param name Name of the Rendezvous Point channel to connect to.
 * @return The newly created object.
 */
RVPChannel * channel_connect(const char * name) {
	RVPChannel * channel;
	int nameLen;

	channel = CALLOC(sizeof(RVPChannel), 1);
	nameLen = strlen(name);
	channel->name = CALLOC(sizeof(char), nameLen + 1);
	strncpy(channel->name, name, nameLen);
	channel->name[nameLen] = '\0';
	channel->time_started = time(NULL);
	channel->timeout = CHANNEL_TIMEOUT;

	channel->del = NULL;
	channel->open = NULL;
	channel->close = NULL;
	channel->write = channel_write_rvp;
	channel->read = channel_read_rvp;
	channel->get_url = channel_get_url_rvp;
	channel->socket_needed = NULL;

	channel->data = NULL;

	return channel;
}

/**
 * Create a new instance of the class, which will also open a new channel with
 * the Rendezvous Point. Use channel_connect() if you need to connect to an 
 * existing channel instead.
 *
 * @return Structure summarising the newly created channel
 */
RVPChannel * channel_new() {
	int res;
	int i;
	RVPChannel * channel;
	unsigned char random_bytes[CHANNEL_NAME_BYTES];

	channel = CALLOC(sizeof(RVPChannel), 1);

	res = RAND_bytes(random_bytes, CHANNEL_NAME_BYTES); 

	if (res) {
		channel->name = CALLOC(sizeof(char), CHANNEL_NAME_BYTES * 2 + 1);
		for (i = 0; i < CHANNEL_NAME_BYTES; i++) {
			sprintf(channel->name + i * 2, "%02x", random_bytes[i]);
		}
	}
	channel->time_started = time(NULL);
	channel->timeout = CHANNEL_TIMEOUT;

	channel->del = NULL;
	channel->open = NULL;
	channel->close = NULL;
	channel->write = channel_write_rvp;
	channel->read = channel_read_rvp;
	channel->get_url = channel_get_url_rvp;
	channel->socket_needed = NULL;

	channel->data = NULL;

	return channel;
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param channel The object to free.
 */
void channel_delete(RVPChannel * channel) {
	if (channel) {
		if (channel->del) {
			channel->del(channel);
		}

		if (channel->name) {
			FREE (channel->name);
		}
		FREE (channel);
		channel->time_started = 0;
	}
}

/**
 * Reset the timeout on a channel. Once called, the channel should be
 * subsequently kept open for the standard length of time previously set
 * using channel_set_timeout().
 *
 * @param channel The channel to reset the timeout on.
 */
void channel_reset_timeout(RVPChannel * channel) {
	if (channel) {
		channel->time_started = time(NULL);
	}
}

/**
 * Set the timeout duration for the channel, measured in milliseconds.
 *
 * @param channel The channel to set the timeout duration on.
 * @param timeout The timeout duration in milliseconds.
 */
void channel_set_timeout(RVPChannel * channel, double timeout) {
	if (channel) {
		channel->timeout = timeout;
	}
}

/**
 * Get the timeout duration for the channel, measured in milliseconds.
 *
 * @param channel The channel to get the timeout duration for.
 * @return The timeout duration in milliseconds.
 */
double channel_get_timeout(RVPChannel * channel) {
	double ret = 0.0;

	if (channel) {
		ret = channel->timeout;
	}

	return ret;
}

/**
 * Configure the channels virtual functions. Theses should be set to overload
 * the behaviour of the channel (e.g. switching from a Rendezvous Point
 * connection to a Bluetooth connection).
 *
 * @param channel The channel to set the virtual functions on.
 * @param del Virtual function called when the channel is deleted.
 * @param open Virtual function to overload channel_open().
 * @param close Virtual function to overlaod channel_close().
 * @param write Virtual function to overload channel_write().
 * @param read Virtual function to overload channel_read().
 * @param get_url Virtual function to overload channel_get_url().
 */
void channel_set_functions(RVPChannel * channel, ChannelDelete del, ChannelOpen open, ChannelClose close, ChannelWrite write, ChannelRead read, ChannelGetUrl get_url) {
	if (channel) {
		channel->del = del;
		channel->open = open;
		channel->close = close;
		channel->write = write;
		channel->read = read;
		channel->get_url = get_url;
	}
}

/**
 * Configure the socket_needed overload function.
 *
 * @param channel The channel to set the virtual function on.
 */
void channel_set_socket_needed_functions(RVPChannel * channel, ChannelSocketNeeded socket_needed) {
	if (channel) {
		channel->socket_needed = socket_needed;
	}
}

/**
 * Set the data object to be stored in the channel for use by overloaded
 * functions.
 *
 * @param channel The channel to set the data object for.
 * @param data The data object to be passed to overloaded functions. This
 *        should be re-cast to the appropriate type inside the functions.
 *        This can be NULL (but must be handled by the overloaded functions).
 */
void channel_set_data(RVPChannel * channel, void * data) {
	if (channel) {
		channel->data = data;
	}
}

/**
 * Get the data object stored in the channel for use by overloaded
 * functions.
 *
 * @param channel The channel to get the data object from.
 * @return The data object.
 */
void * channel_get_data(RVPChannel * channel) {
	void* ret = NULL;
	
	if (channel) {
		ret = channel->data;
	}

	return ret;
}

/**
 * Perform actions needed to open the channel.
 *
 * @param channel The channel to open
 * @return True if the channel was successfully opened; false otherwise
 */
bool channel_open(RVPChannel * channel) {
	bool result;

	result = false;
	if (channel && channel->open) {
		result = channel->open(channel);
	}

	return result;
}

/**
 * Perform actions needed to close the channel.
 *
 * @param channel The channel to close
 * @return True if the channel was successfully closed; false otherwise
 */
bool channel_close(RVPChannel * channel) {
	bool result;

	result = false;
	if (channel && channel->close) {
		result = channel->close(channel);
	}

	return result;
}

/**
 * Read data from a channel. The call will block until there is some data to
 * to read. The nature of Rendezvous Point channels is that they are discrete,
 * so all of the data sent to the channel will be read in one go, hence this
 * call will always either timeout, or return the full message.
 *
 * @param channel The Rendezvous Point channel to receive from
 * @param buffer The buffer to store the received data into
 * @return true if data was read successfully from the channel, false o/w. 
 *         Note that the Rendezvous Point will send its own message on timeout, 
 *         so a timeout will also return true (the message can be read to
 *         determine that a timeout occurred). 
 */
bool channel_read(RVPChannel * channel, Buffer * buffer) {
	bool result;

	result = false;
	if (channel && channel->read) {
		result = channel->read(channel, buffer);
	}

	return result;
}

/**
 * Write data to a channel. The call will block until all of the data has been
 * written. Because Rendezvous Point channels are discrete, the receiver will
 * read all of the data before the next write can be made.
 *
 * @param channel The Rendezvous Point channel to send to
 * @param data The byte data to send
 * @param length The length of data to send
 * @return true if data was sent successfully to the channel, false o/w.
 */
bool channel_write(RVPChannel * channel, char * data, int length) {
	bool result;

	result = false;
	if (channel && channel->write) {
		result = channel->write(channel, data, length);
	}

	return result;
}

/**
 * Return the full URL of the channel, including the hostname.
 *
 * @param channel The channel to get the URL of
 * @return The URL of the channel
 */
void channel_get_url(RVPChannel * channel, Buffer * buffer) {
	if (channel && channel->get_url) {
		channel->get_url(channel, buffer);
	}
}

/**
 * Read data from a channel. The call will block until there is some data to
 * to read. The nature of Rendezvous Point channels is that they are discrete,
 * so all of the data sent to the channel will be read in one go, hence this
 * call will always either timeout, or return the full message.
 *
 * @param channel The Rendezvous Point channel to receive from
 * @param buffer The buffer to store the received data into
 * @return true if data was read successfully from the channel, false o/w.
 *         Note that the Rendezvous Point will send its own message on timeout,
 *         so a timeout will also return true (the message can be read to
 *         determine that a timeout occurred).
 */
bool channel_read_rvp(RVPChannel * channel, Buffer * buffer) {
	CURL * curl;
	CURLcode res;
	char * url;
	size_t url_length;
	RVPBuffer * rvpbuffer;
	bool result;

	result = true;
	curl = curl_easy_init();

	if (curl) {
		url_length = snprintf(NULL, 0, RVP_URL CHANNEL "%s", channel->name);
		url = MALLOC(url_length + 1);
		snprintf(url, url_length + 1, RVP_URL CHANNEL "%s", channel->name);
		//printf("Reading from: %s\n", url);
		curl_easy_setopt(curl, CURLOPT_URL, url);
		FREE(url);

		rvpbuffer = rvpbuffer_new(buffer);
		///curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "name=daniel&project=curl");
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, rvpbuffer_write);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)rvpbuffer);

		//curl_easy_setopt(curl, CURLOPT_TIMEOUT, 40);
		channel_reset_timeout(channel);
		curl_easy_setopt(curl, CURLOPT_XFERINFODATA, (void *)channel);
		curl_easy_setopt(curl, CURLOPT_XFERINFOFUNCTION, channel_xferinfofunction);
		curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 0);

		res = curl_easy_perform(curl);
		if (res != CURLE_OK) {
			LOG(LOG_ERR, "Error reading from Rendezvous channel: %s\n", curl_easy_strerror(res));
			result = false;
		}
		rvpbuffer_delete(rvpbuffer);
		
		curl_easy_cleanup(curl);
	}
	else {
		result = false;
	}
	
	return result;
}

/**
 * Write data to a channel. The call will block until all of the data has been
 * written. Because Rendezvous Point channels are discrete, the receiver will
 * read all of the data before the next write can be made.
 *
 * @param channel The Rendezvous Point channel to send to
 * @param data The byte data to send
 * @param length The length of data to send
 * @return true if data was sent successfully to the channel, false o/w. 
 */
bool channel_write_rvp(RVPChannel * channel, char * data, int length) {
	CURL * curl;
	CURLcode res;
	char * url;
	size_t url_length;
	bool result;

	result = true;
	curl = curl_easy_init();

	if (curl) {
		url_length = snprintf(NULL, 0, RVP_URL CHANNEL "%s", channel->name);
		url = MALLOC(url_length + 1);
		snprintf(url, url_length + 1, RVP_URL CHANNEL "%s", channel->name);
		//printf("Writing to: %s\n", url);
		curl_easy_setopt(curl, CURLOPT_URL, url);
		FREE(url);

		//curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
		//curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)buffer);

		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);
		curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, length);

		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, log_data);

		//curl_easy_setopt(curl, CURLOPT_TIMEOUT, 240);
		channel_reset_timeout(channel);
		curl_easy_setopt(curl, CURLOPT_XFERINFODATA, (void *)channel);
		curl_easy_setopt(curl, CURLOPT_XFERINFOFUNCTION, channel_xferinfofunction);
		curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 0);

		res = curl_easy_perform(curl);
		if (res != CURLE_OK) {
			LOG(LOG_ERR, "Error writing to Rendezvous channel: %s\n", curl_easy_strerror(res));
			result = false;
		}
		
		curl_easy_cleanup(curl);
	}
	else {
		result = false;
	}
	
	return result;
}

/**
 * Write data to a channel. The call will block until all of the data has been
 * written. Because Rendezvous Point channels are discrete, the receiver will
 * read all of the data before the next write can be made.
 *
 * @param channel The Rendezvous Point channel to send to
 * @param buffer The buffer containing the data to send
 * @return true if data was sent successfully to the channel, false o/w. 
 */
bool channel_write_buffer(RVPChannel * channel, Buffer * buffer) {
	Buffer * prefixed;
	char * data;
	size_t length;
	bool result;

	length = buffer_get_pos(buffer);
	prefixed = buffer_new(length + 4);
	data = buffer_get_buffer(prefixed);
	data[0] = ((char *)(& length))[3];
	data[1] = ((char *)(& length))[2];
	data[2] = ((char *)(& length))[1];
	data[3] = ((char *)(& length))[0];
	buffer_set_pos(prefixed, 4);
	buffer_append_buffer(prefixed, buffer);
	length += 4;

	result = channel_write(channel, data, length);
	
	return result;
}

/**
 * Return the name of the channel. This is the tail of the URL without the
 * hostname or channel prefix, so will likely be a random string generated
 * by the server to represent this channel.
 *
 * @param channel The channel to get the name of
 * @return The name of the channel
 */
char const * channel_get_name(RVPChannel * channel) {
	return channel->name;
}

/**
 * Set the name of the channel.
 *
 * @param channel The channel to set the name of.
 * @param name The name of the channel.
 */
void channel_set_name(RVPChannel * channel, char const * name) {
	int nameLen;

	nameLen = strlen(name);
	channel->name = REALLOC(channel->name, nameLen + 1);
	strncpy(channel->name, name, nameLen);
	channel->name[nameLen] = '\0';
}

/**
 * Return the full URL of the channel, including the hostname.
 *
 * @param channel The channel to get the URL of
 * @return The URL of the channel
 */
void channel_get_url_rvp(RVPChannel * channel, Buffer * buffer) {
	if (channel && (channel->name)) {
		buffer_append_string(buffer, RVP_URL CHANNEL);
		buffer_append_string(buffer, channel->name);
	}
}

/**
 * Establish whether a particular socket is currently needed for the operation
 * of the channel. This is useful during the daemonize process, where all
 * sockets would otherwise be closed. This allows certain sockets to be kept
 * open.
 *
 * @param channel The channel to check the needed sockets for.
 * @param socket The socket to check for.
 * @return true if the socket is needed, false o/w.
 */
bool channel_socket_needed(RVPChannel * channel, int socket) {
	bool result;

	result = false;
	if (channel->socket_needed) {
		result = channel->socket_needed(channel, socket);
	}

	return result;
}

/**
 * Internal callback function provided to libcurl that will timeout the
 * connection after a certain period of calendar (real-world) time. The time
 * out period is set in the RVPChannel structure, but the default is currently
 * 40s to match the default Rendezvous Point timeout.
 * See the libcurl documentation for more details about this callback:
 * https://curl.haxx.se/libcurl/c/CURLOPT_XFERINFOFUNCTION.html
 *
 * @param clientp Pointer to the user data passed by us to libcurl. This is
 *        expected to be the RVPChannel structure for the channel.
 * @param dlnow The number of bytes downloaded so far.
 * @param ultotal The total number of bytes libcurl expects to upload in this
 *        transfer.
 * @param ulnow The number of bytes uploaded so far.
 * @return 0 to continue, any other value causes libcurl to abort the transfer
 *         and return
 */
int channel_xferinfofunction (void * clientp, curl_off_t dlnow, curl_off_t ultotal, curl_off_t ulnow) {
	RVPChannel * channel = (RVPChannel *)clientp;
	int result;
	double open;
	time_t now;

	result = 0;
	now = time(NULL);
	open = difftime(now, channel->time_started);

	if (open > channel->timeout) {
		// Cancel the transfer
		result = 1;
	}

	return result;
}

