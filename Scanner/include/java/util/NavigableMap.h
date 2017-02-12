//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/NavigableMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilNavigableMap")
#ifdef RESTRICT_JavaUtilNavigableMap
#define INCLUDE_ALL_JavaUtilNavigableMap 0
#else
#define INCLUDE_ALL_JavaUtilNavigableMap 1
#endif
#undef RESTRICT_JavaUtilNavigableMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilNavigableMap_) && (INCLUDE_ALL_JavaUtilNavigableMap || defined(INCLUDE_JavaUtilNavigableMap))
#define JavaUtilNavigableMap_

#define RESTRICT_JavaUtilSortedMap 1
#define INCLUDE_JavaUtilSortedMap 1
#include "java/util/SortedMap.h"

@protocol JavaUtilMap_Entry;
@protocol JavaUtilNavigableSet;

/*!
 @brief A <code>SortedMap</code> extended with navigation methods returning the
 closest matches for given search targets.
 Methods
 <code>lowerEntry</code>, <code>floorEntry</code>, <code>ceilingEntry</code>,
 and <code>higherEntry</code> return <code>Map.Entry</code> objects
 associated with keys respectively less than, less than or equal,
 greater than or equal, and greater than a given key, returning
 <code>null</code> if there is no such key.  Similarly, methods
 <code>lowerKey</code>, <code>floorKey</code>, <code>ceilingKey</code>, and
 <code>higherKey</code> return only the associated keys. All of these
 methods are designed for locating, not traversing entries.
 <p>A <code>NavigableMap</code> may be accessed and traversed in either
 ascending or descending key order.  The <code>descendingMap</code>
 method returns a view of the map with the senses of all relational
 and directional methods inverted. The performance of ascending
 operations and views is likely to be faster than that of descending
 ones.  Methods
 <code>subMap(K, boolean, K, boolean)</code>,
 <code>headMap(K, boolean)</code>, and
 <code>tailMap(K, boolean)</code>
 differ from the like-named <code>SortedMap</code> methods in accepting
 additional arguments describing whether lower and upper bounds are
 inclusive versus exclusive.  Submaps of any <code>NavigableMap</code>
 must implement the <code>NavigableMap</code> interface.
 <p>This interface additionally defines methods <code>firstEntry</code>,
 <code>pollFirstEntry</code>, <code>lastEntry</code>, and
 <code>pollLastEntry</code> that return and/or remove the least and
 greatest mappings, if any exist, else returning <code>null</code>.
 <p>Implementations of entry-returning methods are expected to
 return <code>Map.Entry</code> pairs representing snapshots of mappings
 at the time they were produced, and thus generally do <em>not</em>
 support the optional <code>Entry.setValue</code> method. Note however
 that it is possible to change mappings in the associated map using
 method <code>put</code>.
 <p>Methods
 <code>subMap(K, K)</code>,
 <code>headMap(K)</code>, and
 <code>tailMap(K)</code>
 are specified to return <code>SortedMap</code> to allow existing
 implementations of <code>SortedMap</code> to be compatibly retrofitted to
 implement <code>NavigableMap</code>, but extensions and implementations
 of this interface are encouraged to override these methods to return
 <code>NavigableMap</code>.  Similarly,
 <code>keySet()</code> can be overridden to return <code>NavigableSet</code>.
 @author Doug Lea
 @author Josh Bloch
 @since 1.6
 */
@protocol JavaUtilNavigableMap < JavaUtilSortedMap, JavaObject >

/*!
 @brief Returns a key-value mapping associated with the greatest key
 strictly less than the given key, or <code>null</code> if there is
 no such key.
 @param key the key
 @return an entry with the greatest key less than <code>key</code>,
 or <code>null</code> if there is no such key
 @throws ClassCastException if the specified key cannot be compared
 with the keys currently in the map
 @throws NullPointerException if the specified key is null
 and this map does not permit null keys
 */
- (id<JavaUtilMap_Entry>)lowerEntryWithId:(id)key;

