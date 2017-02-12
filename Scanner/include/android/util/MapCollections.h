//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/MapCollections.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidUtilMapCollections")
#ifdef RESTRICT_AndroidUtilMapCollections
#define INCLUDE_ALL_AndroidUtilMapCollections 0
#else
#define INCLUDE_ALL_AndroidUtilMapCollections 1
#endif
#undef RESTRICT_AndroidUtilMapCollections

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidUtilMapCollections_) && (INCLUDE_ALL_AndroidUtilMapCollections || defined(INCLUDE_AndroidUtilMapCollections))
#define AndroidUtilMapCollections_

@class AndroidUtilMapCollections_EntrySet;
@class AndroidUtilMapCollections_KeySet;
@class AndroidUtilMapCollections_ValuesCollection;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief Helper for writing standard Java collection interfaces to a data
 structure like <code>ArrayMap</code>.
 */
@interface AndroidUtilMapCollections : NSObject {
 @public
  AndroidUtilMapCollections_EntrySet *mEntrySet_;
  AndroidUtilMapCollections_KeySet *mKeySet_;
  AndroidUtilMapCollections_ValuesCollection *mValues_;
}

#pragma mark Public

+ (jboolean)containsAllHelperWithJavaUtilMap:(id<JavaUtilMap>)map
                      withJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (jboolean)equalsSetHelperWithJavaUtilSet:(id<JavaUtilSet>)set
                                    withId:(id)object;

- (id<JavaUtilSet>)getEntrySet;

- (id<JavaUtilSet>)getKeySet;

- (id<JavaUtilCollection>)getValues;

+ (jboolean)removeAllHelperWithJavaUtilMap:(id<JavaUtilMap>)map
                    withJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (jboolean)retainAllHelperWithJavaUtilMap:(id<JavaUtilMap>)map
                    withJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (IOSObjectArray *)toArrayHelperWithInt:(jint)offset;

- (IOSObjectArray *)toArrayHelperWithNSObjectArray:(IOSObjectArray *)array
                                           withInt:(jint)offset;

#pragma mark Protected

- (void)colClear;

- (id)colGetEntryWithInt:(jint)index
                 withInt:(jint)offset;

- (id<JavaUtilMap>)colGetMap;

- (jint)colGetSize;

- (jint)colIndexOfKeyWithId:(id)key;

- (jint)colIndexOfValueWithId:(id)key;

- (void)colPutWithId:(id)key
              withId:(id)value;

- (void)colRemoveAtWithInt:(jint)index;

- (id)colSetValueWithInt:(jint)index
                  withId:(id)value;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilMapCollections)

J2OBJC_FIELD_SETTER(AndroidUtilMapCollections, mEntrySet_, AndroidUtilMapCollections_EntrySet *)
J2OBJC_FIELD_SETTER(AndroidUtilMapCollections, mKeySet_, AndroidUtilMapCollections_KeySet *)
J2OBJC_FIELD_SETTER(AndroidUtilMapCollections, mValues_, AndroidUtilMapCollections_ValuesCollection *)

FOUNDATION_EXPORT void AndroidUtilMapCollections_init(AndroidUtilMapCollections *self);

