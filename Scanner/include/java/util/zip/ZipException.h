//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/zip/ZipException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipZipException")
#ifdef RESTRICT_JavaUtilZipZipException
#define INCLUDE_ALL_JavaUtilZipZipException 0
#else
#define INCLUDE_ALL_JavaUtilZipZipException 1
#endif
#undef RESTRICT_JavaUtilZipZipException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipZipException_) && (INCLUDE_ALL_JavaUtilZipZipException || defined(INCLUDE_JavaUtilZipZipException))
#define JavaUtilZipZipException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

/*!
 @brief Signals that a Zip exception of some sort has occurred.
 @author unascribed
 - seealso: java.io.IOException
 @since JDK1.0
 */
@interface JavaUtilZipZipException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a <code>ZipException</code> with <code>null</code>
 as its error detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>ZipException</code> with the specified detail
 message.
 @param s   the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipException)

FOUNDATION_EXPORT void JavaUtilZipZipException_init(JavaUtilZipZipException *self);

FOUNDATION_EXPORT JavaUtilZipZipException *new_JavaUtilZipZipException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipException *create_JavaUtilZipZipException_init();

FOUNDATION_EXPORT void JavaUtilZipZipException_initWithNSString_(JavaUtilZipZipException *self, NSString *s);

FOUNDATION_EXPORT JavaUtilZipZipException *new_JavaUtilZipZipException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipException *create_JavaUtilZipZipException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipZipException")
