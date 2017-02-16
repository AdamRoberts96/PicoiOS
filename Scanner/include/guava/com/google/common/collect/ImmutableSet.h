//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ImmutableSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSet")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableSet
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableSet
#ifdef INCLUDE_ComGoogleCommonCollectImmutableSet_Indexed
#define INCLUDE_ComGoogleCommonCollectImmutableSet 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableSet_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSet || defined(INCLUDE_ComGoogleCommonCollectImmutableSet))
#define ComGoogleCommonCollectImmutableSet_

#define RESTRICT_ComGoogleCommonCollectImmutableCollection 1
#define INCLUDE_ComGoogleCommonCollectImmutableCollection 1
#include "com/google/common/collect/ImmutableCollection.h"

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "java/util/Set.h"

@class ComGoogleCommonCollectImmutableSet_Builder;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectImmutableSet : ComGoogleCommonCollectImmutableCollection < JavaUtilSet >

#pragma mark Public

+ (ComGoogleCommonCollectImmutableSet_Builder *)builder;

+ (ComGoogleCommonCollectImmutableSet *)copyOfWithJavaUtilCollection:(id<JavaUtilCollection>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSet *)copyOfWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSet *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSet *)copyOfWithJavaUtilIterator:(id<JavaUtilIterator>)elements OBJC_METHOD_FAMILY_NONE;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

+ (ComGoogleCommonCollectImmutableSet *)of;

+ (ComGoogleCommonCollectImmutableSet *)ofWithId:(id)element;

+ (ComGoogleCommonCollectImmutableSet *)ofWithId:(id)e1
                                          withId:(id)e2;

+ (ComGoogleCommonCollectImmutableSet *)ofWithId:(id)e1
                                          withId:(id)e2
                                          withId:(id)e3;

+ (ComGoogleCommonCollectImmutableSet *)ofWithId:(id)e1
                                          withId:(id)e2
                                          withId:(id)e3
                                          withId:(id)e4;

+ (ComGoogleCommonCollectImmutableSet *)ofWithId:(id)e1
                                          withId:(id)e2
                                          withId:(id)e3
                                          withId:(id)e4
                                          withId:(id)e5;

+ (ComGoogleCommonCollectImmutableSet *)ofWithId:(id)e1
                                          withId:(id)e2
                                          withId:(id)e3
                                          withId:(id)e4
                                          withId:(id)e5
                                          withId:(id)e6
                               withNSObjectArray:(IOSObjectArray *)others;

#pragma mark Package-Private

- (instancetype)init;

+ (jint)chooseTableSizeWithInt:(jint)setSize;

- (jboolean)isHashCodeFast;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSet)

inline jint ComGoogleCommonCollectImmutableSet_get_MAX_TABLE_SIZE();
#define ComGoogleCommonCollectImmutableSet_MAX_TABLE_SIZE 1073741824
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectImmutableSet, MAX_TABLE_SIZE, jint)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableSet_of();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableSet_ofWithId_(id element);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableSet_ofWithId_withId_(id e1, id e2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableSet_ofWithId_withId_withId_(id e1, id e2, id e3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableSet_ofWithId_withId_withId_withId_(id e1, id e2, id e3, id e4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableSet_ofWithId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableSet_ofWithId_withId_withId_withId_withId_withId_withNSObjectArray_(id e1, id e2, id e3, id e4, id e5, id e6, IOSObjectArray *others);

FOUNDATION_EXPORT jint ComGoogleCommonCollectImmutableSet_chooseTableSizeWithInt_(jint setSize);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableSet_copyOfWithJavaUtilCollection_(id<JavaUtilCollection> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableSet_copyOfWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableSet_copyOfWithJavaUtilIterator_(id<JavaUtilIterator> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableSet_copyOfWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSet_init(ComGoogleCommonCollectImmutableSet *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet_Builder *ComGoogleCommonCollectImmutableSet_builder();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSet)

#endif

#if !defined (ComGoogleCommonCollectImmutableSet_Indexed_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSet || defined(INCLUDE_ComGoogleCommonCollectImmutableSet_Indexed))
#define ComGoogleCommonCollectImmutableSet_Indexed_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableIterator;

@interface ComGoogleCommonCollectImmutableSet_Indexed : ComGoogleCommonCollectImmutableSet

#pragma mark Public

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

#pragma mark Package-Private

- (instancetype)init;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (id)getWithInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSet_Indexed)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSet_Indexed_init(ComGoogleCommonCollectImmutableSet_Indexed *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSet_Indexed)

#endif

#if !defined (ComGoogleCommonCollectImmutableSet_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSet || defined(INCLUDE_ComGoogleCommonCollectImmutableSet_Builder))
#define ComGoogleCommonCollectImmutableSet_Builder_

#define RESTRICT_ComGoogleCommonCollectImmutableCollection 1
#define INCLUDE_ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder 1
#include "com/google/common/collect/ImmutableCollection.h"

@class ComGoogleCommonCollectImmutableSet;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectImmutableSet_Builder : ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableSet_Builder *)addWithId:(id)element;

- (ComGoogleCommonCollectImmutableSet_Builder *)addWithNSObjectArray:(IOSObjectArray *)elements;

- (ComGoogleCommonCollectImmutableSet_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (ComGoogleCommonCollectImmutableSet_Builder *)addAllWithJavaUtilIterator:(id<JavaUtilIterator>)elements;

- (ComGoogleCommonCollectImmutableSet *)build;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)capacity;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSet_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSet_Builder_init(ComGoogleCommonCollectImmutableSet_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet_Builder *new_ComGoogleCommonCollectImmutableSet_Builder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet_Builder *create_ComGoogleCommonCollectImmutableSet_Builder_init();

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSet_Builder_initWithInt_(ComGoogleCommonCollectImmutableSet_Builder *self, jint capacity);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet_Builder *new_ComGoogleCommonCollectImmutableSet_Builder_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet_Builder *create_ComGoogleCommonCollectImmutableSet_Builder_initWithInt_(jint capacity);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSet_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSet")