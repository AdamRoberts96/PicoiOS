//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/SuiteMethod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersSuiteMethod")
#ifdef RESTRICT_OrgJunitInternalRunnersSuiteMethod
#define INCLUDE_ALL_OrgJunitInternalRunnersSuiteMethod 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersSuiteMethod 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersSuiteMethod

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalRunnersSuiteMethod_) && (INCLUDE_ALL_OrgJunitInternalRunnersSuiteMethod || defined(INCLUDE_OrgJunitInternalRunnersSuiteMethod))
#define OrgJunitInternalRunnersSuiteMethod_

#define RESTRICT_OrgJunitInternalRunnersJUnit38ClassRunner 1
#define INCLUDE_OrgJunitInternalRunnersJUnit38ClassRunner 1
#include "org/junit/internal/runners/JUnit38ClassRunner.h"

@class IOSClass;
@protocol JunitFrameworkTest;

/*!
 @brief Runner for use with JUnit 3.8.x-style AllTests classes
 (those that only implement a static <code>suite()</code>
 method).
 For example:
 @code

  &#064;RunWith(AllTests.class)
  public class ProductTests {
    public static junit.framework.Test suite() {
       ...
    }
  }
  
@endcode
 */
@interface OrgJunitInternalRunnersSuiteMethod : OrgJunitInternalRunnersJUnit38ClassRunner

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass;

+ (id<JunitFrameworkTest>)testFromSuiteMethodWithIOSClass:(IOSClass *)klass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersSuiteMethod)

FOUNDATION_EXPORT void OrgJunitInternalRunnersSuiteMethod_initWithIOSClass_(OrgJunitInternalRunnersSuiteMethod *self, IOSClass *klass);

FOUNDATION_EXPORT OrgJunitInternalRunnersSuiteMethod *new_OrgJunitInternalRunnersSuiteMethod_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersSuiteMethod *create_OrgJunitInternalRunnersSuiteMethod_initWithIOSClass_(IOSClass *klass);

FOUNDATION_EXPORT id<JunitFrameworkTest> OrgJunitInternalRunnersSuiteMethod_testFromSuiteMethodWithIOSClass_(IOSClass *klass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersSuiteMethod)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersSuiteMethod")
