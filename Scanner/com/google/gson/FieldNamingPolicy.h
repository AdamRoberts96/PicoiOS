//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:gson-2.6.2-sources.jar!com/google/gson/FieldNamingPolicy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleGsonFieldNamingPolicy")
#ifdef RESTRICT_ComGoogleGsonFieldNamingPolicy
#define INCLUDE_ALL_ComGoogleGsonFieldNamingPolicy 0
#else
#define INCLUDE_ALL_ComGoogleGsonFieldNamingPolicy 1
#endif
#undef RESTRICT_ComGoogleGsonFieldNamingPolicy

#if !defined (ComGoogleGsonFieldNamingPolicy_) && (INCLUDE_ALL_ComGoogleGsonFieldNamingPolicy || defined(INCLUDE_ComGoogleGsonFieldNamingPolicy))
#define ComGoogleGsonFieldNamingPolicy_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_ComGoogleGsonFieldNamingStrategy 1
#define INCLUDE_ComGoogleGsonFieldNamingStrategy 1
#include "com/google/gson/FieldNamingStrategy.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleGsonFieldNamingPolicy_Enum) {
  ComGoogleGsonFieldNamingPolicy_Enum_IDENTITY = 0,
  ComGoogleGsonFieldNamingPolicy_Enum_UPPER_CAMEL_CASE = 1,
  ComGoogleGsonFieldNamingPolicy_Enum_UPPER_CAMEL_CASE_WITH_SPACES = 2,
  ComGoogleGsonFieldNamingPolicy_Enum_LOWER_CASE_WITH_UNDERSCORES = 3,
  ComGoogleGsonFieldNamingPolicy_Enum_LOWER_CASE_WITH_DASHES = 4,
};

@interface ComGoogleGsonFieldNamingPolicy : JavaLangEnum < NSCopying, ComGoogleGsonFieldNamingStrategy >

#pragma mark Public

+ (ComGoogleGsonFieldNamingPolicy *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

+ (NSString *)separateCamelCaseWithNSString:(NSString *)name
                               withNSString:(NSString *)separator;

+ (NSString *)upperCaseFirstLetterWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleGsonFieldNamingPolicy)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleGsonFieldNamingPolicy *ComGoogleGsonFieldNamingPolicy_values_[];

inline ComGoogleGsonFieldNamingPolicy *ComGoogleGsonFieldNamingPolicy_get_IDENTITY();
J2OBJC_ENUM_CONSTANT(ComGoogleGsonFieldNamingPolicy, IDENTITY)

inline ComGoogleGsonFieldNamingPolicy *ComGoogleGsonFieldNamingPolicy_get_UPPER_CAMEL_CASE();
J2OBJC_ENUM_CONSTANT(ComGoogleGsonFieldNamingPolicy, UPPER_CAMEL_CASE)

inline ComGoogleGsonFieldNamingPolicy *ComGoogleGsonFieldNamingPolicy_get_UPPER_CAMEL_CASE_WITH_SPACES();
J2OBJC_ENUM_CONSTANT(ComGoogleGsonFieldNamingPolicy, UPPER_CAMEL_CASE_WITH_SPACES)

inline ComGoogleGsonFieldNamingPolicy *ComGoogleGsonFieldNamingPolicy_get_LOWER_CASE_WITH_UNDERSCORES();
J2OBJC_ENUM_CONSTANT(ComGoogleGsonFieldNamingPolicy, LOWER_CASE_WITH_UNDERSCORES)

inline ComGoogleGsonFieldNamingPolicy *ComGoogleGsonFieldNamingPolicy_get_LOWER_CASE_WITH_DASHES();
J2OBJC_ENUM_CONSTANT(ComGoogleGsonFieldNamingPolicy, LOWER_CASE_WITH_DASHES)

FOUNDATION_EXPORT NSString *ComGoogleGsonFieldNamingPolicy_separateCamelCaseWithNSString_withNSString_(NSString *name, NSString *separator);

FOUNDATION_EXPORT NSString *ComGoogleGsonFieldNamingPolicy_upperCaseFirstLetterWithNSString_(NSString *name);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleGsonFieldNamingPolicy_values();

FOUNDATION_EXPORT ComGoogleGsonFieldNamingPolicy *ComGoogleGsonFieldNamingPolicy_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleGsonFieldNamingPolicy *ComGoogleGsonFieldNamingPolicy_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleGsonFieldNamingPolicy)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleGsonFieldNamingPolicy")
