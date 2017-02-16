//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/Range.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectRange")
#ifdef RESTRICT_ComGoogleCommonCollectRange
#define INCLUDE_ALL_ComGoogleCommonCollectRange 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectRange 1
#endif
#undef RESTRICT_ComGoogleCommonCollectRange

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectRange_) && (INCLUDE_ALL_ComGoogleCommonCollectRange || defined(INCLUDE_ComGoogleCommonCollectRange))
#define ComGoogleCommonCollectRange_

#define RESTRICT_ComGoogleCommonBasePredicate 1
#define INCLUDE_ComGoogleCommonBasePredicate 1
#include "com/google/common/base/Predicate.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectBoundType;
@class ComGoogleCommonCollectCut;
@class ComGoogleCommonCollectDiscreteDomain;
@class ComGoogleCommonCollectOrdering;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaLangComparable;
@protocol JavaLangIterable;

@interface ComGoogleCommonCollectRange : NSObject < ComGoogleCommonBasePredicate, JavaIoSerializable > {
 @public
  ComGoogleCommonCollectCut *lowerBound_;
  ComGoogleCommonCollectCut *upperBound_;
}

#pragma mark Public

+ (ComGoogleCommonCollectRange *)all;

- (jboolean)applyWithId:(id<JavaLangComparable>)input;

+ (ComGoogleCommonCollectRange *)atLeastWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

+ (ComGoogleCommonCollectRange *)atMostWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

- (ComGoogleCommonCollectRange *)canonicalWithComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

+ (ComGoogleCommonCollectRange *)closedWithJavaLangComparable:(id<JavaLangComparable>)lower
                                       withJavaLangComparable:(id<JavaLangComparable>)upper;

+ (ComGoogleCommonCollectRange *)closedOpenWithJavaLangComparable:(id<JavaLangComparable>)lower
                                           withJavaLangComparable:(id<JavaLangComparable>)upper;

- (jboolean)containsWithJavaLangComparable:(id<JavaLangComparable>)value;

- (jboolean)containsAllWithJavaLangIterable:(id<JavaLangIterable>)values;

+ (ComGoogleCommonCollectRange *)downToWithJavaLangComparable:(id<JavaLangComparable>)endpoint
                          withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType;

+ (ComGoogleCommonCollectRange *)encloseAllWithJavaLangIterable:(id<JavaLangIterable>)values;

- (jboolean)enclosesWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)other;

- (jboolean)isEqual:(id)object;

+ (ComGoogleCommonCollectRange *)greaterThanWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

- (NSUInteger)hash;

- (jboolean)hasLowerBound;

- (jboolean)hasUpperBound;

- (ComGoogleCommonCollectRange *)intersectionWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)connectedRange;

- (jboolean)isConnectedWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)other;

- (jboolean)isEmpty;

+ (ComGoogleCommonCollectRange *)lessThanWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

- (ComGoogleCommonCollectBoundType *)lowerBoundType;

- (id<JavaLangComparable>)lowerEndpoint;

+ (ComGoogleCommonCollectRange *)openWithJavaLangComparable:(id<JavaLangComparable>)lower
                                     withJavaLangComparable:(id<JavaLangComparable>)upper;

+ (ComGoogleCommonCollectRange *)openClosedWithJavaLangComparable:(id<JavaLangComparable>)lower
                                           withJavaLangComparable:(id<JavaLangComparable>)upper;

+ (ComGoogleCommonCollectRange *)rangeWithJavaLangComparable:(id<JavaLangComparable>)lower
                         withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)lowerType
                                      withJavaLangComparable:(id<JavaLangComparable>)upper
                         withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)upperType;

+ (ComGoogleCommonCollectRange *)singletonWithJavaLangComparable:(id<JavaLangComparable>)value;

- (ComGoogleCommonCollectRange *)spanWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)other;

- (NSString *)description;

- (ComGoogleCommonCollectBoundType *)upperBoundType;

- (id<JavaLangComparable>)upperEndpoint;

+ (ComGoogleCommonCollectRange *)upToWithJavaLangComparable:(id<JavaLangComparable>)endpoint
                        withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType;

#pragma mark Package-Private

+ (jint)compareOrThrowWithJavaLangComparable:(id<JavaLangComparable>)left
                      withJavaLangComparable:(id<JavaLangComparable>)right;

+ (ComGoogleCommonCollectRange *)createWithComGoogleCommonCollectCut:(ComGoogleCommonCollectCut *)lowerBound
                                       withComGoogleCommonCollectCut:(ComGoogleCommonCollectCut *)upperBound;

+ (id<ComGoogleCommonBaseFunction>)lowerBoundFn;

- (id)readResolve;

+ (id<ComGoogleCommonBaseFunction>)upperBoundFn;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectRange)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectRange, lowerBound_, ComGoogleCommonCollectCut *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectRange, upperBound_, ComGoogleCommonCollectCut *)

inline ComGoogleCommonCollectOrdering *ComGoogleCommonCollectRange_get_RANGE_LEX_ORDERING();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectRange_RANGE_LEX_ORDERING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectRange, RANGE_LEX_ORDERING, ComGoogleCommonCollectOrdering *)

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonCollectRange_lowerBoundFn();

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonCollectRange_upperBoundFn();

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_createWithComGoogleCommonCollectCut_withComGoogleCommonCollectCut_(ComGoogleCommonCollectCut *lowerBound, ComGoogleCommonCollectCut *upperBound);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_openWithJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> lower, id<JavaLangComparable> upper);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_closedWithJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> lower, id<JavaLangComparable> upper);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_closedOpenWithJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> lower, id<JavaLangComparable> upper);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_openClosedWithJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> lower, id<JavaLangComparable> upper);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_rangeWithJavaLangComparable_withComGoogleCommonCollectBoundType_withJavaLangComparable_withComGoogleCommonCollectBoundType_(id<JavaLangComparable> lower, ComGoogleCommonCollectBoundType *lowerType, id<JavaLangComparable> upper, ComGoogleCommonCollectBoundType *upperType);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_lessThanWithJavaLangComparable_(id<JavaLangComparable> endpoint);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_atMostWithJavaLangComparable_(id<JavaLangComparable> endpoint);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_upToWithJavaLangComparable_withComGoogleCommonCollectBoundType_(id<JavaLangComparable> endpoint, ComGoogleCommonCollectBoundType *boundType);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_greaterThanWithJavaLangComparable_(id<JavaLangComparable> endpoint);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_atLeastWithJavaLangComparable_(id<JavaLangComparable> endpoint);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_downToWithJavaLangComparable_withComGoogleCommonCollectBoundType_(id<JavaLangComparable> endpoint, ComGoogleCommonCollectBoundType *boundType);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_all();

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_singletonWithJavaLangComparable_(id<JavaLangComparable> value);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRange_encloseAllWithJavaLangIterable_(id<JavaLangIterable> values);

FOUNDATION_EXPORT jint ComGoogleCommonCollectRange_compareOrThrowWithJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> left, id<JavaLangComparable> right);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRange)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectRange")