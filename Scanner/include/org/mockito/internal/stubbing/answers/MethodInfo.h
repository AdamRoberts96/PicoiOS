//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/MethodInfo.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersMethodInfo")
#ifdef RESTRICT_OrgMockitoInternalStubbingAnswersMethodInfo
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersMethodInfo 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersMethodInfo 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingAnswersMethodInfo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingAnswersMethodInfo_) && (INCLUDE_ALL_OrgMockitoInternalStubbingAnswersMethodInfo || defined(INCLUDE_OrgMockitoInternalStubbingAnswersMethodInfo))
#define OrgMockitoInternalStubbingAnswersMethodInfo_

@class IOSClass;
@class JavaLangReflectMethod;
@protocol OrgMockitoInvocationInvocation;

/*!
 @brief by Szczepan Faber, created at: 3/31/12
 */
@interface OrgMockitoInternalStubbingAnswersMethodInfo : NSObject

#pragma mark Public

- (instancetype)initWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)theInvocation;

- (JavaLangReflectMethod *)getMethod;

- (NSString *)getMethodName;

- (jboolean)isDeclaredOnInterface;

- (jboolean)isValidExceptionWithNSException:(NSException *)throwable;

- (jboolean)isValidReturnTypeWithIOSClass:(IOSClass *)clazz;

- (jboolean)isVoid;

- (NSString *)printMethodReturnType;

- (jboolean)returnsPrimitive;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersMethodInfo)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingAnswersMethodInfo_initWithOrgMockitoInvocationInvocation_(OrgMockitoInternalStubbingAnswersMethodInfo *self, id<OrgMockitoInvocationInvocation> theInvocation);

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersMethodInfo *new_OrgMockitoInternalStubbingAnswersMethodInfo_initWithOrgMockitoInvocationInvocation_(id<OrgMockitoInvocationInvocation> theInvocation) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersMethodInfo *create_OrgMockitoInternalStubbingAnswersMethodInfo_initWithOrgMockitoInvocationInvocation_(id<OrgMockitoInvocationInvocation> theInvocation);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersMethodInfo)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersMethodInfo")
