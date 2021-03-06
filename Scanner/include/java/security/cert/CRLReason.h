//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CRLReason.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCRLReason")
#ifdef RESTRICT_JavaSecurityCertCRLReason
#define INCLUDE_ALL_JavaSecurityCertCRLReason 0
#else
#define INCLUDE_ALL_JavaSecurityCertCRLReason 1
#endif
#undef RESTRICT_JavaSecurityCertCRLReason

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertCRLReason_) && (INCLUDE_ALL_JavaSecurityCertCRLReason || defined(INCLUDE_JavaSecurityCertCRLReason))
#define JavaSecurityCertCRLReason_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaSecurityCertCRLReason_Enum) {
  JavaSecurityCertCRLReason_Enum_UNSPECIFIED = 0,
  JavaSecurityCertCRLReason_Enum_KEY_COMPROMISE = 1,
  JavaSecurityCertCRLReason_Enum_CA_COMPROMISE = 2,
  JavaSecurityCertCRLReason_Enum_AFFILIATION_CHANGED = 3,
  JavaSecurityCertCRLReason_Enum_SUPERSEDED = 4,
  JavaSecurityCertCRLReason_Enum_CESSATION_OF_OPERATION = 5,
  JavaSecurityCertCRLReason_Enum_CERTIFICATE_HOLD = 6,
  JavaSecurityCertCRLReason_Enum_UNUSED = 7,
  JavaSecurityCertCRLReason_Enum_REMOVE_FROM_CRL = 8,
  JavaSecurityCertCRLReason_Enum_PRIVILEGE_WITHDRAWN = 9,
  JavaSecurityCertCRLReason_Enum_AA_COMPROMISE = 10,
};

/*!
 @brief The reason a CRL entry was revoked.
 See <a
 href="http://www.ietf.org/rfc/rfc3280.txt">RFC 3280</a> for more information.
 @since 1.7
 */
@interface JavaSecurityCertCRLReason : JavaLangEnum < NSCopying, JavaLangComparable, JavaIoSerializable >

+ (JavaSecurityCertCRLReason * __nonnull)UNSPECIFIED;

+ (JavaSecurityCertCRLReason * __nonnull)KEY_COMPROMISE;

+ (JavaSecurityCertCRLReason * __nonnull)CA_COMPROMISE;

+ (JavaSecurityCertCRLReason * __nonnull)AFFILIATION_CHANGED;

+ (JavaSecurityCertCRLReason * __nonnull)SUPERSEDED;

+ (JavaSecurityCertCRLReason * __nonnull)CESSATION_OF_OPERATION;

+ (JavaSecurityCertCRLReason * __nonnull)CERTIFICATE_HOLD;

+ (JavaSecurityCertCRLReason * __nonnull)UNUSED;

+ (JavaSecurityCertCRLReason * __nonnull)REMOVE_FROM_CRL;

+ (JavaSecurityCertCRLReason * __nonnull)PRIVILEGE_WITHDRAWN;

+ (JavaSecurityCertCRLReason * __nonnull)AA_COMPROMISE;

#pragma mark Public

+ (JavaSecurityCertCRLReason *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;
- (JavaSecurityCertCRLReason_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaSecurityCertCRLReason)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_values_[];

inline JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_get_UNSPECIFIED();
J2OBJC_ENUM_CONSTANT(JavaSecurityCertCRLReason, UNSPECIFIED)

inline JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_get_KEY_COMPROMISE();
J2OBJC_ENUM_CONSTANT(JavaSecurityCertCRLReason, KEY_COMPROMISE)

inline JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_get_CA_COMPROMISE();
J2OBJC_ENUM_CONSTANT(JavaSecurityCertCRLReason, CA_COMPROMISE)

inline JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_get_AFFILIATION_CHANGED();
J2OBJC_ENUM_CONSTANT(JavaSecurityCertCRLReason, AFFILIATION_CHANGED)

inline JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_get_SUPERSEDED();
J2OBJC_ENUM_CONSTANT(JavaSecurityCertCRLReason, SUPERSEDED)

inline JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_get_CESSATION_OF_OPERATION();
J2OBJC_ENUM_CONSTANT(JavaSecurityCertCRLReason, CESSATION_OF_OPERATION)

inline JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_get_CERTIFICATE_HOLD();
J2OBJC_ENUM_CONSTANT(JavaSecurityCertCRLReason, CERTIFICATE_HOLD)

inline JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_get_UNUSED();
J2OBJC_ENUM_CONSTANT(JavaSecurityCertCRLReason, UNUSED)

inline JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_get_REMOVE_FROM_CRL();
J2OBJC_ENUM_CONSTANT(JavaSecurityCertCRLReason, REMOVE_FROM_CRL)

inline JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_get_PRIVILEGE_WITHDRAWN();
J2OBJC_ENUM_CONSTANT(JavaSecurityCertCRLReason, PRIVILEGE_WITHDRAWN)

inline JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_get_AA_COMPROMISE();
J2OBJC_ENUM_CONSTANT(JavaSecurityCertCRLReason, AA_COMPROMISE)

FOUNDATION_EXPORT IOSObjectArray *JavaSecurityCertCRLReason_values();

FOUNDATION_EXPORT JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaSecurityCertCRLReason *JavaSecurityCertCRLReason_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCRLReason)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCRLReason")
