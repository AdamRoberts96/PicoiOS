//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/listeners/InvocationListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoListenersInvocationListener")
#ifdef RESTRICT_OrgMockitoListenersInvocationListener
#define INCLUDE_ALL_OrgMockitoListenersInvocationListener 0
#else
#define INCLUDE_ALL_OrgMockitoListenersInvocationListener 1
#endif
#undef RESTRICT_OrgMockitoListenersInvocationListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoListenersInvocationListener_) && (INCLUDE_ALL_OrgMockitoListenersInvocationListener || defined(INCLUDE_OrgMockitoListenersInvocationListener))
#define OrgMockitoListenersInvocationListener_

@protocol OrgMockitoListenersMethodInvocationReport;

/*!
 @brief This listener can be notified of method invocations on a mock.
 For this to happen, it must be registered using <code>MockSettings.invocationListeners(InvocationListener...)</code>.
 */
@protocol OrgMockitoListenersInvocationListener < JavaObject >

/*!
 @brief Called after the invocation of the listener's mock if it returned normally.
 <p>
 Exceptions caused by this invocationListener will raise a <code>org.mockito.exceptions.base.MockitoException</code>.
 </p>
 @param methodInvocationReport Information about the method call that just happened.
 - seealso: MethodInvocationReport
 */
- (void)reportInvocationWithOrgMockitoListenersMethodInvocationReport:(id<OrgMockitoListenersMethodInvocationReport>)methodInvocationReport;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoListenersInvocationListener)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoListenersInvocationListener)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoListenersInvocationListener")
