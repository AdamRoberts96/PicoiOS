//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/FeatureMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestFeatureMatcher")
#ifdef RESTRICT_OrgHamcrestFeatureMatcher
#define INCLUDE_ALL_OrgHamcrestFeatureMatcher 0
#else
#define INCLUDE_ALL_OrgHamcrestFeatureMatcher 1
#endif
#undef RESTRICT_OrgHamcrestFeatureMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestFeatureMatcher_) && (INCLUDE_ALL_OrgHamcrestFeatureMatcher || defined(INCLUDE_OrgHamcrestFeatureMatcher))
#define OrgHamcrestFeatureMatcher_

#define RESTRICT_OrgHamcrestTypeSafeDiagnosingMatcher 1
#define INCLUDE_OrgHamcrestTypeSafeDiagnosingMatcher 1
#include "org/hamcrest/TypeSafeDiagnosingMatcher.h"

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

/*!
 @brief Supporting class for matching a feature of an object.
 Implement <code>featureValueOf()</code>
 in a subclass to pull out the feature to be matched against. 
 */
@interface OrgHamcrestFeatureMatcher : OrgHamcrestTypeSafeDiagnosingMatcher

#pragma mark Public

/*!
 @brief Constructor
 @param subMatcher The matcher to apply to the feature
 @param featureDescription Descriptive text to use in describeTo
 @param featureName Identifying text for mismatch message
 */
- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)subMatcher
                              withNSString:(NSString *)featureDescription
                              withNSString:(NSString *)featureName;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

#pragma mark Protected

/*!
 @brief Implement this to extract the interesting feature.
 @param actual the target object
 @return the feature to be matched
 */
- (id)featureValueOfWithId:(id)actual;

- (jboolean)matchesSafelyWithId:(id)actual
     withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatch;

@end

J2OBJC_STATIC_INIT(OrgHamcrestFeatureMatcher)

FOUNDATION_EXPORT void OrgHamcrestFeatureMatcher_initWithOrgHamcrestMatcher_withNSString_withNSString_(OrgHamcrestFeatureMatcher *self, id<OrgHamcrestMatcher> subMatcher, NSString *featureDescription, NSString *featureName);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestFeatureMatcher)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestFeatureMatcher")
