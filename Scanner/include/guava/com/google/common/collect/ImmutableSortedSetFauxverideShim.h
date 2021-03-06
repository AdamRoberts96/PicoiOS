//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ImmutableSortedSetFauxverideShim.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedSetFauxverideShim")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableSortedSetFauxverideShim
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedSetFauxverideShim 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedSetFauxverideShim 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableSortedSetFauxverideShim

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableSortedSetFauxverideShim_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedSetFauxverideShim || defined(INCLUDE_ComGoogleCommonCollectImmutableSortedSetFauxverideShim))
#define ComGoogleCommonCollectImmutableSortedSetFauxverideShim_

#define RESTRICT_ComGoogleCommonCollectImmutableSet 1
#define INCLUDE_ComGoogleCommonCollectImmutableSet 1
#include "com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectImmutableSortedSet_Builder;
@class IOSObjectArray;

@interface ComGoogleCommonCollectImmutableSortedSetFauxverideShim : ComGoogleCommonCollectImmutableSet

#pragma mark Public

+ (ComGoogleCommonCollectImmutableSortedSet_Builder *)builder;

+ (ComGoogleCommonCollectImmutableSortedSet *)copyOfWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedSet *)ofWithId:(id)element;

+ (ComGoogleCommonCollectImmutableSortedSet *)ofWithId:(id)e1
                                                withId:(id)e2;

+ (ComGoogleCommonCollectImmutableSortedSet *)ofWithId:(id)e1
                                                withId:(id)e2
                                                withId:(id)e3;

+ (ComGoogleCommonCollectImmutableSortedSet *)ofWithId:(id)e1
                                                withId:(id)e2
                                                withId:(id)e3
                                                withId:(id)e4;

+ (ComGoogleCommonCollectImmutableSortedSet *)ofWithId:(id)e1
                                                withId:(id)e2
                                                withId:(id)e3
                                                withId:(id)e4
                                                withId:(id)e5;

+ (ComGoogleCommonCollectImmutableSortedSet *)ofWithId:(id)e1
                                                withId:(id)e2
                                                withId:(id)e3
                                                withId:(id)e4
                                                withId:(id)e5
                                                withId:(id)e6
                                     withNSObjectArray:(IOSObjectArray *)remaining;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSortedSetFauxverideShim)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedSetFauxverideShim_init(ComGoogleCommonCollectImmutableSortedSetFauxverideShim *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet_Builder *ComGoogleCommonCollectImmutableSortedSetFauxverideShim_builder();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSetFauxverideShim_ofWithId_(id element);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSetFauxverideShim_ofWithId_withId_(id e1, id e2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSetFauxverideShim_ofWithId_withId_withId_(id e1, id e2, id e3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSetFauxverideShim_ofWithId_withId_withId_withId_(id e1, id e2, id e3, id e4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSetFauxverideShim_ofWithId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSetFauxverideShim_ofWithId_withId_withId_withId_withId_withId_withNSObjectArray_(id e1, id e2, id e3, id e4, id e5, id e6, IOSObjectArray *remaining);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSetFauxverideShim_copyOfWithNSObjectArray_(IOSObjectArray *elements);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedSetFauxverideShim)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedSetFauxverideShim")
