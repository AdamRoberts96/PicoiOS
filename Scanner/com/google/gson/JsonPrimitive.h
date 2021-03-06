//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:gson-2.6.2-sources.jar!com/google/gson/JsonPrimitive.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleGsonJsonPrimitive")
#ifdef RESTRICT_ComGoogleGsonJsonPrimitive
#define INCLUDE_ALL_ComGoogleGsonJsonPrimitive 0
#else
#define INCLUDE_ALL_ComGoogleGsonJsonPrimitive 1
#endif
#undef RESTRICT_ComGoogleGsonJsonPrimitive

#if !defined (ComGoogleGsonJsonPrimitive_) && (INCLUDE_ALL_ComGoogleGsonJsonPrimitive || defined(INCLUDE_ComGoogleGsonJsonPrimitive))
#define ComGoogleGsonJsonPrimitive_

#define RESTRICT_ComGoogleGsonJsonElement 1
#define INCLUDE_ComGoogleGsonJsonElement 1
#include "com/google/gson/JsonElement.h"

@class JavaLangBoolean;
@class JavaLangCharacter;
@class JavaMathBigDecimal;
@class JavaMathBigInteger;

@interface ComGoogleGsonJsonPrimitive : ComGoogleGsonJsonElement

#pragma mark Public

- (instancetype)initWithJavaLangBoolean:(JavaLangBoolean *)bool_;

- (instancetype)initWithJavaLangCharacter:(JavaLangCharacter *)c;

- (instancetype)initWithNSNumber:(NSNumber *)number;

- (instancetype)initWithNSString:(NSString *)string;

- (jboolean)isEqual:(id)obj;

- (JavaMathBigDecimal *)getAsBigDecimal;

- (JavaMathBigInteger *)getAsBigInteger;

- (jboolean)getAsBoolean;

- (jbyte)getAsByte;

- (jchar)getAsCharacter;

- (jdouble)getAsDouble;

- (jfloat)getAsFloat;

- (jint)getAsInt;

- (jlong)getAsLong;

- (NSNumber *)getAsNumber;

- (jshort)getAsShort;

- (NSString *)getAsString;

- (NSUInteger)hash;

- (jboolean)isBoolean;

- (jboolean)isNumber;

- (jboolean)isString;

#pragma mark Package-Private

- (instancetype)initWithId:(id)primitive;

- (ComGoogleGsonJsonPrimitive *)deepCopy;

- (JavaLangBoolean *)getAsBooleanWrapper;

- (void)setValueWithId:(id)primitive;

@end

J2OBJC_STATIC_INIT(ComGoogleGsonJsonPrimitive)

FOUNDATION_EXPORT void ComGoogleGsonJsonPrimitive_initWithJavaLangBoolean_(ComGoogleGsonJsonPrimitive *self, JavaLangBoolean *bool_);

FOUNDATION_EXPORT ComGoogleGsonJsonPrimitive *new_ComGoogleGsonJsonPrimitive_initWithJavaLangBoolean_(JavaLangBoolean *bool_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleGsonJsonPrimitive *create_ComGoogleGsonJsonPrimitive_initWithJavaLangBoolean_(JavaLangBoolean *bool_);

FOUNDATION_EXPORT void ComGoogleGsonJsonPrimitive_initWithNSNumber_(ComGoogleGsonJsonPrimitive *self, NSNumber *number);

FOUNDATION_EXPORT ComGoogleGsonJsonPrimitive *new_ComGoogleGsonJsonPrimitive_initWithNSNumber_(NSNumber *number) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleGsonJsonPrimitive *create_ComGoogleGsonJsonPrimitive_initWithNSNumber_(NSNumber *number);

FOUNDATION_EXPORT void ComGoogleGsonJsonPrimitive_initWithNSString_(ComGoogleGsonJsonPrimitive *self, NSString *string);

FOUNDATION_EXPORT ComGoogleGsonJsonPrimitive *new_ComGoogleGsonJsonPrimitive_initWithNSString_(NSString *string) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleGsonJsonPrimitive *create_ComGoogleGsonJsonPrimitive_initWithNSString_(NSString *string);

FOUNDATION_EXPORT void ComGoogleGsonJsonPrimitive_initWithJavaLangCharacter_(ComGoogleGsonJsonPrimitive *self, JavaLangCharacter *c);

FOUNDATION_EXPORT ComGoogleGsonJsonPrimitive *new_ComGoogleGsonJsonPrimitive_initWithJavaLangCharacter_(JavaLangCharacter *c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleGsonJsonPrimitive *create_ComGoogleGsonJsonPrimitive_initWithJavaLangCharacter_(JavaLangCharacter *c);

FOUNDATION_EXPORT void ComGoogleGsonJsonPrimitive_initWithId_(ComGoogleGsonJsonPrimitive *self, id primitive);

FOUNDATION_EXPORT ComGoogleGsonJsonPrimitive *new_ComGoogleGsonJsonPrimitive_initWithId_(id primitive) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleGsonJsonPrimitive *create_ComGoogleGsonJsonPrimitive_initWithId_(id primitive);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleGsonJsonPrimitive)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleGsonJsonPrimitive")
