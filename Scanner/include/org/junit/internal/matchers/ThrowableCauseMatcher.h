//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/matchers/ThrowableCauseMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalMatchersThrowableCauseMatcher")
#ifdef RESTRICT_OrgJunitInternalMatchersThrowableCauseMatcher
#define INCLUDE_ALL_OrgJunitInternalMatchersThrowableCauseMatcher 0
#else
#define INCLUDE_ALL_OrgJunitInternalMatchersThrowableCauseMatcher 1
#endif
#undef RESTRICT_OrgJunitInternalMatchersThrowableCauseMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalMatchersThrowableCauseMatcher_) && (INCLUDE_ALL_OrgJunitInternalMatchersThrowableCauseMatcher || defined(INCLUDE_OrgJunitInternalMatchersThrowableCauseMatcher))
#define OrgJunitInternalMatchersThrowableCauseMatcher_

#define RESTRICT_OrgHamcrestTypeSafeMatcher 1
#define INCLUDE_OrgHamcrestTypeSafeMatcher 1
#include "org/hamcrest/TypeSafeMatcher.h"

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgJunitInternalMatchersThrowableCauseMatcher : OrgHamcrestTypeSafeMatcher

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)hasCauseWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

#pragma mark Protected

- (void)describeMismatchSafelyWithId:(NSException *)item
          withOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesSafelyWithId:(NSException *)item;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalMatchersThrowableCauseMatcher)

FOUNDATION_EXPORT void OrgJunitInternalMatchersThrowableCauseMatcher_initWithOrgHamcrestMatcher_(OrgJunitInternalMatchersThrowableCauseMatcher *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitInternalMatchersThrowableCauseMatcher *new_OrgJunitInternalMatchersThrowableCauseMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalMatchersThrowableCauseMatcher *create_OrgJunitInternalMatchersThrowableCauseMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitInternalMatchersThrowableCauseMatcher_hasCauseWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalMatchersThrowableCauseMatcher)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalMatchersThrowableCauseMatcher")
