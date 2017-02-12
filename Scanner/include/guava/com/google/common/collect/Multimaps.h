//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/Multimaps.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMultimaps")
#ifdef RESTRICT_ComGoogleCommonCollectMultimaps
#define INCLUDE_ALL_ComGoogleCommonCollectMultimaps 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMultimaps 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMultimaps

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectMultimaps_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimaps || defined(INCLUDE_ComGoogleCommonCollectMultimaps))
#define ComGoogleCommonCollectMultimaps_

@class ComGoogleCommonCollectImmutableListMultimap;
@class ComGoogleCommonCollectImmutableMultimap;
@class ComGoogleCommonCollectImmutableSetMultimap;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonCollectListMultimap;
@protocol ComGoogleCommonCollectMaps_EntryTransformer;
@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectSetMultimap;
@protocol ComGoogleCommonCollectSortedSetMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectMultimaps : NSObject

#pragma mark Public

+ (id<JavaUtilMap>)asMapWithComGoogleCommonCollectListMultimap:(id<ComGoogleCommonCollectListMultimap>)multimap;

+ (id<JavaUtilMap>)asMapWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

+ (id<JavaUtilMap>)asMapWithComGoogleCommonCollectSetMultimap:(id<ComGoogleCommonCollectSetMultimap>)multimap;

+ (id<JavaUtilMap>)asMapWithComGoogleCommonCollectSortedSetMultimap:(id<ComGoogleCommonCollectSortedSetMultimap>)multimap;

+ (id<ComGoogleCommonCollectMultimap>)filterEntriesWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)unfiltered
                                                     withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)entryPredicate;

+ (id<ComGoogleCommonCollectSetMultimap>)filterEntriesWithComGoogleCommonCollectSetMultimap:(id<ComGoogleCommonCollectSetMultimap>)unfiltered
                                                           withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)entryPredicate;

+ (id<ComGoogleCommonCollectListMultimap>)filterKeysWithComGoogleCommonCollectListMultimap:(id<ComGoogleCommonCollectListMultimap>)unfiltered
                                                          withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)keyPredicate;

+ (id<ComGoogleCommonCollectMultimap>)filterKeysWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)unfiltered
                                                  withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)keyPredicate;

+ (id<ComGoogleCommonCollectSetMultimap>)filterKeysWithComGoogleCommonCollectSetMultimap:(id<ComGoogleCommonCollectSetMultimap>)unfiltered
                                                        withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)keyPredicate;

+ (id<ComGoogleCommonCollectMultimap>)filterValuesWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)unfiltered
                                                    withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)valuePredicate;

+ (id<ComGoogleCommonCollectSetMultimap>)filterValuesWithComGoogleCommonCollectSetMultimap:(id<ComGoogleCommonCollectSetMultimap>)unfiltered
                                                          withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)valuePredicate;

+ (id<ComGoogleCommonCollectSetMultimap>)forMapWithJavaUtilMap:(id<JavaUtilMap>)map;

+ (ComGoogleCommonCollectImmutableListMultimap *)indexWithJavaLangIterable:(id<JavaLangIterable>)values
                                           withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)keyFunction;

+ (ComGoogleCommonCollectImmutableListMultimap *)indexWithJavaUtilIterator:(id<JavaUtilIterator>)values
                                           withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)keyFunction;

+ (id<ComGoogleCommonCollectMultimap>)invertFromWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)source
                                                withComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)dest;

+ (id<ComGoogleCommonCollectListMultimap>)newListMultimapWithJavaUtilMap:(id<JavaUtilMap>)map
                                         withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)factory OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonCollectMultimap>)newMultimapWithJavaUtilMap:(id<JavaUtilMap>)map
                                 withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)factory OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonCollectSetMultimap>)newSetMultimapWithJavaUtilMap:(id<JavaUtilMap>)map
                                       withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)factory OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonCollectSortedSetMultimap>)newSortedSetMultimapWithJavaUtilMap:(id<JavaUtilMap>)map
                                                   withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)factory OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonCollectListMultimap>)synchronizedListMultimapWithComGoogleCommonCollectListMultimap:(id<ComGoogleCommonCollectListMultimap>)multimap;

+ (id<ComGoogleCommonCollectMultimap>)synchronizedMultimapWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

+ (id<ComGoogleCommonCollectSetMultimap>)synchronizedSetMultimapWithComGoogleCommonCollectSetMultimap:(id<ComGoogleCommonCollectSetMultimap>)multimap;

