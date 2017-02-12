//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/PublicKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityPublicKey")
#ifdef RESTRICT_JavaSecurityPublicKey
#define INCLUDE_ALL_JavaSecurityPublicKey 0
#else
#define INCLUDE_ALL_JavaSecurityPublicKey 1
#endif
#undef RESTRICT_JavaSecurityPublicKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityPublicKey_) && (INCLUDE_ALL_JavaSecurityPublicKey || defined(INCLUDE_JavaSecurityPublicKey))
#define JavaSecurityPublicKey_

#define RESTRICT_JavaSecurityKey 1
#define INCLUDE_JavaSecurityKey 1
#include "java/security/Key.h"

/*!
 @brief <code>PublicKey</code> is the common interface for public keys.
 - seealso: PrivateKey
 */
@protocol JavaSecurityPublicKey < JavaSecurityKey, JavaObject >

@end

@interface JavaSecurityPublicKey : NSObject

+ (jlong)serialVersionUID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPublicKey)

/*!
 @brief The <code>serialVersionUID</code> to be compatible with JDK1.1.
 */
inline jlong JavaSecurityPublicKey_get_serialVersionUID();
#define JavaSecurityPublicKey_serialVersionUID 7187392471159151072LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityPublicKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPublicKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityPublicKey")
