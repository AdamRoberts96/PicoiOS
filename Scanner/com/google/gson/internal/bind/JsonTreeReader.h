//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:gson-2.6.2-sources.jar!com/google/gson/internal/bind/JsonTreeReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleGsonInternalBindJsonTreeReader")
#ifdef RESTRICT_ComGoogleGsonInternalBindJsonTreeReader
#define INCLUDE_ALL_ComGoogleGsonInternalBindJsonTreeReader 0
#else
#define INCLUDE_ALL_ComGoogleGsonInternalBindJsonTreeReader 1
#endif
#undef RESTRICT_ComGoogleGsonInternalBindJsonTreeReader

#if !defined (ComGoogleGsonInternalBindJsonTreeReader_) && (INCLUDE_ALL_ComGoogleGsonInternalBindJsonTreeReader || defined(INCLUDE_ComGoogleGsonInternalBindJsonTreeReader))
#define ComGoogleGsonInternalBindJsonTreeReader_

#define RESTRICT_ComGoogleGsonStreamJsonReader 1
#define INCLUDE_ComGoogleGsonStreamJsonReader 1
#include "com/google/gson/stream/JsonReader.h"

@class ComGoogleGsonJsonElement;
@class ComGoogleGsonStreamJsonToken;

@interface ComGoogleGsonInternalBindJsonTreeReader : ComGoogleGsonStreamJsonReader

#pragma mark Public

- (instancetype)initWithComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)element;

- (void)beginArray;

- (void)beginObject;

- (void)close;

- (void)endArray;

- (void)endObject;

- (jboolean)hasNext;

- (jboolean)nextBoolean;

- (jdouble)nextDouble;

- (jint)nextInt;

- (jlong)nextLong;

- (NSString *)nextName;

- (void)nextNull;

- (NSString *)nextString;

- (ComGoogleGsonStreamJsonToken *)peek;

- (void)promoteNameToValue;

- (void)skipValue;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(ComGoogleGsonInternalBindJsonTreeReader)

FOUNDATION_EXPORT void ComGoogleGsonInternalBindJsonTreeReader_initWithComGoogleGsonJsonElement_(ComGoogleGsonInternalBindJsonTreeReader *self, ComGoogleGsonJsonElement *element);

FOUNDATION_EXPORT ComGoogleGsonInternalBindJsonTreeReader *new_ComGoogleGsonInternalBindJsonTreeReader_initWithComGoogleGsonJsonElement_(ComGoogleGsonJsonElement *element) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleGsonInternalBindJsonTreeReader *create_ComGoogleGsonInternalBindJsonTreeReader_initWithComGoogleGsonJsonElement_(ComGoogleGsonJsonElement *element);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleGsonInternalBindJsonTreeReader)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleGsonInternalBindJsonTreeReader")
