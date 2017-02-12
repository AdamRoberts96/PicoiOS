//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ConcurrentHashMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectConcurrentHashMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectConcurrentHashMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectConcurrentHashMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectConcurrentHashMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectConcurrentHashMultiset

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectConcurrentHashMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectConcurrentHashMultiset || defined(INCLUDE_ComGoogleCommonCollectConcurrentHashMultiset))
#define ComGoogleCommonCollectConcurrentHashMultiset_

#define RESTRICT_ComGoogleCommonCollectAbstractMultiset 1
#define INCLUDE_ComGoogleCommonCollectAbstractMultiset 1
#include "com/google/common/collect/AbstractMultiset.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectMapMaker;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentConcurrentMap;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectConcurrentHashMultiset : ComGoogleCommonCollectAbstractMultiset < JavaIoSerializable >

#pragma mark Public

- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (void)clear;

- (jint)countWithId:(id)element;

+ (ComGoogleCommonCollectConcurrentHashMultiset *)create;

+ (ComGoogleCommonCollectConcurrentHashMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements;

+ (ComGoogleCommonCollectConcurrentHashMultiset *)createWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)mapMaker;

- (id<JavaUtilSet>)createEntrySet;

- (jboolean)isEmpty;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jboolean)removeExactlyWithId:(id)element
                        withInt:(jint)occurrences;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id)element
                   withInt:(jint)expectedOldCount
                   withInt:(jint)newCount;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilConcurrentConcurrentMap:(id<JavaUtilConcurrentConcurrentMap>)countMap;

- (id<JavaUtilSet>)createElementSet;

- (jint)distinctElements;

- (id<JavaUtilIterator>)entryIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectConcurrentHashMultiset)

FOUNDATION_EXPORT ComGoogleCommonCollectConcurrentHashMultiset *ComGoogleCommonCollectConcurrentHashMultiset_create();

FOUNDATION_EXPORT ComGoogleCommonCollectConcurrentHashMultiset *ComGoogleCommonCollectConcurrentHashMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectConcurrentHashMultiset *ComGoogleCommonCollectConcurrentHashMultiset_createWithComGoogleCommonCollectMapMaker_(ComGoogleCommonCollectMapMaker *mapMaker);

FOUNDATION_EXPORT void ComGoogleCommonCollectConcurrentHashMultiset_initWithJavaUtilConcurrentConcurrentMap_(ComGoogleCommonCollectConcurrentHashMultiset *self, id<JavaUtilConcurrentConcurrentMap> countMap);

FOUNDATION_EXPORT ComGoogleCommonCollectConcurrentHashMultiset *new_ComGoogleCommonCollectConcurrentHashMultiset_initWithJavaUtilConcurrentConcurrentMap_(id<JavaUtilConcurrentConcurrentMap> countMap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectConcurrentHashMultiset *create_ComGoogleCommonCollectConcurrentHashMultiset_initWithJavaUtilConcurrentConcurrentMap_(id<JavaUtilConcurrentConcurrentMap> countMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectConcurrentHashMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectConcurrentHashMultiset")
