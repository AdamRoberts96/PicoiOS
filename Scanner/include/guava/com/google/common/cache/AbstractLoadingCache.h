//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/cache/AbstractLoadingCache.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheAbstractLoadingCache")
#ifdef RESTRICT_ComGoogleCommonCacheAbstractLoadingCache
#define INCLUDE_ALL_ComGoogleCommonCacheAbstractLoadingCache 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheAbstractLoadingCache 1
#endif
#undef RESTRICT_ComGoogleCommonCacheAbstractLoadingCache

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheAbstractLoadingCache_) && (INCLUDE_ALL_ComGoogleCommonCacheAbstractLoadingCache || defined(INCLUDE_ComGoogleCommonCacheAbstractLoadingCache))
#define ComGoogleCommonCacheAbstractLoadingCache_

#define RESTRICT_ComGoogleCommonCacheAbstractCache 1
#define INCLUDE_ComGoogleCommonCacheAbstractCache 1
#include "com/google/common/cache/AbstractCache.h"

#define RESTRICT_ComGoogleCommonCacheLoadingCache 1
#define INCLUDE_ComGoogleCommonCacheLoadingCache 1
#include "com/google/common/cache/LoadingCache.h"

@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangIterable;

@interface ComGoogleCommonCacheAbstractLoadingCache : ComGoogleCommonCacheAbstractCache < ComGoogleCommonCacheLoadingCache >

#pragma mark Public

- (id)applyWithId:(id)key;

- (ComGoogleCommonCollectImmutableMap *)getAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (id)getUncheckedWithId:(id)key;

- (void)refreshWithId:(id)key;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheAbstractLoadingCache)

FOUNDATION_EXPORT void ComGoogleCommonCacheAbstractLoadingCache_init(ComGoogleCommonCacheAbstractLoadingCache *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheAbstractLoadingCache)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheAbstractLoadingCache")