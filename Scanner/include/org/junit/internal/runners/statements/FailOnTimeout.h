//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/statements/FailOnTimeout.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersStatementsFailOnTimeout")
#ifdef RESTRICT_OrgJunitInternalRunnersStatementsFailOnTimeout
#define INCLUDE_ALL_OrgJunitInternalRunnersStatementsFailOnTimeout 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersStatementsFailOnTimeout 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersStatementsFailOnTimeout

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalRunnersStatementsFailOnTimeout_) && (INCLUDE_ALL_OrgJunitInternalRunnersStatementsFailOnTimeout || defined(INCLUDE_OrgJunitInternalRunnersStatementsFailOnTimeout))
#define OrgJunitInternalRunnersStatementsFailOnTimeout_

#define RESTRICT_OrgJunitRunnersModelStatement 1
#define INCLUDE_OrgJunitRunnersModelStatement 1
#include "org/junit/runners/model/Statement.h"

@interface OrgJunitInternalRunnersStatementsFailOnTimeout : OrgJunitRunnersModelStatement

#pragma mark Public

- (instancetype)initWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)originalStatement
                                             withLong:(jlong)timeout;

- (void)evaluate;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersStatementsFailOnTimeout)

FOUNDATION_EXPORT void OrgJunitInternalRunnersStatementsFailOnTimeout_initWithOrgJunitRunnersModelStatement_withLong_(OrgJunitInternalRunnersStatementsFailOnTimeout *self, OrgJunitRunnersModelStatement *originalStatement, jlong timeout);

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsFailOnTimeout *new_OrgJunitInternalRunnersStatementsFailOnTimeout_initWithOrgJunitRunnersModelStatement_withLong_(OrgJunitRunnersModelStatement *originalStatement, jlong timeout) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsFailOnTimeout *create_OrgJunitInternalRunnersStatementsFailOnTimeout_initWithOrgJunitRunnersModelStatement_withLong_(OrgJunitRunnersModelStatement *originalStatement, jlong timeout);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersStatementsFailOnTimeout)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersStatementsFailOnTimeout")
