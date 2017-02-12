//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/Policy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityPolicy")
#ifdef RESTRICT_JavaSecurityPolicy
#define INCLUDE_ALL_JavaSecurityPolicy 0
#else
#define INCLUDE_ALL_JavaSecurityPolicy 1
#endif
#undef RESTRICT_JavaSecurityPolicy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityPolicy_) && (INCLUDE_ALL_JavaSecurityPolicy || defined(INCLUDE_JavaSecurityPolicy))
#define JavaSecurityPolicy_

@class JavaSecurityCodeSource;
@class JavaSecurityPermission;
@class JavaSecurityPermissionCollection;
@class JavaSecurityProtectionDomain;
@class JavaSecurityProvider;
@protocol JavaSecurityPolicy_Parameters;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityPolicy : NSObject

+ (JavaSecurityPermissionCollection *)UNSUPPORTED_EMPTY_COLLECTION;

#pragma mark Public

- (instancetype)init;

+ (JavaSecurityPolicy *)getInstanceWithNSString:(NSString *)type
              withJavaSecurityPolicy_Parameters:(id<JavaSecurityPolicy_Parameters>)params;

+ (JavaSecurityPolicy *)getInstanceWithNSString:(NSString *)type
              withJavaSecurityPolicy_Parameters:(id<JavaSecurityPolicy_Parameters>)params
                       withJavaSecurityProvider:(JavaSecurityProvider *)provider;

+ (JavaSecurityPolicy *)getInstanceWithNSString:(NSString *)type
              withJavaSecurityPolicy_Parameters:(id<JavaSecurityPolicy_Parameters>)params
                                   withNSString:(NSString *)provider;

- (id<JavaSecurityPolicy_Parameters>)getParameters;

- (JavaSecurityPermissionCollection *)getPermissionsWithJavaSecurityCodeSource:(JavaSecurityCodeSource *)cs;

- (JavaSecurityPermissionCollection *)getPermissionsWithJavaSecurityProtectionDomain:(JavaSecurityProtectionDomain *)domain;

+ (JavaSecurityPolicy *)getPolicy;

- (JavaSecurityProvider *)getProvider;

- (NSString *)getType;

- (jboolean)impliesWithJavaSecurityProtectionDomain:(JavaSecurityProtectionDomain *)domain
                         withJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (void)refresh;

+ (void)setPolicyWithJavaSecurityPolicy:(JavaSecurityPolicy *)policy;

@end

J2OBJC_STATIC_INIT(JavaSecurityPolicy)

inline JavaSecurityPermissionCollection *JavaSecurityPolicy_get_UNSUPPORTED_EMPTY_COLLECTION();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecurityPermissionCollection *JavaSecurityPolicy_UNSUPPORTED_EMPTY_COLLECTION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecurityPolicy, UNSUPPORTED_EMPTY_COLLECTION, JavaSecurityPermissionCollection *)

FOUNDATION_EXPORT void JavaSecurityPolicy_init(JavaSecurityPolicy *self);

FOUNDATION_EXPORT JavaSecurityPolicy *JavaSecurityPolicy_getInstanceWithNSString_withJavaSecurityPolicy_Parameters_(NSString *type, id<JavaSecurityPolicy_Parameters> params);

FOUNDATION_EXPORT JavaSecurityPolicy *JavaSecurityPolicy_getInstanceWithNSString_withJavaSecurityPolicy_Parameters_withNSString_(NSString *type, id<JavaSecurityPolicy_Parameters> params, NSString *provider);

FOUNDATION_EXPORT JavaSecurityPolicy *JavaSecurityPolicy_getInstanceWithNSString_withJavaSecurityPolicy_Parameters_withJavaSecurityProvider_(NSString *type, id<JavaSecurityPolicy_Parameters> params, JavaSecurityProvider *provider);

FOUNDATION_EXPORT JavaSecurityPolicy *JavaSecurityPolicy_getPolicy();

FOUNDATION_EXPORT void JavaSecurityPolicy_setPolicyWithJavaSecurityPolicy_(JavaSecurityPolicy *policy);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPolicy)

#endif

#if !defined (JavaSecurityPolicy_Parameters_) && (INCLUDE_ALL_JavaSecurityPolicy || defined(INCLUDE_JavaSecurityPolicy_Parameters))
#define JavaSecurityPolicy_Parameters_

/*!
 @brief Legacy security code; do not use.
 */
@protocol JavaSecurityPolicy_Parameters < JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPolicy_Parameters)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPolicy_Parameters)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityPolicy")
