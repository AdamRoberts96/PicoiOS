//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/AbstractMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractMultimap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMultimap))
#define ComGoogleCommonCollectAbstractMultimap_

#define RESTRICT_ComGoogleCommonCollectMultimap 1
#define INCLUDE_ComGoogleCommonCollectMultimap 1
#include "com/google/common/collect/Multimap.h"

@protocol ComGoogleCommonCollectMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectAbstractMultimap : NSObject < ComGoogleCommonCollectMultimap >

#pragma mark Public

- (id<JavaUtilMap>)asMap;

- (jboolean)containsEntryWithId:(id)key
                         withId:(id)value;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilCollection>)entries;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<ComGoogleCommonCollectMultiset>)keys;

- (id<JavaUtilSet>)keySet;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (jboolean)putAllWithId:(id)key
    withJavaLangIterable:(id<JavaLangIterable>)values;

- (jboolean)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (id<JavaUtilCollection>)replaceValuesWithId:(id)key
                         withJavaLangIterable:(id<JavaLangIterable>)values;

- (NSString *)description;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (instancetype)init;

- (id<JavaUtilMap>)createAsMap;

- (id<JavaUtilCollection>)createEntries;

- (id<ComGoogleCommonCollectMultiset>)createKeys;

- (id<JavaUtilSet>)createKeySet;

- (id<JavaUtilCollection>)createValues;

- (id<JavaUtilIterator>)entryIterator;

- (id<JavaUtilIterator>)valueIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMultimap_init(ComGoogleCommonCollectAbstractMultimap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultimap)

#endif

#if !defined (ComGoogleCommonCollectAbstractMultimap_Values_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMultimap_Values))
#define ComGoogleCommonCollectAbstractMultimap_Values_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "java/util/AbstractCollection.h"

@class ComGoogleCommonCollectAbstractMultimap;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectAbstractMultimap_Values : JavaUtilAbstractCollection

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (id<JavaUtilIterator>)iterator;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMultimap:(ComGoogleCommonCollectAbstractMultimap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultimap_Values)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMultimap_Values_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap_Values *self, ComGoogleCommonCollectAbstractMultimap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultimap_Values *new_ComGoogleCommonCollectAbstractMultimap_Values_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultimap_Values *create_ComGoogleCommonCollectAbstractMultimap_Values_initWithComGoogleCommonCollectAbstractMultimap_(ComGoogleCommonCollectAbstractMultimap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultimap_Values)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMultimap")
