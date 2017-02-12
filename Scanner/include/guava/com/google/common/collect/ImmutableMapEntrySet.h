//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ImmutableMapEntrySet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableMapEntrySet")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableMapEntrySet
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableMapEntrySet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableMapEntrySet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableMapEntrySet
#ifdef INCLUDE_ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet
#define INCLUDE_ComGoogleCommonCollectImmutableMapEntrySet 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableMapEntrySet_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMapEntrySet || defined(INCLUDE_ComGoogleCommonCollectImmutableMapEntrySet))
#define ComGoogleCommonCollectImmutableMapEntrySet_

#define RESTRICT_ComGoogleCommonCollectImmutableSet 1
#define INCLUDE_ComGoogleCommonCollectImmutableSet 1
#include "com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectImmutableMap;

@interface ComGoogleCommonCollectImmutableMapEntrySet : ComGoogleCommonCollectImmutableSet

#pragma mark Public

- (jboolean)containsWithId:(id)object;

- (NSUInteger)hash;

- (jint)size;

#pragma mark Package-Private

- (instancetype)init;

- (jboolean)isHashCodeFast;

- (jboolean)isPartialView;

- (ComGoogleCommonCollectImmutableMap *)map;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMapEntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMapEntrySet_init(ComGoogleCommonCollectImmutableMapEntrySet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMapEntrySet)

#endif

#if !defined (ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMapEntrySet || defined(INCLUDE_ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet))
#define ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;

@interface ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet : ComGoogleCommonCollectImmutableMapEntrySet

#pragma mark Public

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map
                                withJavaUtilMap_EntryArray:(IOSObjectArray *)entries;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (ComGoogleCommonCollectImmutableMap *)map;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet_initWithComGoogleCommonCollectImmutableMap_withJavaUtilMap_EntryArray_(ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet *self, ComGoogleCommonCollectImmutableMap *map, IOSObjectArray *entries);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet *new_ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet_initWithComGoogleCommonCollectImmutableMap_withJavaUtilMap_EntryArray_(ComGoogleCommonCollectImmutableMap *map, IOSObjectArray *entries) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet *create_ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet_initWithComGoogleCommonCollectImmutableMap_withJavaUtilMap_EntryArray_(ComGoogleCommonCollectImmutableMap *map, IOSObjectArray *entries);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMapEntrySet_RegularEntrySet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableMapEntrySet")
