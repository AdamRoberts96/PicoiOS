//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/AbstractSortedSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractSortedSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractSortedSetMultimap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractSortedSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedSetMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractSortedSetMultimap))
#define ComGoogleCommonCollectAbstractSortedSetMultimap_

#define RESTRICT_ComGoogleCommonCollectAbstractSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractSetMultimap 1
#include "com/google/common/collect/AbstractSetMultimap.h"

#define RESTRICT_ComGoogleCommonCollectSortedSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectSortedSetMultimap 1
#include "com/google/common/collect/SortedSetMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectAbstractSortedSetMultimap : ComGoogleCommonCollectAbstractSetMultimap < ComGoogleCommonCollectSortedSetMultimap >

#pragma mark Public

- (id<JavaUtilMap>)asMap;

- (id<JavaUtilSortedSet>)getWithId:(id)key;

- (id<JavaUtilSortedSet>)removeAllWithId:(id)key;

- (id<JavaUtilSortedSet>)replaceValuesWithId:(id)key
                        withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilCollection>)values;

#pragma mark Protected

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

#pragma mark Package-Private

- (id<JavaUtilSortedSet>)createCollection;

- (id<JavaUtilSortedSet>)createUnmodifiableEmptyCollection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractSortedSetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractSortedSetMultimap_initWithJavaUtilMap_(ComGoogleCommonCollectAbstractSortedSetMultimap *self, id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractSortedSetMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedSetMultimap")
