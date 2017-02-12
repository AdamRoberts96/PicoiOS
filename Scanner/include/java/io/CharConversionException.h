//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/CharConversionException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoCharConversionException")
#ifdef RESTRICT_JavaIoCharConversionException
#define INCLUDE_ALL_JavaIoCharConversionException 0
#else
#define INCLUDE_ALL_JavaIoCharConversionException 1
#endif
#undef RESTRICT_JavaIoCharConversionException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoCharConversionException_) && (INCLUDE_ALL_JavaIoCharConversionException || defined(INCLUDE_JavaIoCharConversionException))
#define JavaIoCharConversionException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

/*!
 @brief Base class for character conversion exceptions.
 @author Asmus Freytag
 @since JDK1.1
 */
@interface JavaIoCharConversionException : JavaIoIOException

#pragma mark Public

/*!
 @brief This provides no detailed message.
 */
- (instancetype)init;

/*!
 @brief This provides a detailed message.
 @param s the detailed message associated with the exception.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoCharConversionException)

FOUNDATION_EXPORT void JavaIoCharConversionException_init(JavaIoCharConversionException *self);

FOUNDATION_EXPORT JavaIoCharConversionException *new_JavaIoCharConversionException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoCharConversionException *create_JavaIoCharConversionException_init();

FOUNDATION_EXPORT void JavaIoCharConversionException_initWithNSString_(JavaIoCharConversionException *self, NSString *s);

FOUNDATION_EXPORT JavaIoCharConversionException *new_JavaIoCharConversionException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoCharConversionException *create_JavaIoCharConversionException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoCharConversionException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoCharConversionException")
