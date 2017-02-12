//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/SingletonImmutableBiMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableBiMap")
#ifdef RESTRICT_ComGoogleCommonCollectSingletonImmutableBiMap
#define INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableBiMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableBiMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSingletonImmutableBiMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSingletonImmutableBiMap_) && (INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableBiMap || defined(INCLUDE_ComGoogleCommonCollectSingletonImmutableBiMap))
#define ComGoogleCommonCollectSingletonImmutableBiMap_

#define RESTRICT_ComGoogleCommonCollectImmutableBiMap 1
#define INCLUDE_ComGoogleCommonCollectImmutableBiMap 1
#include "com/google/common/collect/ImmutableBiMap.h"

@class ComGoogleCommonCollectImmutableSet;

@interface ComGoogleCommonCollectSingletonImmutableBiMap : ComGoogleCommonCollectImmutableBiMap {
 @public
  id singleKey_;
  id singleValue_;
  ComGoogleCommonCollectImmutableBiMap *inverse_;
}

#pragma mark Public

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableBiMap *)inverse;

- (ComGoogleCommonCollectImmutableSet *)keySet;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithId:(id)singleKey
                    withId:(id)singleValue;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (jboolean)isPartialView;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSingletonImmutableBiMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableBiMap, singleKey_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableBiMap, singleValue_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableBiMap, inverse_, ComGoogleCommonCollectImmutableBiMap *)

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableBiMap_initWithId_withId_(ComGoogleCommonCollectSingletonImmutableBiMap *self, id singleKey, id singleValue);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableBiMap *new_ComGoogleCommonCollectSingletonImmutableBiMap_initWithId_withId_(id singleKey, id singleValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableBiMap *create_ComGoogleCommonCollectSingletonImmutableBiMap_initWithId_withId_(id singleKey, id singleValue);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSingletonImmutableBiMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableBiMap")
