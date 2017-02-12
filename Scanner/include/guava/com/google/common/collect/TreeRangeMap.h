//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/TreeRangeMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeRangeMap")
#ifdef RESTRICT_ComGoogleCommonCollectTreeRangeMap
#define INCLUDE_ALL_ComGoogleCommonCollectTreeRangeMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTreeRangeMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTreeRangeMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTreeRangeMap_) && (INCLUDE_ALL_ComGoogleCommonCollectTreeRangeMap || defined(INCLUDE_ComGoogleCommonCollectTreeRangeMap))
#define ComGoogleCommonCollectTreeRangeMap_

#define RESTRICT_ComGoogleCommonCollectRangeMap 1
#define INCLUDE_ComGoogleCommonCollectRangeMap 1
#include "com/google/common/collect/RangeMap.h"

@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectTreeRangeMap : NSObject < ComGoogleCommonCollectRangeMap >

#pragma mark Public

- (id<JavaUtilMap>)asDescendingMapOfRanges;

- (id<JavaUtilMap>)asMapOfRanges;

- (void)clear;

+ (ComGoogleCommonCollectTreeRangeMap *)create;

- (jboolean)isEqual:(id)o;

- (id)getWithJavaLangComparable:(id<JavaLangComparable>)key;

- (id<JavaUtilMap_Entry>)getEntryWithJavaLangComparable:(id<JavaLangComparable>)key;

- (NSUInteger)hash;

- (void)putWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                    withId:(id)value;

- (void)putAllWithComGoogleCommonCollectRangeMap:(id<ComGoogleCommonCollectRangeMap>)rangeMap;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)rangeToRemove;

- (ComGoogleCommonCollectRange *)span;

- (id<ComGoogleCommonCollectRangeMap>)subRangeMapWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)subRange;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap)

FOUNDATION_EXPORT ComGoogleCommonCollectTreeRangeMap *ComGoogleCommonCollectTreeRangeMap_create();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeRangeMap")
