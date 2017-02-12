//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/objc/java/java/util/HashMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilHashMap")
#ifdef RESTRICT_JavaUtilHashMap
#define INCLUDE_ALL_JavaUtilHashMap 0
#else
#define INCLUDE_ALL_JavaUtilHashMap 1
#endif
#undef RESTRICT_JavaUtilHashMap
#ifdef INCLUDE_JavaUtilHashMap_EntrySpliterator
#define INCLUDE_JavaUtilHashMap_HashMapSpliterator 1
#endif
#ifdef INCLUDE_JavaUtilHashMap_ValueSpliterator
#define INCLUDE_JavaUtilHashMap_HashMapSpliterator 1
#endif
#ifdef INCLUDE_JavaUtilHashMap_KeySpliterator
#define INCLUDE_JavaUtilHashMap_HashMapSpliterator 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilHashMap_) && (INCLUDE_ALL_JavaUtilHashMap || defined(INCLUDE_JavaUtilHashMap))
#define JavaUtilHashMap_

#define RESTRICT_JavaUtilAbstractMap 1
#define INCLUDE_JavaUtilAbstractMap 1
#include "java/util/AbstractMap.h"

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap 1
#include "java/util/Map.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilSet;

/*!
 @brief Hash table based implementation of the <tt>Map</tt> interface.
 This
 implementation provides all of the optional map operations, and permits
 <tt>null</tt> values and the <tt>null</tt> key.  (The <tt>HashMap</tt>
 class is roughly equivalent to <tt>Hashtable</tt>, except that it is
 unsynchronized and permits nulls.)  This class makes no guarantees as to
 the order of the map; in particular, it does not guarantee that the order
 will remain constant over time.
 <p>This implementation provides constant-time performance for the basic
 operations (<tt>get</tt> and <tt>put</tt>), assuming the hash function
 disperses the elements properly among the buckets.  Iteration over
 collection views requires time proportional to the "capacity" of the
 <tt>HashMap</tt> instance (the number of buckets) plus its size (the number
 of key-value mappings).  Thus, it's very important not to set the initial
 capacity too high (or the load factor too low) if iteration performance is
 important.
 <p>An instance of <tt>HashMap</tt> has two parameters that affect its
 performance: <i>initial capacity</i> and <i>load factor</i>.  The
 <i>capacity</i> is the number of buckets in the hash table, and the initial
 capacity is simply the capacity at the time the hash table is created.  The
 <i>load factor</i> is a measure of how full the hash table is allowed to
 get before its capacity is automatically increased.  When the number of
 entries in the hash table exceeds the product of the load factor and the
 current capacity, the hash table is <i>rehashed</i> (that is, internal data
 structures are rebuilt) so that the hash table has approximately twice the
 number of buckets.
 <p>As a general rule, the default load factor (.75) offers a good tradeoff
 between time and space costs.  Higher values decrease the space overhead
 but increase the lookup cost (reflected in most of the operations of the
 <tt>HashMap</tt> class, including <tt>get</tt> and <tt>put</tt>).  The
 expected number of entries in the map and its load factor should be taken
 into account when setting its initial capacity, so as to minimize the
 number of rehash operations.  If the initial capacity is greater
 than the maximum number of entries divided by the load factor, no
 rehash operations will ever occur.
 <p>If many mappings are to be stored in a <tt>HashMap</tt> instance,
 creating it with a sufficiently large capacity will allow the mappings to
 be stored more efficiently than letting it perform automatic rehashing as
 needed to grow the table.
 <p><strong>Note that this implementation is not synchronized.</strong>
 If multiple threads access a hash map concurrently, and at least one of
 the threads modifies the map structurally, it <i>must</i> be
 synchronized externally.  (A structural modification is any operation
 that adds or deletes one or more mappings; merely changing the value
 associated with a key that an instance already contains is not a
 structural modification.)  This is typically accomplished by
 synchronizing on some object that naturally encapsulates the map.
 If no such object exists, the map should be "wrapped" using the
 <code>Collections.synchronizedMap</code>
 method.  This is best done at creation time, to prevent accidental
 unsynchronized access to the map:
@code

   
@endcode
 <p>The iterators returned by all of this class's "collection view methods"
 are <i>fail-fast</i>: if the map is structurally modified at any time after
 the iterator is created, in any way except through the iterator's own
 <tt>remove</tt> method, the iterator will throw a
 <code>ConcurrentModificationException</code>.  Thus, in the face of concurrent
 modification, the iterator fails quickly and cleanly, rather than risking
 arbitrary, non-deterministic behavior at an undetermined time in the
 future.
 <p>Note that the fail-fast behavior of an iterator cannot be guaranteed
 as it is, generally speaking, impossible to make any hard guarantees in the
 presence of unsynchronized concurrent modification.  Fail-fast iterators
 throw <tt>ConcurrentModificationException</tt> on a best-effort basis.
 Therefore, it would be wrong to write a program that depended on this
 exception for its correctness: <i>the fail-fast behavior of iterators
 should be used only to detect bugs.</i>
 <p>This class is a member of the
 <a href="/../technotes/guides/collections/index.html">
 Java Collections Framework</a>.
 @author Doug Lea
 @author Josh Bloch
 @author Arthur van Hoff
 @author Neal Gafter
 - seealso: Object#hashCode()
 - seealso: Collection
 - seealso: Map
 - seealso: TreeMap
 - seealso: Hashtable
 @since 1.2
 */
@interface JavaUtilHashMap : JavaUtilAbstractMap < JavaUtilMap, NSCopying, JavaIoSerializable > {
 @public
  /*!
   @brief The table, resized as necessary.
   Length MUST Always be a power of two.
   */
  IOSObjectArray *table_;
  /*!
   @brief The number of key-value mappings contained in this map.
   */
  jint size_;
  /*!
   @brief The next size value at which to resize (capacity * load factor).
   */
  jint threshold_;
  /*!
   @brief The number of times this HashMap has been structurally modified
 Structural modifications are those that change the number of mappings in
 the HashMap or otherwise modify its internal structure (e.g.,
 rehash).
   This field is used to make iterators on Collection-views of
 the HashMap fail-fast.  (See ConcurrentModificationException).
   */
  jint modCount_;
}

+ (jint)DEFAULT_INITIAL_CAPACITY;

+ (jint)MAXIMUM_CAPACITY;

+ (jfloat)DEFAULT_LOAD_FACTOR;

+ (IOSObjectArray *)EMPTY_TABLE;

+ (jfloat)loadFactor_;

#pragma mark Public

/*!
 @brief Constructs an empty <tt>HashMap</tt> with the default initial capacity
 (16) and the default load factor (0.75).
 */
- (instancetype)init;

/*!
 @brief Constructs an empty <tt>HashMap</tt> with the specified initial
 capacity and the default load factor (0.75).
 @param initialCapacity the initial capacity.
 @throws IllegalArgumentException if the initial capacity is negative.
 */
- (instancetype)initWithInt:(jint)initialCapacity;

/*!
 @brief Constructs an empty <tt>HashMap</tt> with the specified initial
 capacity and load factor.
 @param initialCapacity the initial capacity
 @param loadFactor      the load factor
 @throws IllegalArgumentException if the initial capacity is negative
 or the load factor is nonpositive
 */
- (instancetype)initWithInt:(jint)initialCapacity
                  withFloat:(jfloat)loadFactor;

/*!
 @brief Constructs a new <tt>HashMap</tt> with the same mappings as the
 specified <tt>Map</tt>.
 The <tt>HashMap</tt> is created with
 default load factor (0.75) and an initial capacity sufficient to
 hold the mappings in the specified <tt>Map</tt>.
 @param m the map whose mappings are to be placed in this map
 @throws NullPointerException if the specified map is null
 */
- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)m;

/*!
 @brief Removes all of the mappings from this map.
 The map will be empty after this call returns.
 */
- (void)clear;

/*!
 @brief Returns a shallow copy of this <tt>HashMap</tt> instance: the keys and
 values themselves are not cloned.
 @return a shallow copy of this map
 */
- (id)java_clone;

/*!
 @brief Returns <tt>true</tt> if this map contains a mapping for the
 specified key.
 @param key   The key whose presence in this map is to be tested
 @return <tt>true</tt> if this map contains a mapping for the specified
 key.
 */
- (jboolean)containsKeyWithId:(id)key;

/*!
 @brief Returns <tt>true</tt> if this map maps one or more keys to the
 specified value.
 @param value value whose presence in this map is to be tested
 @return <tt>true</tt> if this map maps one or more keys to the
 specified value
 */
- (jboolean)containsValueWithId:(id)value;

/*!
 @brief Returns a <code>Set</code> view of the mappings contained in this map.
 The set is backed by the map, so changes to the map are
 reflected in the set, and vice-versa.  If the map is modified
 while an iteration over the set is in progress (except through
 the iterator's own <tt>remove</tt> operation, or through the
 <tt>setValue</tt> operation on a map entry returned by the
 iterator) the results of the iteration are undefined.  The set
 supports element removal, which removes the corresponding
 mapping from the map, via the <tt>Iterator.remove</tt>,
 <tt>Set.remove</tt>, <tt>removeAll</tt>, <tt>retainAll</tt> and
 <tt>clear</tt> operations.  It does not support the
 <tt>add</tt> or <tt>addAll</tt> operations.
 @return a set view of the mappings contained in this map
 */
- (id<JavaUtilSet>)entrySet;

- (void)forEachWithJavaUtilFunctionBiConsumer:(id<JavaUtilFunctionBiConsumer>)action;

/*!
 @brief Returns the value to which the specified key is mapped,
 or <code>null</code> if this map contains no mapping for the key.
 <p>More formally, if this map contains a mapping from a key
 <code>k</code> to a value <code>v</code> such that <code>(key==null ? k==null :
 key.equals(k))</code>
 , then this method returns <code>v</code>; otherwise
 it returns <code>null</code>.  (There can be at most one such mapping.)
 <p>A return value of <code>null</code> does not <i>necessarily</i>
 indicate that the map contains no mapping for the key; it's also
 possible that the map explicitly maps the key to <code>null</code>.
 The <code>containsKey</code> operation may be used to
 distinguish these two cases.
 - seealso: #put(Object,Object)
 */
- (id)getWithId:(id)key;

/*!
 @brief Returns <tt>true</tt> if this map contains no key-value mappings.
 @return <tt>true</tt> if this map contains no key-value mappings
 */
- (jboolean)isEmpty;

/*!
 @brief Returns a <code>Set</code> view of the keys contained in this map.
 The set is backed by the map, so changes to the map are
 reflected in the set, and vice-versa.  If the map is modified
 while an iteration over the set is in progress (except through
 the iterator's own <tt>remove</tt> operation), the results of
 the iteration are undefined.  The set supports element removal,
 which removes the corresponding mapping from the map, via the
 <tt>Iterator.remove</tt>, <tt>Set.remove</tt>,
 <tt>removeAll</tt>, <tt>retainAll</tt>, and <tt>clear</tt>
 operations.  It does not support the <tt>add</tt> or <tt>addAll</tt>
 operations.
 */
- (id<JavaUtilSet>)keySet;

/*!
 @brief Associates the specified value with the specified key in this map.
 If the map previously contained a mapping for the key, the old
 value is replaced.
 @param key key with which the specified value is to be associated
 @param value value to be associated with the specified key
 @return the previous value associated with <tt>key</tt>, or
 <tt>null</tt> if there was no mapping for <tt>key</tt>.
 (A <tt>null</tt> return can also indicate that the map
 previously associated <tt>null</tt> with <tt>key</tt>.)
 */
- (id)putWithId:(id)key
         withId:(id)value;

/*!
 @brief Copies all of the mappings from the specified map to this map.
 These mappings will replace any mappings that this map had for
 any of the keys currently in the specified map.
 @param m mappings to be stored in this map
 @throws NullPointerException if the specified map is null
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)m;

/*!
 @brief Removes the mapping for the specified key from this map if present.
 @param key key whose mapping is to be removed from the map
 @return the previous value associated with <tt>key</tt>, or
 <tt>null</tt> if there was no mapping for <tt>key</tt>.
 (A <tt>null</tt> return can also indicate that the map
 previously associated <tt>null</tt> with <tt>key</tt>.)
 */
- (id)removeWithId:(id)key;

- (jboolean)replaceWithId:(id)key
                   withId:(id)oldValue
                   withId:(id)newValue;

- (void)replaceAllWithJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)function;

/*!
 @brief Returns the number of key-value mappings in this map.
 @return the number of key-value mappings in this map
 */
- (jint)size;

/*!
 @brief Returns a <code>Collection</code> view of the values contained in this map.
 The collection is backed by the map, so changes to the map are
 reflected in the collection, and vice-versa.  If the map is
 modified while an iteration over the collection is in progress
 (except through the iterator's own <tt>remove</tt> operation),
 the results of the iteration are undefined.  The collection
 supports element removal, which removes the corresponding
 mapping from the map, via the <tt>Iterator.remove</tt>,
 <tt>Collection.remove</tt>, <tt>removeAll</tt>,
 <tt>retainAll</tt> and <tt>clear</tt> operations.  It does not
 support the <tt>add</tt> or <tt>addAll</tt> operations.
 */
- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

/*!
 @brief Adds a new entry with the specified key, value and hash code to
 the specified bucket.
 It is the responsibility of this
 method to resize the table if appropriate.
 Subclass overrides this to alter the behavior of put method.
 */
- (void)addEntryWithInt:(jint)hash_
                 withId:(id)key
                 withId:(id)value
                withInt:(jint)bucketIndex;

- (jint)capacity;

/*!
 @brief Like addEntry except that this version is used when creating entries
 as part of Map construction or "pseudo-construction" (cloning,
 deserialization).
 This version needn't worry about resizing the table.
 Subclass overrides this to alter the behavior of HashMap(Map),
 clone, and readObject.
 */
- (void)createEntryWithInt:(jint)hash_
                    withId:(id)key
                    withId:(id)value
                   withInt:(jint)bucketIndex;

/*!
 @brief Returns the entry associated with the specified key in the
 HashMap.
 Returns null if the HashMap contains no mapping
 for the key.
 */
- (id<JavaUtilMap_Entry>)getEntryWithId:(id)key;

/*!
 @brief Returns index for hash code h.
 */
+ (jint)indexForWithInt:(jint)h
                withInt:(jint)length;

/*!
 @brief Initialization hook for subclasses.
 This method is called
 in all constructors and pseudo-constructors (clone, readObject)
 after HashMap has been initialized but before any entries have
 been inserted.  (In the absence of this method, readObject would
 require explicit knowledge of subclasses.)
 */
- (void)init__ OBJC_METHOD_FAMILY_NONE;

- (jfloat)loadFactor;

- (id<JavaUtilIterator>)newEntryIterator OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilIterator>)newKeyIterator OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilIterator>)newValueIterator OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Removes and returns the entry associated with the specified key
 in the HashMap.
 Returns null if the HashMap contains no mapping
 for this key.
 */
- (id<JavaUtilMap_Entry>)removeEntryForKeyWithId:(id)key;

/*!
 @brief Special version of remove for EntrySet using <code>Map.Entry.equals()</code>
 for matching.
 */
- (id<JavaUtilMap_Entry>)removeMappingWithId:(id)o;

/*!
 @brief Rehashes the contents of this map into a new array with a
 larger capacity.
 This method is called automatically when the
 number of keys in this map reaches its threshold.
 If current capacity is MAXIMUM_CAPACITY, this method does not
 resize the map, but sets threshold to Integer.MAX_VALUE.
 This has the effect of preventing future calls.
 @param newCapacity the new capacity, MUST be a power of two;
 must be greater than current capacity unless current
 capacity is MAXIMUM_CAPACITY (in which case value
 is irrelevant).
 */
- (void)resizeWithInt:(jint)newCapacity;

/*!
 @brief Transfers all entries from current table to newTable.
 */
- (void)transferWithJavaUtilHashMap_HashMapEntryArray:(IOSObjectArray *)newTable;

@end

J2OBJC_STATIC_INIT(JavaUtilHashMap)

J2OBJC_FIELD_SETTER(JavaUtilHashMap, table_, IOSObjectArray *)

/*!
 @brief The default initial capacity - MUST be a power of two.
 */
inline jint JavaUtilHashMap_get_DEFAULT_INITIAL_CAPACITY();
#define JavaUtilHashMap_DEFAULT_INITIAL_CAPACITY 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilHashMap, DEFAULT_INITIAL_CAPACITY, jint)

/*!
 @brief The maximum capacity, used if a higher value is implicitly specified
 by either of the constructors with arguments.
 MUST be a power of two <= 1<<30.
 */
inline jint JavaUtilHashMap_get_MAXIMUM_CAPACITY();
#define JavaUtilHashMap_MAXIMUM_CAPACITY 1073741824
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilHashMap, MAXIMUM_CAPACITY, jint)

/*!
 @brief The load factor used when none specified in constructor.
 */
inline jfloat JavaUtilHashMap_get_DEFAULT_LOAD_FACTOR();
#define JavaUtilHashMap_DEFAULT_LOAD_FACTOR 0.75f
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilHashMap, DEFAULT_LOAD_FACTOR, jfloat)

/*!
 @brief An empty table instance to share when the table is not inflated.
 */
inline IOSObjectArray *JavaUtilHashMap_get_EMPTY_TABLE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *JavaUtilHashMap_EMPTY_TABLE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilHashMap, EMPTY_TABLE, IOSObjectArray *)

/*!
 @brief The load factor for the hash table.
 */
inline jfloat JavaUtilHashMap_get_loadFactor_();
#define JavaUtilHashMap_loadFactor_ 0.75f
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilHashMap, loadFactor_, jfloat)

FOUNDATION_EXPORT void JavaUtilHashMap_initWithInt_withFloat_(JavaUtilHashMap *self, jint initialCapacity, jfloat loadFactor);

FOUNDATION_EXPORT JavaUtilHashMap *new_JavaUtilHashMap_initWithInt_withFloat_(jint initialCapacity, jfloat loadFactor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashMap *create_JavaUtilHashMap_initWithInt_withFloat_(jint initialCapacity, jfloat loadFactor);

FOUNDATION_EXPORT void JavaUtilHashMap_initWithInt_(JavaUtilHashMap *self, jint initialCapacity);

FOUNDATION_EXPORT JavaUtilHashMap *new_JavaUtilHashMap_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashMap *create_JavaUtilHashMap_initWithInt_(jint initialCapacity);

FOUNDATION_EXPORT void JavaUtilHashMap_init(JavaUtilHashMap *self);

FOUNDATION_EXPORT JavaUtilHashMap *new_JavaUtilHashMap_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashMap *create_JavaUtilHashMap_init();

FOUNDATION_EXPORT void JavaUtilHashMap_initWithJavaUtilMap_(JavaUtilHashMap *self, id<JavaUtilMap> m);

FOUNDATION_EXPORT JavaUtilHashMap *new_JavaUtilHashMap_initWithJavaUtilMap_(id<JavaUtilMap> m) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashMap *create_JavaUtilHashMap_initWithJavaUtilMap_(id<JavaUtilMap> m);

FOUNDATION_EXPORT jint JavaUtilHashMap_indexForWithInt_withInt_(jint h, jint length);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap)

#endif

#if !defined (JavaUtilHashMap_HashMapEntry_) && (INCLUDE_ALL_JavaUtilHashMap || defined(INCLUDE_JavaUtilHashMap_HashMapEntry))
#define JavaUtilHashMap_HashMapEntry_

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap_Entry 1
#include "java/util/Map.h"

@class JavaUtilHashMap;

/*!
  
 */
@interface JavaUtilHashMap_HashMapEntry : NSObject < JavaUtilMap_Entry > {
 @public
  id key_;
  id value_;
  JavaUtilHashMap_HashMapEntry *next_;
  jint hash__;
}

#pragma mark Public

- (jboolean)isEqual:(id)o;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

- (id)setValueWithId:(id)newValue;

- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Creates new entry.
 */
- (instancetype)initWithInt:(jint)h
                     withId:(id)k
                     withId:(id)v
withJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)n;

/*!
 @brief This method is invoked whenever the value in an entry is
 overwritten by an invocation of put(k,v) for a key k that's already
 in the HashMap.
 */
- (void)recordAccessWithJavaUtilHashMap:(JavaUtilHashMap *)m;

/*!
 @brief This method is invoked whenever the entry is
 removed from the table.
 */
- (void)recordRemovalWithJavaUtilHashMap:(JavaUtilHashMap *)m;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_HashMapEntry)

J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashMapEntry, key_, id)
J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashMapEntry, value_, id)
J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashMapEntry, next_, JavaUtilHashMap_HashMapEntry *)

FOUNDATION_EXPORT void JavaUtilHashMap_HashMapEntry_initWithInt_withId_withId_withJavaUtilHashMap_HashMapEntry_(JavaUtilHashMap_HashMapEntry *self, jint h, id k, id v, JavaUtilHashMap_HashMapEntry *n);

FOUNDATION_EXPORT JavaUtilHashMap_HashMapEntry *new_JavaUtilHashMap_HashMapEntry_initWithInt_withId_withId_withJavaUtilHashMap_HashMapEntry_(jint h, id k, id v, JavaUtilHashMap_HashMapEntry *n) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashMap_HashMapEntry *create_JavaUtilHashMap_HashMapEntry_initWithInt_withId_withId_withJavaUtilHashMap_HashMapEntry_(jint h, id k, id v, JavaUtilHashMap_HashMapEntry *n);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_HashMapEntry)

#endif

#if !defined (JavaUtilHashMap_HashMapSpliterator_) && (INCLUDE_ALL_JavaUtilHashMap || defined(INCLUDE_JavaUtilHashMap_HashMapSpliterator))
#define JavaUtilHashMap_HashMapSpliterator_

@class JavaUtilHashMap;
@class JavaUtilHashMap_HashMapEntry;

@interface JavaUtilHashMap_HashMapSpliterator : NSObject {
 @public
  JavaUtilHashMap *map_;
  JavaUtilHashMap_HashMapEntry *current_;
  jint index_;
  jint fence_;
  jint est_;
  jint expectedModCount_;
}

#pragma mark Public

- (jlong)estimateSize;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilHashMap:(JavaUtilHashMap *)m
                                withInt:(jint)origin
                                withInt:(jint)fence
                                withInt:(jint)est
                                withInt:(jint)expectedModCount;

- (jint)getFence;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_HashMapSpliterator)

J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashMapSpliterator, map_, JavaUtilHashMap *)
J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashMapSpliterator, current_, JavaUtilHashMap_HashMapEntry *)

FOUNDATION_EXPORT void JavaUtilHashMap_HashMapSpliterator_initWithJavaUtilHashMap_withInt_withInt_withInt_withInt_(JavaUtilHashMap_HashMapSpliterator *self, JavaUtilHashMap *m, jint origin, jint fence, jint est, jint expectedModCount);

FOUNDATION_EXPORT JavaUtilHashMap_HashMapSpliterator *new_JavaUtilHashMap_HashMapSpliterator_initWithJavaUtilHashMap_withInt_withInt_withInt_withInt_(JavaUtilHashMap *m, jint origin, jint fence, jint est, jint expectedModCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashMap_HashMapSpliterator *create_JavaUtilHashMap_HashMapSpliterator_initWithJavaUtilHashMap_withInt_withInt_withInt_withInt_(JavaUtilHashMap *m, jint origin, jint fence, jint est, jint expectedModCount);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_HashMapSpliterator)

#endif

#if !defined (JavaUtilHashMap_KeySpliterator_) && (INCLUDE_ALL_JavaUtilHashMap || defined(INCLUDE_JavaUtilHashMap_KeySpliterator))
#define JavaUtilHashMap_KeySpliterator_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator 1
#include "java/util/Spliterator.h"

@class JavaUtilHashMap;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;

@interface JavaUtilHashMap_KeySpliterator : JavaUtilHashMap_HashMapSpliterator < JavaUtilSpliterator >

#pragma mark Public

- (jint)characteristics;

- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (JavaUtilHashMap_KeySpliterator *)trySplit;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilHashMap:(JavaUtilHashMap *)m
                                withInt:(jint)origin
                                withInt:(jint)fence
                                withInt:(jint)est
                                withInt:(jint)expectedModCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_KeySpliterator)

FOUNDATION_EXPORT void JavaUtilHashMap_KeySpliterator_initWithJavaUtilHashMap_withInt_withInt_withInt_withInt_(JavaUtilHashMap_KeySpliterator *self, JavaUtilHashMap *m, jint origin, jint fence, jint est, jint expectedModCount);

FOUNDATION_EXPORT JavaUtilHashMap_KeySpliterator *new_JavaUtilHashMap_KeySpliterator_initWithJavaUtilHashMap_withInt_withInt_withInt_withInt_(JavaUtilHashMap *m, jint origin, jint fence, jint est, jint expectedModCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashMap_KeySpliterator *create_JavaUtilHashMap_KeySpliterator_initWithJavaUtilHashMap_withInt_withInt_withInt_withInt_(JavaUtilHashMap *m, jint origin, jint fence, jint est, jint expectedModCount);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_KeySpliterator)

#endif

#if !defined (JavaUtilHashMap_ValueSpliterator_) && (INCLUDE_ALL_JavaUtilHashMap || defined(INCLUDE_JavaUtilHashMap_ValueSpliterator))
#define JavaUtilHashMap_ValueSpliterator_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator 1
#include "java/util/Spliterator.h"

@class JavaUtilHashMap;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;

@interface JavaUtilHashMap_ValueSpliterator : JavaUtilHashMap_HashMapSpliterator < JavaUtilSpliterator >

#pragma mark Public

- (jint)characteristics;

- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (JavaUtilHashMap_ValueSpliterator *)trySplit;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilHashMap:(JavaUtilHashMap *)m
                                withInt:(jint)origin
                                withInt:(jint)fence
                                withInt:(jint)est
                                withInt:(jint)expectedModCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_ValueSpliterator)

FOUNDATION_EXPORT void JavaUtilHashMap_ValueSpliterator_initWithJavaUtilHashMap_withInt_withInt_withInt_withInt_(JavaUtilHashMap_ValueSpliterator *self, JavaUtilHashMap *m, jint origin, jint fence, jint est, jint expectedModCount);

FOUNDATION_EXPORT JavaUtilHashMap_ValueSpliterator *new_JavaUtilHashMap_ValueSpliterator_initWithJavaUtilHashMap_withInt_withInt_withInt_withInt_(JavaUtilHashMap *m, jint origin, jint fence, jint est, jint expectedModCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashMap_ValueSpliterator *create_JavaUtilHashMap_ValueSpliterator_initWithJavaUtilHashMap_withInt_withInt_withInt_withInt_(JavaUtilHashMap *m, jint origin, jint fence, jint est, jint expectedModCount);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_ValueSpliterator)

#endif

#if !defined (JavaUtilHashMap_EntrySpliterator_) && (INCLUDE_ALL_JavaUtilHashMap || defined(INCLUDE_JavaUtilHashMap_EntrySpliterator))
#define JavaUtilHashMap_EntrySpliterator_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator 1
#include "java/util/Spliterator.h"

@class JavaUtilHashMap;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;

@interface JavaUtilHashMap_EntrySpliterator : JavaUtilHashMap_HashMapSpliterator < JavaUtilSpliterator >

#pragma mark Public

- (jint)characteristics;

- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (JavaUtilHashMap_EntrySpliterator *)trySplit;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilHashMap:(JavaUtilHashMap *)m
                                withInt:(jint)origin
                                withInt:(jint)fence
                                withInt:(jint)est
                                withInt:(jint)expectedModCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_EntrySpliterator)

FOUNDATION_EXPORT void JavaUtilHashMap_EntrySpliterator_initWithJavaUtilHashMap_withInt_withInt_withInt_withInt_(JavaUtilHashMap_EntrySpliterator *self, JavaUtilHashMap *m, jint origin, jint fence, jint est, jint expectedModCount);

FOUNDATION_EXPORT JavaUtilHashMap_EntrySpliterator *new_JavaUtilHashMap_EntrySpliterator_initWithJavaUtilHashMap_withInt_withInt_withInt_withInt_(JavaUtilHashMap *m, jint origin, jint fence, jint est, jint expectedModCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashMap_EntrySpliterator *create_JavaUtilHashMap_EntrySpliterator_initWithJavaUtilHashMap_withInt_withInt_withInt_withInt_(JavaUtilHashMap *m, jint origin, jint fence, jint est, jint expectedModCount);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_EntrySpliterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilHashMap")
