//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/runner/TestRunListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitRunnerTestRunListener")
#ifdef RESTRICT_JunitRunnerTestRunListener
#define INCLUDE_ALL_JunitRunnerTestRunListener 0
#else
#define INCLUDE_ALL_JunitRunnerTestRunListener 1
#endif
#undef RESTRICT_JunitRunnerTestRunListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JunitRunnerTestRunListener_) && (INCLUDE_ALL_JunitRunnerTestRunListener || defined(INCLUDE_JunitRunnerTestRunListener))
#define JunitRunnerTestRunListener_

/*!
 @brief A listener interface for observing the
 execution of a test run.
 Unlike TestListener,
 this interface using only primitive objects,
 making it suitable for remote test execution.
 */
@protocol JunitRunnerTestRunListener < JavaObject >

- (void)testRunStartedWithNSString:(NSString *)testSuiteName
                           withInt:(jint)testCount;

- (void)testRunEndedWithLong:(jlong)elapsedTime;

- (void)testRunStoppedWithLong:(jlong)elapsedTime;

- (void)testStartedWithNSString:(NSString *)testName;

- (void)testEndedWithNSString:(NSString *)testName;

- (void)testFailedWithInt:(jint)status
             withNSString:(NSString *)testName
             withNSString:(NSString *)trace;

@end

@interface JunitRunnerTestRunListener : NSObject

+ (jint)STATUS_ERROR;

+ (jint)STATUS_FAILURE;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitRunnerTestRunListener)

inline jint JunitRunnerTestRunListener_get_STATUS_ERROR();
#define JunitRunnerTestRunListener_STATUS_ERROR 1
J2OBJC_STATIC_FIELD_CONSTANT(JunitRunnerTestRunListener, STATUS_ERROR, jint)

inline jint JunitRunnerTestRunListener_get_STATUS_FAILURE();
#define JunitRunnerTestRunListener_STATUS_FAILURE 2
J2OBJC_STATIC_FIELD_CONSTANT(JunitRunnerTestRunListener, STATUS_FAILURE, jint)

J2OBJC_TYPE_LITERAL_HEADER(JunitRunnerTestRunListener)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitRunnerTestRunListener")
