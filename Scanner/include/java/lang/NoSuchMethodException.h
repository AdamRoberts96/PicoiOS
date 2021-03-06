//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/NoSuchMethodException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangNoSuchMethodException")
#ifdef RESTRICT_JavaLangNoSuchMethodException
#define INCLUDE_ALL_JavaLangNoSuchMethodException 0
#else
#define INCLUDE_ALL_JavaLangNoSuchMethodException 1
#endif
#undef RESTRICT_JavaLangNoSuchMethodException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangNoSuchMethodException_) && (INCLUDE_ALL_JavaLangNoSuchMethodException || defined(INCLUDE_JavaLangNoSuchMethodException))
#define JavaLangNoSuchMethodException_

#define RESTRICT_JavaLangReflectiveOperationException 1
#define INCLUDE_JavaLangReflectiveOperationException 1
#include "java/lang/ReflectiveOperationException.h"

/*!
 @brief Thrown when a particular method cannot be found.
 @author unascribed
 @since JDK1.0
 */
@interface JavaLangNoSuchMethodException : JavaLangReflectiveOperationException

#pragma mark Public

/*!
 @brief Constructs a <code>NoSuchMethodException</code> without a detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>NoSuchMethodException</code> with a detail message.
 @param s   the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNoSuchMethodException)

FOUNDATION_EXPORT void JavaLangNoSuchMethodException_init(JavaLangNoSuchMethodException *self);

FOUNDATION_EXPORT JavaLangNoSuchMethodException *new_JavaLangNoSuchMethodException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNoSuchMethodException *create_JavaLangNoSuchMethodException_init();

FOUNDATION_EXPORT void JavaLangNoSuchMethodException_initWithNSString_(JavaLangNoSuchMethodException *self, NSString *s);

FOUNDATION_EXPORT JavaLangNoSuchMethodException *new_JavaLangNoSuchMethodException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNoSuchMethodException *create_JavaLangNoSuchMethodException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNoSuchMethodException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangNoSuchMethodException")
