//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/PatternFilenameFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoPatternFilenameFilter")
#ifdef RESTRICT_ComGoogleCommonIoPatternFilenameFilter
#define INCLUDE_ALL_ComGoogleCommonIoPatternFilenameFilter 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoPatternFilenameFilter 1
#endif
#undef RESTRICT_ComGoogleCommonIoPatternFilenameFilter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoPatternFilenameFilter_) && (INCLUDE_ALL_ComGoogleCommonIoPatternFilenameFilter || defined(INCLUDE_ComGoogleCommonIoPatternFilenameFilter))
#define ComGoogleCommonIoPatternFilenameFilter_

#define RESTRICT_JavaIoFilenameFilter 1
#define INCLUDE_JavaIoFilenameFilter 1
#include "java/io/FilenameFilter.h"

@class JavaIoFile;
@class JavaUtilRegexPattern;

@interface ComGoogleCommonIoPatternFilenameFilter : NSObject < JavaIoFilenameFilter >

#pragma mark Public

- (instancetype)initWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (instancetype)initWithNSString:(NSString *)patternStr;

- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)dir
                    withNSString:(NSString *)fileName;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoPatternFilenameFilter)

FOUNDATION_EXPORT void ComGoogleCommonIoPatternFilenameFilter_initWithNSString_(ComGoogleCommonIoPatternFilenameFilter *self, NSString *patternStr);

FOUNDATION_EXPORT ComGoogleCommonIoPatternFilenameFilter *new_ComGoogleCommonIoPatternFilenameFilter_initWithNSString_(NSString *patternStr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoPatternFilenameFilter *create_ComGoogleCommonIoPatternFilenameFilter_initWithNSString_(NSString *patternStr);

FOUNDATION_EXPORT void ComGoogleCommonIoPatternFilenameFilter_initWithJavaUtilRegexPattern_(ComGoogleCommonIoPatternFilenameFilter *self, JavaUtilRegexPattern *pattern);

FOUNDATION_EXPORT ComGoogleCommonIoPatternFilenameFilter *new_ComGoogleCommonIoPatternFilenameFilter_initWithJavaUtilRegexPattern_(JavaUtilRegexPattern *pattern) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoPatternFilenameFilter *create_ComGoogleCommonIoPatternFilenameFilter_initWithJavaUtilRegexPattern_(JavaUtilRegexPattern *pattern);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoPatternFilenameFilter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoPatternFilenameFilter")
