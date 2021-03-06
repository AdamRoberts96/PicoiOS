//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/SingletonImmutableSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableSet")
#ifdef RESTRICT_ComGoogleCommonCollectSingletonImmutableSet
#define INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSingletonImmutableSet

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSingletonImmutableSet_) && (INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableSet || defined(INCLUDE_ComGoogleCommonCollectSingletonImmutableSet))
#define ComGoogleCommonCollectSingletonImmutableSet_

#define RESTRICT_ComGoogleCommonCollectImmutableSet 1
#define INCLUDE_ComGoogleCommonCollectImmutableSet 1
#include "com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;

@interface ComGoogleCommonCollectSingletonImmutableSet : ComGoogleCommonCollectImmutableSet {
 @public
  id element_;
}

#pragma mark Public

- (jboolean)containsWithId:(id)target;

- (NSUInteger)hash;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithId:(id)element;

- (instancetype)initWithId:(id)element
                   withInt:(jint)hashCode;

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray *)dst
                               withInt:(jint)offset OBJC_METHOD_FAMILY_NONE;

- (jboolean)isHashCodeFast;

- (jboolean)isPartialView;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSingletonImmutableSet)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableSet, element_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableSet_initWithId_(ComGoogleCommonCollectSingletonImmutableSet *self, id element);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableSet *new_ComGoogleCommonCollectSingletonImmutableSet_initWithId_(id element) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableSet *create_ComGoogleCommonCollectSingletonImmutableSet_initWithId_(id element);

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableSet_initWithId_withInt_(ComGoogleCommonCollectSingletonImmutableSet *self, id element, jint hashCode);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableSet *new_ComGoogleCommonCollectSingletonImmutableSet_initWithId_withInt_(id element, jint hashCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableSet *create_ComGoogleCommonCollectSingletonImmutableSet_initWithId_withInt_(id element, jint hashCode);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSingletonImmutableSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableSet")
