//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/HttpCookie.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetHttpCookie")
#ifdef RESTRICT_JavaNetHttpCookie
#define INCLUDE_ALL_JavaNetHttpCookie 0
#else
#define INCLUDE_ALL_JavaNetHttpCookie 1
#endif
#undef RESTRICT_JavaNetHttpCookie

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetHttpCookie_) && (INCLUDE_ALL_JavaNetHttpCookie || defined(INCLUDE_JavaNetHttpCookie))
#define JavaNetHttpCookie_

@class JavaNetURI;
@protocol JavaUtilList;

/*!
 @brief An opaque key-value value pair held by an HTTP client to permit a stateful
 session with an HTTP server.
 This class parses cookie headers for all three
 commonly used HTTP cookie specifications:
 <ul>
 <li>The Netscape cookie spec is officially obsolete but widely used in
 practice. Each cookie contains one key-value pair and the following
 attributes: <code>Domain</code>, <code>Expires</code>, <code>Path</code>, and
 <code>Secure</code>. The <code>version</code> of cookies in this
 format is <code>0</code>.
 <p>There are no accessors for the <code>Expires</code> attribute. When
 parsed, expires attributes are assigned to the <code>Max-Age</code>
  attribute as an offset from <code>now</code>
 .
 <li><a href="http://www.ietf.org/rfc/rfc2109.txt">RFC 2109</a> formalizes
 the Netscape cookie spec. It replaces the <code>Expires</code> timestamp
 with a <code>Max-Age</code> duration and adds <code>Comment</code> and <code>Version</code>
  attributes. The <code>version</code> of cookies in
 this format is <code>1</code>.
 <li><a href="http://www.ietf.org/rfc/rfc2965.txt">RFC 2965</a> refines
 RFC 2109. It adds <code>Discard</code>, <code>Port</code>, and <code>CommentURL</code>
  attributes and renames the header from <code>Set-Cookie</code>
 to <code>Set-Cookie2</code>. The <code>version</code> of cookies
 in this format is <code>1</code>.
 </ul>
 <p>Support for the "HttpOnly" attribute specified in
 <a href="http://tools.ietf.org/html/rfc6265">RFC 6265</a> is also included. RFC 6265 is intended
 to obsolete RFC 2965. Support for features from RFC 2965 that have been deprecated by RFC 6265
 such as Cookie2, Set-Cookie2 headers and version information remain supported by this class.
 <p>This implementation silently discards unrecognized attributes.
 @since 1.6
 */
@interface JavaNetHttpCookie : NSObject < NSCopying >

#pragma mark Public

/*!
 @brief Creates a new cookie.
 @param name a non-empty string that contains only printable ASCII, no
 commas or semicolons, and is not prefixed with  <code>$</code>. May not be
 an HTTP attribute name.
 @param value an opaque value from the HTTP server.
 @throws IllegalArgumentException if <code>name</code> is invalid.
 */
- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)value;

- (id)java_clone;

/*!
 @brief Returns true if <code>host</code> matches the domain pattern <code>domain</code>.
 @param domainPattern a host name (like <code>android.com</code> or <code>localhost</code>
 ), or a pattern to match subdomains of a domain name (like
 <code>.android.com</code>). A special case pattern is <code>.local</code>,
 which matches all hosts without a TLD (like <code>localhost</code>).
 @param host the host name or IP address from an HTTP request.
 */
+ (jboolean)domainMatchesWithNSString:(NSString *)domainPattern
                         withNSString:(NSString *)host;

/*!
 @brief Returns true if <code>object</code> is a cookie with the same domain, name and
 path.
 Domain and name use case-insensitive comparison; path uses a
 case-sensitive comparison.
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns the <code>Comment</code> attribute.
 */
- (NSString *)getComment;

/*!
 @brief Returns the value of <code>CommentURL</code> attribute.
 */
- (NSString *)getCommentURL;

/*!
 @brief Returns the <code>Discard</code> attribute.
 */
- (jboolean)getDiscard;

/*!
 @brief Returns the <code>Domain</code> attribute.
 */
- (NSString *)getDomain;

/*!
 @brief Returns the <code>Max-Age</code> attribute, in delta-seconds.
 */
- (jlong)getMaxAge;

/*!
 @brief Returns the name of this cookie.
 */
- (NSString *)getName;

/*!
 @brief Returns the <code>Path</code> attribute.
 This cookie is visible to all
 subpaths.
 */
- (NSString *)getPath;

/*!
 @brief Returns the <code>Port</code> attribute, usually containing comma-separated
 port numbers.
 A null port indicates that the cookie may be sent to any
 port. The empty string indicates that the cookie should only be sent to
 the port of the originating request.
 */
- (NSString *)getPortlist;

/*!
 @brief Returns the <code>Secure</code> attribute.
 */
- (jboolean)getSecure;

/*!
 @brief Returns the value of this cookie.
 */
- (NSString *)getValue;

/*!
 @brief Returns the version of this cookie.
 */
- (jint)getVersion;

/*!
 @brief Returns true if this cookie's Max-Age is 0.
 */
- (jboolean)hasExpired;

/*!
 @brief Returns the hash code of this HTTP cookie: 
@code
     name.toLowerCase(Locale.US).hashCode()
       + (domain == null ?
 0 : domain.toLowerCase(Locale.US).hashCode())
       + (path == null ? 0 : path.hashCode())
 
@endcode
 */
- (NSUInteger)hash;

/*!
 @brief Constructs a cookie from a string.
 The string should comply with
 set-cookie or set-cookie2 header format as specified in
 <a href="http://www.ietf.org/rfc/rfc2965.txt">RFC 2965</a>. Since
 set-cookies2 syntax allows more than one cookie definitions in one
 header, the returned object is a list.
 @param header
 a set-cookie or set-cookie2 header.
 @return a list of constructed cookies
 @throws IllegalArgumentException
 if the string does not comply with cookie specification, or
 the cookie name contains illegal characters, or reserved
 tokens of cookie specification appears
 @throws NullPointerException
 if header is null
 */
+ (id<JavaUtilList>)parseWithNSString:(NSString *)header;

/*!
 @brief Set the <code>Comment</code> attribute of this cookie.
 */
- (void)setCommentWithNSString:(NSString *)comment;

/*!
 @brief Set the <code>CommentURL</code> attribute of this cookie.
 */
- (void)setCommentURLWithNSString:(NSString *)commentURL;

/*!
 @brief Set the <code>Discard</code> attribute of this cookie.
 */
- (void)setDiscardWithBoolean:(jboolean)discard;

/*!
 @brief Set the <code>Domain</code> attribute of this cookie.
 HTTP clients send
 cookies only to matching domains.
 */
- (void)setDomainWithNSString:(NSString *)pattern;

/*!
 @brief Sets the <code>Max-Age</code> attribute of this cookie.
 */
- (void)setMaxAgeWithLong:(jlong)deltaSeconds;

/*!
 @brief Set the <code>Path</code> attribute of this cookie.
 HTTP clients send cookies
 to this path and its subpaths.
 */
- (void)setPathWithNSString:(NSString *)path;

/*!
 @brief Set the <code>Port</code> attribute of this cookie.
 */
- (void)setPortlistWithNSString:(NSString *)portList;

/*!
 @brief Sets the <code>Secure</code> attribute of this cookie.
 */
- (void)setSecureWithBoolean:(jboolean)secure;

/*!
 @brief Sets the opaque value of this cookie.
 */
- (void)setValueWithNSString:(NSString *)value;

/*!
 @brief Sets the <code>Version</code> attribute of the cookie.
 @throws IllegalArgumentException if v is neither 0 nor 1
 */
- (void)setVersionWithInt:(jint)newVersion;

/*!
 @brief Returns a string representing this cookie in the format used by the
 <code>Cookie</code> header line in an HTTP request as specified by RFC 2965 section 3.3.4.
 <p>The resulting string does not include a "Cookie:" prefix or any version information.
 The returned <code>String</code> is not suitable for passing to <code>parse(String)</code>: Several of
 the attributes that would be needed to preserve all of the cookie's information are omitted.
 The String is formatted for an HTTP request not an HTTP response.
 <p>The attributes included and the format depends on the cookie's <code>version</code>:
 <ul>
 <li>Version 0: Includes only the name and value. Conforms to RFC 2965 (for
 version 0 cookies). This should also be used to conform with RFC 6265.
 </li>
 <li>Version 1: Includes the name and value, and Path, Domain and Port attributes.
 Conforms to RFC 2965 (for version 1 cookies).</li>
 </ul>
 */
- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Returns true if <code>cookie</code> should be sent to or accepted from <code>uri</code> with respect
 to the cookie's path.
 Cookies match by directory prefix: URI "/foo" matches cookies "/foo",
 "/foo/" and "/foo/bar", but not "/" or "/foobar".
 */
+ (jboolean)pathMatchesWithJavaNetHttpCookie:(JavaNetHttpCookie *)cookie
                              withJavaNetURI:(JavaNetURI *)uri;

/*!
 @brief Returns true if <code>cookie</code> should be sent to <code>uri</code> with respect to the cookie's
 port list.
 */
+ (jboolean)portMatchesWithJavaNetHttpCookie:(JavaNetHttpCookie *)cookie
                              withJavaNetURI:(JavaNetURI *)uri;

/*!
 @brief Returns true if <code>cookie</code> should be sent to <code>uri</code> with respect to the cookie's
 secure attribute.
 Secure cookies should not be sent in insecure (ie. non-HTTPS) requests.
 */
+ (jboolean)secureMatchesWithJavaNetHttpCookie:(JavaNetHttpCookie *)cookie
                                withJavaNetURI:(JavaNetURI *)uri;

@end

J2OBJC_STATIC_INIT(JavaNetHttpCookie)

FOUNDATION_EXPORT jboolean JavaNetHttpCookie_domainMatchesWithNSString_withNSString_(NSString *domainPattern, NSString *host);

FOUNDATION_EXPORT jboolean JavaNetHttpCookie_pathMatchesWithJavaNetHttpCookie_withJavaNetURI_(JavaNetHttpCookie *cookie, JavaNetURI *uri);

FOUNDATION_EXPORT jboolean JavaNetHttpCookie_secureMatchesWithJavaNetHttpCookie_withJavaNetURI_(JavaNetHttpCookie *cookie, JavaNetURI *uri);

FOUNDATION_EXPORT jboolean JavaNetHttpCookie_portMatchesWithJavaNetHttpCookie_withJavaNetURI_(JavaNetHttpCookie *cookie, JavaNetURI *uri);

FOUNDATION_EXPORT id<JavaUtilList> JavaNetHttpCookie_parseWithNSString_(NSString *header);

FOUNDATION_EXPORT void JavaNetHttpCookie_initWithNSString_withNSString_(JavaNetHttpCookie *self, NSString *name, NSString *value);

FOUNDATION_EXPORT JavaNetHttpCookie *new_JavaNetHttpCookie_initWithNSString_withNSString_(NSString *name, NSString *value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetHttpCookie *create_JavaNetHttpCookie_initWithNSString_withNSString_(NSString *name, NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetHttpCookie)

#endif

#if !defined (JavaNetHttpCookie_CookieParser_) && (INCLUDE_ALL_JavaNetHttpCookie || defined(INCLUDE_JavaNetHttpCookie_CookieParser))
#define JavaNetHttpCookie_CookieParser_

@protocol JavaUtilList;

@interface JavaNetHttpCookie_CookieParser : NSObject {
 @public
  jboolean hasExpires_;
  jboolean hasMaxAge_;
  jboolean hasVersion_;
}

#pragma mark Public

- (id<JavaUtilList>)parse;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)input;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetHttpCookie_CookieParser)

FOUNDATION_EXPORT void JavaNetHttpCookie_CookieParser_initWithNSString_(JavaNetHttpCookie_CookieParser *self, NSString *input);

FOUNDATION_EXPORT JavaNetHttpCookie_CookieParser *new_JavaNetHttpCookie_CookieParser_initWithNSString_(NSString *input) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetHttpCookie_CookieParser *create_JavaNetHttpCookie_CookieParser_initWithNSString_(NSString *input);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetHttpCookie_CookieParser)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetHttpCookie")
