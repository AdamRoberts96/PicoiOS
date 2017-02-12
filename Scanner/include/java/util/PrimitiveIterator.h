//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/objc/java/java/util/PrimitiveIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilPrimitiveIterator")
#ifdef RESTRICT_JavaUtilPrimitiveIterator
#define INCLUDE_ALL_JavaUtilPrimitiveIterator 0
#else
#define INCLUDE_ALL_JavaUtilPrimitiveIterator 1
#endif
#undef RESTRICT_JavaUtilPrimitiveIterator
#ifdef INCLUDE_JavaUtilPrimitiveIterator_OfDouble
#define INCLUDE_JavaUtilPrimitiveIterator 1
#endif
#ifdef INCLUDE_JavaUtilPrimitiveIterator_OfLong
#define INCLUDE_JavaUtilPrimitiveIterator 1
#endif
#ifdef INCLUDE_JavaUtilPrimitiveIterator_OfInt
#define INCLUDE_JavaUtilPrimitiveIterator 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilPrimitiveIterator_) && (INCLUDE_ALL_JavaUtilPrimitiveIterator || defined(INCLUDE_JavaUtilPrimitiveIterator))
#define JavaUtilPrimitiveIterator_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "java/util/Iterator.h"

/*!
 @brief A base type for primitive specializations of <code>Iterator</code>.
 Specialized
 subtypes are provided for <code>int</code>, <code>long</code>, and
 <code>double</code> values.
 <p>The specialized subtype default implementations of <code>Iterator.next</code>
 and <code>Iterator.forEachRemaining(java.util.function.Consumer)</code> box
 primitive values to instances of their corresponding wrapper class.  Such
 boxing may offset any advantages gained when using the primitive
 specializations.  To avoid boxing, the corresponding primitive-based methods
 should be used.  For example, <code>PrimitiveIterator.OfInt.nextInt()</code> and
 <code>PrimitiveIterator.OfInt.forEachRemaining(java.util.function.IntConsumer)</code>
 should be used in preference to <code>PrimitiveIterator.OfInt.next()</code> and
 <code>PrimitiveIterator.OfInt.forEachRemaining(java.util.function.Consumer)</code>.
 <p>Iteration of primitive values using boxing-based methods
 <code>next()</code> and
 <code>forEachRemaining()</code>,
 does not affect the order in which the values, transformed to boxed values,
 are encountered.
 If the boolean system property <code>org.openjdk.java.util.stream.tripwire</code>
 is set to <code>true</code> then diagnostic warnings are reported if boxing of
 primitive values occur when operating on primitive subtype specializations.
 @since 1.8
 */
@protocol JavaUtilPrimitiveIterator < JavaUtilIterator, JavaObject >

/*!
 @brief Performs the given action for each remaining element, in the order
 elements occur when iterating, until all elements have been processed
 or the action throws an exception.
 Errors or runtime exceptions
 thrown by the action are relayed to the caller.
 @param action The action to be performed for each element
 @throws NullPointerException if the specified action is null
 */
- (void)forEachRemainingWithId:(id)action;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilPrimitiveIterator)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilPrimitiveIterator)

#endif

#if !defined (JavaUtilPrimitiveIterator_OfInt_) && (INCLUDE_ALL_JavaUtilPrimitiveIterator || defined(INCLUDE_JavaUtilPrimitiveIterator_OfInt))
#define JavaUtilPrimitiveIterator_OfInt_

@class JavaLangInteger;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionIntConsumer;

/*!
 @brief An Iterator specialized for <code>int</code> values.
 @since 1.8
 */
@protocol JavaUtilPrimitiveIterator_OfInt < JavaUtilPrimitiveIterator, JavaObject >

/*!
 @brief Returns the next <code>int</code> element in the iteration.
 @return the next <code>int</code> element in the iteration
 @throws NoSuchElementException if the iteration has no more elements
 */
- (jint)nextInt;

/*!
 @brief Performs the given action for each remaining element until all elements
 have been processed or the action throws an exception.
 Actions are
 performed in the order of iteration, if that order is specified.
 Exceptions thrown by the action are relayed to the caller.
 <p>The default implementation behaves as if:
 @code
    while (hasNext())
         action.accept(nextInt());
 
@endcode
 @param action The action to be performed for each element
 @throws NullPointerException if the specified action is null
 */
- (void)forEachRemainingWithId:(id<JavaUtilFunctionIntConsumer>)action;

/*!
 
 The default implementation boxes the result of calling
 <code>nextInt()</code>, and returns that boxed result.
 */
- (JavaLangInteger *)next;

/*!
 
 If the action is an instance of <code>IntConsumer</code> then it is cast
 to <code>IntConsumer</code> and passed to <code>forEachRemaining</code>;
 otherwise the action is adapted to an instance of
 <code>IntConsumer</code>, by boxing the argument of <code>IntConsumer</code>,
 and then passed to <code>forEachRemaining</code>.
 */
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilPrimitiveIterator_OfInt)

FOUNDATION_EXPORT void JavaUtilPrimitiveIterator_OfInt_forEachRemainingWithJavaUtilFunctionIntConsumer_(id<JavaUtilPrimitiveIterator_OfInt> self, id<JavaUtilFunctionIntConsumer> action);

FOUNDATION_EXPORT JavaLangInteger *JavaUtilPrimitiveIterator_OfInt_next(id<JavaUtilPrimitiveIterator_OfInt> self);

FOUNDATION_EXPORT void JavaUtilPrimitiveIterator_OfInt_forEachRemainingWithJavaUtilFunctionConsumer_(id<JavaUtilPrimitiveIterator_OfInt> self, id<JavaUtilFunctionConsumer> action);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilPrimitiveIterator_OfInt)

#endif

#if !defined (JavaUtilPrimitiveIterator_OfLong_) && (INCLUDE_ALL_JavaUtilPrimitiveIterator || defined(INCLUDE_JavaUtilPrimitiveIterator_OfLong))
#define JavaUtilPrimitiveIterator_OfLong_

@class JavaLangLong;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionLongConsumer;

/*!
 @brief An Iterator specialized for <code>long</code> values.
 @since 1.8
 */
@protocol JavaUtilPrimitiveIterator_OfLong < JavaUtilPrimitiveIterator, JavaObject >

/*!
 @brief Returns the next <code>long</code> element in the iteration.
 @return the next <code>long</code> element in the iteration
 @throws NoSuchElementException if the iteration has no more elements
 */
- (jlong)nextLong;

/*!
 @brief Performs the given action for each remaining element until all elements
 have been processed or the action throws an exception.
 Actions are
 performed in the order of iteration, if that order is specified.
 Exceptions thrown by the action are relayed to the caller.
 <p>The default implementation behaves as if:
 @code
    while (hasNext())
         action.accept(nextLong());
 
@endcode
 @param action The action to be performed for each element
 @throws NullPointerException if the specified action is null
 */
- (void)forEachRemainingWithId:(id<JavaUtilFunctionLongConsumer>)action;

/*!
 
 The default implementation boxes the result of calling
 <code>nextLong()</code>, and returns that boxed result.
 */
- (JavaLangLong *)next;

/*!
 
 If the action is an instance of <code>LongConsumer</code> then it is cast
 to <code>LongConsumer</code> and passed to <code>forEachRemaining</code>;
 otherwise the action is adapted to an instance of
 <code>LongConsumer</code>, by boxing the argument of <code>LongConsumer</code>,
 and then passed to <code>forEachRemaining</code>.
 */
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilPrimitiveIterator_OfLong)

FOUNDATION_EXPORT void JavaUtilPrimitiveIterator_OfLong_forEachRemainingWithJavaUtilFunctionLongConsumer_(id<JavaUtilPrimitiveIterator_OfLong> self, id<JavaUtilFunctionLongConsumer> action);

FOUNDATION_EXPORT JavaLangLong *JavaUtilPrimitiveIterator_OfLong_next(id<JavaUtilPrimitiveIterator_OfLong> self);

FOUNDATION_EXPORT void JavaUtilPrimitiveIterator_OfLong_forEachRemainingWithJavaUtilFunctionConsumer_(id<JavaUtilPrimitiveIterator_OfLong> self, id<JavaUtilFunctionConsumer> action);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilPrimitiveIterator_OfLong)

#endif

#if !defined (JavaUtilPrimitiveIterator_OfDouble_) && (INCLUDE_ALL_JavaUtilPrimitiveIterator || defined(INCLUDE_JavaUtilPrimitiveIterator_OfDouble))
#define JavaUtilPrimitiveIterator_OfDouble_

@class JavaLangDouble;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionDoubleConsumer;

/*!
 @brief An Iterator specialized for <code>double</code> values.
 @since 1.8
 */
@protocol JavaUtilPrimitiveIterator_OfDouble < JavaUtilPrimitiveIterator, JavaObject >

/*!
 @brief Returns the next <code>double</code> element in the iteration.
 @return the next <code>double</code> element in the iteration
 @throws NoSuchElementException if the iteration has no more elements
 */
- (jdouble)nextDouble;

/*!
 @brief Performs the given action for each remaining element until all elements
 have been processed or the action throws an exception.
 Actions are
 performed in the order of iteration, if that order is specified.
 Exceptions thrown by the action are relayed to the caller.
 <p>The default implementation behaves as if:
 @code
    while (hasNext())
         action.accept(nextDouble());
 
@endcode
 @param action The action to be performed for each element
 @throws NullPointerException if the specified action is null
 */
- (void)forEachRemainingWithId:(id<JavaUtilFunctionDoubleConsumer>)action;

/*!
 
 The default implementation boxes the result of calling
 <code>nextDouble()</code>, and returns that boxed result.
 */
- (JavaLangDouble *)next;

/*!
 
 If the action is an instance of <code>DoubleConsumer</code> then it is
 cast to <code>DoubleConsumer</code> and passed to
 <code>forEachRemaining</code>; otherwise the action is adapted to
 an instance of <code>DoubleConsumer</code>, by boxing the argument of
 <code>DoubleConsumer</code>, and then passed to
 <code>forEachRemaining</code>.
 */
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilPrimitiveIterator_OfDouble)

FOUNDATION_EXPORT void JavaUtilPrimitiveIterator_OfDouble_forEachRemainingWithJavaUtilFunctionDoubleConsumer_(id<JavaUtilPrimitiveIterator_OfDouble> self, id<JavaUtilFunctionDoubleConsumer> action);

FOUNDATION_EXPORT JavaLangDouble *JavaUtilPrimitiveIterator_OfDouble_next(id<JavaUtilPrimitiveIterator_OfDouble> self);

FOUNDATION_EXPORT void JavaUtilPrimitiveIterator_OfDouble_forEachRemainingWithJavaUtilFunctionConsumer_(id<JavaUtilPrimitiveIterator_OfDouble> self, id<JavaUtilFunctionConsumer> action);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilPrimitiveIterator_OfDouble)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilPrimitiveIterator")