+ (id<ComGoogleCommonCollectSortedSetMultimap>)synchronizedSortedSetMultimapWithComGoogleCommonCollectSortedSetMultimap:(id<ComGoogleCommonCollectSortedSetMultimap>)multimap;

+ (id<ComGoogleCommonCollectListMultimap>)transformEntriesWithComGoogleCommonCollectListMultimap:(id<ComGoogleCommonCollectListMultimap>)fromMap
                                                 withComGoogleCommonCollectMaps_EntryTransformer:(id<ComGoogleCommonCollectMaps_EntryTransformer>)transformer;

+ (id<ComGoogleCommonCollectMultimap>)transformEntriesWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)fromMap
                                         withComGoogleCommonCollectMaps_EntryTransformer:(id<ComGoogleCommonCollectMaps_EntryTransformer>)transformer;

+ (id<ComGoogleCommonCollectListMultimap>)transformValuesWithComGoogleCommonCollectListMultimap:(id<ComGoogleCommonCollectListMultimap>)fromMultimap
                                                                withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id<ComGoogleCommonCollectMultimap>)transformValuesWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)fromMultimap
                                                        withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id<ComGoogleCommonCollectListMultimap>)unmodifiableListMultimapWithComGoogleCommonCollectImmutableListMultimap:(ComGoogleCommonCollectImmutableListMultimap *)delegate;

+ (id<ComGoogleCommonCollectListMultimap>)unmodifiableListMultimapWithComGoogleCommonCollectListMultimap:(id<ComGoogleCommonCollectListMultimap>)delegate;

+ (id<ComGoogleCommonCollectMultimap>)unmodifiableMultimapWithComGoogleCommonCollectImmutableMultimap:(ComGoogleCommonCollectImmutableMultimap *)delegate;

+ (id<ComGoogleCommonCollectMultimap>)unmodifiableMultimapWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)delegate;

+ (id<ComGoogleCommonCollectSetMultimap>)unmodifiableSetMultimapWithComGoogleCommonCollectImmutableSetMultimap:(ComGoogleCommonCollectImmutableSetMultimap *)delegate;

+ (id<ComGoogleCommonCollectSetMultimap>)unmodifiableSetMultimapWithComGoogleCommonCollectSetMultimap:(id<ComGoogleCommonCollectSetMultimap>)delegate;

+ (id<ComGoogleCommonCollectSortedSetMultimap>)unmodifiableSortedSetMultimapWithComGoogleCommonCollectSortedSetMultimap:(id<ComGoogleCommonCollectSortedSetMultimap>)delegate;

#pragma mark Package-Private

+ (jboolean)equalsImplWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap
                                                  withId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimaps)

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultimap> ComGoogleCommonCollectMultimaps_newMultimapWithJavaUtilMap_withComGoogleCommonBaseSupplier_(id<JavaUtilMap> map, id<ComGoogleCommonBaseSupplier> factory);

FOUNDATION_EXPORT id<ComGoogleCommonCollectListMultimap> ComGoogleCommonCollectMultimaps_newListMultimapWithJavaUtilMap_withComGoogleCommonBaseSupplier_(id<JavaUtilMap> map, id<ComGoogleCommonBaseSupplier> factory);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSetMultimap> ComGoogleCommonCollectMultimaps_newSetMultimapWithJavaUtilMap_withComGoogleCommonBaseSupplier_(id<JavaUtilMap> map, id<ComGoogleCommonBaseSupplier> factory);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSortedSetMultimap> ComGoogleCommonCollectMultimaps_newSortedSetMultimapWithJavaUtilMap_withComGoogleCommonBaseSupplier_(id<JavaUtilMap> map, id<ComGoogleCommonBaseSupplier> factory);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultimap> ComGoogleCommonCollectMultimaps_invertFromWithComGoogleCommonCollectMultimap_withComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> source, id<ComGoogleCommonCollectMultimap> dest);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultimap> ComGoogleCommonCollectMultimaps_synchronizedMultimapWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultimap> ComGoogleCommonCollectMultimaps_unmodifiableMultimapWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> delegate);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultimap> ComGoogleCommonCollectMultimaps_unmodifiableMultimapWithComGoogleCommonCollectImmutableMultimap_(ComGoogleCommonCollectImmutableMultimap *delegate);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSetMultimap> ComGoogleCommonCollectMultimaps_synchronizedSetMultimapWithComGoogleCommonCollectSetMultimap_(id<ComGoogleCommonCollectSetMultimap> multimap);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSetMultimap> ComGoogleCommonCollectMultimaps_unmodifiableSetMultimapWithComGoogleCommonCollectSetMultimap_(id<ComGoogleCommonCollectSetMultimap> delegate);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSetMultimap> ComGoogleCommonCollectMultimaps_unmodifiableSetMultimapWithComGoogleCommonCollectImmutableSetMultimap_(ComGoogleCommonCollectImmutableSetMultimap *delegate);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSortedSetMultimap> ComGoogleCommonCollectMultimaps_synchronizedSortedSetMultimapWithComGoogleCommonCollectSortedSetMultimap_(id<ComGoogleCommonCollectSortedSetMultimap> multimap);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSortedSetMultimap> ComGoogleCommonCollectMultimaps_unmodifiableSortedSetMultimapWithComGoogleCommonCollectSortedSetMultimap_(id<ComGoogleCommonCollectSortedSetMultimap> delegate);

FOUNDATION_EXPORT id<ComGoogleCommonCollectListMultimap> ComGoogleCommonCollectMultimaps_synchronizedListMultimapWithComGoogleCommonCollectListMultimap_(id<ComGoogleCommonCollectListMultimap> multimap);

FOUNDATION_EXPORT id<ComGoogleCommonCollectListMultimap> ComGoogleCommonCollectMultimaps_unmodifiableListMultimapWithComGoogleCommonCollectListMultimap_(id<ComGoogleCommonCollectListMultimap> delegate);

FOUNDATION_EXPORT id<ComGoogleCommonCollectListMultimap> ComGoogleCommonCollectMultimaps_unmodifiableListMultimapWithComGoogleCommonCollectImmutableListMultimap_(ComGoogleCommonCollectImmutableListMultimap *delegate);

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleCommonCollectMultimaps_asMapWithComGoogleCommonCollectListMultimap_(id<ComGoogleCommonCollectListMultimap> multimap);

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleCommonCollectMultimaps_asMapWithComGoogleCommonCollectSetMultimap_(id<ComGoogleCommonCollectSetMultimap> multimap);

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleCommonCollectMultimaps_asMapWithComGoogleCommonCollectSortedSetMultimap_(id<ComGoogleCommonCollectSortedSetMultimap> multimap);

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleCommonCollectMultimaps_asMapWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSetMultimap> ComGoogleCommonCollectMultimaps_forMapWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultimap> ComGoogleCommonCollectMultimaps_transformValuesWithComGoogleCommonCollectMultimap_withComGoogleCommonBaseFunction_(id<ComGoogleCommonCollectMultimap> fromMultimap, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultimap> ComGoogleCommonCollectMultimaps_transformEntriesWithComGoogleCommonCollectMultimap_withComGoogleCommonCollectMaps_EntryTransformer_(id<ComGoogleCommonCollectMultimap> fromMap, id<ComGoogleCommonCollectMaps_EntryTransformer> transformer);

FOUNDATION_EXPORT id<ComGoogleCommonCollectListMultimap> ComGoogleCommonCollectMultimaps_transformValuesWithComGoogleCommonCollectListMultimap_withComGoogleCommonBaseFunction_(id<ComGoogleCommonCollectListMultimap> fromMultimap, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id<ComGoogleCommonCollectListMultimap> ComGoogleCommonCollectMultimaps_transformEntriesWithComGoogleCommonCollectListMultimap_withComGoogleCommonCollectMaps_EntryTransformer_(id<ComGoogleCommonCollectListMultimap> fromMap, id<ComGoogleCommonCollectMaps_EntryTransformer> transformer);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectMultimaps_indexWithJavaLangIterable_withComGoogleCommonBaseFunction_(id<JavaLangIterable> values, id<ComGoogleCommonBaseFunction> keyFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectMultimaps_indexWithJavaUtilIterator_withComGoogleCommonBaseFunction_(id<JavaUtilIterator> values, id<ComGoogleCommonBaseFunction> keyFunction);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultimap> ComGoogleCommonCollectMultimaps_filterKeysWithComGoogleCommonCollectMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectMultimap> unfiltered, id<ComGoogleCommonBasePredicate> keyPredicate);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSetMultimap> ComGoogleCommonCollectMultimaps_filterKeysWithComGoogleCommonCollectSetMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectSetMultimap> unfiltered, id<ComGoogleCommonBasePredicate> keyPredicate);

FOUNDATION_EXPORT id<ComGoogleCommonCollectListMultimap> ComGoogleCommonCollectMultimaps_filterKeysWithComGoogleCommonCollectListMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectListMultimap> unfiltered, id<ComGoogleCommonBasePredicate> keyPredicate);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultimap> ComGoogleCommonCollectMultimaps_filterValuesWithComGoogleCommonCollectMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectMultimap> unfiltered, id<ComGoogleCommonBasePredicate> valuePredicate);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSetMultimap> ComGoogleCommonCollectMultimaps_filterValuesWithComGoogleCommonCollectSetMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectSetMultimap> unfiltered, id<ComGoogleCommonBasePredicate> valuePredicate);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultimap> ComGoogleCommonCollectMultimaps_filterEntriesWithComGoogleCommonCollectMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectMultimap> unfiltered, id<ComGoogleCommonBasePredicate> entryPredicate);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSetMultimap> ComGoogleCommonCollectMultimaps_filterEntriesWithComGoogleCommonCollectSetMultimap_withComGoogleCommonBasePredicate_(id<ComGoogleCommonCollectSetMultimap> unfiltered, id<ComGoogleCommonBasePredicate> entryPredicate);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectMultimaps_equalsImplWithComGoogleCommonCollectMultimap_withId_(id<ComGoogleCommonCollectMultimap> multimap, id object);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimaps)

#endif

#if !defined (ComGoogleCommonCollectMultimaps_Keys_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimaps || defined(INCLUDE_ComGoogleCommonCollectMultimaps_Keys))
#define ComGoogleCommonCollectMultimaps_Keys_

#define RESTRICT_ComGoogleCommonCollectAbstractMultiset 1
#define INCLUDE_ComGoogleCommonCollectAbstractMultiset 1
#include "com/google/common/collect/AbstractMultiset.h"

@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectMultimaps_Keys : ComGoogleCommonCollectAbstractMultiset {
 @public
  __unsafe_unretained id<ComGoogleCommonCollectMultimap> multimap_;
}

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id)element;

- (jint)countWithId:(id)element;

- (id<JavaUtilSet>)elementSet;

- (id<JavaUtilIterator>)iterator;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (id<JavaUtilSet>)createEntrySet;

- (jint)distinctElements;

- (id<JavaUtilIterator>)entryIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimaps_Keys)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimaps_Keys_initWithComGoogleCommonCollectMultimap_(ComGoogleCommonCollectMultimaps_Keys *self, id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimaps_Keys *new_ComGoogleCommonCollectMultimaps_Keys_initWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectMultimaps_Keys *create_ComGoogleCommonCollectMultimaps_Keys_initWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimaps_Keys)

#endif

#if !defined (ComGoogleCommonCollectMultimaps_Keys_KeysEntrySet_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimaps || defined(INCLUDE_ComGoogleCommonCollectMultimaps_Keys_KeysEntrySet))
#define ComGoogleCommonCollectMultimaps_Keys_KeysEntrySet_

#define RESTRICT_ComGoogleCommonCollectMultisets 1
#define INCLUDE_ComGoogleCommonCollectMultisets_EntrySet 1
#include "com/google/common/collect/Multisets.h"

@class ComGoogleCommonCollectMultimaps_Keys;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectMultimaps_Keys_KeysEntrySet : ComGoogleCommonCollectMultisets_EntrySet

#pragma mark Public

- (jboolean)containsWithId:(id)o;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMultimaps_Keys:(ComGoogleCommonCollectMultimaps_Keys *)outer$;

- (id<ComGoogleCommonCollectMultiset>)multiset;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimaps_Keys_KeysEntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimaps_Keys_KeysEntrySet_initWithComGoogleCommonCollectMultimaps_Keys_(ComGoogleCommonCollectMultimaps_Keys_KeysEntrySet *self, ComGoogleCommonCollectMultimaps_Keys *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimaps_Keys_KeysEntrySet *new_ComGoogleCommonCollectMultimaps_Keys_KeysEntrySet_initWithComGoogleCommonCollectMultimaps_Keys_(ComGoogleCommonCollectMultimaps_Keys *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectMultimaps_Keys_KeysEntrySet *create_ComGoogleCommonCollectMultimaps_Keys_KeysEntrySet_initWithComGoogleCommonCollectMultimaps_Keys_(ComGoogleCommonCollectMultimaps_Keys *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimaps_Keys_KeysEntrySet)

#endif

#if !defined (ComGoogleCommonCollectMultimaps_Entries_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimaps || defined(INCLUDE_ComGoogleCommonCollectMultimaps_Entries))
#define ComGoogleCommonCollectMultimaps_Entries_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "java/util/AbstractCollection.h"

@protocol ComGoogleCommonCollectMultimap;

@interface ComGoogleCommonCollectMultimaps_Entries : JavaUtilAbstractCollection

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)o;

- (jint)size;

#pragma mark Package-Private

- (instancetype)init;

- (id<ComGoogleCommonCollectMultimap>)multimap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimaps_Entries)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimaps_Entries_init(ComGoogleCommonCollectMultimaps_Entries *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimaps_Entries)

#endif

#if !defined (ComGoogleCommonCollectMultimaps_AsMap_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimaps || defined(INCLUDE_ComGoogleCommonCollectMultimaps_AsMap))
#define ComGoogleCommonCollectMultimaps_AsMap_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_ViewCachingAbstractMap 1
#include "com/google/common/collect/Maps.h"

@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectMultimaps_AsMap : ComGoogleCommonCollectMaps_ViewCachingAbstractMap

#pragma mark Public

- (void)clear;

- (id<JavaUtilCollection>)computeIfAbsentWithId:(id)arg0
                   withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)arg1;

- (id<JavaUtilCollection>)computeIfPresentWithId:(id)arg0
                  withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

- (id<JavaUtilCollection>)computeWithId:(id)arg0
         withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

- (jboolean)containsKeyWithId:(id)key;

- (id<JavaUtilCollection>)getWithId:(id)key;

- (id<JavaUtilCollection>)getOrDefaultWithId:(id)arg0
                                      withId:(id<JavaUtilCollection>)arg1;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilCollection>)mergeWithId:(id)arg0
                               withId:(id<JavaUtilCollection>)arg1
       withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg2;

- (id<JavaUtilCollection>)putIfAbsentWithId:(id)arg0
                                     withId:(id<JavaUtilCollection>)arg1;

- (id<JavaUtilCollection>)putWithId:(id)arg0
                             withId:(id<JavaUtilCollection>)arg1;

- (id<JavaUtilCollection>)removeWithId:(id)key;

- (id<JavaUtilCollection>)replaceWithId:(id)arg0
                                 withId:(id<JavaUtilCollection>)arg1;

- (jint)size;

#pragma mark Protected

- (id<JavaUtilSet>)createEntrySet;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (void)removeValuesForKeyWithId:(id)key;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimaps_AsMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimaps_AsMap_initWithComGoogleCommonCollectMultimap_(ComGoogleCommonCollectMultimaps_AsMap *self, id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimaps_AsMap *new_ComGoogleCommonCollectMultimaps_AsMap_initWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectMultimaps_AsMap *create_ComGoogleCommonCollectMultimaps_AsMap_initWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimaps_AsMap)

#endif

#if !defined (ComGoogleCommonCollectMultimaps_AsMap_EntrySet_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimaps || defined(INCLUDE_ComGoogleCommonCollectMultimaps_AsMap_EntrySet))
#define ComGoogleCommonCollectMultimaps_AsMap_EntrySet_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_EntrySet 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectMultimaps_AsMap;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectMultimaps_AsMap_EntrySet : ComGoogleCommonCollectMaps_EntrySet

#pragma mark Public

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMultimaps_AsMap:(ComGoogleCommonCollectMultimaps_AsMap *)outer$;

- (id<JavaUtilMap>)map;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimaps_AsMap_EntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimaps_AsMap_EntrySet_initWithComGoogleCommonCollectMultimaps_AsMap_(ComGoogleCommonCollectMultimaps_AsMap_EntrySet *self, ComGoogleCommonCollectMultimaps_AsMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimaps_AsMap_EntrySet *new_ComGoogleCommonCollectMultimaps_AsMap_EntrySet_initWithComGoogleCommonCollectMultimaps_AsMap_(ComGoogleCommonCollectMultimaps_AsMap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectMultimaps_AsMap_EntrySet *create_ComGoogleCommonCollectMultimaps_AsMap_EntrySet_initWithComGoogleCommonCollectMultimaps_AsMap_(ComGoogleCommonCollectMultimaps_AsMap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimaps_AsMap_EntrySet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMultimaps")
