//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/math/DoubleUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathDoubleUtils")
#ifdef RESTRICT_ComGoogleCommonMathDoubleUtils
#define INCLUDE_ALL_ComGoogleCommonMathDoubleUtils 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathDoubleUtils 1
#endif
#undef RESTRICT_ComGoogleCommonMathDoubleUtils

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathDoubleUtils_) && (INCLUDE_ALL_ComGoogleCommonMathDoubleUtils || defined(INCLUDE_ComGoogleCommonMathDoubleUtils))
#define ComGoogleCommonMathDoubleUtils_

@class JavaMathBigInteger;

@interface ComGoogleCommonMathDoubleUtils : NSObject

#pragma mark Package-Private

+ (jdouble)bigToDoubleWithJavaMathBigInteger:(JavaMathBigInteger *)x;

+ (jdouble)ensureNonNegativeWithDouble:(jdouble)value;

+ (jlong)getSignificandWithDouble:(jdouble)d;

+ (jboolean)isFiniteWithDouble:(jdouble)d;

+ (jboolean)isNormalWithDouble:(jdouble)d;

+ (jdouble)nextDownWithDouble:(jdouble)d;

+ (jdouble)scaleNormalizeWithDouble:(jdouble)x;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonMathDoubleUtils)

inline jlong ComGoogleCommonMathDoubleUtils_get_SIGNIFICAND_MASK();
#define ComGoogleCommonMathDoubleUtils_SIGNIFICAND_MASK 4503599627370495LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, SIGNIFICAND_MASK, jlong)

inline jlong ComGoogleCommonMathDoubleUtils_get_EXPONENT_MASK();
#define ComGoogleCommonMathDoubleUtils_EXPONENT_MASK 9218868437227405312LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, EXPONENT_MASK, jlong)

inline jlong ComGoogleCommonMathDoubleUtils_get_SIGN_MASK();
#define ComGoogleCommonMathDoubleUtils_SIGN_MASK ((jlong) 0x8000000000000000LL)
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, SIGN_MASK, jlong)

inline jint ComGoogleCommonMathDoubleUtils_get_SIGNIFICAND_BITS();
#define ComGoogleCommonMathDoubleUtils_SIGNIFICAND_BITS 52
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, SIGNIFICAND_BITS, jint)

inline jint ComGoogleCommonMathDoubleUtils_get_EXPONENT_BIAS();
#define ComGoogleCommonMathDoubleUtils_EXPONENT_BIAS 1023
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, EXPONENT_BIAS, jint)

inline jlong ComGoogleCommonMathDoubleUtils_get_IMPLICIT_BIT();
#define ComGoogleCommonMathDoubleUtils_IMPLICIT_BIT 4503599627370496LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, IMPLICIT_BIT, jlong)

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleUtils_nextDownWithDouble_(jdouble d);

FOUNDATION_EXPORT jlong ComGoogleCommonMathDoubleUtils_getSignificandWithDouble_(jdouble d);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathDoubleUtils_isFiniteWithDouble_(jdouble d);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathDoubleUtils_isNormalWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleUtils_scaleNormalizeWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleUtils_bigToDoubleWithJavaMathBigInteger_(JavaMathBigInteger *x);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleUtils_ensureNonNegativeWithDouble_(jdouble value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathDoubleUtils)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathDoubleUtils")
