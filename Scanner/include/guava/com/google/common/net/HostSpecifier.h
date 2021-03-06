//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/net/HostSpecifier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonNetHostSpecifier")
#ifdef RESTRICT_ComGoogleCommonNetHostSpecifier
#define INCLUDE_ALL_ComGoogleCommonNetHostSpecifier 0
#else
#define INCLUDE_ALL_ComGoogleCommonNetHostSpecifier 1
#endif
#undef RESTRICT_ComGoogleCommonNetHostSpecifier

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonNetHostSpecifier_) && (INCLUDE_ALL_ComGoogleCommonNetHostSpecifier || defined(INCLUDE_ComGoogleCommonNetHostSpecifier))
#define ComGoogleCommonNetHostSpecifier_

@interface ComGoogleCommonNetHostSpecifier : NSObject

#pragma mark Public

- (jboolean)isEqual:(id)other;

+ (ComGoogleCommonNetHostSpecifier *)fromWithNSString:(NSString *)specifier;

+ (ComGoogleCommonNetHostSpecifier *)fromValidWithNSString:(NSString *)specifier;

- (NSUInteger)hash;

+ (jboolean)isValidWithNSString:(NSString *)specifier;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonNetHostSpecifier)

FOUNDATION_EXPORT ComGoogleCommonNetHostSpecifier *ComGoogleCommonNetHostSpecifier_fromValidWithNSString_(NSString *specifier);

FOUNDATION_EXPORT ComGoogleCommonNetHostSpecifier *ComGoogleCommonNetHostSpecifier_fromWithNSString_(NSString *specifier);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetHostSpecifier_isValidWithNSString_(NSString *specifier);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonNetHostSpecifier)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonNetHostSpecifier")
