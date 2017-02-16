//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/CookiePolicy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetCookiePolicy")
#ifdef RESTRICT_JavaNetCookiePolicy
#define INCLUDE_ALL_JavaNetCookiePolicy 0
#else
#define INCLUDE_ALL_JavaNetCookiePolicy 1
#endif
#undef RESTRICT_JavaNetCookiePolicy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetCookiePolicy_) && (INCLUDE_ALL_JavaNetCookiePolicy || defined(INCLUDE_JavaNetCookiePolicy))
#define JavaNetCookiePolicy_

@class JavaNetHttpCookie;
@class JavaNetURI;

/*!
 @brief CookiePolicy has three pre-defined policy.
 They are ACCEPT_ALL, ACCEPT_NONE
 and ACCEPT_ORIGINAL_SERVER respectively. They are used to decide which
 cookies should be accepted and which should not be.
 See <a href="http://www.ietf.org/rfc/rfc2965.txt">RFC 2965</a> sections 3.3 and 7 for more detail.
 @since 1.6
 */
@protocol JavaNetCookiePolicy < JavaObject >

/*!
 @brief This method is used to determine whether or not the specified cookie
 should be accepted.
 @param uri
 the URI to used to determine acceptability
 @param cookie
 the HttpCookie to be determined
 @return true if this cookie should be accepted; false otherwise
 */
- (jboolean)shouldAcceptWithJavaNetURI:(JavaNetURI *)uri
                 withJavaNetHttpCookie:(JavaNetHttpCookie *)cookie;

@end

@interface JavaNetCookiePolicy : NSObject

+ (id<JavaNetCookiePolicy>)ACCEPT_ALL;

+ (id<JavaNetCookiePolicy>)ACCEPT_NONE;

+ (id<JavaNetCookiePolicy>)ACCEPT_ORIGINAL_SERVER;

@end

J2OBJC_STATIC_INIT(JavaNetCookiePolicy)

/*!
 @brief A pre-defined policy, accepts all cookies.
 */
inline id<JavaNetCookiePolicy> JavaNetCookiePolicy_get_ACCEPT_ALL();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaNetCookiePolicy> JavaNetCookiePolicy_ACCEPT_ALL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetCookiePolicy, ACCEPT_ALL, id<JavaNetCookiePolicy>)

/*!
 @brief A pre-defined policy, accepts no cookies at all.
 */
inline id<JavaNetCookiePolicy> JavaNetCookiePolicy_get_ACCEPT_NONE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaNetCookiePolicy> JavaNetCookiePolicy_ACCEPT_NONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetCookiePolicy, ACCEPT_NONE, id<JavaNetCookiePolicy>)

/*!
 @brief A pre-defined policy, only accepts cookies from original server.
 */
inline id<JavaNetCookiePolicy> JavaNetCookiePolicy_get_ACCEPT_ORIGINAL_SERVER();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaNetCookiePolicy> JavaNetCookiePolicy_ACCEPT_ORIGINAL_SERVER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetCookiePolicy, ACCEPT_ORIGINAL_SERVER, id<JavaNetCookiePolicy>)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCookiePolicy)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetCookiePolicy")