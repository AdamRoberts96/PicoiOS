//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/RegularImmutableMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectRegularImmutableMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectRegularImmutableMultiset

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectRegularImmutableMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset || defined(INCLUDE_ComGoogleCommonCollectRegularImmutableMultiset))
#define ComGoogleCommonCollectRegularImmutableMultiset_

#define RESTRICT_ComGoogleCommonCollectImmutableMultiset 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultiset 1
#include "com/google/common/collect/ImmutableMultiset.h"

@class ComGoogleCommonCollectImmutableSet;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilCollection;

@interface ComGoogleCommonCollectRegularImmutableMultiset : ComGoogleCommonCollectImmutableMultiset

#pragma mark Public

- (jint)countWithId:(id)element;

- (ComGoogleCommonCollectImmutableSet *)elementSet;

- (NSUInteger)hash;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)entries;

- (id<ComGoogleCommonCollectMultiset_Entry>)getEntryWithInt:(jint)index;

- (jboolean)isPartialView;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectRegularImmutableMultiset)

inline ComGoogleCommonCollectRegularImmutableMultiset *ComGoogleCommonCollectRegularImmutableMultiset_get_EMPTY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableMultiset *ComGoogleCommonCollectRegularImmutableMultiset_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectRegularImmutableMultiset, EMPTY, ComGoogleCommonCollectRegularImmutableMultiset *)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableMultiset_initWithJavaUtilCollection_(ComGoogleCommonCollectRegularImmutableMultiset *self, id<JavaUtilCollection> entries);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableMultiset *new_ComGoogleCommonCollectRegularImmutableMultiset_initWithJavaUtilCollection_(id<JavaUtilCollection> entries) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableMultiset *create_ComGoogleCommonCollectRegularImmutableMultiset_initWithJavaUtilCollection_(id<JavaUtilCollection> entries);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset")
