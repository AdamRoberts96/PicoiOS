//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/UnmodifiableListIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableListIterator")
#ifdef RESTRICT_ComGoogleCommonCollectUnmodifiableListIterator
#define INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableListIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableListIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectUnmodifiableListIterator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectUnmodifiableListIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableListIterator || defined(INCLUDE_ComGoogleCommonCollectUnmodifiableListIterator))
#define ComGoogleCommonCollectUnmodifiableListIterator_

#define RESTRICT_ComGoogleCommonCollectUnmodifiableIterator 1
#define INCLUDE_ComGoogleCommonCollectUnmodifiableIterator 1
#include "com/google/common/collect/UnmodifiableIterator.h"

#define RESTRICT_JavaUtilListIterator 1
#define INCLUDE_JavaUtilListIterator 1
#include "java/util/ListIterator.h"

@interface ComGoogleCommonCollectUnmodifiableListIterator : ComGoogleCommonCollectUnmodifiableIterator < JavaUtilListIterator >

#pragma mark Public

- (void)addWithId:(id)e;

- (void)setWithId:(id)e;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectUnmodifiableListIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectUnmodifiableListIterator_init(ComGoogleCommonCollectUnmodifiableListIterator *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectUnmodifiableListIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableListIterator")
