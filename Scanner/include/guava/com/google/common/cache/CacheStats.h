//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/cache/CacheStats.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheCacheStats")
#ifdef RESTRICT_ComGoogleCommonCacheCacheStats
#define INCLUDE_ALL_ComGoogleCommonCacheCacheStats 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheCacheStats 1
#endif
#undef RESTRICT_ComGoogleCommonCacheCacheStats

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheCacheStats_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheStats || defined(INCLUDE_ComGoogleCommonCacheCacheStats))
#define ComGoogleCommonCacheCacheStats_

@interface ComGoogleCommonCacheCacheStats : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)hitCount
                    withLong:(jlong)missCount
                    withLong:(jlong)loadSuccessCount
                    withLong:(jlong)loadExceptionCount
                    withLong:(jlong)totalLoadTime
                    withLong:(jlong)evictionCount;

- (jdouble)averageLoadPenalty;

- (jboolean)isEqual:(id)object;

- (jlong)evictionCount;

- (NSUInteger)hash;

- (jlong)hitCount;

- (jdouble)hitRate;

- (jlong)loadCount;

- (jlong)loadExceptionCount;

- (jdouble)loadExceptionRate;

- (jlong)loadSuccessCount;

- (ComGoogleCommonCacheCacheStats *)minusWithComGoogleCommonCacheCacheStats:(ComGoogleCommonCacheCacheStats *)other;

- (jlong)missCount;

- (jdouble)missRate;

- (ComGoogleCommonCacheCacheStats *)plusWithComGoogleCommonCacheCacheStats:(ComGoogleCommonCacheCacheStats *)other;

- (jlong)requestCount;

- (NSString *)description;

- (jlong)totalLoadTime;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheStats)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheStats_initWithLong_withLong_withLong_withLong_withLong_withLong_(ComGoogleCommonCacheCacheStats *self, jlong hitCount, jlong missCount, jlong loadSuccessCount, jlong loadExceptionCount, jlong totalLoadTime, jlong evictionCount);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheStats *new_ComGoogleCommonCacheCacheStats_initWithLong_withLong_withLong_withLong_withLong_withLong_(jlong hitCount, jlong missCount, jlong loadSuccessCount, jlong loadExceptionCount, jlong totalLoadTime, jlong evictionCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheStats *create_ComGoogleCommonCacheCacheStats_initWithLong_withLong_withLong_withLong_withLong_withLong_(jlong hitCount, jlong missCount, jlong loadSuccessCount, jlong loadExceptionCount, jlong totalLoadTime, jlong evictionCount);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheStats)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheCacheStats")
