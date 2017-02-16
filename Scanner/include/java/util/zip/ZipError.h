//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/zip/ZipError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipZipError")
#ifdef RESTRICT_JavaUtilZipZipError
#define INCLUDE_ALL_JavaUtilZipZipError 0
#else
#define INCLUDE_ALL_JavaUtilZipZipError 1
#endif
#undef RESTRICT_JavaUtilZipZipError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipZipError_) && (INCLUDE_ALL_JavaUtilZipZipError || defined(INCLUDE_JavaUtilZipZipError))
#define JavaUtilZipZipError_

#define RESTRICT_JavaLangInternalError 1
#define INCLUDE_JavaLangInternalError 1
#include "java/lang/InternalError.h"

/*!
 @brief Signals that an unrecoverable error has occurred.
 @author Dave Bristor
 @since 1.6
 */
@interface JavaUtilZipZipError : JavaLangInternalError

#pragma mark Public

/*!
 @brief Constructs a ZipError with the given detail message.
 @param s the <code>String</code> containing a detail message
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipError)

FOUNDATION_EXPORT void JavaUtilZipZipError_initWithNSString_(JavaUtilZipZipError *self, NSString *s);

FOUNDATION_EXPORT JavaUtilZipZipError *new_JavaUtilZipZipError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipError *create_JavaUtilZipZipError_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipZipError")