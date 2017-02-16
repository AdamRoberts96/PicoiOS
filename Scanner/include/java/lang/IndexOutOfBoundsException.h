//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/IndexOutOfBoundsException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangIndexOutOfBoundsException")
#ifdef RESTRICT_JavaLangIndexOutOfBoundsException
#define INCLUDE_ALL_JavaLangIndexOutOfBoundsException 0
#else
#define INCLUDE_ALL_JavaLangIndexOutOfBoundsException 1
#endif
#undef RESTRICT_JavaLangIndexOutOfBoundsException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangIndexOutOfBoundsException_) && (INCLUDE_ALL_JavaLangIndexOutOfBoundsException || defined(INCLUDE_JavaLangIndexOutOfBoundsException))
#define JavaLangIndexOutOfBoundsException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

/*!
 @brief Thrown to indicate that an index of some sort (such as to an array, to a
 string, or to a vector) is out of range.
 <p>
 Applications can subclass this class to indicate similar exceptions.
 @author Frank Yellin
 @since JDK1.0
 */
@interface JavaLangIndexOutOfBoundsException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs an <code>IndexOutOfBoundsException</code> with no
 detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs an <code>IndexOutOfBoundsException</code> with the
 specified detail message.
 @param s   the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIndexOutOfBoundsException)

FOUNDATION_EXPORT void JavaLangIndexOutOfBoundsException_init(JavaLangIndexOutOfBoundsException *self);

FOUNDATION_EXPORT JavaLangIndexOutOfBoundsException *new_JavaLangIndexOutOfBoundsException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIndexOutOfBoundsException *create_JavaLangIndexOutOfBoundsException_init();

FOUNDATION_EXPORT void JavaLangIndexOutOfBoundsException_initWithNSString_(JavaLangIndexOutOfBoundsException *self, NSString *s);

FOUNDATION_EXPORT JavaLangIndexOutOfBoundsException *new_JavaLangIndexOutOfBoundsException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIndexOutOfBoundsException *create_JavaLangIndexOutOfBoundsException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIndexOutOfBoundsException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangIndexOutOfBoundsException")