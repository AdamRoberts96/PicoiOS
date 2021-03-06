//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/primitives/UnsignedInteger.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedInteger")
#ifdef RESTRICT_ComGoogleCommonPrimitivesUnsignedInteger
#define INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedInteger 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedInteger 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesUnsignedInteger

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesUnsignedInteger_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedInteger || defined(INCLUDE_ComGoogleCommonPrimitivesUnsignedInteger))
#define ComGoogleCommonPrimitivesUnsignedInteger_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class JavaMathBigInteger;

@interface ComGoogleCommonPrimitivesUnsignedInteger : NSNumber < JavaLangComparable >

#pragma mark Public

- (JavaMathBigInteger *)bigIntegerValue;

- (jint)compareToWithId:(ComGoogleCommonPrimitivesUnsignedInteger *)other;

- (ComGoogleCommonPrimitivesUnsignedInteger *)dividedByWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (jdouble)doubleValue;

- (jboolean)isEqual:(id)obj;

- (jfloat)floatValue;

+ (ComGoogleCommonPrimitivesUnsignedInteger *)fromIntBitsWithInt:(jint)bits;

- (NSUInteger)hash;

- (jint)intValue;

- (jlong)longLongValue;

- (ComGoogleCommonPrimitivesUnsignedInteger *)minusWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (ComGoogleCommonPrimitivesUnsignedInteger *)modWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (ComGoogleCommonPrimitivesUnsignedInteger *)plusWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (ComGoogleCommonPrimitivesUnsignedInteger *)timesWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (NSString *)description;

- (NSString *)toStringWithInt:(jint)radix;

+ (ComGoogleCommonPrimitivesUnsignedInteger *)valueOfWithJavaMathBigInteger:(JavaMathBigInteger *)value;

+ (ComGoogleCommonPrimitivesUnsignedInteger *)valueOfWithLong:(jlong)value;

+ (ComGoogleCommonPrimitivesUnsignedInteger *)valueOfWithNSString:(NSString *)string;

+ (ComGoogleCommonPrimitivesUnsignedInteger *)valueOfWithNSString:(NSString *)string
                                                          withInt:(jint)radix;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedInteger)

inline ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_get_ZERO();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_ZERO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonPrimitivesUnsignedInteger, ZERO, ComGoogleCommonPrimitivesUnsignedInteger *)

inline ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_get_ONE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_ONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonPrimitivesUnsignedInteger, ONE, ComGoogleCommonPrimitivesUnsignedInteger *)

inline ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_get_MAX_VALUE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_MAX_VALUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonPrimitivesUnsignedInteger, MAX_VALUE, ComGoogleCommonPrimitivesUnsignedInteger *)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_fromIntBitsWithInt_(jint bits);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_valueOfWithLong_(jlong value);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_valueOfWithJavaMathBigInteger_(JavaMathBigInteger *value);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_valueOfWithNSString_(NSString *string);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_valueOfWithNSString_withInt_(NSString *string, jint radix);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedInteger)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedInteger")
