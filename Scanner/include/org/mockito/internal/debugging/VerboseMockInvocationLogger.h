//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/debugging/VerboseMockInvocationLogger.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalDebuggingVerboseMockInvocationLogger")
#ifdef RESTRICT_OrgMockitoInternalDebuggingVerboseMockInvocationLogger
#define INCLUDE_ALL_OrgMockitoInternalDebuggingVerboseMockInvocationLogger 0
#else
#define INCLUDE_ALL_OrgMockitoInternalDebuggingVerboseMockInvocationLogger 1
#endif
#undef RESTRICT_OrgMockitoInternalDebuggingVerboseMockInvocationLogger

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalDebuggingVerboseMockInvocationLogger_) && (INCLUDE_ALL_OrgMockitoInternalDebuggingVerboseMockInvocationLogger || defined(INCLUDE_OrgMockitoInternalDebuggingVerboseMockInvocationLogger))
#define OrgMockitoInternalDebuggingVerboseMockInvocationLogger_

#define RESTRICT_OrgMockitoListenersInvocationListener 1
#define INCLUDE_OrgMockitoListenersInvocationListener 1
#include "org/mockito/listeners/InvocationListener.h"

@class JavaIoPrintStream;
@protocol OrgMockitoListenersMethodInvocationReport;

/*!
 @brief Logs all invocations to standard output.
 Used for debugging interactions with a mock. 
 */
@interface OrgMockitoInternalDebuggingVerboseMockInvocationLogger : NSObject < OrgMockitoListenersInvocationListener > {
 @public
  JavaIoPrintStream *printStream_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaIoPrintStream:(JavaIoPrintStream *)printStream;

- (void)reportInvocationWithOrgMockitoListenersMethodInvocationReport:(id<OrgMockitoListenersMethodInvocationReport>)methodInvocationReport;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalDebuggingVerboseMockInvocationLogger)

J2OBJC_FIELD_SETTER(OrgMockitoInternalDebuggingVerboseMockInvocationLogger, printStream_, JavaIoPrintStream *)

FOUNDATION_EXPORT void OrgMockitoInternalDebuggingVerboseMockInvocationLogger_init(OrgMockitoInternalDebuggingVerboseMockInvocationLogger *self);

FOUNDATION_EXPORT OrgMockitoInternalDebuggingVerboseMockInvocationLogger *new_OrgMockitoInternalDebuggingVerboseMockInvocationLogger_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalDebuggingVerboseMockInvocationLogger *create_OrgMockitoInternalDebuggingVerboseMockInvocationLogger_init();

FOUNDATION_EXPORT void OrgMockitoInternalDebuggingVerboseMockInvocationLogger_initWithJavaIoPrintStream_(OrgMockitoInternalDebuggingVerboseMockInvocationLogger *self, JavaIoPrintStream *printStream);

FOUNDATION_EXPORT OrgMockitoInternalDebuggingVerboseMockInvocationLogger *new_OrgMockitoInternalDebuggingVerboseMockInvocationLogger_initWithJavaIoPrintStream_(JavaIoPrintStream *printStream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalDebuggingVerboseMockInvocationLogger *create_OrgMockitoInternalDebuggingVerboseMockInvocationLogger_initWithJavaIoPrintStream_(JavaIoPrintStream *printStream);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalDebuggingVerboseMockInvocationLogger)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalDebuggingVerboseMockInvocationLogger")
