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
 * The json class provides serializing and deserializing for converting 
 * data in key-value pairs between json text and a linked list.
 * At present strings, integers and nested json structures are supported
 * but arrays are not supported (they're not needed by the Pico protocol).
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pico/debug.h"
#include "pico/log.h"
#include "pico/json.h"

// Defines

#define JSON_DECIMAL_FORMAT "%g"

// Structure definitions

typedef struct _KeyValues KeyValues;

/**
 * Structure a key-value pair.
 */
struct _KeyValues {
	char * key;
	JSONTYPE type;
	char * value_string;
	KeyValues * value_sublist;
	double value_decimal;
	
	KeyValues * next;
};

/**
 * Structure containing the private fields of the class.
 */
struct _Json {
	KeyValues * keyvalues;
};

typedef enum _DESERSTATE {
	DESERSTATE_INVALID = -1,

	DESERSTATE_NONE,
	DESERSTATE_LIST,
	DESERSTATE_KEYSINGLE,
	DESERSTATE_KEY,
	DESERSTATE_VALUESTRING,
	DESERSTATE_VALUEDECIMAL,
	DESERSTATE_POSTKEY,
	DESERSTATE_PREVALUE,
	DESERSTATE_POSTVALUE,
	DESERSTATE_ERROR,
	DESERSTATE_DONE,

	DESERSTATE_NUM
} DESERSTATE;

// Function prototypes

size_t keyvalues_serialize_size(KeyValues * keyvalues);
size_t keyvalues_serialize(KeyValues * keyvalues, char * buffer, size_t size);
size_t keyvalues_deserialize(KeyValues ** keyvalues, char const * json_string, size_t length);
void keyvalues_delete(KeyValues * keyvalues);
KeyValues * keyvalues_add_string(KeyValues * keyvalues, char const * key, char const * value);
KeyValues * keyvalues_add_buffer(KeyValues * keyvalues, char const * key, Buffer const * value);
KeyValues * keyvalues_add_decimal(KeyValues * keyvalues, char const * key, double value);
KeyValues * keyvalues_add_sublist(KeyValues * keyvalues, char const * key, KeyValues * value);
KeyValues * keyvalues_find(KeyValues * keyvalues, char const * key);

// Function definitions

/**
 * Create a new instance of the class.
 *
 * @return The newly created object.
 */
Json * json_new() {
	Json * json;
	
	json = CALLOC(sizeof(Json), 1);
	json->keyvalues = NULL;
	
	return json;
}

/**
 * Delete an instance of the class, freeing up the memory allocated to it.
 *
 * @param json The object to free.
 */
void json_delete(Json * json) {
	if (json) {
		if (json->keyvalues) {
			keyvalues_delete(json->keyvalues);
		}
		FREE (json);
	}
}

/**
 * Add a key-value pair to the data items where the value is of string type.
 * As a string, json_get_type() will return JSONTYPE_STRING for this item.
 *
 * @param json The json object
 * @param key Null-terminated string representing the key
 * @param value Null-terminated string value to store against the key
 */
void json_add_string(Json * json, char const * key, char const * value) {
	json->keyvalues = keyvalues_add_string(json->keyvalues, key, value);
}

/**
 * Add a key-value pair to the data items where the value is of decimal type.
 * As a decminal, json_get_type() will return JSONTYPE_DECIMAL for this item.
 *
 * @param json The json object
 * @param key Null-terminated string representing the key
 * @param value The decimal value to store against the key
 */
void json_add_decimal(Json * json, char const * key, double value) {
	json->keyvalues = keyvalues_add_decimal(json->keyvalues, key, value);
}

/**
 * Add a key-value pair to the data items where the value is of string type
 * and the data is taken from a buffer.
 * As a string, json_get_type() will return JSONTYPE_STRING for this item.
 *
 * @param json The json object
 * @param key Null-terminated string representing the key
 * @param value Buffer cocntaining the value to store against the key
 */
void json_add_buffer(Json * json, char const * key, Buffer const * value) {
	json->keyvalues = keyvalues_add_buffer(json->keyvalues, key, value);
}

/**
 * Add a key-value pair to the data items where the value is a sublist of the
 * current list.
 * As a sublist, json_get_type() will return JSONTYPE_SUBLIST for this item.
 *
 * @param json The json object
 * @param key Null-terminated string representing the key
 * @param sublist the sublist to store against the key
 */
void json_add_sublist(Json * json, char const * key, Json * sublist) {
	KeyValues * keyvalues;
	if (sublist) {
		keyvalues = sublist->keyvalues;
	}
	else {
		keyvalues = NULL;
	}
	json->keyvalues = keyvalues_add_sublist(json->keyvalues, key, keyvalues);
	sublist->keyvalues = NULL;
}

/**
 * Returns the length of string that would be returned by json_serialize().
 * This allows a suitable block of memory to be allocated for the serialized
 * structure to be written into.
 *
 * @param json The json object
 * @return The size, in bytes, required to store the serialized json object
 *         not including any null-terminators
 */
size_t json_serialize_size(Json * json) {
	return keyvalues_serialize_size(json->keyvalues);

}

/**
 * Serialize the json data into the memory provided. The buffer should be
 * pre-allocated with sufficient space to store the result. The amount of
 * memory required for this can be determined by calling json_serialize_size().
 * If the buffer is too small for the serialized data, it will be filled
 * and the remaining bytes discarded.
 * No null-terminator is added to the output
 *
 * @param json The json object
 * @param buffer The pre-allocated buffer to store the result in
 * @param size the size of the buffer
 * @return The number of bytes written to the buffer
 */
size_t json_serialize(Json * json, char * buffer, size_t size) {
	return keyvalues_serialize(json->keyvalues, buffer, size);
}

/**
 * Serialize the json data into the buffer provided. The buffer will grow to
 * accommodate the serialized data.
 *
 * @param json The json object
 * @param buffer The buffer to store the result in
 * @return The number of bytes written to the buffer
 */
size_t json_serialize_buffer(Json * json, Buffer * buffer) {
	size_t size;
	
	size = json_serialize_size(json) + 1;
	buffer_set_min_size(buffer, size);
	size = keyvalues_serialize(json->keyvalues, buffer_get_buffer(buffer), size);
	buffer_set_pos(buffer, size);

	return size;
}

/**
 * Deserialize a json string into the interal list structure of key-value
 * pairs. Strings, decimal values and nested json structures are supported,
 * but arrays are not (they're not currently used by the Pico protocol).
 *
 * @param json The json object
 * @param json_string The string in JSON format to be deserialized. The string
                      doesn't need to be null-termianted
 * @param length The quantity of data to read in
 * @return true if decerialization completed successfully, false o/w. Reasons
 *         the deserialization might fail include a malformed JSON string,
 *         or an array structure (valid but not supported).
 */
bool json_deserialize_string(Json * json, char const * json_string, size_t length) {
	if (json->keyvalues) {
		keyvalues_delete(json->keyvalues);
		json->keyvalues = NULL;
	}
	
	keyvalues_deserialize(& json->keyvalues, json_string, length);

	return (json->keyvalues != NULL);
}

/**
 * Deserialize a json string stored in a buffer into the interal list 
 * structure of key-value pairs. Strings, decimal values and nested json 
 * structures are supported, but arrays are not (they're not currently used by
 * the Pico protocol).
 *
 * @param json The json object
 * @param buffer The buffeer containing the JSON format string to be 
 *               deserialized
 * @return true if decerialization completed successfully, false o/w. Reasons
 *         the deserialization might fail include a malformed JSON string,
 *         or an array structure (valid but not supported).
 */
bool json_deserialize_buffer(Json * json, Buffer const * buffer) {
	return json_deserialize_string(json, buffer_get_buffer(buffer), buffer_get_pos(buffer));
}

/**
 * Print out a serialization of the JSON data to stdout. Useful for debugging.
 *
 * @param json The json object
 */
void json_print(Json * json) {
	size_t size;
	char * text;

	size = json_serialize_size(json);
	text = MALLOC(size + 1);
	json_serialize(json, text, size + 1);
	printf("%s\n", text);
	FREE(text);
}

/**
 * Log a serialization of the JSON data using syslog. Useful for debugging.
 *
 * @param json The json object
 */
void json_log(Json * json) {
	size_t size;
	char * text;

	size = json_serialize_size(json);
	text = MALLOC(size + 1);
	json_serialize(json, text, size + 1);
	LOG(LOG_INFO, "%s\n", text);
	FREE(text);
}

/**
 * Internal function used to print a non-null terminated string.
 *
 * @param start The start of the string in memory
 * @param length The length of the string in memory
 */
void print(char const * start, size_t length) {
	char * string;
	string = MALLOC(length + 1);
	memcpy(string, start, length);
	string[length] = '\0';
	LOG(LOG_INFO, "%s\n", string);
	FREE(string);
}

/**
 * Internal function for deserializing a string into a key-vale list.
 *
 * @param keyvalues Reference for storing the head of the returned structure.
 *                  This doesn't need to point to a valid KeyValues structure
 *                  on entry, but will be pointed to one on return.
 * @param json_string The JSON string to deserialize
 * @param length The length of the JSON string to deserialize
 * @return the number of characters of the JSON string consumed by the 
 *         deserialization (which will be all of it, as long as it's a valid
 *         JSON string that doesn't contain array data).
 */
size_t keyvalues_deserialize(KeyValues ** keyvalues, char const * json_string, size_t length) {
	char next_char;
	char const * consume_start;
	char const * consume_end;
	DESERSTATE state;
	KeyValues * head;
	KeyValues * current;
	KeyValues * next;
	double readdouble;
	char * decimal;
	int valuesread;

	state = DESERSTATE_NONE;
	
	consume_start = json_string;
	consume_end = consume_start;

	// Simple serialization state machine
	current = NULL;
	head = NULL;
	next_char = consume_end[0];
	while ((next_char != '\0') && (consume_end < (json_string + length)) && (state != DESERSTATE_DONE) && state != DESERSTATE_ERROR) {
		next_char = consume_end[0];
		//printf("State: %d, char: %c, pos: %p\n", state, next_char, consume_end);
		switch (state) {
			case DESERSTATE_NONE:
				// Nothing seen yet, so we're just getting started
				// The only way to start is with an open bracket or whitespace, otherwise it's an error
				switch (next_char) {
					case '{':
						state = DESERSTATE_LIST;
						consume_start++;
						consume_end = consume_start;
						break;
					case ' ':
					case '\t':
					case '\f':
					case '\n':
					case '\r':
						// Skip whitespace
						consume_start++;
						consume_end = consume_start;
						break;
					default:
						state = DESERSTATE_ERROR;
						break;
				}
				break;
			case DESERSTATE_LIST:
				// The list has started, so now we're looking for key-value pairs or the end of the list
				// So, either an open quote or a close bracket
				switch (next_char) {
					case '\"':
						state = DESERSTATE_KEY;
						consume_start++;
						consume_end = consume_start;
						break;
					case '}':
						state = DESERSTATE_DONE;
						consume_start++;
						consume_end = consume_start;
						break;
					case ' ':
					case '\t':
					case '\f':
					case '\n':
					case '\r':
						// Skip whitespace
						consume_start++;
						consume_end = consume_start;
						break;
					default:
						// Keys must be enclosed by double quotation marks, so this is an error
						state = DESERSTATE_ERROR;
						break;
				}
				break;
			case DESERSTATE_KEY:
				// We found a key, so we read in values until we hit the closing quote
				switch (next_char) {
					case '\"':
						next = CALLOC(sizeof(KeyValues), 1);
						next->key = MALLOC(consume_end - consume_start + 1);
						memcpy(next->key, consume_start, consume_end - consume_start);
						next->key[consume_end - consume_start] = '\0';

						if (current == NULL) {
							head = next;
							current = next;
						}
						else {
							current->next = next;
							current = next;
						}

						consume_end++;
						consume_start = consume_end;
						state = DESERSTATE_POSTKEY;
						break;
					default:
						consume_end++;
						break;
				}
				break;
			case DESERSTATE_POSTKEY:
				// We fully read in the key, so now we want to find a colon separating it from its value
				switch (next_char) {
					case ':':
						state = DESERSTATE_PREVALUE;
						consume_start++;
						consume_end = consume_start;
						break;
					case ' ':
					case '\t':
					case '\f':
					case '\n':
					case '\r':
						// Skip whitespace
						consume_start++;
						consume_end = consume_start;
						break;
					default:
						// Keys must be followed by a colon or whitespace; anything else is an error
						state = DESERSTATE_ERROR;
						break;
				}
				break;
			case DESERSTATE_PREVALUE:
				// We've found the separating colon, now we want to find a value
				// This will either start with a quote if it's a string, an
				// open bracket if it's a sublist or be part of a decimal value
				// JSON also supports arrays with square brackets, but we don't support them yet
				switch (next_char) {
					case '\"':
						// We've found a quote, so this is a string
						state = DESERSTATE_VALUESTRING;
						consume_start++;
						consume_end = consume_start;
						break;
					case '{':
						// We've found an open bracket, so this is a sublist. Recurse.
						current->type = JSONTYPE_SUBLIST;
						consume_start += keyvalues_deserialize(& current->value_sublist, consume_start, length - (consume_end - consume_start));
						consume_end = consume_start;
						state = DESERSTATE_POSTVALUE;
						break;
					case ' ':
					case '\t':
					case '\f':
					case '\n':
					case '\r':
						// Skip whitespace
						consume_start++;
						consume_end = consume_start;
						break;
					default:
						state = DESERSTATE_VALUEDECIMAL;
						consume_end = consume_start;
						break;
				}
				break;
			case DESERSTATE_VALUESTRING:
				// We found a quote, so this is a value string. Keep collecting the value
				// until we hit the close quote
				switch (next_char) {
					case '\"':
						current->type = JSONTYPE_STRING;
						current->value_string = MALLOC(consume_end - consume_start + 1);
						memcpy(current->value_string, consume_start, consume_end - consume_start);
						current->value_string[consume_end - consume_start] = '\0';

						consume_end++;
						consume_start = consume_end;
						state = DESERSTATE_POSTVALUE;
						break;
					default:
						consume_end++;
						break;
				}
				break;
			case DESERSTATE_VALUEDECIMAL:
				// We should read any following values as parts of the decimal number,
				// unless it's a comma, closing brace, or whitespace, in which case we've reached the end of the value
				switch (next_char) {
					case ',':
					case '}':
					case ' ':
					case '\t':
					case '\f':
					case '\n':
					case '\r':
						// Read in the decimal value
						decimal = MALLOC(consume_end - consume_start + 1);
						memcpy(decimal, consume_start, consume_end - consume_start);
						decimal[consume_end - consume_start] = '\0';

						valuesread = sscanf(decimal, "%256lf", & readdouble);
						if (valuesread == 1) {
							current->type = JSONTYPE_DECIMAL;
							current->value_decimal = readdouble;

						}
						else {
							// Error reading decimal
							state = DESERSTATE_ERROR;
						}
						FREE(decimal);

						consume_start = consume_end;
						state = DESERSTATE_POSTVALUE;
						break;
					default:
						consume_end++;
						break;
				}
				break;
			case DESERSTATE_POSTVALUE:
				// After the value's been read we'd expect to find either a comma to signify
				// the next key-value pair, or a close bracket to signify the end of the list
				switch (next_char) {
					case ',':
						state = DESERSTATE_LIST;
						consume_start++;
						consume_end = consume_start;
						break;
					case '}':
						state = DESERSTATE_DONE;
						consume_start++;
						consume_end = consume_start;
						break;
					case ' ':
					case '\t':
					case '\f':
					case '\n':
					case '\r':
						// Skip whitespace
						consume_start++;
						consume_end = consume_start;
						break;
					default:
						// Values must be followed by a comma, closing brace or whitespace; anything else is an error
						state = DESERSTATE_ERROR;
						break;
				}
				break;
			case DESERSTATE_ERROR:
				// The JSON is poorly formed (or at least, not supported by us)
				LOG(LOG_ERR, "JSON deserialize error\n");
				state = DESERSTATE_DONE;
				break;
			default:
				// Something went wrong, probably the string doesn't conform to our requirements
				state = DESERSTATE_ERROR;
				break;
		}
	} // while ((next_char != '\0') && (state != DESERSTATE_DONE))

	if (state == DESERSTATE_ERROR) {
		// Clean up on error
		keyvalues_delete(head);
		head = NULL;
		LOG(LOG_ERR, "JSON deserialize error\n");
	}

	// Set the return value
	if (keyvalues) {
		*keyvalues = head;	
	}

	// Return the number of characters consumed
	return consume_end - json_string;
}

/**
 * Internal function that returns the memory required for serializing the key-
 * value list into a JSON string.
 *
 * @param keyvalues The list of key-value pairs to serialize
 * @return The size, in bytes, required to store the serialized json object
 *         not including any null-terminators
 */
size_t keyvalues_serialize_size(KeyValues * keyvalues) {
	size_t size;
	KeyValues * pos;
	
	// Opening bracket
	size = 1u;
	pos = keyvalues;
	while (pos) {
		// Key string surrounded by quotes
		size += strlen(pos->key) + 2;
		// Colon
		size += 1;
		switch (pos->type) {
			case JSONTYPE_STRING:
				// String value surrounded by quotes
				size += strlen(pos->value_string) + 2;
				break;
			case JSONTYPE_DECIMAL:
				// Decimal value without quotes
				size += snprintf(NULL, 0, JSON_DECIMAL_FORMAT, pos->value_decimal);
				break;
			case JSONTYPE_SUBLIST:
				// Sublist without quotes
				size += keyvalues_serialize_size(pos->value_sublist);
				break;
			default:
				// Empty quotes
				size += 2u;
				break;
		}
		pos = pos->next;

		if (pos) {
			// Comma
			size += 1;
		}
	}
	// Closing bracket
	size += 1u;
	
	return size;
}

/**
 * Internal function for serializing a key-value list of data into a JSON
 * string.
 *
 * @param keyvalues The list of key-value pairs to serialize
 * @return The size, in bytes, required to store the serialized json object
 *         not including any null-terminators
 */
size_t keyvalues_serialize(KeyValues * keyvalues, char * buffer, size_t size) {
	unsigned int used;
	KeyValues * pos;
	
	used = 0u;
	// Surrounding brackets
	used += snprintf(buffer + used, size - used, "{");
	pos = keyvalues;
	while (pos) {
		// Key string surrounded by quotes
		used += snprintf(buffer + used, size - used, "\"%s\":", pos->key);
		switch (pos->type) {
			case JSONTYPE_STRING:
				// String value surrounded by quotes
				used += snprintf(buffer + used, size - used, "\"%s\"", pos->value_string);
				break;
			case JSONTYPE_DECIMAL:
				// Decimal value without quotes
				used += snprintf(buffer + used, size - used, JSON_DECIMAL_FORMAT, pos->value_decimal);
				break;
			case JSONTYPE_SUBLIST:
				// Sublist without quotes
				used += keyvalues_serialize(pos->value_sublist, buffer + used, size - used);
				break;
			default:
				// Empty quotes
				used += snprintf(buffer + used, size - used, "\"\"");
				break;
		}
		pos = pos->next;

		if (pos) {
			// Comma
			used += snprintf(buffer + used, size - used, ",");
		}
	}
	used += snprintf(buffer + used, size - used, "}");
	
	return used;
}

/**
 * Internal function for deleting a keyvalue pair item and all of the items
 * following it in the linked list.
 *
 * @param keyvalues The head of the key-values list to delete.
 */
void keyvalues_delete(KeyValues * keyvalues) {
	KeyValues * remove;
	while (keyvalues) {
		if (keyvalues->key) {
			FREE (keyvalues->key);
			keyvalues->key = NULL;
		}
		if (keyvalues->value_string) {
			FREE(keyvalues->value_string);
			keyvalues->value_string = NULL;
		}
		if (keyvalues->value_sublist) {
			keyvalues_delete(keyvalues->value_sublist);
			keyvalues->value_sublist = NULL;
		}
		remove = keyvalues;
		keyvalues = keyvalues->next;
		FREE(remove);
	}
}

/**
 * Internal function for adding a key-value pair to the list where the value
 * is of type string.
 *
 * @param keyvalues The head of the list to add the value to
 * @param key The null-terminated key to add
 * @param value The null-terminated string value to associated with the key
 * @return The new head of the list
 */
KeyValues * keyvalues_add_string(KeyValues * keyvalues, char const * key, char const * value) {
	KeyValues * position;

	position = keyvalues_find(keyvalues, key);
	if (position) {
		if (position->value_string) {
			position->value_string = realloc(position->value_string, strlen(value) + 1);
		}
		else {
			position->value_string = MALLOC(strlen(value) + 1);
		}
		if (position->value_sublist) {
			// Free the value sublist
			keyvalues_delete(position->value_sublist);
			position->value_sublist = NULL;
		}
	}
	else {
		position = CALLOC(sizeof(KeyValues), 1);
		position->key = MALLOC(strlen(key) + 1);
		strcpy(position->key, key);
		position->value_string = MALLOC(strlen(value) + 1);
		position->value_sublist = NULL;
		position->next = keyvalues;
		keyvalues = position;
	}
	position->value_decimal = 0.0;
	strcpy(position->value_string, value);
	position->type = JSONTYPE_STRING;

	return keyvalues;
}

/**
 * Internal function for adding a key-value pair to the list where the value
 * is of type string and stored in a buffer.
 *
 * @param keyvalues The head of the list to add the value to
 * @param key The null-terminated key to add
 * @param value A buffer containing the string value to associated with the key
 * @return The new head of the list
 */
KeyValues * keyvalues_add_buffer(KeyValues * keyvalues, char const * key, Buffer const * value) {
	KeyValues * position;

	position = keyvalues_find(keyvalues, key);
	if (position) {
		if (position->value_string) {
			FREE(position->value_string);
		}
		if (position->value_sublist) {
			// Free the value sublist
			keyvalues_delete(position->value_sublist);
			position->value_sublist = NULL;
		}
	}
	else {
		position = CALLOC(sizeof(KeyValues), 1);
		position->key = MALLOC(strlen(key) + 1);
		strcpy(position->key, key);
		position->value_sublist = NULL;
		position->next = keyvalues;
		keyvalues = position;
	}
	position->value_decimal = 0.0;
	position->value_string = buffer_copy_to_new_string(value);
	position->type = JSONTYPE_STRING;

	return keyvalues;
}

/**
 * Internal function for adding a key-value pair to the list where the value
 * is of type decimal.
 *
 * @param keyvalues The head of the list to add the value to
 * @param key The null-terminated key to add
 * @param value The decimal to associated with the key
 * @return The new head of the list
 */
KeyValues * keyvalues_add_decimal(KeyValues * keyvalues, char const * key, double value) {
	KeyValues * position;

	position = keyvalues_find(keyvalues, key);
	if (position) {
		if (position->value_string) {
			// Free the value string
			FREE(position->value_string);
			position->value_string = NULL;
		}
		if (position->value_sublist) {
			// Free the value sublist
			keyvalues_delete(position->value_sublist);
			position->value_sublist = NULL;
		}
	}
	else {
		position = CALLOC(sizeof(KeyValues), 1);
		position->key = MALLOC(strlen(key) + 1);
		strcpy(position->key, key);
		position->value_string = NULL;
		position->value_sublist = NULL;
		position->next = keyvalues;
		keyvalues = position;
	}
	position->value_decimal = value;
	position->type = JSONTYPE_DECIMAL;

	return keyvalues;
}

/**
 * Internal function for adding a key-value pair to the list where the value
 * is a sublist of key-value pairsl.
 *
 * @param keyvalues The head of the list to add the value to
 * @param key The null-terminated key to add
 * @param value The sublist to associated with the key
 * @return The new head of the list
 */
KeyValues * keyvalues_add_sublist(KeyValues * keyvalues, char const * key, KeyValues * value) {
	KeyValues * position;

	position = keyvalues_find(keyvalues, key);
	if (position) {
		if (position->value_string) {
			// Free the value string
			FREE(position->value_string);
			position->value_string = NULL;
		}
		if (position->value_sublist) {
			// Free the value sublist
			keyvalues_delete(position->value_sublist);
		}
	}
	else {
		position = CALLOC(sizeof(KeyValues), 1);
		position->key = MALLOC(strlen(key) + 1);
		strcpy(position->key, key);
		position->value_string = NULL;
		position->next = keyvalues;
		keyvalues = position;
	}
	position->value_decimal = 0.0;
	position->value_sublist = value;
	position->type = JSONTYPE_SUBLIST;

	return keyvalues;
}

/**
 * Internal function for finding a key-value pair, searching using the key
 *
 * @param keyvalues The head of the key-values list to search through
 * @param The key to search for
 * @return The first KeyValues structure found with the requested key, or null
 *         if there is none
 */
KeyValues * keyvalues_find(KeyValues * keyvalues, char const * key) {
	KeyValues * found = NULL;
	
	while ((found == NULL) && (keyvalues != NULL)) {
		if (strcmp(keyvalues->key, key) == 0) {
			found = keyvalues;
		}
		keyvalues = keyvalues->next;
	}

	return found;
}

/**
 * Return the string value associated with a given key. If the key doesn't
 * exist, or it exists but isn't of type string, then NULL will be returned.
 *
 * @param json The json object to search
 * @param key The key to search for
 * @return The string associated with the key if it exists
 */
char const * json_get_string(Json * json, char const * key) {
	KeyValues * position;
	char const * result;

	position = keyvalues_find(json->keyvalues, key);

	if (position != NULL) {
		if (position->type == JSONTYPE_STRING) {
			result = position->value_string;
		}
		else {
			result = NULL;
		}

	}
	else {
		result = NULL;
	}
	
	return result;
}

/**
 * Return the double value associated with a given key. If the key doesn't
 * exist, or it exists but isn't of type double, then 0.0 will be returned.
 *
 * @param json The json object to search
 * @param key The key to search for
 * @return The decimal associated with the key if it exists, or 0.0 otherwise
 */
double json_get_decimal(Json * json, char const * key) {
	KeyValues * position;
	double result;

	position = keyvalues_find(json->keyvalues, key);

	if (position != NULL) {
		if (position->type == JSONTYPE_DECIMAL) {
			result = position->value_decimal;
		}
		else {
			result = 0.0;
		}

	}
	else {
			result = 0.0;
	}
	
	return result;
}

/**
 * Return the type of the value assocated with a given key. Can be one of
 * JSONTYPE_STRING, JSONTYPE_SUBLIST or JSONTYPE_DECIMAL. If the key doesn't
 * exist in the list, a value of JSONTYPE_INVALID will be returned.
 *
 * @param json The json object to search
 * @param key The key to search for
 * @return The type of the data stored against the key
 */
JSONTYPE json_get_type(Json * json, char const * key) {
	KeyValues * position;
	JSONTYPE result;

	position = keyvalues_find(json->keyvalues, key);

	if (position != NULL) {
		result = position->type;
	}
	else {
		result = JSONTYPE_INVALID;
	}
	
	return result;
}



