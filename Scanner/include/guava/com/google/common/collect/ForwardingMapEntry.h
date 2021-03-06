//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ForwardingMapEntry.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingMapEntry")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingMapEntry
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingMapEntry 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingMapEntry 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingMapEntry

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingMapEntry_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingMapEntry || defined(INCLUDE_ComGoogleCommonCollectForwardingMapEntry))
#define ComGoogleCommonCollectForwardingMapEntry_

#define RESTRICT_ComGoogleCommonCollectForwardingObject 1
#define INCLUDE_ComGoogleCommonCollectForwardingObject 1
#include "com/google/common/collect/ForwardingObject.h"

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap_Entry 1
#include "java/util/Map.h"

@interface ComGoogleCommonCollectForwardingMapEntry : ComGoogleCommonCollectForwardingObject < JavaUtilMap_Entry >

#pragma mark Public

- (jboolean)isEqual:(id)object;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

- (id)setValueWithId:(id)value;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilMap_Entry>)delegate;

- (jboolean)standardEqualsWithId:(id)object;

- (jint)standardHashCode;

- (NSString *)standardToString;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingMapEntry)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingMapEntry_init(ComGoogleCommonCollectForwardingMapEntry *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingMapEntry)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingMapEntry")
