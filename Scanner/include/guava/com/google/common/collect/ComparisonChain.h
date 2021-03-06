//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ComparisonChain.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectComparisonChain")
#ifdef RESTRICT_ComGoogleCommonCollectComparisonChain
#define INCLUDE_ALL_ComGoogleCommonCollectComparisonChain 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectComparisonChain 1
#endif
#undef RESTRICT_ComGoogleCommonCollectComparisonChain

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectComparisonChain_) && (INCLUDE_ALL_ComGoogleCommonCollectComparisonChain || defined(INCLUDE_ComGoogleCommonCollectComparisonChain))
#define ComGoogleCommonCollectComparisonChain_

@class JavaLangBoolean;
@protocol JavaLangComparable;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectComparisonChain : NSObject

#pragma mark Public

- (ComGoogleCommonCollectComparisonChain *)compareWithJavaLangBoolean:(JavaLangBoolean *)left
                                                  withJavaLangBoolean:(JavaLangBoolean *)right;

- (ComGoogleCommonCollectComparisonChain *)compareWithJavaLangComparable:(id<JavaLangComparable>)left
                                                  withJavaLangComparable:(id<JavaLangComparable>)right;

- (ComGoogleCommonCollectComparisonChain *)compareWithDouble:(jdouble)left
                                                  withDouble:(jdouble)right;

- (ComGoogleCommonCollectComparisonChain *)compareWithFloat:(jfloat)left
                                                  withFloat:(jfloat)right;

- (ComGoogleCommonCollectComparisonChain *)compareWithInt:(jint)left
                                                  withInt:(jint)right;

- (ComGoogleCommonCollectComparisonChain *)compareWithLong:(jlong)left
                                                  withLong:(jlong)right;

- (ComGoogleCommonCollectComparisonChain *)compareWithId:(id)left
                                                  withId:(id)right
                                  withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectComparisonChain *)compareFalseFirstWithBoolean:(jboolean)left
                                                            withBoolean:(jboolean)right;

- (ComGoogleCommonCollectComparisonChain *)compareTrueFirstWithBoolean:(jboolean)left
                                                           withBoolean:(jboolean)right;

- (jint)result;

+ (ComGoogleCommonCollectComparisonChain *)start;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectComparisonChain)

FOUNDATION_EXPORT ComGoogleCommonCollectComparisonChain *ComGoogleCommonCollectComparisonChain_start();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectComparisonChain)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectComparisonChain")
