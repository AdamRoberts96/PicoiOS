//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/WellBehavedMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectWellBehavedMap")
#ifdef RESTRICT_ComGoogleCommonCollectWellBehavedMap
#define INCLUDE_ALL_ComGoogleCommonCollectWellBehavedMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectWellBehavedMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectWellBehavedMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectWellBehavedMap_) && (INCLUDE_ALL_ComGoogleCommonCollectWellBehavedMap || defined(INCLUDE_ComGoogleCommonCollectWellBehavedMap))
#define ComGoogleCommonCollectWellBehavedMap_

#define RESTRICT_ComGoogleCommonCollectForwardingMap 1
#define INCLUDE_ComGoogleCommonCollectForwardingMap 1
#include "com/google/common/collect/ForwardingMap.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectWellBehavedMap : ComGoogleCommonCollectForwardingMap

#pragma mark Public

- (id<JavaUtilSet>)entrySet;

#pragma mark Protected

- (id<JavaUtilMap>)delegate;

#pragma mark Package-Private

+ (ComGoogleCommonCollectWellBehavedMap *)wrapWithJavaUtilMap:(id<JavaUtilMap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectWellBehavedMap)

FOUNDATION_EXPORT ComGoogleCommonCollectWellBehavedMap *ComGoogleCommonCollectWellBehavedMap_wrapWithJavaUtilMap_(id<JavaUtilMap> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectWellBehavedMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectWellBehavedMap")
