//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/StubbedInvocationMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingStubbedInvocationMatcher")
#ifdef RESTRICT_OrgMockitoInternalStubbingStubbedInvocationMatcher
#define INCLUDE_ALL_OrgMockitoInternalStubbingStubbedInvocationMatcher 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingStubbedInvocationMatcher 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingStubbedInvocationMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingStubbedInvocationMatcher_) && (INCLUDE_ALL_OrgMockitoInternalStubbingStubbedInvocationMatcher || defined(INCLUDE_OrgMockitoInternalStubbingStubbedInvocationMatcher))
#define OrgMockitoInternalStubbingStubbedInvocationMatcher_

#define RESTRICT_OrgMockitoInternalInvocationInvocationMatcher 1
#define INCLUDE_OrgMockitoInternalInvocationInvocationMatcher 1
#include "org/mockito/internal/invocation/InvocationMatcher.h"

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgMockitoInvocationDescribedInvocation;
@protocol OrgMockitoInvocationInvocationOnMock;

@interface OrgMockitoInternalStubbingStubbedInvocationMatcher : OrgMockitoInternalInvocationInvocationMatcher < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)invocation
                                         withOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (void)addAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (void)markStubUsedWithOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)usedAt;

- (NSString *)description;

- (jboolean)wasUsed;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingStubbedInvocationMatcher)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingStubbedInvocationMatcher_initWithOrgMockitoInternalInvocationInvocationMatcher_withOrgMockitoStubbingAnswer_(OrgMockitoInternalStubbingStubbedInvocationMatcher *self, OrgMockitoInternalInvocationInvocationMatcher *invocation, id<OrgMockitoStubbingAnswer> answer);

FOUNDATION_EXPORT OrgMockitoInternalStubbingStubbedInvocationMatcher *new_OrgMockitoInternalStubbingStubbedInvocationMatcher_initWithOrgMockitoInternalInvocationInvocationMatcher_withOrgMockitoStubbingAnswer_(OrgMockitoInternalInvocationInvocationMatcher *invocation, id<OrgMockitoStubbingAnswer> answer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingStubbedInvocationMatcher *create_OrgMockitoInternalStubbingStubbedInvocationMatcher_initWithOrgMockitoInternalInvocationInvocationMatcher_withOrgMockitoStubbingAnswer_(OrgMockitoInternalInvocationInvocationMatcher *invocation, id<OrgMockitoStubbingAnswer> answer);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingStubbedInvocationMatcher)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingStubbedInvocationMatcher")
