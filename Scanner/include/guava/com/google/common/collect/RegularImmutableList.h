//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/RegularImmutableList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableList")
#ifdef RESTRICT_ComGoogleCommonCollectRegularImmutableList
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableList 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableList 1
#endif
#undef RESTRICT_ComGoogleCommonCollectRegularImmutableList

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectRegularImmutableList_) && (INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableList || defined(INCLUDE_ComGoogleCommonCollectRegularImmutableList))
#define ComGoogleCommonCollectRegularImmutableList_

#define RESTRICT_ComGoogleCommonCollectImmutableList 1
#define INCLUDE_ComGoogleCommonCollectImmutableList 1
#include "com/google/common/collect/ImmutableList.h"

@class ComGoogleCommonCollectUnmodifiableListIterator;
@class IOSObjectArray;

@interface ComGoogleCommonCollectRegularImmutableList : ComGoogleCommonCollectImmutableList

#pragma mark Public

- (id)getWithInt:(jint)index;

- (ComGoogleCommonCollectUnmodifiableListIterator *)listIteratorWithInt:(jint)index;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithNSObjectArray:(IOSObjectArray *)array;

- (instancetype)initWithNSObjectArray:(IOSObjectArray *)array
                              withInt:(jint)offset
                              withInt:(jint)size;

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray *)dst
                               withInt:(jint)dstOff OBJC_METHOD_FAMILY_NONE;

- (jboolean)isPartialView;

- (ComGoogleCommonCollectImmutableList *)subListUncheckedWithInt:(jint)fromIndex
                                                         withInt:(jint)toIndex;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectRegularImmutableList)

inline ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectRegularImmutableList_get_EMPTY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectRegularImmutableList_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectRegularImmutableList, EMPTY, ComGoogleCommonCollectImmutableList *)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableList_initWithNSObjectArray_withInt_withInt_(ComGoogleCommonCollectRegularImmutableList *self, IOSObjectArray *array, jint offset, jint size);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableList *new_ComGoogleCommonCollectRegularImmutableList_initWithNSObjectArray_withInt_withInt_(IOSObjectArray *array, jint offset, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableList *create_ComGoogleCommonCollectRegularImmutableList_initWithNSObjectArray_withInt_withInt_(IOSObjectArray *array, jint offset, jint size);

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableList_initWithNSObjectArray_(ComGoogleCommonCollectRegularImmutableList *self, IOSObjectArray *array);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableList *new_ComGoogleCommonCollectRegularImmutableList_initWithNSObjectArray_(IOSObjectArray *array) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableList *create_ComGoogleCommonCollectRegularImmutableList_initWithNSObjectArray_(IOSObjectArray *array);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableList")
