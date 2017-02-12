//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/HttpURLConnection.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetHttpURLConnection")
#ifdef RESTRICT_JavaNetHttpURLConnection
#define INCLUDE_ALL_JavaNetHttpURLConnection 0
#else
#define INCLUDE_ALL_JavaNetHttpURLConnection 1
#endif
#undef RESTRICT_JavaNetHttpURLConnection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetHttpURLConnection_) && (INCLUDE_ALL_JavaNetHttpURLConnection || defined(INCLUDE_JavaNetHttpURLConnection))
#define JavaNetHttpURLConnection_

#define RESTRICT_JavaNetURLConnection 1
#define INCLUDE_JavaNetURLConnection 1
#include "java/net/URLConnection.h"

@class JavaIoInputStream;
@class JavaNetURL;
@class JavaSecurityPermission;

/*!
 @brief An <code>URLConnection</code> for HTTP (<a
 href="http://tools.ietf.org/html/rfc2616">RFC 2616</a>) used to send and
 receive data over the web.
 Data may be of any type and length. This class may
 be used to send and receive streaming data whose length is not known in
 advance.
 <p>Uses of this class follow a pattern:
 <ol>
 <li>Obtain a new <code>HttpURLConnection</code> by calling <code>URL.openConnection()</code>
  and casting the result to
 <code>HttpURLConnection</code>.
 <li>Prepare the request. The primary property of a request is its URI.
 Request headers may also include metadata such as credentials, preferred
 content types, and session cookies.
 <li>Optionally upload a request body. Instances must be configured with
 <code>setDoOutput(true)</code> if they include a
 request body. Transmit data by writing to the stream returned by <code>getOutputStream()</code>
 .
 <li>Read the response. Response headers typically include metadata such as
 the response body's content type and length, modified dates and session
 cookies. The response body may be read from the stream returned by <code>getInputStream()</code>
 . If the response has no body, that method returns an
 empty stream.
 <li>Disconnect. Once the response body has been read, the <code>HttpURLConnection</code>
  should be closed by calling <code>disconnect()</code>.
 Disconnecting releases the resources held by a connection so they may
 be closed or reused.
 </ol>
 <p>For example, to retrieve the webpage at <code>http://www.android.com/</code>:
 @code
     URL url = new URL("http://www.android.com/");
   HttpURLConnection urlConnection = (HttpURLConnection) url.openConnection();
   try 
     InputStream in = new BufferedInputStream(urlConnection.getInputStream());
     readStream(in);
   } finally {
     urlConnection.disconnect();
   }
  
@endcode
 <h3>Secure Communication with HTTPS</h3>
 Calling <code>URL.openConnection()</code> on a URL with the "https"
 scheme will return an <code>HttpsURLConnection</code>, which allows for
 overriding the default <code>HostnameVerifier</code>
  and <code>SSLSocketFactory</code>
 . An application-supplied <code>SSLSocketFactory</code>
 created from an <code>SSLContext</code> can
 provide a custom <code>X509TrustManager</code>
  for verifying certificate chains and a custom
 <code>X509KeyManager</code> for supplying
 client certificates. See <code>HttpsURLConnection</code>
  for more details.
 <h3>Response Handling</h3>
 <code>HttpURLConnection</code> will follow up to five HTTP redirects. It will
 follow redirects from one origin server to another. This implementation
 doesn't follow redirects from HTTPS to HTTP or vice versa.
 <p>If the HTTP response indicates that an error occurred, <code>getInputStream()</code>
  will throw an <code>IOException</code>. Use <code>getErrorStream()</code>
  to read the error response. The headers can be read in
 the normal way using <code>getHeaderFields()</code>,
 <h3>Posting Content</h3>
 To upload data to a web server, configure the connection for output using
 <code>setDoOutput(true)</code>.
 <p>For best performance, you should call either <code>setFixedLengthStreamingMode(int)</code>
  when the body length is known in advance,
 or <code>setChunkedStreamingMode(int)</code> when it is not. Otherwise <code>HttpURLConnection</code>
  will be forced to buffer the complete request body in
 memory before it is transmitted, wasting (and possibly exhausting) heap and
 increasing latency.
 <p>For example, to perform an upload: 
@code
     HttpURLConnection urlConnection = (HttpURLConnection) url.openConnection();
   try 
     urlConnection.setDoOutput(true);
     urlConnection.setChunkedStreamingMode(0);
     OutputStream out = new BufferedOutputStream(urlConnection.getOutputStream());
     writeStream(out);
     InputStream in = new BufferedInputStream(urlConnection.getInputStream());
     readStream(in);
   } finally {
     urlConnection.disconnect();
   }
  
@endcode
 <h3>Performance</h3>
 The input and output streams returned by this class are <strong>not
 buffered</strong>. Most callers should wrap the returned streams with <code>BufferedInputStream</code>
  or <code>BufferedOutputStream</code>
 . Callers that do only bulk
 reads or writes may omit buffering.
 <p>When transferring large amounts of data to or from a server, use streams
 to limit how much data is in memory at once. Unless you need the entire
 body to be in memory at once, process it as a stream (rather than storing
 the complete body as a single byte array or string).
 <p>To reduce latency, this class may reuse the same underlying <code>Socket</code>
 for multiple request/response pairs. As a result, HTTP connections may be
 held open longer than necessary. Calls to <code>disconnect()</code> may return
 the socket to a pool of connected sockets. This behavior can be disabled by
 setting the <code>http.keepAlive</code> system property to <code>false</code> before
 issuing any HTTP requests. The <code>http.maxConnections</code> property may be
 used to control how many idle connections to each server will be held.
 <p>By default, this implementation of <code>HttpURLConnection</code> requests that
 servers use gzip compression. Since <code>getContentLength()</code> returns the
 number of bytes transmitted, you cannot use that method to predict how many
 bytes can be read from <code>getInputStream()</code>. Instead, read that stream
 until it is exhausted: when <code>InputStream.read</code> returns -1. Gzip
 compression can be disabled by setting the acceptable encodings in the
 request header: 
@code
     urlConnection.setRequestProperty("Accept-Encoding", "identity");
 
@endcode
 <h3>Handling Network Sign-On</h3>
 Some Wi-Fi networks block Internet access until the user clicks through a
 sign-on page. Such sign-on pages are typically presented by using HTTP
 redirects. You can use <code>getURL()</code> to test if your connection has been
 unexpectedly redirected. This check is not valid until <strong>after</strong>
 the response headers have been received, which you can trigger by calling
 <code>getHeaderFields()</code> or <code>getInputStream()</code>. For example, to
 check that a response was not redirected to an unexpected host:
 @code
     HttpURLConnection urlConnection = (HttpURLConnection) url.openConnection();
   try 
     InputStream in = new BufferedInputStream(urlConnection.getInputStream());
     if (!url.getHost().equals(urlConnection.getURL().getHost())) {
       // we were redirected! Kick the user out to the browser to sign on?
     }
     ...
   } finally {
     urlConnection.disconnect();
   }
  
@endcode
 <h3>HTTP Authentication</h3>
 <code>HttpURLConnection</code> supports <a
 href="http://www.ietf.org/rfc/rfc2617">HTTP basic authentication</a>. Use
 <code>Authenticator</code> to set the VM-wide authentication handler:
 @code
   
   Authenticator.setDefault(new Authenticator() 
     protected PasswordAuthentication getPasswordAuthentication() {
       return new PasswordAuthentication(username, password.toCharArray());
     }
   });
  
@endcode
 Unless paired with HTTPS, this is <strong>not</strong> a secure mechanism for
 user authentication. In particular, the username, password, request and
 response are all transmitted over the network without encryption.
 <h3>Sessions with Cookies</h3>
 To establish and maintain a potentially long-lived session between client
 and server, <code>HttpURLConnection</code> includes an extensible cookie manager.
 Enable VM-wide cookie management using <code>CookieHandler</code> and <code>CookieManager</code>
 : 
@code
     CookieManager cookieManager = new CookieManager();
   CookieHandler.setDefault(cookieManager);
 
@endcode
 By default, <code>CookieManager</code> accepts cookies from the <a
 href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec1.html">origin
 server</a> only. Two other policies are included: <code>CookiePolicy.ACCEPT_ALL</code>
  and <code>CookiePolicy.ACCEPT_NONE</code>. Implement
 <code>CookiePolicy</code> to define a custom policy.
 <p>The default <code>CookieManager</code> keeps all accepted cookies in memory. It
 will forget these cookies when the VM exits. Implement <code>CookieStore</code> to
 define a custom cookie store.
 <p>In addition to the cookies set by HTTP responses, you may set cookies
 programmatically. To be included in HTTP request headers, cookies must have
 the domain and path properties set.
 <p>By default, new instances of <code>HttpCookie</code> work only with servers
 that support <a href="http://www.ietf.org/rfc/rfc2965.txt">RFC 2965</a>
 cookies. Many web servers support only the older specification, <a
 href="http://www.ietf.org/rfc/rfc2109.txt">RFC 2109</a>. For compatibility
 with the most web servers, set the cookie version to 0.
 <p>For example, to receive <code>www.twitter.com</code> in French: 
@code
     HttpCookie cookie = new HttpCookie("lang", "fr");
   cookie.setDomain("twitter.com");
   cookie.setPath("/");
   cookie.setVersion(0);
   cookieManager.getCookieStore().add(new URI("http://twitter.com/"), cookie);
 
@endcode
 <h3>HTTP Methods</h3>
 <p><code>HttpURLConnection</code> uses the <code>GET</code> method by default. It will
 use <code>POST</code> if <code>setDoOutput(true)</code> has been called.
 Other HTTP methods (<code>OPTIONS</code>, <code>HEAD</code>, <code>PUT</code>, <code>DELETE</code>
  and <code>TRACE</code>) can be used with <code>setRequestMethod</code>.
 <h3>Proxies</h3>
 By default, this class will connect directly to the <a
 href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec1.html">origin
 server</a>. It can also connect via an <code>HTTP</code> or <code>SOCKS</code>
  proxy. To use a proxy, use <code>URL.openConnection(Proxy)</code>
  when creating the
 connection.
 <h3>IPv6 Support</h3>
 <p>This class includes transparent support for IPv6. For hosts with both IPv4
 and IPv6 addresses, it will attempt to connect to each of a host's addresses
 until a connection is established.
 <h3>Response Caching</h3>
 Android 4.0 (Ice Cream Sandwich, API level 15) includes a response cache. See
 <code>android.net.http.HttpResponseCache</code> for instructions on enabling HTTP
 caching in your application.
 <h3>Avoiding Bugs In Earlier Releases</h3>
 Prior to Android 2.2 (Froyo), this class had some frustrating bugs. In
 particular, calling <code>close()</code> on a readable <code>InputStream</code> could
 <a href="http://code.google.com/p/android/issues/detail?id=2939">poison the
 connection pool</a>. Work around this by disabling connection pooling:
 @code
   
  private void disableConnectionReuseIfNecessary() 
   // Work around pre-Froyo bugs in HTTP connection reuse.
   if (Integer.parseInt(Build.VERSION.SDK) < Build.VERSION_CODES.FROYO) {
     System.setProperty("http.keepAlive", "false");
   }
  
@endcode
 <p>Each instance of <code>HttpURLConnection</code> may be used for one
 request/response pair. Instances of this class are not thread safe.
 */
@interface JavaNetHttpURLConnection : JavaNetURLConnection {
 @public
  /*!
   @brief The HTTP request method of this <code>HttpURLConnection</code>.
   The default
 value is <code>"GET"</code>.
   */
  NSString *method_;
  /*!
   @brief The status code of the response obtained from the HTTP request.
   The
 default value is <code>-1</code>.
 <p>
 <li>1xx: Informational</li>
 <li>2xx: Success</li>
 <li>3xx: Relocation/Redirection</li>
 <li>4xx: Client Error</li>
 <li>5xx: Server Error</li>
   */
  jint responseCode_;
  /*!
   @brief The HTTP response message which corresponds to the response code.
   */
  NSString *responseMessage_;
  /*!
   @brief Flag to define whether the protocol will automatically follow redirects
 or not.
   The default value is <code>true</code>.
   */
  jboolean instanceFollowRedirects_;
  /*!
   @brief If the HTTP chunked encoding is enabled this parameter defines the
 chunk-length.
   Default value is <code>-1</code> that means the chunked encoding
 mode is disabled.
   */
  jint chunkLength_;
  /*!
   @brief The byte count in the request body if it is both known and streamed; and
 -1 otherwise.
   If the byte count exceeds <code>Integer.MAX_VALUE</code> (2 GiB)
 then the value of this field will be <code>Integer.MAX_VALUE</code>. In that
 case use <code>fixedContentLengthLong</code> to access the exact byte count.
   */
  jint fixedContentLength_;
  /*!
   @brief The byte count in the request body if it is both known and streamed; and
 -1 otherwise.
   Prefer this field over the <code>int</code>-valued <code>fixedContentLength</code>
  on platforms that support both.
   */
  jlong fixedContentLengthLong_;
}

