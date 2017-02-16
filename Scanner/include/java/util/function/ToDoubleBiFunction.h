//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/ToDoubleBiFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionToDoubleBiFunction")
#ifdef RESTRICT_JavaUtilFunctionToDoubleBiFunction
#define INCLUDE_ALL_JavaUtilFunctionToDoubleBiFunction 0
#else
#define INCLUDE_ALL_JavaUtilFunctionToDoubleBiFunction 1
#endif
#undef RESTRICT_JavaUtilFunctionToDoubleBiFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionToDoubleBiFunction_) && (INCLUDE_ALL_JavaUtilFunctionToDoubleBiFunction || defined(INCLUDE_JavaUtilFunctionToDoubleBiFunction))
#define JavaUtilFunctionToDoubleBiFunction_

/*!
 @brief Represents a function that accepts two arguments and produces a double-valued
 result.
 This is the <code>double</code>-producing primitive specialization for
 <code>BiFunction</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
 whose functional method is <code>applyAsDouble(Object,Object)</code>.
 - seealso: BiFunction
 @since 1.8
 */
@protocol JavaUtilFunctionToDoubleBiFunction < JavaObject >

/*!
 @brief Applies this function to the given arguments.
 @param t the first function argument
 @param u the second function argument
 @return the function result
 */
- (jdouble)applyAsDoubleWithId:(id)t
                        withId:(id)u;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionToDoubleBiFunction)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionToDoubleBiFunction)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionToDoubleBiFunction")