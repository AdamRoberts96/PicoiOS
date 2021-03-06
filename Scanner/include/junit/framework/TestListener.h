//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/framework/TestListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkTestListener")
#ifdef RESTRICT_JunitFrameworkTestListener
#define INCLUDE_ALL_JunitFrameworkTestListener 0
#else
#define INCLUDE_ALL_JunitFrameworkTestListener 1
#endif
#undef RESTRICT_JunitFrameworkTestListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JunitFrameworkTestListener_) && (INCLUDE_ALL_JunitFrameworkTestListener || defined(INCLUDE_JunitFrameworkTestListener))
#define JunitFrameworkTestListener_

@class JunitFrameworkAssertionFailedError;
@protocol JunitFrameworkTest;

/*!
 @brief A Listener for test progress
 */
@protocol JunitFrameworkTestListener < JavaObject >

/*!
 @brief An error occurred.
 */
- (void)addErrorWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
                       withNSException:(NSException *)t;

/*!
 @brief A failure occurred.
 */
- (void)addFailureWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
  withJunitFrameworkAssertionFailedError:(JunitFrameworkAssertionFailedError *)t;

/*!
 @brief A test ended.
 */
- (void)endTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

/*!
 @brief A test started.
 */
- (void)startTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkTestListener)

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkTestListener)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitFrameworkTestListener")
