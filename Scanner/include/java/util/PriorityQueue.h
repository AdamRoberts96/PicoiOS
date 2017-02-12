//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/PriorityQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilPriorityQueue")
#ifdef RESTRICT_JavaUtilPriorityQueue
#define INCLUDE_ALL_JavaUtilPriorityQueue 0
#else
#define INCLUDE_ALL_JavaUtilPriorityQueue 1
#endif
#undef RESTRICT_JavaUtilPriorityQueue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilPriorityQueue_) && (INCLUDE_ALL_JavaUtilPriorityQueue || defined(INCLUDE_JavaUtilPriorityQueue))
#define JavaUtilPriorityQueue_

#define RESTRICT_JavaUtilAbstractQueue 1
#define INCLUDE_JavaUtilAbstractQueue 1
#include "java/util/AbstractQueue.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilSortedSet;
@protocol JavaUtilSpliterator;

/*!
 @brief An unbounded priority queue based on a priority heap.
 The elements of the priority queue are ordered according to their
 natural ordering, or by a <code>Comparator</code>
 provided at queue construction time, depending on which constructor is
 used.  A priority queue does not permit <code>null</code> elements.
 A priority queue relying on natural ordering also does not permit
 insertion of non-comparable objects (doing so may result in
 <code>ClassCastException</code>).
 <p>The <em>head</em> of this queue is the <em>least</em> element
 with respect to the specified ordering.  If multiple elements are
 tied for least value, the head is one of those elements -- ties are
 broken arbitrarily.  The queue retrieval operations <code>poll</code>,
 <code>remove</code>, <code>peek</code>, and <code>element</code> access the
 element at the head of the queue.
 <p>A priority queue is unbounded, but has an internal
 <i>capacity</i> governing the size of an array used to store the
 elements on the queue.  It is always at least as large as the queue
 size.  As elements are added to a priority queue, its capacity
 grows automatically.  The details of the growth policy are not
 specified.
 <p>This class and its iterator implement all of the
 <em>optional</em> methods of the <code>Collection</code> and <code>Iterator</code>
  interfaces.  The Iterator provided in method <code>iterator()</code>
  is <em>not</em> guaranteed to traverse the elements of
 the priority queue in any particular order. If you need ordered
 traversal, consider using <code>Arrays.sort(pq.toArray())</code>.
 <p><strong>Note that this implementation is not synchronized.</strong>
 Multiple threads should not access a <code>PriorityQueue</code>
 instance concurrently if any of the threads modifies the queue.
 Instead, use the thread-safe <code>java.util.concurrent.PriorityBlockingQueue</code>
  class.
 <p>Implementation note: this implementation provides
 O(log(n)) time for the enqueuing and dequeuing methods
 (<code>offer</code>, <code>poll</code>, <code>remove()</code> and <code>add</code>);
 linear time for the <code>remove(Object)</code> and <code>contains(Object)</code>
 methods; and constant time for the retrieval methods
 (<code>peek</code>, <code>element</code>, and <code>size</code>).
 <p>This class is a member of the
 <a href="/../technotes/guides/collections/index.html">
 Java Collections Framework</a>.
 @since 1.5
 @author Josh Bloch, Doug Lea
 */
@interface JavaUtilPriorityQueue : JavaUtilAbstractQueue < JavaIoSerializable > {
 @public
  /*!
   @brief Priority queue represented as a balanced binary heap: the two
 children of queue[n] are queue[2*n+1] and queue[2*(n+1)].
   The
 priority queue is ordered by comparator, or by the elements'
 natural ordering, if comparator is null: For each node n in the
 heap and each descendant d of n, n <= d.  The element with the
 lowest value is in queue[0], assuming the queue is nonempty.
   */
  IOSObjectArray *queue_;
  /*!
   @brief The number of elements in the priority queue.
   */
  jint size_;
  /*!
   @brief The number of times this priority queue has been
 <i>structurally modified</i>.
   See AbstractList for gory details.
   */
  jint modCount_;
}

#pragma mark Public

/*!
 @brief Creates a <code>PriorityQueue</code> with the default initial
 capacity (11) that orders its elements according to their
 natural ordering.
 */
- (instancetype)init;

/*!
 @brief Creates a <code>PriorityQueue</code> containing the elements in the
 specified collection.
 If the specified collection is an instance of
 a <code>SortedSet</code> or is another <code>PriorityQueue</code>, this
 priority queue will be ordered according to the same ordering.
 Otherwise, this priority queue will be ordered according to the
 natural ordering of its elements.
 @param c the collection whose elements are to be placed
 into this priority queue
 @throws ClassCastException if elements of the specified collection
 cannot be compared to one another according to the priority
 queue's ordering
 @throws NullPointerException if the specified collection or any
 of its elements are null
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Creates a <code>PriorityQueue</code> with the default initial capacity and
 whose elements are ordered according to the specified comparator.
 @param comparator the comparator that will be used to order this
 priority queue.  If <code>null</code>, the natural ordering
  of the elements will be used.
 @since 1.8
 */
- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Creates a <code>PriorityQueue</code> with the specified initial
 capacity that orders its elements according to their
 natural ordering.
 @param initialCapacity the initial capacity for this priority queue
 @throws IllegalArgumentException if <code>initialCapacity</code> is less
 than 1
 */
- (instancetype)initWithInt:(jint)initialCapacity;

/*!
 @brief Creates a <code>PriorityQueue</code> with the specified initial capacity
 that orders its elements according to the specified comparator.
 @param initialCapacity the initial capacity for this priority queue
 @param comparator the comparator that will be used to order this
 priority queue.  If <code>null</code>, the natural ordering
  of the elements will be used.
 @throws IllegalArgumentException if <code>initialCapacity</code> is
 less than 1
 */
- (instancetype)initWithInt:(jint)initialCapacity
     withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Creates a <code>PriorityQueue</code> containing the elements in the
 specified priority queue.
 This priority queue will be
 ordered according to the same ordering as the given priority
 queue.
 @param c the priority queue whose elements are to be placed
 into this priority queue
 @throws ClassCastException if elements of <code>c</code> cannot be
 compared to one another according to <code>c</code>'s
 ordering
 @throws NullPointerException if the specified priority queue or any
 of its elements are null
 */
- (instancetype)initWithJavaUtilPriorityQueue:(JavaUtilPriorityQueue *)c;

/*!
 @brief Creates a <code>PriorityQueue</code> containing the elements in the
 specified sorted set.
 This priority queue will be ordered
 according to the same ordering as the given sorted set.
 @param c the sorted set whose elements are to be placed
 into this priority queue
 @throws ClassCastException if elements of the specified sorted
 set cannot be compared to one another according to the
 sorted set's ordering
 @throws NullPointerException if the specified sorted set or any
 of its elements are null
 */
- (instancetype)initWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)c;

/*!
 @brief Inserts the specified element into this priority queue.
 @return <code>true</code> (as specified by <code>Collection.add</code>)
 @throws ClassCastException if the specified element cannot be
 compared with elements currently in this priority queue
 according to the priority queue's ordering
 @throws NullPointerException if the specified element is null
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Removes all of the elements from this priority queue.
 The queue will be empty after this call returns.
 */
- (void)clear;

/*!
 @brief Returns the comparator used to order the elements in this
 queue, or <code>null</code> if this queue is sorted according to
 the natural ordering of its elements.
 @return the comparator used to order this queue, or
 <code>null</code> if this queue is sorted according to the
 natural ordering of its elements
 */
- (id<JavaUtilComparator>)comparator;

/*!
 @brief Returns <code>true</code> if this queue contains the specified element.
 More formally, returns <code>true</code> if and only if this queue contains
 at least one element <code>e</code> such that <code>o.equals(e)</code>.
 @param o object to be checked for containment in this queue
 @return <code>true</code> if this queue contains the specified element
 */
- (jboolean)containsWithId:(id)o;

/*!
 @brief Returns an iterator over the elements in this queue.
 The iterator
 does not return the elements in any particular order.
 @return an iterator over the elements in this queue
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Inserts the specified element into this priority queue.
 @return <code>true</code> (as specified by <code>Queue.offer</code>)
 @throws ClassCastException if the specified element cannot be
 compared with elements currently in this priority queue
 according to the priority queue's ordering
 @throws NullPointerException if the specified element is null
 */
