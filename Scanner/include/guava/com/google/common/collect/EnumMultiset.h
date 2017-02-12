//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/EnumMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectEnumMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectEnumMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectEnumMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectEnumMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectEnumMultiset

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectEnumMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectEnumMultiset || defined(INCLUDE_ComGoogleCommonCollectEnumMultiset))
#define ComGoogleCommonCollectEnumMultiset_

#define RESTRICT_ComGoogleCommonCollectAbstractMapBasedMultiset 1
#define INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultiset 1
#include "com/google/common/collect/AbstractMapBasedMultiset.h"

@class IOSClass;
@protocol JavaLangIterable;

@interface ComGoogleCommonCollectEnumMultiset : ComGoogleCommonCollectAbstractMapBasedMultiset

#pragma mark Public

+ (ComGoogleCommonCollectEnumMultiset *)createWithIOSClass:(IOSClass *)type;

+ (ComGoogleCommonCollectEnumMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements;

+ (ComGoogleCommonCollectEnumMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements
                                                      withIOSClass:(IOSClass *)type;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectEnumMultiset)

FOUNDATION_EXPORT ComGoogleCommonCollectEnumMultiset *ComGoogleCommonCollectEnumMultiset_createWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT ComGoogleCommonCollectEnumMultiset *ComGoogleCommonCollectEnumMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectEnumMultiset *ComGoogleCommonCollectEnumMultiset_createWithJavaLangIterable_withIOSClass_(id<JavaLangIterable> elements, IOSClass *type);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEnumMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectEnumMultiset")
