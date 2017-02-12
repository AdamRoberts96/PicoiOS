//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/SecuritySupport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerSecuritySupport")
#ifdef RESTRICT_OrgApacheXmlSerializerSecuritySupport
#define INCLUDE_ALL_OrgApacheXmlSerializerSecuritySupport 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerSecuritySupport 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerSecuritySupport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerSecuritySupport_) && (INCLUDE_ALL_OrgApacheXmlSerializerSecuritySupport || defined(INCLUDE_OrgApacheXmlSerializerSecuritySupport))
#define OrgApacheXmlSerializerSecuritySupport_

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
@interface OrgApacheXmlSerializerSecuritySupport : NSObject

#pragma mark Package-Private

- (instancetype)init;

- (JavaLangClassLoader *)getContextClassLoader;

- (jboolean)getFileExistsWithJavaIoFile:(JavaIoFile *)f;

- (JavaIoFileInputStream *)getFileInputStreamWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Return an appropriate instance of this class, depending on whether
 we're on a JDK 1.1 or J2SE 1.2 (or later) system.
 */
+ (OrgApacheXmlSerializerSecuritySupport *)getInstance;

- (jlong)getLastModifiedWithJavaIoFile:(JavaIoFile *)f;

- (JavaLangClassLoader *)getParentClassLoaderWithJavaLangClassLoader:(JavaLangClassLoader *)cl;

- (JavaIoInputStream *)getResourceAsStreamWithJavaLangClassLoader:(JavaLangClassLoader *)cl
                                                     withNSString:(NSString *)name;

- (JavaLangClassLoader *)getSystemClassLoader;

- (NSString *)getSystemPropertyWithNSString:(NSString *)propName;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerSecuritySupport)

FOUNDATION_EXPORT void OrgApacheXmlSerializerSecuritySupport_init(OrgApacheXmlSerializerSecuritySupport *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerSecuritySupport *new_OrgApacheXmlSerializerSecuritySupport_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerSecuritySupport *create_OrgApacheXmlSerializerSecuritySupport_init();

FOUNDATION_EXPORT OrgApacheXmlSerializerSecuritySupport *OrgApacheXmlSerializerSecuritySupport_getInstance();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerSecuritySupport)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerSecuritySupport")