- (jboolean)offerWithId:(id)e;

- (id)peek;

- (id)poll;

/*!
 @brief Removes a single instance of the specified element from this queue,
 if it is present.
 More formally, removes an element <code>e</code> such
 that <code>o.equals(e)</code>, if this queue contains one or more such
 elements.  Returns <code>true</code> if and only if this queue contained
 the specified element (or equivalently, if this queue changed as a
 result of the call).
 @param o element to be removed from this queue, if present
 @return <code>true</code> if this queue changed as a result of the call
 */
- (jboolean)removeWithId:(id)o;

- (jint)size;

/*!
 @brief Creates a <em><a href="Spliterator.html#binding">late-binding</a></em>
 and <em>fail-fast</em> <code>Spliterator</code> over the elements in this
 queue.
 <p>The <code>Spliterator</code> reports <code>Spliterator.SIZED</code>,
 <code>Spliterator.SUBSIZED</code>, and <code>Spliterator.NONNULL</code>.
 Overriding implementations should document the reporting of additional
 characteristic values.
 @return a <code>Spliterator</code> over the elements in this queue
 @since 1.8
 */
- (id<JavaUtilSpliterator>)spliterator;

/*!
 @brief Returns an array containing all of the elements in this queue.
 The elements are in no particular order.
 <p>The returned array will be "safe" in that no references to it are
 maintained by this queue.  (In other words, this method must allocate
 a new array).  The caller is thus free to modify the returned array.
 <p>This method acts as bridge between array-based and collection-based
 APIs.
 @return an array containing all of the elements in this queue
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Returns an array containing all of the elements in this queue; the
 runtime type of the returned array is that of the specified array.
 The returned array elements are in no particular order.
 If the queue fits in the specified array, it is returned therein.
 Otherwise, a new array is allocated with the runtime type of the
 specified array and the size of this queue.
 <p>If the queue fits in the specified array with room to spare
 (i.e., the array has more elements than the queue), the element in
 the array immediately following the end of the collection is set to
 <code>null</code>.
 <p>Like the <code>toArray()</code> method, this method acts as bridge between
 array-based and collection-based APIs.  Further, this method allows
 precise control over the runtime type of the output array, and may,
 under certain circumstances, be used to save allocation costs.
 <p>Suppose <code>x</code> is a queue known to contain only strings.
 The following code can be used to dump the queue into a newly
 allocated array of <code>String</code>:
 @code
  String[] y = x.toArray(new String[0]);
@endcode
 Note that <code>toArray(new Object[0])</code> is identical in function to
 <code>toArray()</code>.
 @param a the array into which the elements of the queue are to
 be stored, if it is big enough; otherwise, a new array of the
 same runtime type is allocated for this purpose.
 @return an array containing all of the elements in this queue
 @throws ArrayStoreException if the runtime type of the specified array
 is not a supertype of the runtime type of every element in
 this queue
 @throws NullPointerException if the specified array is null
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

#pragma mark Package-Private

/*!
 @brief Removes the ith element from queue.
 Normally this method leaves the elements at up to i-1,
 inclusive, untouched.  Under these circumstances, it returns
 null.  Occasionally, in order to maintain the heap invariant,
 it must swap a later element of the list with one earlier than
 i.  Under these circumstances, this method returns the element
 that was previously at the end of the list and is now at some
 position before i. This fact is used by iterator.remove so as to
 avoid missing traversing elements.
 */
- (id)removeAtWithInt:(jint)i;

/*!
 @brief Version of remove using reference equality, not equals.
 Needed by iterator.remove.
 @param o element to be removed from this queue, if present
 @return <code>true</code> if removed
 */
- (jboolean)removeEqWithId:(id)o;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilPriorityQueue)

J2OBJC_FIELD_SETTER(JavaUtilPriorityQueue, queue_, IOSObjectArray *)

FOUNDATION_EXPORT void JavaUtilPriorityQueue_init(JavaUtilPriorityQueue *self);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilPriorityQueue *create_JavaUtilPriorityQueue_init();

FOUNDATION_EXPORT void JavaUtilPriorityQueue_initWithInt_(JavaUtilPriorityQueue *self, jint initialCapacity);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilPriorityQueue *create_JavaUtilPriorityQueue_initWithInt_(jint initialCapacity);

FOUNDATION_EXPORT void JavaUtilPriorityQueue_initWithJavaUtilComparator_(JavaUtilPriorityQueue *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilPriorityQueue *create_JavaUtilPriorityQueue_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT void JavaUtilPriorityQueue_initWithInt_withJavaUtilComparator_(JavaUtilPriorityQueue *self, jint initialCapacity, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_initWithInt_withJavaUtilComparator_(jint initialCapacity, id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilPriorityQueue *create_JavaUtilPriorityQueue_initWithInt_withJavaUtilComparator_(jint initialCapacity, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT void JavaUtilPriorityQueue_initWithJavaUtilCollection_(JavaUtilPriorityQueue *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilPriorityQueue *create_JavaUtilPriorityQueue_initWithJavaUtilCollection_(id<JavaUtilCollection> c);

FOUNDATION_EXPORT void JavaUtilPriorityQueue_initWithJavaUtilPriorityQueue_(JavaUtilPriorityQueue *self, JavaUtilPriorityQueue *c);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_initWithJavaUtilPriorityQueue_(JavaUtilPriorityQueue *c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilPriorityQueue *create_JavaUtilPriorityQueue_initWithJavaUtilPriorityQueue_(JavaUtilPriorityQueue *c);

FOUNDATION_EXPORT void JavaUtilPriorityQueue_initWithJavaUtilSortedSet_(JavaUtilPriorityQueue *self, id<JavaUtilSortedSet> c);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_initWithJavaUtilSortedSet_(id<JavaUtilSortedSet> c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilPriorityQueue *create_JavaUtilPriorityQueue_initWithJavaUtilSortedSet_(id<JavaUtilSortedSet> c);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilPriorityQueue)

#endif

#if !defined (JavaUtilPriorityQueue_PriorityQueueSpliterator_) && (INCLUDE_ALL_JavaUtilPriorityQueue || defined(INCLUDE_JavaUtilPriorityQueue_PriorityQueueSpliterator))
#define JavaUtilPriorityQueue_PriorityQueueSpliterator_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator 1
#include "java/util/Spliterator.h"

@class JavaUtilPriorityQueue;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;

@interface JavaUtilPriorityQueue_PriorityQueueSpliterator : NSObject < JavaUtilSpliterator >

#pragma mark Public

- (jint)characteristics;

- (jlong)estimateSize;

- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (JavaUtilPriorityQueue_PriorityQueueSpliterator *)trySplit;

#pragma mark Package-Private

/*!
 @brief Creates new spliterator covering the given range.
 */
- (instancetype)initWithJavaUtilPriorityQueue:(JavaUtilPriorityQueue *)pq
                                      withInt:(jint)origin
                                      withInt:(jint)fence
                                      withInt:(jint)expectedModCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilPriorityQueue_PriorityQueueSpliterator)

FOUNDATION_EXPORT void JavaUtilPriorityQueue_PriorityQueueSpliterator_initWithJavaUtilPriorityQueue_withInt_withInt_withInt_(JavaUtilPriorityQueue_PriorityQueueSpliterator *self, JavaUtilPriorityQueue *pq, jint origin, jint fence, jint expectedModCount);

FOUNDATION_EXPORT JavaUtilPriorityQueue_PriorityQueueSpliterator *new_JavaUtilPriorityQueue_PriorityQueueSpliterator_initWithJavaUtilPriorityQueue_withInt_withInt_withInt_(JavaUtilPriorityQueue *pq, jint origin, jint fence, jint expectedModCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilPriorityQueue_PriorityQueueSpliterator *create_JavaUtilPriorityQueue_PriorityQueueSpliterator_initWithJavaUtilPriorityQueue_withInt_withInt_withInt_(JavaUtilPriorityQueue *pq, jint origin, jint fence, jint expectedModCount);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilPriorityQueue_PriorityQueueSpliterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilPriorityQueue")
