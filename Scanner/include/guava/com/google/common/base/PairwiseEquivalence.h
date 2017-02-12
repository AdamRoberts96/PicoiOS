//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/PairwiseEquivalence.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBasePairwiseEquivalence")
#ifdef RESTRICT_ComGoogleCommonBasePairwiseEquivalence
#define INCLUDE_ALL_ComGoogleCommonBasePairwiseEquivalence 0
#else
#define INCLUDE_ALL_ComGoogleCommonBasePairwiseEquivalence 1
#endif
#undef RESTRICT_ComGoogleCommonBasePairwiseEquivalence

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBasePairwiseEquivalence_) && (INCLUDE_ALL_ComGoogleCommonBasePairwiseEquivalence || defined(INCLUDE_ComGoogleCommonBasePairwiseEquivalence))
#define ComGoogleCommonBasePairwiseEquivalence_

#define RESTRICT_ComGoogleCommonBaseEquivalence 1
#define INCLUDE_ComGoogleCommonBaseEquivalence 1
#include "com/google/common/base/Equivalence.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol JavaLangIterable;

@interface ComGoogleCommonBasePairwiseEquivalence : ComGoogleCommonBaseEquivalence < JavaIoSerializable > {
 @public
  ComGoogleCommonBaseEquivalence *elementEquivalence_;
}

#pragma mark Public

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)doEquivalentWithId:(id<JavaLangIterable>)iterableA
                        withId:(id<JavaLangIterable>)iterableB;

- (jint)doHashWithId:(id<JavaLangIterable>)iterable;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)elementEquivalence;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBasePairwiseEquivalence)

J2OBJC_FIELD_SETTER(ComGoogleCommonBasePairwiseEquivalence, elementEquivalence_, ComGoogleCommonBaseEquivalence *)

FOUNDATION_EXPORT void ComGoogleCommonBasePairwiseEquivalence_initWithComGoogleCommonBaseEquivalence_(ComGoogleCommonBasePairwiseEquivalence *self, ComGoogleCommonBaseEquivalence *elementEquivalence);

FOUNDATION_EXPORT ComGoogleCommonBasePairwiseEquivalence *new_ComGoogleCommonBasePairwiseEquivalence_initWithComGoogleCommonBaseEquivalence_(ComGoogleCommonBaseEquivalence *elementEquivalence) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBasePairwiseEquivalence *create_ComGoogleCommonBasePairwiseEquivalence_initWithComGoogleCommonBaseEquivalence_(ComGoogleCommonBaseEquivalence *elementEquivalence);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBasePairwiseEquivalence)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBasePairwiseEquivalence")
