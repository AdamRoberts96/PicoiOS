//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/statements/RunBefores.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersStatementsRunBefores")
#ifdef RESTRICT_OrgJunitInternalRunnersStatementsRunBefores
#define INCLUDE_ALL_OrgJunitInternalRunnersStatementsRunBefores 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersStatementsRunBefores 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersStatementsRunBefores

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalRunnersStatementsRunBefores_) && (INCLUDE_ALL_OrgJunitInternalRunnersStatementsRunBefores || defined(INCLUDE_OrgJunitInternalRunnersStatementsRunBefores))
#define OrgJunitInternalRunnersStatementsRunBefores_

#define RESTRICT_OrgJunitRunnersModelStatement 1
#define INCLUDE_OrgJunitRunnersModelStatement 1
#include "org/junit/runners/model/Statement.h"

@protocol JavaUtilList;

@interface OrgJunitInternalRunnersStatementsRunBefores : OrgJunitRunnersModelStatement

#pragma mark Public

- (instancetype)initWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)next
                                     withJavaUtilList:(id<JavaUtilList>)befores
                                               withId:(id)target;

- (void)evaluate;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersStatementsRunBefores)

FOUNDATION_EXPORT void OrgJunitInternalRunnersStatementsRunBefores_initWithOrgJunitRunnersModelStatement_withJavaUtilList_withId_(OrgJunitInternalRunnersStatementsRunBefores *self, OrgJunitRunnersModelStatement *next, id<JavaUtilList> befores, id target);

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsRunBefores *new_OrgJunitInternalRunnersStatementsRunBefores_initWithOrgJunitRunnersModelStatement_withJavaUtilList_withId_(OrgJunitRunnersModelStatement *next, id<JavaUtilList> befores, id target) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsRunBefores *create_OrgJunitInternalRunnersStatementsRunBefores_initWithOrgJunitRunnersModelStatement_withJavaUtilList_withId_(OrgJunitRunnersModelStatement *next, id<JavaUtilList> befores, id target);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersStatementsRunBefores)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersStatementsRunBefores")