//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertPathParameters.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertPathParameters")
#ifdef RESTRICT_JavaSecurityCertCertPathParameters
#define INCLUDE_ALL_JavaSecurityCertCertPathParameters 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertPathParameters 1
#endif
#undef RESTRICT_JavaSecurityCertCertPathParameters

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertCertPathParameters_) && (INCLUDE_ALL_JavaSecurityCertCertPathParameters || defined(INCLUDE_JavaSecurityCertCertPathParameters))
#define JavaSecurityCertCertPathParameters_

/*!
 @brief The interface specification for certification path algorithm parameters.
 <p>
 This interface is for grouping purposes of <code>CertPath</code> parameter
 implementations.
 */
@protocol JavaSecurityCertCertPathParameters < NSCopying, JavaObject >

/*!
 @brief Clones this <code>CertPathParameters</code> instance.
 @return the cloned instance.
 */
- (id)java_clone;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertPathParameters)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertPathParameters)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertPathParameters")