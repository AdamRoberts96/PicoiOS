//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/ThrowsException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersThrowsException")
#ifdef RESTRICT_OrgMockitoInternalStubbingAnswersThrowsException
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersThrowsException 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersThrowsException 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingAnswersThrowsException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingAnswersThrowsException_) && (INCLUDE_ALL_OrgMockitoInternalStubbingAnswersThrowsException || defined(INCLUDE_OrgMockitoInternalStubbingAnswersThrowsException))
#define OrgMockitoInternalStubbingAnswersThrowsException_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgMockitoInvocationInvocationOnMock;

@interface OrgMockitoInternalStubbingAnswersThrowsException : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSException:(NSException *)throwable;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (NSException *)getThrowable;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersThrowsException)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingAnswersThrowsException_initWithNSException_(OrgMockitoInternalStubbingAnswersThrowsException *self, NSException *throwable);

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersThrowsException *new_OrgMockitoInternalStubbingAnswersThrowsException_initWithNSException_(NSException *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersThrowsException *create_OrgMockitoInternalStubbingAnswersThrowsException_initWithNSException_(NSException *throwable);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersThrowsException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersThrowsException")