FOUNDATION_EXPORT jboolean AndroidUtilMapCollections_containsAllHelperWithJavaUtilMap_withJavaUtilCollection_(id<JavaUtilMap> map, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT jboolean AndroidUtilMapCollections_removeAllHelperWithJavaUtilMap_withJavaUtilCollection_(id<JavaUtilMap> map, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT jboolean AndroidUtilMapCollections_retainAllHelperWithJavaUtilMap_withJavaUtilCollection_(id<JavaUtilMap> map, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT jboolean AndroidUtilMapCollections_equalsSetHelperWithJavaUtilSet_withId_(id<JavaUtilSet> set, id object);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilMapCollections)

#endif

#if !defined (AndroidUtilMapCollections_ArrayIterator_) && (INCLUDE_ALL_AndroidUtilMapCollections || defined(INCLUDE_AndroidUtilMapCollections_ArrayIterator))
#define AndroidUtilMapCollections_ArrayIterator_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "java/util/Iterator.h"

@class AndroidUtilMapCollections;
@protocol JavaUtilFunctionConsumer;

@interface AndroidUtilMapCollections_ArrayIterator : NSObject < JavaUtilIterator > {
 @public
  jint mOffset_;
  jint mSize_;
  jint mIndex_;
  jboolean mCanRemove_;
}

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Package-Private

- (instancetype)initWithAndroidUtilMapCollections:(AndroidUtilMapCollections *)outer$
                                          withInt:(jint)offset;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilMapCollections_ArrayIterator)

FOUNDATION_EXPORT void AndroidUtilMapCollections_ArrayIterator_initWithAndroidUtilMapCollections_withInt_(AndroidUtilMapCollections_ArrayIterator *self, AndroidUtilMapCollections *outer$, jint offset);

FOUNDATION_EXPORT AndroidUtilMapCollections_ArrayIterator *new_AndroidUtilMapCollections_ArrayIterator_initWithAndroidUtilMapCollections_withInt_(AndroidUtilMapCollections *outer$, jint offset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilMapCollections_ArrayIterator *create_AndroidUtilMapCollections_ArrayIterator_initWithAndroidUtilMapCollections_withInt_(AndroidUtilMapCollections *outer$, jint offset);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilMapCollections_ArrayIterator)

#endif

#if !defined (AndroidUtilMapCollections_MapIterator_) && (INCLUDE_ALL_AndroidUtilMapCollections || defined(INCLUDE_AndroidUtilMapCollections_MapIterator))
#define AndroidUtilMapCollections_MapIterator_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "java/util/Iterator.h"

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap_Entry 1
#include "java/util/Map.h"

@class AndroidUtilMapCollections;
@protocol JavaUtilFunctionConsumer;

@interface AndroidUtilMapCollections_MapIterator : NSObject < JavaUtilIterator, JavaUtilMap_Entry > {
 @public
  jint mEnd_;
  jint mIndex_;
  jboolean mEntryValid_;
}

#pragma mark Public

- (jboolean)isEqual:(id)o;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

- (jboolean)hasNext;

- (id<JavaUtilMap_Entry>)next;

- (void)remove;

- (id)setValueWithId:(id)object;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithAndroidUtilMapCollections:(AndroidUtilMapCollections *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilMapCollections_MapIterator)

FOUNDATION_EXPORT void AndroidUtilMapCollections_MapIterator_initWithAndroidUtilMapCollections_(AndroidUtilMapCollections_MapIterator *self, AndroidUtilMapCollections *outer$);

FOUNDATION_EXPORT AndroidUtilMapCollections_MapIterator *new_AndroidUtilMapCollections_MapIterator_initWithAndroidUtilMapCollections_(AndroidUtilMapCollections *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilMapCollections_MapIterator *create_AndroidUtilMapCollections_MapIterator_initWithAndroidUtilMapCollections_(AndroidUtilMapCollections *outer$);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilMapCollections_MapIterator)

#endif

#if !defined (AndroidUtilMapCollections_EntrySet_) && (INCLUDE_ALL_AndroidUtilMapCollections || defined(INCLUDE_AndroidUtilMapCollections_EntrySet))
#define AndroidUtilMapCollections_EntrySet_

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "java/util/Set.h"

@class AndroidUtilMapCollections;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;

@interface AndroidUtilMapCollections_EntrySet : NSObject < JavaUtilSet >

#pragma mark Public

- (jboolean)addWithId:(id<JavaUtilMap_Entry>)object;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

#pragma mark Package-Private

- (instancetype)initWithAndroidUtilMapCollections:(AndroidUtilMapCollections *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilMapCollections_EntrySet)

FOUNDATION_EXPORT void AndroidUtilMapCollections_EntrySet_initWithAndroidUtilMapCollections_(AndroidUtilMapCollections_EntrySet *self, AndroidUtilMapCollections *outer$);

FOUNDATION_EXPORT AndroidUtilMapCollections_EntrySet *new_AndroidUtilMapCollections_EntrySet_initWithAndroidUtilMapCollections_(AndroidUtilMapCollections *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilMapCollections_EntrySet *create_AndroidUtilMapCollections_EntrySet_initWithAndroidUtilMapCollections_(AndroidUtilMapCollections *outer$);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilMapCollections_EntrySet)

#endif

#if !defined (AndroidUtilMapCollections_KeySet_) && (INCLUDE_ALL_AndroidUtilMapCollections || defined(INCLUDE_AndroidUtilMapCollections_KeySet))
#define AndroidUtilMapCollections_KeySet_

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "java/util/Set.h"

@class AndroidUtilMapCollections;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;

@interface AndroidUtilMapCollections_KeySet : NSObject < JavaUtilSet >

#pragma mark Public

- (jboolean)addWithId:(id)object;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

#pragma mark Package-Private

- (instancetype)initWithAndroidUtilMapCollections:(AndroidUtilMapCollections *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilMapCollections_KeySet)

FOUNDATION_EXPORT void AndroidUtilMapCollections_KeySet_initWithAndroidUtilMapCollections_(AndroidUtilMapCollections_KeySet *self, AndroidUtilMapCollections *outer$);

FOUNDATION_EXPORT AndroidUtilMapCollections_KeySet *new_AndroidUtilMapCollections_KeySet_initWithAndroidUtilMapCollections_(AndroidUtilMapCollections *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilMapCollections_KeySet *create_AndroidUtilMapCollections_KeySet_initWithAndroidUtilMapCollections_(AndroidUtilMapCollections *outer$);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilMapCollections_KeySet)

#endif

#if !defined (AndroidUtilMapCollections_ValuesCollection_) && (INCLUDE_ALL_AndroidUtilMapCollections || defined(INCLUDE_AndroidUtilMapCollections_ValuesCollection))
#define AndroidUtilMapCollections_ValuesCollection_

#define RESTRICT_JavaUtilCollection 1
#define INCLUDE_JavaUtilCollection 1
#include "java/util/Collection.h"

@class AndroidUtilMapCollections;
@class IOSObjectArray;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;

@interface AndroidUtilMapCollections_ValuesCollection : NSObject < JavaUtilCollection >

#pragma mark Public

- (jboolean)addWithId:(id)object;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

#pragma mark Package-Private

- (instancetype)initWithAndroidUtilMapCollections:(AndroidUtilMapCollections *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilMapCollections_ValuesCollection)

FOUNDATION_EXPORT void AndroidUtilMapCollections_ValuesCollection_initWithAndroidUtilMapCollections_(AndroidUtilMapCollections_ValuesCollection *self, AndroidUtilMapCollections *outer$);

FOUNDATION_EXPORT AndroidUtilMapCollections_ValuesCollection *new_AndroidUtilMapCollections_ValuesCollection_initWithAndroidUtilMapCollections_(AndroidUtilMapCollections *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilMapCollections_ValuesCollection *create_AndroidUtilMapCollections_ValuesCollection_initWithAndroidUtilMapCollections_(AndroidUtilMapCollections *outer$);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilMapCollections_ValuesCollection)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidUtilMapCollections")
