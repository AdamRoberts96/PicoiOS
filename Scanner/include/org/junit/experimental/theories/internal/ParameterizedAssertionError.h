//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/experimental/theories/internal/ParameterizedAssertionError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError")
#ifdef RESTRICT_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError 1
#endif
#undef RESTRICT_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_) && (INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError || defined(INCLUDE_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError))
#define OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class IOSObjectArray;
@protocol JavaUtilCollection;

@interface OrgJunitExperimentalTheoriesInternalParameterizedAssertionError : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithNSException:(NSException *)targetException
                       withNSString:(NSString *)methodName
                  withNSObjectArray:(IOSObjectArray *)params;

- (jboolean)isEqual:(id)obj;

+ (NSString *)joinWithNSString:(NSString *)delimiter
        withJavaUtilCollection:(id<JavaUtilCollection>)values;

+ (NSString *)joinWithNSString:(NSString *)delimiter
             withNSObjectArray:(IOSObjectArray *)params;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesInternalParameterizedAssertionError)

FOUNDATION_EXPORT void OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_initWithNSException_withNSString_withNSObjectArray_(OrgJunitExperimentalTheoriesInternalParameterizedAssertionError *self, NSException *targetException, NSString *methodName, IOSObjectArray *params);

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesInternalParameterizedAssertionError *new_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_initWithNSException_withNSString_withNSObjectArray_(NSException *targetException, NSString *methodName, IOSObjectArray *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesInternalParameterizedAssertionError *create_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_initWithNSException_withNSString_withNSObjectArray_(NSException *targetException, NSString *methodName, IOSObjectArray *params);

FOUNDATION_EXPORT NSString *OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_joinWithNSString_withNSObjectArray_(NSString *delimiter, IOSObjectArray *params);

FOUNDATION_EXPORT NSString *OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_joinWithNSString_withJavaUtilCollection_(NSString *delimiter, id<JavaUtilCollection> values);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesInternalParameterizedAssertionError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError")
