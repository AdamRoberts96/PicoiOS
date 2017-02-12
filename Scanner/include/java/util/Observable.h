//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Observable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilObservable")
#ifdef RESTRICT_JavaUtilObservable
#define INCLUDE_ALL_JavaUtilObservable 0
#else
#define INCLUDE_ALL_JavaUtilObservable 1
#endif
#undef RESTRICT_JavaUtilObservable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilObservable_) && (INCLUDE_ALL_JavaUtilObservable || defined(INCLUDE_JavaUtilObservable))
#define JavaUtilObservable_

@protocol JavaUtilList;
@protocol JavaUtilObserver;

/*!
 @brief Observable is used to notify a group of Observer objects when a change
 occurs.
 On creation, the set of observers is empty. After a change occurred,
 the application can call the <code>notifyObservers()</code> method. This will
 cause the invocation of the <code>update()</code> method of all registered
 Observers. The order of invocation is not specified. This implementation will
 call the Observers in the order they registered. Subclasses are completely
 free in what order they call the update methods.
 - seealso: Observer
 */
@interface JavaUtilObservable : NSObject {
 @public
  id<JavaUtilList> observers_;
  jboolean changed_;
}

#pragma mark Public

/*!
 @brief Constructs a new <code>Observable</code> object.
 */
- (instancetype)init;

/*!
 @brief Adds the specified observer to the list of observers.
 If it is already
 registered, it is not added a second time.
 @param observer
 the Observer to add.
 */
- (void)addObserverWithJavaUtilObserver:(id<JavaUtilObserver>)observer;

/*!
 @brief Returns the number of observers registered to this <code>Observable</code>.
 @return the number of observers.
 */
- (jint)countObservers;

/*!
 @brief Removes the specified observer from the list of observers.
 Passing null
 won't do anything.
 @param observer
 the observer to remove.
 */
- (void)deleteObserverWithJavaUtilObserver:(id<JavaUtilObserver>)observer;

/*!
 @brief Removes all observers from the list of observers.
 */
- (void)deleteObservers;

/*!
 @brief Returns the changed flag for this <code>Observable</code>.
 @return <code>true</code> when the changed flag for this <code>Observable</code> is
 set, <code>false</code> otherwise.
 */
- (jboolean)hasChanged;

/*!
 @brief If <code>hasChanged()</code> returns <code>true</code>, calls the <code>update()</code>
 method for every observer in the list of observers using null as the
 argument.
 Afterwards, calls <code>clearChanged()</code>.
 <p>
 Equivalent to calling <code>notifyObservers(null)</code>.
 */
- (void)notifyObservers;

/*!
 @brief If <code>hasChanged()</code> returns <code>true</code>, calls the <code>update()</code>
 method for every Observer in the list of observers using the specified
 argument.
 Afterwards calls <code>clearChanged()</code>.
 @param data
 the argument passed to <code>update()</code>.
 */
- (void)notifyObserversWithId:(id)data;

#pragma mark Protected

/*!
 @brief Clears the changed flag for this <code>Observable</code>.
 After calling
 <code>clearChanged()</code>, <code>hasChanged()</code> will return <code>false</code>.
 */
- (void)clearChanged;

/*!
 @brief Sets the changed flag for this <code>Observable</code>.
 After calling
 <code>setChanged()</code>, <code>hasChanged()</code> will return <code>true</code>.
 */
- (void)setChanged;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilObservable)

J2OBJC_FIELD_SETTER(JavaUtilObservable, observers_, id<JavaUtilList>)

FOUNDATION_EXPORT void JavaUtilObservable_init(JavaUtilObservable *self);

FOUNDATION_EXPORT JavaUtilObservable *new_JavaUtilObservable_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilObservable *create_JavaUtilObservable_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilObservable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilObservable")
