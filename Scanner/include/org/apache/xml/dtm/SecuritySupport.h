//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/SecuritySupport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmSecuritySupport")
#ifdef RESTRICT_OrgApacheXmlDtmSecuritySupport
#define INCLUDE_ALL_OrgApacheXmlDtmSecuritySupport 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmSecuritySupport 1
#endif
#undef RESTRICT_OrgApacheXmlDtmSecuritySupport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmSecuritySupport_) && (INCLUDE_ALL_OrgApacheXmlDtmSecuritySupport || defined(INCLUDE_OrgApacheXmlDtmSecuritySupport))
#define OrgApacheXmlDtmSecuritySupport_

@class JavaIoFile;
@class JavaIoFileInputStream;
@class JavaIoInputStream;
@class JavaLangClassLoader;

/*!
 @brief This class is duplicated for each Xalan-Java subpackage so keep it in sync.
 It is package private and therefore is not exposed as part of the Xalan-Java
 API.
 Base class with security related methods that work on JDK 1.1.
 */
@interface OrgApacheXmlDtmSecuritySupport : NSObject

#pragma mark Package-Private

- (instancetype)init;

- (JavaLangClassLoader *)getContextClassLoader;

- (jboolean)getFileExistsWithJavaIoFile:(JavaIoFile *)f;

- (JavaIoFileInputStream *)getFileInputStreamWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Return an appropriate instance of this class, depending on whether
 we're on a JDK 1.1 or J2SE 1.2 (or later) system.
 */
+ (OrgApacheXmlDtmSecuritySupport *)getInstance;

- (jlong)getLastModifiedWithJavaIoFile:(JavaIoFile *)f;

- (JavaLangClassLoader *)getParentClassLoaderWithJavaLangClassLoader:(JavaLangClassLoader *)cl;

- (JavaIoInputStream *)getResourceAsStreamWithJavaLangClassLoader:(JavaLangClassLoader *)cl
                                                     withNSString:(NSString *)name;

- (JavaLangClassLoader *)getSystemClassLoader;

- (NSString *)getSystemPropertyWithNSString:(NSString *)propName;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlDtmSecuritySupport)

FOUNDATION_EXPORT void OrgApacheXmlDtmSecuritySupport_init(OrgApacheXmlDtmSecuritySupport *self);

FOUNDATION_EXPORT OrgApacheXmlDtmSecuritySupport *new_OrgApacheXmlDtmSecuritySupport_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmSecuritySupport *create_OrgApacheXmlDtmSecuritySupport_init();

FOUNDATION_EXPORT OrgApacheXmlDtmSecuritySupport *OrgApacheXmlDtmSecuritySupport_getInstance();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmSecuritySupport)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmSecuritySupport")
