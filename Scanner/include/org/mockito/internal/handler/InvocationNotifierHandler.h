//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/handler/InvocationNotifierHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalHandlerInvocationNotifierHandler")
#ifdef RESTRICT_OrgMockitoInternalHandlerInvocationNotifierHandler
#define INCLUDE_ALL_OrgMockitoInternalHandlerInvocationNotifierHandler 0
#else
#define INCLUDE_ALL_OrgMockitoInternalHandlerInvocationNotifierHandler 1
#endif
#undef RESTRICT_OrgMockitoInternalHandlerInvocationNotifierHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalHandlerInvocationNotifierHandler_) && (INCLUDE_ALL_OrgMockitoInternalHandlerInvocationNotifierHandler || defined(INCLUDE_OrgMockitoInternalHandlerInvocationNotifierHandler))
#define OrgMockitoInternalHandlerInvocationNotifierHandler_

#define RESTRICT_OrgMockitoInvocationMockHandler 1
#define INCLUDE_OrgMockitoInvocationMockHandler 1
#include "org/mockito/invocation/MockHandler.h"

#define RESTRICT_OrgMockitoInternalInternalMockHandler 1
#define INCLUDE_OrgMockitoInternalInternalMockHandler 1
#include "org/mockito/internal/InternalMockHandler.h"

@protocol JavaUtilList;
@protocol OrgMockitoInternalStubbingInvocationContainer;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoStubbingVoidMethodStubbable;

/*!
 @brief Handler, that call all listeners wanted for this mock, before delegating it
 to the parameterized handler.
 Also imposterize MockHandlerImpl, delegate all call of InternalMockHandler to the real mockHandler
 */
@interface OrgMockitoInternalHandlerInvocationNotifierHandler : NSObject < OrgMockitoInvocationMockHandler, OrgMockitoInternalInternalMockHandler >

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalInternalMockHandler:(id<OrgMockitoInternalInternalMockHandler>)mockHandler
                       withOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

- (id<OrgMockitoInternalStubbingInvocationContainer>)getInvocationContainer;

- (id<OrgMockitoMockMockCreationSettings>)getMockSettings;

- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)setAnswersForStubbingWithJavaUtilList:(id<JavaUtilList>)answers;

- (id<OrgMockitoStubbingVoidMethodStubbable>)voidMethodStubbableWithId:(id)mock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalHandlerInvocationNotifierHandler)

FOUNDATION_EXPORT void OrgMockitoInternalHandlerInvocationNotifierHandler_initWithOrgMockitoInternalInternalMockHandler_withOrgMockitoMockMockCreationSettings_(OrgMockitoInternalHandlerInvocationNotifierHandler *self, id<OrgMockitoInternalInternalMockHandler> mockHandler, id<OrgMockitoMockMockCreationSettings> settings);

FOUNDATION_EXPORT OrgMockitoInternalHandlerInvocationNotifierHandler *new_OrgMockitoInternalHandlerInvocationNotifierHandler_initWithOrgMockitoInternalInternalMockHandler_withOrgMockitoMockMockCreationSettings_(id<OrgMockitoInternalInternalMockHandler> mockHandler, id<OrgMockitoMockMockCreationSettings> settings) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalHandlerInvocationNotifierHandler *create_OrgMockitoInternalHandlerInvocationNotifierHandler_initWithOrgMockitoInternalInternalMockHandler_withOrgMockitoMockMockCreationSettings_(id<OrgMockitoInternalInternalMockHandler> mockHandler, id<OrgMockitoMockMockCreationSettings> settings);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalHandlerInvocationNotifierHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalHandlerInvocationNotifierHandler")
