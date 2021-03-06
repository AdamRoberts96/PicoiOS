//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/CharSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoCharSource")
#ifdef RESTRICT_ComGoogleCommonIoCharSource
#define INCLUDE_ALL_ComGoogleCommonIoCharSource 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoCharSource 1
#endif
#undef RESTRICT_ComGoogleCommonIoCharSource

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoCharSource_) && (INCLUDE_ALL_ComGoogleCommonIoCharSource || defined(INCLUDE_ComGoogleCommonIoCharSource))
#define ComGoogleCommonIoCharSource_

@class ComGoogleCommonBaseOptional;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonIoCharSink;
@class IOSObjectArray;
@class JavaIoBufferedReader;
@class JavaIoReader;
@protocol ComGoogleCommonIoLineProcessor;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonIoCharSource : NSObject

#pragma mark Public

+ (ComGoogleCommonIoCharSource *)concatWithComGoogleCommonIoCharSourceArray:(IOSObjectArray *)sources;

+ (ComGoogleCommonIoCharSource *)concatWithJavaLangIterable:(id<JavaLangIterable>)sources;

+ (ComGoogleCommonIoCharSource *)concatWithJavaUtilIterator:(id<JavaUtilIterator>)sources;

- (jlong)copyToWithJavaLangAppendable:(id<JavaLangAppendable>)appendable OBJC_METHOD_FAMILY_NONE;

- (jlong)copyToWithComGoogleCommonIoCharSink:(ComGoogleCommonIoCharSink *)sink OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonIoCharSource *)empty;

- (jboolean)isEmpty;

- (jlong)length;

- (ComGoogleCommonBaseOptional *)lengthIfKnown;

- (JavaIoBufferedReader *)openBufferedStream;

- (JavaIoReader *)openStream;

- (NSString *)read;

- (NSString *)readFirstLine;

- (ComGoogleCommonCollectImmutableList *)readLines;

- (id)readLinesWithComGoogleCommonIoLineProcessor:(id<ComGoogleCommonIoLineProcessor>)processor;

+ (ComGoogleCommonIoCharSource *)wrapWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCharSource)

FOUNDATION_EXPORT void ComGoogleCommonIoCharSource_init(ComGoogleCommonIoCharSource *self);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharSource_concatWithJavaLangIterable_(id<JavaLangIterable> sources);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharSource_concatWithJavaUtilIterator_(id<JavaUtilIterator> sources);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharSource_concatWithComGoogleCommonIoCharSourceArray_(IOSObjectArray *sources);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharSource_wrapWithJavaLangCharSequence_(id<JavaLangCharSequence> charSequence);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharSource_empty();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCharSource)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoCharSource")