+ (jint)HTTP_ACCEPTED;

+ (jint)HTTP_BAD_GATEWAY;

+ (jint)HTTP_BAD_METHOD;

+ (jint)HTTP_BAD_REQUEST;

+ (jint)HTTP_CLIENT_TIMEOUT;

+ (jint)HTTP_CONFLICT;

+ (jint)HTTP_CREATED;

+ (jint)HTTP_ENTITY_TOO_LARGE;

+ (jint)HTTP_FORBIDDEN;

+ (jint)HTTP_GATEWAY_TIMEOUT;

+ (jint)HTTP_GONE;

+ (jint)HTTP_INTERNAL_ERROR;

+ (jint)HTTP_LENGTH_REQUIRED;

+ (jint)HTTP_MOVED_PERM;

+ (jint)HTTP_MOVED_TEMP;

+ (jint)HTTP_MULT_CHOICE;

+ (jint)HTTP_NO_CONTENT;

+ (jint)HTTP_NOT_ACCEPTABLE;

+ (jint)HTTP_NOT_AUTHORITATIVE;

+ (jint)HTTP_NOT_FOUND;

+ (jint)HTTP_NOT_IMPLEMENTED;

+ (jint)HTTP_NOT_MODIFIED;

+ (jint)HTTP_OK;

+ (jint)HTTP_PARTIAL;

+ (jint)HTTP_PAYMENT_REQUIRED;

+ (jint)HTTP_PRECON_FAILED;

+ (jint)HTTP_PROXY_AUTH;

+ (jint)HTTP_REQ_TOO_LONG;

+ (jint)HTTP_RESET;

+ (jint)HTTP_SEE_OTHER;

+ (jint)HTTP_SERVER_ERROR;

+ (jint)HTTP_USE_PROXY;

+ (jint)HTTP_UNAUTHORIZED;

+ (jint)HTTP_UNSUPPORTED_TYPE;

+ (jint)HTTP_UNAVAILABLE;

+ (jint)HTTP_VERSION;

#pragma mark Public

/*!
 @brief Releases this connection so that its resources may be either reused or
 closed.
 <p>Unlike other Java implementations, this will not necessarily close
 socket connections that can be reused. You can disable all connection
 reuse by setting the <code>http.keepAlive</code> system property to <code>false</code>
  before issuing any HTTP requests.
 */
- (void)disconnect;

/*!
 @brief Returns the encoding used to transmit the response body over the network.
 This is null or "identity" if the content was not encoded, or "gzip" if
 the body was gzip compressed. Most callers will be more interested in the
 <code>content type</code>, which may also include the
 content's character encoding.
 */
- (NSString *)getContentEncoding;

/*!
 @brief Returns an input stream from the server in the case of an error such as
 the requested file has not been found on the remote server.
 This stream
 can be used to read the data the server will send back.
 @return the error input stream returned by the server.
 */
- (JavaIoInputStream *)getErrorStream;

/*!
 @brief Returns the value of <code>followRedirects</code> which indicates if this
 connection follows a different URL redirected by the server.
 It is
 enabled by default.
 @return the value of the flag.
 - seealso: #setFollowRedirects
 */
+ (jboolean)getFollowRedirects;

/*!
 @brief Returns the date value in milliseconds since <code>01.01.1970, 00:00h</code>
 corresponding to the header field <code>field</code>.
 The <code>defaultValue</code>
 will be returned if no such field can be found in the response header.
 @param field
 the header field name.
 @param defaultValue
 the default value to use if the specified header field wont be
 found.
 @return the header field represented in milliseconds since January 1,
 1970 GMT.
 */
- (jlong)getHeaderFieldDateWithNSString:(NSString *)field
                               withLong:(jlong)defaultValue;

/*!
 @brief Returns whether this connection follows redirects.
 @return <code>true</code> if this connection follows redirects, false
 otherwise.
 */
- (jboolean)getInstanceFollowRedirects;

/*!
 @brief Returns the permission object (in this case <code>SocketPermission</code>)
 with the host and the port number as the target name and <code>"resolve, connect"</code>
  as the action list.
 If the port number of this URL
 instance is lower than <code>0</code> the port will be set to <code>80</code>.
 @return the permission object required for this connection.
 @throws IOException
 if an IO exception occurs during the creation of the
 permission object.
 */
- (JavaSecurityPermission *)getPermission;

/*!
 @brief Returns the request method which will be used to make the request to the
 remote HTTP server.
 All possible methods of this HTTP implementation is
 listed in the class definition.
 @return the request method string.
 - seealso: #method
 - seealso: #setRequestMethod
 */
- (NSString *)getRequestMethod;

/*!
 @brief Returns the response code returned by the remote HTTP server.
 @return the response code, -1 if no valid response code.
 @throws IOException
 if there is an IO error during the retrieval.
 - seealso: #getResponseMessage
 */
- (jint)getResponseCode;

/*!
 @brief Returns the response message returned by the remote HTTP server.
 @return the response message. <code>null</code> if no such response exists.
 @throws IOException
 if there is an error during the retrieval.
 - seealso: #getResponseCode()
 */
- (NSString *)getResponseMessage;

/*!
 @brief Stream a request body whose length is not known in advance.
 Old HTTP/1.0
 only servers may not support this mode.
 <p>When HTTP chunked encoding is used, the stream is divided into
 chunks, each prefixed with a header containing the chunk's size.
 A large chunk length requires a large internal buffer, potentially
 wasting memory. A small chunk length increases the number of
 bytes that must be transmitted because of the header on every chunk.
 <p>Implementation details: In some releases the <code>chunkLength</code> is
 treated as a hint: chunks sent to the server may actually be larger or
 smaller. To force a chunk to be sent to the server call
 <code>java.io.OutputStream.flush()</code>.
 - seealso: #setFixedLengthStreamingMode
 @param chunkLength the length to use, or <code>0</code> for the default chunk
 length.
 @throws IllegalStateException if already connected or another mode
 already set.
 */
- (void)setChunkedStreamingModeWithInt:(jint)chunkLength;

/*!
 @brief Equivalent to <code>setFixedLengthStreamingMode((long) contentLength)</code>,
 but available on earlier versions of Android and limited to 2 GiB.
 */
- (void)setFixedLengthStreamingModeWithInt:(jint)contentLength;

/*!
 @brief Configures this connection to stream the request body with the known
 fixed byte count of <code>contentLength</code>.
 - seealso: #setChunkedStreamingMode
 @param contentLength
 the fixed length of the HTTP request body.
 @throws IllegalStateException
 if already connected or another mode already set.
 @throws IllegalArgumentException
 if <code>contentLength</code> is less than zero.
 @since 1.7
 */
- (void)setFixedLengthStreamingModeWithLong:(jlong)contentLength;

/*!
 @brief Sets the flag of whether this connection will follow redirects returned
 by the remote server.
 @param auto_
 the value to enable or disable this option.
 */
+ (void)setFollowRedirectsWithBoolean:(jboolean)auto_;

/*!
 @brief Sets whether this connection follows redirects.
 @param followRedirects
 <code>true</code> if this connection will follows redirects, false
 otherwise.
 */
- (void)setInstanceFollowRedirectsWithBoolean:(jboolean)followRedirects;

/*!
 @brief Sets the request command which will be sent to the remote HTTP server.
 This method can only be called before the connection is made.
 @param method
 the string representing the method to be used.
 @throws ProtocolException
 if this is called after connected, or the method is not
 supported by this HTTP implementation.
 - seealso: #getRequestMethod()
 - seealso: #method
 */
- (void)setRequestMethodWithNSString:(NSString *)method;

/*!
 @brief Returns whether this connection uses a proxy server or not.
 @return <code>true</code> if this connection passes a proxy server, false
 otherwise.
 */
- (jboolean)usingProxy;

#pragma mark Protected

/*!
 @brief Constructs a new <code>HttpURLConnection</code> instance pointing to the
 resource specified by the <code>url</code>.
 @param url
 the URL of this connection.
 - seealso: URL
 - seealso: URLConnection
 */
- (instancetype)initWithJavaNetURL:(JavaNetURL *)url;

@end

J2OBJC_STATIC_INIT(JavaNetHttpURLConnection)

J2OBJC_FIELD_SETTER(JavaNetHttpURLConnection, method_, NSString *)
J2OBJC_FIELD_SETTER(JavaNetHttpURLConnection, responseMessage_, NSString *)

/*!
 @brief Numeric status code, 202: Accepted
 */
inline jint JavaNetHttpURLConnection_get_HTTP_ACCEPTED();
#define JavaNetHttpURLConnection_HTTP_ACCEPTED 202
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_ACCEPTED, jint)

/*!
 @brief Numeric status code, 502: Bad Gateway
 */
inline jint JavaNetHttpURLConnection_get_HTTP_BAD_GATEWAY();
#define JavaNetHttpURLConnection_HTTP_BAD_GATEWAY 502
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_BAD_GATEWAY, jint)

/*!
 @brief Numeric status code, 405: Bad Method
 */
inline jint JavaNetHttpURLConnection_get_HTTP_BAD_METHOD();
#define JavaNetHttpURLConnection_HTTP_BAD_METHOD 405
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_BAD_METHOD, jint)

/*!
 @brief Numeric status code, 400: Bad Request
 */
inline jint JavaNetHttpURLConnection_get_HTTP_BAD_REQUEST();
#define JavaNetHttpURLConnection_HTTP_BAD_REQUEST 400
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_BAD_REQUEST, jint)

/*!
 @brief Numeric status code, 408: Client Timeout
 */
inline jint JavaNetHttpURLConnection_get_HTTP_CLIENT_TIMEOUT();
#define JavaNetHttpURLConnection_HTTP_CLIENT_TIMEOUT 408
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_CLIENT_TIMEOUT, jint)

/*!
 @brief Numeric status code, 409: Conflict
 */
inline jint JavaNetHttpURLConnection_get_HTTP_CONFLICT();
#define JavaNetHttpURLConnection_HTTP_CONFLICT 409
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_CONFLICT, jint)

/*!
 @brief Numeric status code, 201: Created
 */
inline jint JavaNetHttpURLConnection_get_HTTP_CREATED();
#define JavaNetHttpURLConnection_HTTP_CREATED 201
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_CREATED, jint)

/*!
 @brief Numeric status code, 413: Entity too large
 */
inline jint JavaNetHttpURLConnection_get_HTTP_ENTITY_TOO_LARGE();
#define JavaNetHttpURLConnection_HTTP_ENTITY_TOO_LARGE 413
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_ENTITY_TOO_LARGE, jint)

/*!
 @brief Numeric status code, 403: Forbidden
 */
inline jint JavaNetHttpURLConnection_get_HTTP_FORBIDDEN();
#define JavaNetHttpURLConnection_HTTP_FORBIDDEN 403
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_FORBIDDEN, jint)

/*!
 @brief Numeric status code, 504: Gateway timeout
 */
inline jint JavaNetHttpURLConnection_get_HTTP_GATEWAY_TIMEOUT();
#define JavaNetHttpURLConnection_HTTP_GATEWAY_TIMEOUT 504
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_GATEWAY_TIMEOUT, jint)

/*!
 @brief Numeric status code, 410: Gone
 */
inline jint JavaNetHttpURLConnection_get_HTTP_GONE();
#define JavaNetHttpURLConnection_HTTP_GONE 410
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_GONE, jint)

/*!
 @brief Numeric status code, 500: Internal error
 */
inline jint JavaNetHttpURLConnection_get_HTTP_INTERNAL_ERROR();
#define JavaNetHttpURLConnection_HTTP_INTERNAL_ERROR 500
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_INTERNAL_ERROR, jint)

/*!
 @brief Numeric status code, 411: Length required
 */
inline jint JavaNetHttpURLConnection_get_HTTP_LENGTH_REQUIRED();
#define JavaNetHttpURLConnection_HTTP_LENGTH_REQUIRED 411
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_LENGTH_REQUIRED, jint)

/*!
 @brief Numeric status code, 301 Moved permanently
 */
inline jint JavaNetHttpURLConnection_get_HTTP_MOVED_PERM();
#define JavaNetHttpURLConnection_HTTP_MOVED_PERM 301
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_MOVED_PERM, jint)

/*!
 @brief Numeric status code, 302: Moved temporarily
 */
inline jint JavaNetHttpURLConnection_get_HTTP_MOVED_TEMP();
#define JavaNetHttpURLConnection_HTTP_MOVED_TEMP 302
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_MOVED_TEMP, jint)

/*!
 @brief Numeric status code, 300: Multiple choices
 */
inline jint JavaNetHttpURLConnection_get_HTTP_MULT_CHOICE();
#define JavaNetHttpURLConnection_HTTP_MULT_CHOICE 300
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_MULT_CHOICE, jint)

/*!
 @brief Numeric status code, 204: No content
 */
inline jint JavaNetHttpURLConnection_get_HTTP_NO_CONTENT();
#define JavaNetHttpURLConnection_HTTP_NO_CONTENT 204
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_NO_CONTENT, jint)

/*!
 @brief Numeric status code, 406: Not acceptable
 */
inline jint JavaNetHttpURLConnection_get_HTTP_NOT_ACCEPTABLE();
#define JavaNetHttpURLConnection_HTTP_NOT_ACCEPTABLE 406
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_NOT_ACCEPTABLE, jint)

/*!
 @brief Numeric status code, 203: Not authoritative
 */
inline jint JavaNetHttpURLConnection_get_HTTP_NOT_AUTHORITATIVE();
#define JavaNetHttpURLConnection_HTTP_NOT_AUTHORITATIVE 203
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_NOT_AUTHORITATIVE, jint)

/*!
 @brief Numeric status code, 404: Not found
 */
inline jint JavaNetHttpURLConnection_get_HTTP_NOT_FOUND();
#define JavaNetHttpURLConnection_HTTP_NOT_FOUND 404
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_NOT_FOUND, jint)

/*!
 @brief Numeric status code, 501: Not implemented
 */
inline jint JavaNetHttpURLConnection_get_HTTP_NOT_IMPLEMENTED();
#define JavaNetHttpURLConnection_HTTP_NOT_IMPLEMENTED 501
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_NOT_IMPLEMENTED, jint)

/*!
 @brief Numeric status code, 304: Not modified
 */
inline jint JavaNetHttpURLConnection_get_HTTP_NOT_MODIFIED();
#define JavaNetHttpURLConnection_HTTP_NOT_MODIFIED 304
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_NOT_MODIFIED, jint)

/*!
 @brief Numeric status code, 200: OK
 */
inline jint JavaNetHttpURLConnection_get_HTTP_OK();
#define JavaNetHttpURLConnection_HTTP_OK 200
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_OK, jint)

/*!
 @brief Numeric status code, 206: Partial
 */
