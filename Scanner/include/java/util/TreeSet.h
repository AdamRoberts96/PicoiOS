//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/objc/java/java/util/TreeSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilTreeSet")
#ifdef RESTRICT_JavaUtilTreeSet
#define INCLUDE_ALL_JavaUtilTreeSet 0
#else
#define INCLUDE_ALL_JavaUtilTreeSet 1
#endif
#undef RESTRICT_JavaUtilTreeSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilTreeSet_) && (INCLUDE_ALL_JavaUtilTreeSet || defined(INCLUDE_JavaUtilTreeSet))
#define JavaUtilTreeSet_

#define RESTRICT_JavaUtilAbstractSet 1
#define INCLUDE_JavaUtilAbstractSet 1
#include "java/util/AbstractSet.h"

#define RESTRICT_JavaUtilNavigableSet 1
#define INCLUDE_JavaUtilNavigableSet 1
#include "java/util/NavigableSet.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableMap;
@protocol JavaUtilSortedSet;
@protocol JavaUtilSpliterator;

/*!
 @brief A <code>NavigableSet</code> implementation based on a <code>TreeMap</code>.
 The elements are ordered using their natural
 ordering
 , or by a <code>Comparator</code> provided at set creation
 time, depending on which constructor is used.
 <p>This implementation provides guaranteed log(n) time cost for the basic
 operations (<code>add</code>, <code>remove</code> and <code>contains</code>).
 <p>Note that the ordering maintained by a set (whether or not an explicit
 comparator is provided) must be <i>consistent with equals</i> if it is to
 correctly implement the <code>Set</code> interface.  (See <code>Comparable</code>
 or <code>Comparator</code> for a precise definition of <i>consistent with
 equals</i>.)  This is so because the <code>Set</code> interface is defined in
 terms of the <code>equals</code> operation, but a <code>TreeSet</code> instance
 performs all element comparisons using its <code>compareTo</code> (or
 <code>compare</code>) method, so two elements that are deemed equal by this method
 are, from the standpoint of the set, equal.  The behavior of a set
 <i>is</i> well-defined even if its ordering is inconsistent with equals; it
 just fails to obey the general contract of the <code>Set</code> interface.
 <p><strong>Note that this implementation is not synchronized.</strong>
 If multiple threads access a tree set concurrently, and at least one
 of the threads modifies the set, it <i>must</i> be synchronized
 externally.  This is typically accomplished by synchronizing on some
 object that naturally encapsulates the set.
 If no such object exists, the set should be "wrapped" using the
 <code>Collections.synchronizedSortedSet</code>
 method.  This is best done at creation time, to prevent accidental
 unsynchronized access to the set: 
@code

   
@endcode
 <p>The iterators returned by this class's <code>iterator</code> method are
 <i>fail-fast</i>: if the set is modified at any time after the iterator is
 created, in any way except through the iterator's own <code>remove</code>
 method, the iterator will throw a <code>ConcurrentModificationException</code>.
 Thus, in the face of concurrent modification, the iterator fails quickly
 and cleanly, rather than risking arbitrary, non-deterministic behavior at
 an undetermined time in the future.
 <p>Note that the fail-fast behavior of an iterator cannot be guaranteed
 as it is, generally speaking, impossible to make any hard guarantees in the
 presence of unsynchronized concurrent modification.  Fail-fast iterators
 throw <code>ConcurrentModificationException</code> on a best-effort basis.
 Therefore, it would be wrong to write a program that depended on this
 exception for its correctness:   <i>the fail-fast behavior of iterators
 should be used only to detect bugs.</i>
 <p>This class is a member of the
 <a href="/../technotes/guides/collections/index.html">
 Java Collections Framework</a>.
 @author Josh Bloch
 - seealso: Collection
 - seealso: Set
 - seealso: HashSet
 - seealso: Comparable
 - seealso: Comparator
 - seealso: TreeMap
 @since 1.2
 */
@interface JavaUtilTreeSet : JavaUtilAbstractSet < JavaUtilNavigableSet, NSCopying, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new, empty tree set, sorted according to the
 natural ordering of its elements.
 All elements inserted into
 the set must implement the <code>Comparable</code> interface.
 Furthermore, all such elements must be <i>mutually
 comparable</i>: <code>e1.compareTo(e2)</code> must not throw a
 <code>ClassCastException</code> for any elements <code>e1</code> and
 <code>e2</code> in the set.  If the user attempts to add an element
 to the set that violates this constraint (for example, the user
 attempts to add a string element to a set whose elements are
 integers), the <code>add</code> call will throw a
 <code>ClassCastException</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new tree set containing the elements in the specified
 collection, sorted according to the <i>natural ordering</i> of its
 elements.
 All elements inserted into the set must implement the
 <code>Comparable</code> interface.  Furthermore, all such elements must be
 <i>mutually comparable</i>: <code>e1.compareTo(e2)</code> must not throw a
 <code>ClassCastException</code> for any elements <code>e1</code> and
 <code>e2</code> in the set.
 @param c collection whose elements will comprise the new set
 @throws ClassCastException if the elements in <code>c</code> are
 not <code>Comparable</code>, or are not mutually comparable
 @throws NullPointerException if the specified collection is null
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Constructs a new, empty tree set, sorted according to the specified
 comparator.
 All elements inserted into the set must be <i>mutually
 comparable</i> by the specified comparator: <code>comparator.compare(e1,
 e2)</code>
  must not throw a <code>ClassCastException</code> for any elements
 <code>e1</code> and <code>e2</code> in the set.  If the user attempts to add
 an element to the set that violates this constraint, the
 <code>add</code> call will throw a <code>ClassCastException</code>.
 @param comparator the comparator that will be used to order this set.
 If <code>null</code>, the natural
 ordering
  of the elements will be used.
 */
- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Constructs a new tree set containing the same elements and
 using the same ordering as the specified sorted set.
 @param s sorted set whose elements will comprise the new set
 @throws NullPointerException if the specified sorted set is null
 */
- (instancetype)initWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)s;

/*!
 @brief Adds the specified element to this set if it is not already present.
 More formally, adds the specified element <code>e</code> to this set if
 the set contains no element <code>e2</code> such that
 <tt>(e==null&nbsp;?&nbsp;e2==null&nbsp;:&nbsp;e.equals(e2))</tt>.
 If this set already contains the element, the call leaves the set
 unchanged and returns <code>false</code>.
 @param e element to be added to this set
 @return <code>true</code> if this set did not already contain the specified
 element
 @throws ClassCastException if the specified object cannot be compared
 with the elements currently in this set
 @throws NullPointerException if the specified element is null
 and this set uses natural ordering, or its comparator
 does not permit null elements
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Adds all of the elements in the specified collection to this set.
 @param c collection containing elements to be added to this set
 @return <code>true</code> if this set changed as a result of the call
 @throws ClassCastException if the elements provided cannot be compared
 with the elements currently in the set
 @throws NullPointerException if the specified collection is null or
 if any element is null and this set uses natural ordering, or
 its comparator does not permit null elements
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @throws ClassCastException
 @throws NullPointerException if the specified element is null
 and this set uses natural ordering, or its comparator
 does not permit null elements
 @since 1.6
 */
- (id)ceilingWithId:(id)e;

/*!
 @brief Removes all of the elements from this set.
 The set will be empty after this call returns.
 */
- (void)clear;

/*!
 @brief Returns a shallow copy of this <code>TreeSet</code> instance.
 (The elements
 themselves are not cloned.)
 @return a shallow copy of this set
 */
- (id)java_clone;

- (id<JavaUtilComparator>)comparator;

/*!
 @brief Returns <code>true</code> if this set contains the specified element.
 More formally, returns <code>true</code> if and only if this set
 contains an element <code>e</code> such that
 <tt>(o==null&nbsp;?&nbsp;e==null&nbsp;:&nbsp;o.equals(e))</tt>.
 @param o object to be checked for containment in this set
 @return <code>true</code> if this set contains the specified element
 @throws ClassCastException if the specified object cannot be compared
 with the elements currently in the set
 @throws NullPointerException if the specified element is null
 and this set uses natural ordering, or its comparator
 does not permit null elements
 */
- (jboolean)containsWithId:(id)o;

/*!
 @brief Returns an iterator over the elements in this set in descending order.
 @return an iterator over the elements in this set in descending order
 @since 1.6
 */
- (id<JavaUtilIterator>)descendingIterator;

/*!
 @since 1.6
 */
- (id<JavaUtilNavigableSet>)descendingSet;

/*!
 @throws NoSuchElementException
 */
- (id)first;

/*!
 @throws ClassCastException
 @throws NullPointerException if the specified element is null
 and this set uses natural ordering, or its comparator
 does not permit null elements
 @since 1.6
 */
- (id)floorWithId:(id)e;

/*!
 @throws ClassCastException
 @throws NullPointerException if <code>toElement</code> is null
 and this set uses natural ordering, or its comparator does
 not permit null elements
 @throws IllegalArgumentException
 */
- (id<JavaUtilSortedSet>)headSetWithId:(id)toElement;

/*!
 @throws ClassCastException
 @throws NullPointerException if <code>toElement</code> is null and
 this set uses natural ordering, or its comparator does
 not permit null elements
 @throws IllegalArgumentException
 @since 1.6
 */
- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

/*!
 @throws ClassCastException
 @throws NullPointerException if the specified element is null
 and this set uses natural ordering, or its comparator
 does not permit null elements
 @since 1.6
 */
- (id)higherWithId:(id)e;

/*!
 @brief Returns <code>true</code> if this set contains no elements.
 @return <code>true</code> if this set contains no elements
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an iterator over the elements in this set in ascending order.
 @return an iterator over the elements in this set in ascending order
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @throws NoSuchElementException
 */
- (id)last;

/*!
 @throws ClassCastException
 @throws NullPointerException if the specified element is null
 and this set uses natural ordering, or its comparator
 does not permit null elements
 @since 1.6
 */
- (id)lowerWithId:(id)e;

/*!
 @since 1.6
 */
- (id)pollFirst;

