//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/Verify.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseVerify")
#ifdef RESTRICT_ComGoogleCommonBaseVerify
#define INCLUDE_ALL_ComGoogleCommonBaseVerify 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseVerify 1
#endif
#undef RESTRICT_ComGoogleCommonBaseVerify

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseVerify_) && (INCLUDE_ALL_ComGoogleCommonBaseVerify || defined(INCLUDE_ComGoogleCommonBaseVerify))
#define ComGoogleCommonBaseVerify_

@class IOSObjectArray;

@interface ComGoogleCommonBaseVerify : NSObject

#pragma mark Public

+ (void)verifyWithBoolean:(jboolean)expression;

+ (void)verifyWithBoolean:(jboolean)expression
             withNSString:(NSString *)errorMessageTemplate
        withNSObjectArray:(IOSObjectArray *)errorMessageArgs;

+ (id)verifyNotNullWithId:(id)reference;

+ (id)verifyNotNullWithId:(id)reference
             withNSString:(NSString *)errorMessageTemplate
        withNSObjectArray:(IOSObjectArray *)errorMessageArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseVerify)

FOUNDATION_EXPORT void ComGoogleCommonBaseVerify_verifyWithBoolean_(jboolean expression);

FOUNDATION_EXPORT void ComGoogleCommonBaseVerify_verifyWithBoolean_withNSString_withNSObjectArray_(jboolean expression, NSString *errorMessageTemplate, IOSObjectArray *errorMessageArgs);

FOUNDATION_EXPORT id ComGoogleCommonBaseVerify_verifyNotNullWithId_(id reference);

FOUNDATION_EXPORT id ComGoogleCommonBaseVerify_verifyNotNullWithId_withNSString_withNSObjectArray_(id reference, NSString *errorMessageTemplate, IOSObjectArray *errorMessageArgs);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseVerify)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseVerify")