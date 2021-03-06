//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/TreeMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectTreeMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectTreeMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTreeMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTreeMultiset

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTreeMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectTreeMultiset || defined(INCLUDE_ComGoogleCommonCollectTreeMultiset))
#define ComGoogleCommonCollectTreeMultiset_

#define RESTRICT_ComGoogleCommonCollectAbstractSortedMultiset 1
#define INCLUDE_ComGoogleCommonCollectAbstractSortedMultiset 1
#include "com/google/common/collect/AbstractSortedMultiset.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectBoundType;
@class ComGoogleCommonCollectGeneralRange;
@class ComGoogleCommonCollectTreeMultiset_AvlNode;
@class ComGoogleCommonCollectTreeMultiset_Reference;
@protocol ComGoogleCommonCollectSortedMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectTreeMultiset : ComGoogleCommonCollectAbstractSortedMultiset < JavaIoSerializable >

#pragma mark Public

- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (jint)countWithId:(id)element;

+ (ComGoogleCommonCollectTreeMultiset *)create;

+ (ComGoogleCommonCollectTreeMultiset *)createWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectTreeMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (id<ComGoogleCommonCollectSortedMultiset>)headMultisetWithId:(id)upperBound
                           withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id)element
                   withInt:(jint)oldCount
                   withInt:(jint)newCount;

- (jint)size;

- (id<ComGoogleCommonCollectSortedMultiset>)tailMultisetWithId:(id)lowerBound
                           withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (instancetype)initWithComGoogleCommonCollectTreeMultiset_Reference:(ComGoogleCommonCollectTreeMultiset_Reference *)rootReference
                              withComGoogleCommonCollectGeneralRange:(ComGoogleCommonCollectGeneralRange *)range
                      withComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)endLink;

- (id<JavaUtilIterator>)descendingEntryIterator;

- (jint)distinctElements;

+ (jint)distinctElementsWithComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)node;

- (id<JavaUtilIterator>)entryIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeMultiset)

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *ComGoogleCommonCollectTreeMultiset_create();

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *ComGoogleCommonCollectTreeMultiset_createWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *ComGoogleCommonCollectTreeMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT void ComGoogleCommonCollectTreeMultiset_initWithComGoogleCommonCollectTreeMultiset_Reference_withComGoogleCommonCollectGeneralRange_withComGoogleCommonCollectTreeMultiset_AvlNode_(ComGoogleCommonCollectTreeMultiset *self, ComGoogleCommonCollectTreeMultiset_Reference *rootReference, ComGoogleCommonCollectGeneralRange *range, ComGoogleCommonCollectTreeMultiset_AvlNode *endLink);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *new_ComGoogleCommonCollectTreeMultiset_initWithComGoogleCommonCollectTreeMultiset_Reference_withComGoogleCommonCollectGeneralRange_withComGoogleCommonCollectTreeMultiset_AvlNode_(ComGoogleCommonCollectTreeMultiset_Reference *rootReference, ComGoogleCommonCollectGeneralRange *range, ComGoogleCommonCollectTreeMultiset_AvlNode *endLink) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *create_ComGoogleCommonCollectTreeMultiset_initWithComGoogleCommonCollectTreeMultiset_Reference_withComGoogleCommonCollectGeneralRange_withComGoogleCommonCollectTreeMultiset_AvlNode_(ComGoogleCommonCollectTreeMultiset_Reference *rootReference, ComGoogleCommonCollectGeneralRange *range, ComGoogleCommonCollectTreeMultiset_AvlNode *endLink);

FOUNDATION_EXPORT void ComGoogleCommonCollectTreeMultiset_initWithJavaUtilComparator_(ComGoogleCommonCollectTreeMultiset *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *new_ComGoogleCommonCollectTreeMultiset_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *create_ComGoogleCommonCollectTreeMultiset_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT jint ComGoogleCommonCollectTreeMultiset_distinctElementsWithComGoogleCommonCollectTreeMultiset_AvlNode_(ComGoogleCommonCollectTreeMultiset_AvlNode *node);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeMultiset")