/*!
 @since 1.6
 */
- (id)pollLast;

/*!
 @brief Removes the specified element from this set if it is present.
 More formally, removes an element <code>e</code> such that
 <tt>(o==null&nbsp;?&nbsp;e==null&nbsp;:&nbsp;o.equals(e))</tt>,
 if this set contains such an element.  Returns <code>true</code> if
 this set contained the element (or equivalently, if this set
 changed as a result of the call).  (This set will not contain the
 element once the call returns.)
 @param o object to be removed from this set, if present
 @return <code>true</code> if this set contained the specified element
 @throws ClassCastException if the specified object cannot be compared
 with the elements currently in this set
 @throws NullPointerException if the specified element is null
 and this set uses natural ordering, or its comparator
 does not permit null elements
 */
- (jboolean)removeWithId:(id)o;

/*!
 @brief Returns the number of elements in this set (its cardinality).
 @return the number of elements in this set (its cardinality)
 */
- (jint)size;

/*!
 @brief Creates a <em><a href="Spliterator.html#binding">late-binding</a></em>
 and <em>fail-fast</em> <code>Spliterator</code> over the elements in this
 set.
 <p>The <code>Spliterator</code> reports <code>Spliterator.SIZED</code>,
 <code>Spliterator.DISTINCT</code>, <code>Spliterator.SORTED</code>, and
 <code>Spliterator.ORDERED</code>.  Overriding implementations should document
 the reporting of additional characteristic values.
 <p>The spliterator's comparator (see
 <code>java.util.Spliterator.getComparator()</code>) is <code>null</code> if
 the tree set's comparator (see <code>comparator()</code>) is <code>null</code>.
 Otherwise, the spliterator's comparator is the same as or imposes the
 same total ordering as the tree set's comparator.
 @return a <code>Spliterator</code> over the elements in this set
 @since 1.8
 */
- (id<JavaUtilSpliterator>)spliterator;

/*!
 @throws ClassCastException
 @throws NullPointerException if <code>fromElement</code> or <code>toElement</code>
 is null and this set uses natural ordering, or its comparator
 does not permit null elements
 @throws IllegalArgumentException
 @since 1.6
 */
- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

/*!
 @throws ClassCastException
 @throws NullPointerException if <code>fromElement</code> or
 <code>toElement</code> is null and this set uses natural ordering,
 or its comparator does not permit null elements
 @throws IllegalArgumentException
 */
- (id<JavaUtilSortedSet>)subSetWithId:(id)fromElement
                               withId:(id)toElement;

/*!
 @throws ClassCastException
 @throws NullPointerException if <code>fromElement</code> is null
 and this set uses natural ordering, or its comparator does
 not permit null elements
 @throws IllegalArgumentException
 */
- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromElement;

/*!
 @throws ClassCastException
 @throws NullPointerException if <code>fromElement</code> is null and
 this set uses natural ordering, or its comparator does
 not permit null elements
 @throws IllegalArgumentException
 @since 1.6
 */
- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

/*!
 @brief Constructs a set backed by the specified navigable map.
 */
- (instancetype)initWithJavaUtilNavigableMap:(id<JavaUtilNavigableMap>)m;

@end

J2OBJC_STATIC_INIT(JavaUtilTreeSet)

FOUNDATION_EXPORT void JavaUtilTreeSet_initWithJavaUtilNavigableMap_(JavaUtilTreeSet *self, id<JavaUtilNavigableMap> m);

FOUNDATION_EXPORT JavaUtilTreeSet *new_JavaUtilTreeSet_initWithJavaUtilNavigableMap_(id<JavaUtilNavigableMap> m) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTreeSet *create_JavaUtilTreeSet_initWithJavaUtilNavigableMap_(id<JavaUtilNavigableMap> m);

FOUNDATION_EXPORT void JavaUtilTreeSet_init(JavaUtilTreeSet *self);

FOUNDATION_EXPORT JavaUtilTreeSet *new_JavaUtilTreeSet_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTreeSet *create_JavaUtilTreeSet_init();

FOUNDATION_EXPORT void JavaUtilTreeSet_initWithJavaUtilComparator_(JavaUtilTreeSet *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT JavaUtilTreeSet *new_JavaUtilTreeSet_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTreeSet *create_JavaUtilTreeSet_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT void JavaUtilTreeSet_initWithJavaUtilCollection_(JavaUtilTreeSet *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilTreeSet *new_JavaUtilTreeSet_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTreeSet *create_JavaUtilTreeSet_initWithJavaUtilCollection_(id<JavaUtilCollection> c);

FOUNDATION_EXPORT void JavaUtilTreeSet_initWithJavaUtilSortedSet_(JavaUtilTreeSet *self, id<JavaUtilSortedSet> s);

FOUNDATION_EXPORT JavaUtilTreeSet *new_JavaUtilTreeSet_initWithJavaUtilSortedSet_(id<JavaUtilSortedSet> s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTreeSet *create_JavaUtilTreeSet_initWithJavaUtilSortedSet_(id<JavaUtilSortedSet> s);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeSet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilTreeSet")