inline jint JavaNetHttpURLConnection_get_HTTP_PARTIAL();
#define JavaNetHttpURLConnection_HTTP_PARTIAL 206
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_PARTIAL, jint)

/*!
 @brief Numeric status code, 402: Payment required
 */
inline jint JavaNetHttpURLConnection_get_HTTP_PAYMENT_REQUIRED();
#define JavaNetHttpURLConnection_HTTP_PAYMENT_REQUIRED 402
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_PAYMENT_REQUIRED, jint)

/*!
 @brief Numeric status code, 412: Precondition failed
 */
inline jint JavaNetHttpURLConnection_get_HTTP_PRECON_FAILED();
#define JavaNetHttpURLConnection_HTTP_PRECON_FAILED 412
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_PRECON_FAILED, jint)

/*!
 @brief Numeric status code, 407: Proxy authentication required
 */
inline jint JavaNetHttpURLConnection_get_HTTP_PROXY_AUTH();
#define JavaNetHttpURLConnection_HTTP_PROXY_AUTH 407
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_PROXY_AUTH, jint)

/*!
 @brief Numeric status code, 414: Request too long
 */
inline jint JavaNetHttpURLConnection_get_HTTP_REQ_TOO_LONG();
#define JavaNetHttpURLConnection_HTTP_REQ_TOO_LONG 414
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_REQ_TOO_LONG, jint)

/*!
 @brief Numeric status code, 205: Reset
 */
inline jint JavaNetHttpURLConnection_get_HTTP_RESET();
#define JavaNetHttpURLConnection_HTTP_RESET 205
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_RESET, jint)

/*!
 @brief Numeric status code, 303: See other
 */
inline jint JavaNetHttpURLConnection_get_HTTP_SEE_OTHER();
#define JavaNetHttpURLConnection_HTTP_SEE_OTHER 303
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_SEE_OTHER, jint)

/*!
 @brief Numeric status code, 500: Internal error
 */
inline jint JavaNetHttpURLConnection_get_HTTP_SERVER_ERROR();
#define JavaNetHttpURLConnection_HTTP_SERVER_ERROR 500
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_SERVER_ERROR, jint)

/*!
 @brief Numeric status code, 305: Use proxy.
 <p>Like Firefox and Chrome, this class doesn't honor this response code.
 Other implementations respond to this status code by retrying the request
 using the HTTP proxy named by the response's Location header field.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_USE_PROXY();
#define JavaNetHttpURLConnection_HTTP_USE_PROXY 305
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_USE_PROXY, jint)

/*!
 @brief Numeric status code, 401: Unauthorized
 */
inline jint JavaNetHttpURLConnection_get_HTTP_UNAUTHORIZED();
#define JavaNetHttpURLConnection_HTTP_UNAUTHORIZED 401
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_UNAUTHORIZED, jint)

/*!
 @brief Numeric status code, 415: Unsupported type
 */
inline jint JavaNetHttpURLConnection_get_HTTP_UNSUPPORTED_TYPE();
#define JavaNetHttpURLConnection_HTTP_UNSUPPORTED_TYPE 415
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_UNSUPPORTED_TYPE, jint)

/*!
 @brief Numeric status code, 503: Unavailable
 */
inline jint JavaNetHttpURLConnection_get_HTTP_UNAVAILABLE();
#define JavaNetHttpURLConnection_HTTP_UNAVAILABLE 503
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_UNAVAILABLE, jint)

/*!
 @brief Numeric status code, 505: Version not supported
 */
inline jint JavaNetHttpURLConnection_get_HTTP_VERSION();
#define JavaNetHttpURLConnection_HTTP_VERSION 505
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_VERSION, jint)

FOUNDATION_EXPORT void JavaNetHttpURLConnection_initWithJavaNetURL_(JavaNetHttpURLConnection *self, JavaNetURL *url);

FOUNDATION_EXPORT jboolean JavaNetHttpURLConnection_getFollowRedirects();

FOUNDATION_EXPORT void JavaNetHttpURLConnection_setFollowRedirectsWithBoolean_(jboolean auto_);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetHttpURLConnection)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetHttpURLConnection")
