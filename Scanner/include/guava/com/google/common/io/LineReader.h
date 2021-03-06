//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/LineReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoLineReader")
#ifdef RESTRICT_ComGoogleCommonIoLineReader
#define INCLUDE_ALL_ComGoogleCommonIoLineReader 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoLineReader 1
#endif
#undef RESTRICT_ComGoogleCommonIoLineReader

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoLineReader_) && (INCLUDE_ALL_ComGoogleCommonIoLineReader || defined(INCLUDE_ComGoogleCommonIoLineReader))
#define ComGoogleCommonIoLineReader_

@protocol JavaLangReadable;

@interface ComGoogleCommonIoLineReader : NSObject

#pragma mark Public

- (instancetype)initWithJavaLangReadable:(id<JavaLangReadable>)readable;

- (NSString *)readLine;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoLineReader)

FOUNDATION_EXPORT void ComGoogleCommonIoLineReader_initWithJavaLangReadable_(ComGoogleCommonIoLineReader *self, id<JavaLangReadable> readable);

FOUNDATION_EXPORT ComGoogleCommonIoLineReader *new_ComGoogleCommonIoLineReader_initWithJavaLangReadable_(id<JavaLangReadable> readable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoLineReader *create_ComGoogleCommonIoLineReader_initWithJavaLangReadable_(id<JavaLangReadable> readable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoLineReader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoLineReader")