/*!
 @brief Returns the greatest key strictly less than the given key, or
 <code>null</code> if there is no such key.
 @param key the key
 @return the greatest key less than <code>key</code>,
 or <code>null</code> if there is no such key
 @throws ClassCastException if the specified key cannot be compared
 with the keys currently in the map
 @throws NullPointerException if the specified key is null
 and this map does not permit null keys
 */
- (id)lowerKeyWithId:(id)key;

/*!
 @brief Returns a key-value mapping associated with the greatest key
 less than or equal to the given key, or <code>null</code> if there
 is no such key.
 @param key the key
 @return an entry with the greatest key less than or equal to
 <code>key</code>, or <code>null</code> if there is no such key
 @throws ClassCastException if the specified key cannot be compared
 with the keys currently in the map
 @throws NullPointerException if the specified key is null
 and this map does not permit null keys
 */
- (id<JavaUtilMap_Entry>)floorEntryWithId:(id)key;

/*!
 @brief Returns the greatest key less than or equal to the given key,
 or <code>null</code> if there is no such key.
 @param key the key
 @return the greatest key less than or equal to <code>key</code>,
 or <code>null</code> if there is no such key
 @throws ClassCastException if the specified key cannot be compared
 with the keys currently in the map
 @throws NullPointerException if the specified key is null
 and this map does not permit null keys
 */
- (id)floorKeyWithId:(id)key;

/*!
 @brief Returns a key-value mapping associated with the least key
 greater than or equal to the given key, or <code>null</code> if
 there is no such key.
 @param key the key
 @return an entry with the least key greater than or equal to
 <code>key</code>, or <code>null</code> if there is no such key
 @throws ClassCastException if the specified key cannot be compared
 with the keys currently in the map
 @throws NullPointerException if the specified key is null
 and this map does not permit null keys
 */
- (id<JavaUtilMap_Entry>)ceilingEntryWithId:(id)key;

/*!
 @brief Returns the least key greater than or equal to the given key,
 or <code>null</code> if there is no such key.
 @param key the key
 @return the least key greater than or equal to <code>key</code>,
 or <code>null</code> if there is no such key
 @throws ClassCastException if the specified key cannot be compared
 with the keys currently in the map
 @throws NullPointerException if the specified key is null
 and this map does not permit null keys
 */
- (id)ceilingKeyWithId:(id)key;

/*!
 @brief Returns a key-value mapping associated with the least key
 strictly greater than the given key, or <code>null</code> if there
 is no such key.
 @param key the key
 @return an entry with the least key greater than <code>key</code>,
 or <code>null</code> if there is no such key
 @throws ClassCastException if the specified key cannot be compared
 with the keys currently in the map
 @throws NullPointerException if the specified key is null
 and this map does not permit null keys
 */
- (id<JavaUtilMap_Entry>)higherEntryWithId:(id)key;

/*!
 @brief Returns the least key strictly greater than the given key, or
 <code>null</code> if there is no such key.
 @param key the key
 @return the least key greater than <code>key</code>,
 or <code>null</code> if there is no such key
 @throws ClassCastException if the specified key cannot be compared
 with the keys currently in the map
 @throws NullPointerException if the specified key is null
 and this map does not permit null keys
 */
- (id)higherKeyWithId:(id)key;

/*!
 @brief Returns a key-value mapping associated with the least
 key in this map, or <code>null</code> if the map is empty.
 @return an entry with the least key,
 or <code>null</code> if this map is empty
 */
- (id<JavaUtilMap_Entry>)firstEntry;

/*!
 @brief Returns a key-value mapping associated with the greatest
 key in this map, or <code>null</code> if the map is empty.
 @return an entry with the greatest key,
 or <code>null</code> if this map is empty
 */
- (id<JavaUtilMap_Entry>)lastEntry;

/*!
 @brief Removes and returns a key-value mapping associated with
 the least key in this map, or <code>null</code> if the map is empty.
 @return the removed first entry of this map,
 or <code>null</code> if this map is empty
 */
- (id<JavaUtilMap_Entry>)pollFirstEntry;

/*!
 @brief Removes and returns a key-value mapping associated with
 the greatest key in this map, or <code>null</code> if the map is empty.
 @return the removed last entry of this map,
 or <code>null</code> if this map is empty
 */
- (id<JavaUtilMap_Entry>)pollLastEntry;

/*!
 @brief Returns a reverse order view of the mappings contained in this map.
 The descending map is backed by this map, so changes to the map are
 reflected in the descending map, and vice-versa.  If either map is
 modified while an iteration over a collection view of either map
 is in progress (except through the iterator's own <code>remove</code>
 operation), the results of the iteration are undefined.
 <p>The returned map has an ordering equivalent to
 <code>Collections.reverseOrder</code><code>(comparator())</code>.
 The expression <code>m.descendingMap().descendingMap()</code> returns a
 view of <code>m</code> essentially equivalent to <code>m</code>.
 @return a reverse order view of this map
 */
- (id<JavaUtilNavigableMap>)descendingMap;

/*!
 @brief Returns a <code>NavigableSet</code> view of the keys contained in this map.
 The set's iterator returns the keys in ascending order.
 The set is backed by the map, so changes to the map are reflected in
 the set, and vice-versa.  If the map is modified while an iteration
 over the set is in progress (except through the iterator's own <code>remove</code>
  operation), the results of the iteration are undefined.  The
 set supports element removal, which removes the corresponding mapping
 from the map, via the <code>Iterator.remove</code>, <code>Set.remove</code>,
 <code>removeAll</code>, <code>retainAll</code>, and <code>clear</code> operations.
 It does not support the <code>add</code> or <code>addAll</code> operations.
 @return a navigable set view of the keys in this map
 */
- (id<JavaUtilNavigableSet>)navigableKeySet;

/*!
 @brief Returns a reverse order <code>NavigableSet</code> view of the keys contained in this map.
 The set's iterator returns the keys in descending order.
 The set is backed by the map, so changes to the map are reflected in
 the set, and vice-versa.  If the map is modified while an iteration
 over the set is in progress (except through the iterator's own <code>remove</code>
  operation), the results of the iteration are undefined.  The
 set supports element removal, which removes the corresponding mapping
 from the map, via the <code>Iterator.remove</code>, <code>Set.remove</code>,
 <code>removeAll</code>, <code>retainAll</code>, and <code>clear</code> operations.
 It does not support the <code>add</code> or <code>addAll</code> operations.
 @return a reverse order navigable set view of the keys in this map
 */
- (id<JavaUtilNavigableSet>)descendingKeySet;

/*!
 @brief Returns a view of the portion of this map whose keys range from
 <code>fromKey</code> to <code>toKey</code>.
 If <code>fromKey</code> and
 <code>toKey</code> are equal, the returned map is empty unless
 <code>fromInclusive</code> and <code>toInclusive</code> are both true.  The
 returned map is backed by this map, so changes in the returned map are
 reflected in this map, and vice-versa.  The returned map supports all
 optional map operations that this map supports.
 <p>The returned map will throw an <code>IllegalArgumentException</code>
 on an attempt to insert a key outside of its range, or to construct a
 submap either of whose endpoints lie outside its range.
 @param fromKey low endpoint of the keys in the returned map
 @param fromInclusive <code>true</code> if the low endpoint
 is to be included in the returned view
 @param toKey high endpoint of the keys in the returned map
 @param toInclusive <code>true</code> if the high endpoint
 is to be included in the returned view
 @return a view of the portion of this map whose keys range from
 <code>fromKey</code> to <code>toKey</code>
 @throws ClassCastException if <code>fromKey</code> and <code>toKey</code>
 cannot be compared to one another using this map's comparator
 (or, if the map has no comparator, using natural ordering).
 Implementations may, but are not required to, throw this
 exception if <code>fromKey</code> or <code>toKey</code>
 cannot be compared to keys currently in the map.
 @throws NullPointerException if <code>fromKey</code> or <code>toKey</code>
 is null and this map does not permit null keys
 @throws IllegalArgumentException if <code>fromKey</code> is greater than
 <code>toKey</code>; or if this map itself has a restricted
 range, and <code>fromKey</code> or <code>toKey</code> lies
 outside the bounds of the range
 */
- (id<JavaUtilNavigableMap>)subMapWithId:(id)fromKey
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toKey
                             withBoolean:(jboolean)toInclusive;

/*!
 @brief Returns a view of the portion of this map whose keys are less than (or
 equal to, if <code>inclusive</code> is true) <code>toKey</code>.
 The returned
 map is backed by this map, so changes in the returned map are reflected
 in this map, and vice-versa.  The returned map supports all optional
 map operations that this map supports.
 <p>The returned map will throw an <code>IllegalArgumentException</code>
 on an attempt to insert a key outside its range.
 @param toKey high endpoint of the keys in the returned map
 @param inclusive <code>true</code> if the high endpoint
 is to be included in the returned view
 @return a view of the portion of this map whose keys are less than
 (or equal to, if <code>inclusive</code> is true) <code>toKey</code>
 @throws ClassCastException if <code>toKey</code> is not compatible
 with this map's comparator (or, if the map has no comparator,
 if <code>toKey</code> does not implement <code>Comparable</code>).
 Implementations may, but are not required to, throw this
 exception if <code>toKey</code> cannot be compared to keys
 currently in the map.
 @throws NullPointerException if <code>toKey</code> is null
 and this map does not permit null keys
 @throws IllegalArgumentException if this map itself has a
 restricted range, and <code>toKey</code> lies outside the
 bounds of the range
 */
- (id<JavaUtilNavigableMap>)headMapWithId:(id)toKey
                              withBoolean:(jboolean)inclusive;

/*!
 @brief Returns a view of the portion of this map whose keys are greater than (or
 equal to, if <code>inclusive</code> is true) <code>fromKey</code>.
 The returned
 map is backed by this map, so changes in the returned map are reflected
 in this map, and vice-versa.  The returned map supports all optional
 map operations that this map supports.
 <p>The returned map will throw an <code>IllegalArgumentException</code>
 on an attempt to insert a key outside its range.
 @param fromKey low endpoint of the keys in the returned map
 @param inclusive <code>true</code> if the low endpoint
 is to be included in the returned view
 @return a view of the portion of this map whose keys are greater than
 (or equal to, if <code>inclusive</code> is true) <code>fromKey</code>
 @throws ClassCastException if <code>fromKey</code> is not compatible
 with this map's comparator (or, if the map has no comparator,
 if <code>fromKey</code> does not implement <code>Comparable</code>).
 Implementations may, but are not required to, throw this
 exception if <code>fromKey</code> cannot be compared to keys
 currently in the map.
 @throws NullPointerException if <code>fromKey</code> is null
 and this map does not permit null keys
 @throws IllegalArgumentException if this map itself has a
 restricted range, and <code>fromKey</code> lies outside the
 bounds of the range
 */
- (id<JavaUtilNavigableMap>)tailMapWithId:(id)fromKey
                              withBoolean:(jboolean)inclusive;

/*!
 @brief 
 <p>Equivalent to <code>subMap(fromKey, true, toKey, false)</code>.
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (id<JavaUtilSortedMap>)subMapWithId:(id)fromKey
                               withId:(id)toKey;

/*!
 @brief 
 <p>Equivalent to <code>headMap(toKey, false)</code>.
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (id<JavaUtilSortedMap>)headMapWithId:(id)toKey;

/*!
 @brief 
 <p>Equivalent to <code>tailMap(fromKey, true)</code>.
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (id<JavaUtilSortedMap>)tailMapWithId:(id)fromKey;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilNavigableMap)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilNavigableMap)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilNavigableMap")
