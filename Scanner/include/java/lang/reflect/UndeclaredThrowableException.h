//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/reflect/UndeclaredThrowableException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectUndeclaredThrowableException")
#ifdef RESTRICT_JavaLangReflectUndeclaredThrowableException
#define INCLUDE_ALL_JavaLangReflectUndeclaredThrowableException 0
#else
#define INCLUDE_ALL_JavaLangReflectUndeclaredThrowableException 1
#endif
#undef RESTRICT_JavaLangReflectUndeclaredThrowableException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangReflectUndeclaredThrowableException_) && (INCLUDE_ALL_JavaLangReflectUndeclaredThrowableException || defined(INCLUDE_JavaLangReflectUndeclaredThrowableException))
#define JavaLangReflectUndeclaredThrowableException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

/*!
 @brief Thrown by a method invocation on a proxy instance if its invocation
 handler's <code>invoke</code> method throws a
 checked exception (a <code>Throwable</code> that is not assignable
 to <code>RuntimeException</code> or <code>Error</code>) that
 is not assignable to any of the exception types declared in the
 <code>throws</code> clause of the method that was invoked on the
 proxy instance and dispatched to the invocation handler.
 <p>An <code>UndeclaredThrowableException</code> instance contains
 the undeclared checked exception that was thrown by the invocation
 handler, and it can be retrieved with the
 <code>getUndeclaredThrowable()</code> method.
 <code>UndeclaredThrowableException</code> extends
 <code>RuntimeException</code>, so it is an unchecked exception
 that wraps a checked exception.
 <p>As of release 1.4, this exception has been retrofitted to
 conform to the general purpose exception-chaining mechanism.  The
 "undeclared checked exception that was thrown by the invocation
 handler" that may be provided at construction time and accessed via
 the <code>getUndeclaredThrowable()</code> method is now known as the
 <i>cause</i>, and may be accessed via the <code>Throwable.getCause()</code>
  method, as well as the aforementioned "legacy
 method."
 @author Peter Jones
 - seealso: InvocationHandler
 @since 1.3
 */
@interface JavaLangReflectUndeclaredThrowableException : JavaLangRuntimeException

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructs an <code>UndeclaredThrowableException</code> with the
 specified <code>Throwable</code>.
 @param undeclaredThrowable the undeclared checked exception
 that was thrown
 */
- (instancetype)initWithNSException:(NSException *)undeclaredThrowable;

/*!
 @brief Constructs an <code>UndeclaredThrowableException</code> with the
 specified <code>Throwable</code> and a detail message.
 @param undeclaredThrowable the undeclared checked exception
 that was thrown
 @param s the detail message
 */
- (instancetype)initWithNSException:(NSException *)undeclaredThrowable
                       withNSString:(NSString *)s;

/*!
 @brief Returns the cause of this exception (the <code>Throwable</code>
 instance wrapped in this <code>UndeclaredThrowableException</code>,
 which may be <code>null</code>).
 @return the cause of this exception.
 @since 1.4
 */
- (NSException *)getCause;

/*!
 @brief Returns the <code>Throwable</code> instance wrapped in this
 <code>UndeclaredThrowableException</code>, which may be <code>null</code>.
 <p>This method predates the general-purpose exception chaining facility.
 The <code>Throwable.getCause()</code> method is now the preferred means of
 obtaining this information.
 @return the undeclared checked exception that was thrown
 */
- (NSException *)getUndeclaredThrowable;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectUndeclaredThrowableException)

inline jlong JavaLangReflectUndeclaredThrowableException_get_serialVersionUID();
#define JavaLangReflectUndeclaredThrowableException_serialVersionUID 330127114055056639LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangReflectUndeclaredThrowableException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaLangReflectUndeclaredThrowableException_initWithNSException_(JavaLangReflectUndeclaredThrowableException *self, NSException *undeclaredThrowable);

FOUNDATION_EXPORT JavaLangReflectUndeclaredThrowableException *new_JavaLangReflectUndeclaredThrowableException_initWithNSException_(NSException *undeclaredThrowable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangReflectUndeclaredThrowableException *create_JavaLangReflectUndeclaredThrowableException_initWithNSException_(NSException *undeclaredThrowable);

FOUNDATION_EXPORT void JavaLangReflectUndeclaredThrowableException_initWithNSException_withNSString_(JavaLangReflectUndeclaredThrowableException *self, NSException *undeclaredThrowable, NSString *s);

FOUNDATION_EXPORT JavaLangReflectUndeclaredThrowableException *new_JavaLangReflectUndeclaredThrowableException_initWithNSException_withNSString_(NSException *undeclaredThrowable, NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangReflectUndeclaredThrowableException *create_JavaLangReflectUndeclaredThrowableException_initWithNSException_withNSString_(NSException *undeclaredThrowable, NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectUndeclaredThrowableException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectUndeclaredThrowableException")
