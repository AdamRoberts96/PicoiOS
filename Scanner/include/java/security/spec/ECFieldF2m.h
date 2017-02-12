//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/ECFieldF2m.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecECFieldF2m")
#ifdef RESTRICT_JavaSecuritySpecECFieldF2m
#define INCLUDE_ALL_JavaSecuritySpecECFieldF2m 0
#else
#define INCLUDE_ALL_JavaSecuritySpecECFieldF2m 1
#endif
#undef RESTRICT_JavaSecuritySpecECFieldF2m

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySpecECFieldF2m_) && (INCLUDE_ALL_JavaSecuritySpecECFieldF2m || defined(INCLUDE_JavaSecuritySpecECFieldF2m))
#define JavaSecuritySpecECFieldF2m_

#define RESTRICT_JavaSecuritySpecECField 1
#define INCLUDE_JavaSecuritySpecECField 1
#include "java/security/spec/ECField.h"

@class IOSIntArray;
@class JavaMathBigInteger;

/*!
 @brief The parameters specifying a <i>characteristic 2 finite field</i> of an
 elliptic curve.
 */
@interface JavaSecuritySpecECFieldF2m : NSObject < JavaSecuritySpecECField >

#pragma mark Public

/*!
 @brief Creates a new <code>ECFieldF2m</code> with <code>2^m</code> elements with a normal
 basis.
 @param m
 the exponent <code>m</code> for the number of elements.
 @throws IllegalArgumentException
 if <code>m <= zero</code>.
 */
- (instancetype)initWithInt:(jint)m;

/*!
 @brief Creates a new <code>ECFieldF2m</code> with <code>2^m</code> elements with a polynomial
 basis and the reduction polynomial based on <code>rp</code>.
 <p>
 The reduction polynomial must be either <i>trinomial</i> or
 <i>pentanomial</i>.
 @param m
 the exponent <code>m</code> for the number of elements.
 @param rp
 the base of the reduction polynomial with the n-th bit
 corresponding to the n-th coefficient of the reduction
 polynomial.
 @throws IllegalArgumentException
 if <code>m <= zero</code> or the <code>rp</code> is invalid.
 */
- (instancetype)initWithInt:(jint)m
     withJavaMathBigInteger:(JavaMathBigInteger *)rp;

/*!
 @brief Creates a new <code>ECFieldF2m</code> with <code>2^m</code> elements with
 a polynomial basis and the reduction polynomial based on <code>ks</code>.
 <p>
 The reduction polynomial must be either <i>trinomial</i> or
 <i>pentanomial</i>.
 @param m
 the exponent <code>m</code> for the number of elements.
 @param ks
 the base of the reduction polynomial with coefficients
 given in descending order.
 @throws IllegalArgumentException
 if <code>m <= zero</code> or the reduction polynomial is not
 valid.
 */
- (instancetype)initWithInt:(jint)m
               withIntArray:(IOSIntArray *)ks;

/*!
 @brief Returns whether the specified object equals to this finite field.
 @param obj
 the object to compare to this finite field.
 @return <code>true</code> if the specified object is equal to this finite field,
 otherwise <code>false</code>.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the size of this finite field (in bits).
 @return the size of this finite field (in bits).
 */
- (jint)getFieldSize;

/*!
 @brief Returns the exponent <code>m</code> for this finite field, with <code>2^m</code> as
 the number of elements.
 @return the exponent <code>m</code> for this finite field
 */
- (jint)getM;

/*!
 @brief Returns a copy of the integer array containing the order of the middle
 term(s) of the reduction polynomial for a polynomial basis.
 @return a copy of the integer array containing the order of the middle
 term(s) of the reduction polynomial for a polynomial basis or
 <code>null</code> for a normal basis.
 */
- (IOSIntArray *)getMidTermsOfReductionPolynomial;

/*!
 @brief Returns the base of the reduction polynomial with the n-th bit
 corresponding to the n-th coefficient of the reduction polynomial for a
 polynomial basis.
 @return the base of the reduction polynomial with the n-th bit
 corresponding to the n-th coefficient of the reduction polynomial
 for a polynomial basis or <code>null</code> for a normal basis.
 */
- (JavaMathBigInteger *)getReductionPolynomial;

/*!
 @brief Returns the hashcode value for this finite field.
 @return the hashcode value for this finite field.
 */
- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecECFieldF2m)

FOUNDATION_EXPORT void JavaSecuritySpecECFieldF2m_initWithInt_(JavaSecuritySpecECFieldF2m *self, jint m);

FOUNDATION_EXPORT JavaSecuritySpecECFieldF2m *new_JavaSecuritySpecECFieldF2m_initWithInt_(jint m) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecECFieldF2m *create_JavaSecuritySpecECFieldF2m_initWithInt_(jint m);

FOUNDATION_EXPORT void JavaSecuritySpecECFieldF2m_initWithInt_withJavaMathBigInteger_(JavaSecuritySpecECFieldF2m *self, jint m, JavaMathBigInteger *rp);

FOUNDATION_EXPORT JavaSecuritySpecECFieldF2m *new_JavaSecuritySpecECFieldF2m_initWithInt_withJavaMathBigInteger_(jint m, JavaMathBigInteger *rp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecECFieldF2m *create_JavaSecuritySpecECFieldF2m_initWithInt_withJavaMathBigInteger_(jint m, JavaMathBigInteger *rp);

FOUNDATION_EXPORT void JavaSecuritySpecECFieldF2m_initWithInt_withIntArray_(JavaSecuritySpecECFieldF2m *self, jint m, IOSIntArray *ks);

FOUNDATION_EXPORT JavaSecuritySpecECFieldF2m *new_JavaSecuritySpecECFieldF2m_initWithInt_withIntArray_(jint m, IOSIntArray *ks) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecECFieldF2m *create_JavaSecuritySpecECFieldF2m_initWithInt_withIntArray_(jint m, IOSIntArray *ks);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECFieldF2m)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecECFieldF2m")
