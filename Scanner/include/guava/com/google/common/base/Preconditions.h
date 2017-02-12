//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/Preconditions.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBasePreconditions")
#ifdef RESTRICT_ComGoogleCommonBasePreconditions
#define INCLUDE_ALL_ComGoogleCommonBasePreconditions 0
#else
#define INCLUDE_ALL_ComGoogleCommonBasePreconditions 1
#endif
#undef RESTRICT_ComGoogleCommonBasePreconditions

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBasePreconditions_) && (INCLUDE_ALL_ComGoogleCommonBasePreconditions || defined(INCLUDE_ComGoogleCommonBasePreconditions))
#define ComGoogleCommonBasePreconditions_

@class IOSObjectArray;

@interface ComGoogleCommonBasePreconditions : NSObject

#pragma mark Public

+ (void)checkArgumentWithBoolean:(jboolean)expression;

+ (void)checkArgumentWithBoolean:(jboolean)expression
                          withId:(id)errorMessage;

+ (void)checkArgumentWithBoolean:(jboolean)expression
                    withNSString:(NSString *)errorMessageTemplate
               withNSObjectArray:(IOSObjectArray *)errorMessageArgs;

+ (jint)checkElementIndexWithInt:(jint)index
                         withInt:(jint)size;

+ (jint)checkElementIndexWithInt:(jint)index
                         withInt:(jint)size
                    withNSString:(NSString *)desc;

+ (id)checkNotNullWithId:(id)reference;

+ (id)checkNotNullWithId:(id)reference
                  withId:(id)errorMessage;

+ (id)checkNotNullWithId:(id)reference
            withNSString:(NSString *)errorMessageTemplate
       withNSObjectArray:(IOSObjectArray *)errorMessageArgs;

+ (jint)checkPositionIndexWithInt:(jint)index
                          withInt:(jint)size;

+ (jint)checkPositionIndexWithInt:(jint)index
                          withInt:(jint)size
                     withNSString:(NSString *)desc;

+ (void)checkPositionIndexesWithInt:(jint)start
                            withInt:(jint)end
                            withInt:(jint)size;

+ (void)checkStateWithBoolean:(jboolean)expression;

+ (void)checkStateWithBoolean:(jboolean)expression
                       withId:(id)errorMessage;

+ (void)checkStateWithBoolean:(jboolean)expression
                 withNSString:(NSString *)errorMessageTemplate
            withNSObjectArray:(IOSObjectArray *)errorMessageArgs;

#pragma mark Package-Private

+ (NSString *)formatWithNSString:(NSString *)template_
               withNSObjectArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBasePreconditions)

FOUNDATION_EXPORT void ComGoogleCommonBasePreconditions_checkArgumentWithBoolean_(jboolean expression);

FOUNDATION_EXPORT void ComGoogleCommonBasePreconditions_checkArgumentWithBoolean_withId_(jboolean expression, id errorMessage);

FOUNDATION_EXPORT void ComGoogleCommonBasePreconditions_checkArgumentWithBoolean_withNSString_withNSObjectArray_(jboolean expression, NSString *errorMessageTemplate, IOSObjectArray *errorMessageArgs);

FOUNDATION_EXPORT void ComGoogleCommonBasePreconditions_checkStateWithBoolean_(jboolean expression);

FOUNDATION_EXPORT void ComGoogleCommonBasePreconditions_checkStateWithBoolean_withId_(jboolean expression, id errorMessage);

FOUNDATION_EXPORT void ComGoogleCommonBasePreconditions_checkStateWithBoolean_withNSString_withNSObjectArray_(jboolean expression, NSString *errorMessageTemplate, IOSObjectArray *errorMessageArgs);

FOUNDATION_EXPORT id ComGoogleCommonBasePreconditions_checkNotNullWithId_(id reference);

FOUNDATION_EXPORT id ComGoogleCommonBasePreconditions_checkNotNullWithId_withId_(id reference, id errorMessage);

FOUNDATION_EXPORT id ComGoogleCommonBasePreconditions_checkNotNullWithId_withNSString_withNSObjectArray_(id reference, NSString *errorMessageTemplate, IOSObjectArray *errorMessageArgs);

FOUNDATION_EXPORT jint ComGoogleCommonBasePreconditions_checkElementIndexWithInt_withInt_(jint index, jint size);

FOUNDATION_EXPORT jint ComGoogleCommonBasePreconditions_checkElementIndexWithInt_withInt_withNSString_(jint index, jint size, NSString *desc);

FOUNDATION_EXPORT jint ComGoogleCommonBasePreconditions_checkPositionIndexWithInt_withInt_(jint index, jint size);

FOUNDATION_EXPORT jint ComGoogleCommonBasePreconditions_checkPositionIndexWithInt_withInt_withNSString_(jint index, jint size, NSString *desc);

FOUNDATION_EXPORT void ComGoogleCommonBasePreconditions_checkPositionIndexesWithInt_withInt_withInt_(jint start, jint end, jint size);

FOUNDATION_EXPORT NSString *ComGoogleCommonBasePreconditions_formatWithNSString_withNSObjectArray_(NSString *template_, IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBasePreconditions)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBasePreconditions")
