//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/builders/IgnoredClassRunner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalBuildersIgnoredClassRunner")
#ifdef RESTRICT_OrgJunitInternalBuildersIgnoredClassRunner
#define INCLUDE_ALL_OrgJunitInternalBuildersIgnoredClassRunner 0
#else
#define INCLUDE_ALL_OrgJunitInternalBuildersIgnoredClassRunner 1
#endif
#undef RESTRICT_OrgJunitInternalBuildersIgnoredClassRunner

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalBuildersIgnoredClassRunner_) && (INCLUDE_ALL_OrgJunitInternalBuildersIgnoredClassRunner || defined(INCLUDE_OrgJunitInternalBuildersIgnoredClassRunner))
#define OrgJunitInternalBuildersIgnoredClassRunner_

#define RESTRICT_OrgJunitRunnerRunner 1
#define INCLUDE_OrgJunitRunnerRunner 1
#include "org/junit/runner/Runner.h"

@class IOSClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;

@interface OrgJunitInternalBuildersIgnoredClassRunner : OrgJunitRunnerRunner

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)testClass;

- (OrgJunitRunnerDescription *)getDescription;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalBuildersIgnoredClassRunner)

FOUNDATION_EXPORT void OrgJunitInternalBuildersIgnoredClassRunner_initWithIOSClass_(OrgJunitInternalBuildersIgnoredClassRunner *self, IOSClass *testClass);

FOUNDATION_EXPORT OrgJunitInternalBuildersIgnoredClassRunner *new_OrgJunitInternalBuildersIgnoredClassRunner_initWithIOSClass_(IOSClass *testClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalBuildersIgnoredClassRunner *create_OrgJunitInternalBuildersIgnoredClassRunner_initWithIOSClass_(IOSClass *testClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalBuildersIgnoredClassRunner)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalBuildersIgnoredClassRunner")
