//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Iterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilIterator")
#ifdef RESTRICT_JavaUtilIterator
#define INCLUDE_ALL_JavaUtilIterator 0
#else
#define INCLUDE_ALL_JavaUtilIterator 1
#endif
#undef RESTRICT_JavaUtilIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilIterator_) && (INCLUDE_ALL_JavaUtilIterator || defined(INCLUDE_JavaUtilIterator))
#define JavaUtilIterator_

@protocol JavaUtilFunctionConsumer;

/*!
 @brief An iterator over a collection.
 <code>Iterator</code> takes the place of
 <code>Enumeration</code> in the Java Collections Framework.  Iterators
 differ from enumerations in two ways:
 <ul>
 <li> Iterators allow the caller to remove elements from the
 underlying collection during the iteration with well-defined
 semantics.
 <li> Method names have been improved.
 </ul>
 <p>This interface is a member of the
 <a href="/../technotes/guides/collections/index.html">
 Java Collections Framework</a>.
 @author Josh Bloch
 - seealso: Collection
 - seealso: ListIterator
 - seealso: Iterable
 @since 1.2
 */
@protocol JavaUtilIterator < JavaObject >

/*!
 @brief Returns <code>true</code> if the iteration has more elements.
 (In other words, returns <code>true</code> if <code>next</code> would
 return an element rather than throwing an exception.)
 @return <code>true</code> if the iteration has more elements
 */
- (jboolean)hasNext;

/*!
 @brief Returns the next element in the iteration.
 @return the next element in the iteration
 @throws NoSuchElementException if the iteration has no more elements
 */
- (id)next;

/*!
 @brief Removes from the underlying collection the last element returned
 by this iterator (optional operation).
 This method can be called
 only once per call to <code>next</code>.  The behavior of an iterator
 is unspecified if the underlying collection is modified while the
 iteration is in progress in any way other than by calling this
 method.
 The default implementation throws an instance of
 <code>UnsupportedOperationException</code> and performs no other action.
 @throws UnsupportedOperationException if the <code>remove</code>
 operation is not supported by this iterator
 @throws IllegalStateException if the <code>next</code> method has not
 yet been called, or the <code>remove</code> method has already
 been called after the last call to the <code>next</code>
 method
 */
- (void)remove;

/*!
 @brief Performs the given action for each remaining element until all elements
 have been processed or the action throws an exception.
 Actions are
 performed in the order of iteration, if that order is specified.
 Exceptions thrown by the action are relayed to the caller.
 <p>The default implementation behaves as if:
 @code
    while (hasNext())
         action.accept(next());
 
@endcode
 @param action The action to be performed for each element
 @throws NullPointerException if the specified action is null
 @since 1.8
 */
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIterator)

FOUNDATION_EXPORT void JavaUtilIterator_remove(id<JavaUtilIterator> self);

FOUNDATION_EXPORT void JavaUtilIterator_forEachRemainingWithJavaUtilFunctionConsumer_(id<JavaUtilIterator> self, id<JavaUtilFunctionConsumer> action);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilIterator")
