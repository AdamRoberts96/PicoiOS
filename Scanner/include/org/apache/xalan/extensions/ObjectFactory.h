//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/extensions/ObjectFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanExtensionsObjectFactory")
#ifdef RESTRICT_OrgApacheXalanExtensionsObjectFactory
#define INCLUDE_ALL_OrgApacheXalanExtensionsObjectFactory 0
#else
#define INCLUDE_ALL_OrgApacheXalanExtensionsObjectFactory 1
#endif
#undef RESTRICT_OrgApacheXalanExtensionsObjectFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanExtensionsObjectFactory_) && (INCLUDE_ALL_OrgApacheXalanExtensionsObjectFactory || defined(INCLUDE_OrgApacheXalanExtensionsObjectFactory))
#define OrgApacheXalanExtensionsObjectFactory_

@class IOSClass;
@class JavaLangClassLoader;

/*!
 @brief This class is duplicated for each JAXP subpackage so keep it in sync.
 It is package private and therefore is not exposed as part of the JAXP
 API.
 <p>
 This code is designed to implement the JAXP 1.1 spec pluggability
 feature and is designed to run on JDK version 1.1 and
 later, and to compile on JDK 1.2 and onward.  
 The code also runs both as part of an unbundled jar file and
 when bundled as part of the JDK.
 <p>
 This class was moved from the <code>javax.xml.parsers.ObjectFactory</code>
 class and modified to be used as a general utility for creating objects 
 dynamically.
 @version $Id: ObjectFactory.java 468637 2006-10-28 06:51:02Z minchau $
 */
@interface OrgApacheXalanExtensionsObjectFactory : NSObject

#pragma mark Package-Private

- (instancetype)init;

/*!
 @brief Figure out which ClassLoader to use.
 For JDK 1.2 and later use
 the context ClassLoader.
 */
+ (JavaLangClassLoader *)findClassLoader;

/*!
 @brief Find a Class using the specified ClassLoader
 */
+ (IOSClass *)findProviderClassWithNSString:(NSString *)className_
                    withJavaLangClassLoader:(JavaLangClassLoader *)cl
                                withBoolean:(jboolean)doFallback;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanExtensionsObjectFactory)

FOUNDATION_EXPORT void OrgApacheXalanExtensionsObjectFactory_init(OrgApacheXalanExtensionsObjectFactory *self);

FOUNDATION_EXPORT OrgApacheXalanExtensionsObjectFactory *new_OrgApacheXalanExtensionsObjectFactory_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanExtensionsObjectFactory *create_OrgApacheXalanExtensionsObjectFactory_init();

FOUNDATION_EXPORT JavaLangClassLoader *OrgApacheXalanExtensionsObjectFactory_findClassLoader();

FOUNDATION_EXPORT IOSClass *OrgApacheXalanExtensionsObjectFactory_findProviderClassWithNSString_withJavaLangClassLoader_withBoolean_(NSString *className_, JavaLangClassLoader *cl, jboolean doFallback);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanExtensionsObjectFactory)

#endif

#if !defined (OrgApacheXalanExtensionsObjectFactory_ConfigurationError_) && (INCLUDE_ALL_OrgApacheXalanExtensionsObjectFactory || defined(INCLUDE_OrgApacheXalanExtensionsObjectFactory_ConfigurationError))
#define OrgApacheXalanExtensionsObjectFactory_ConfigurationError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "java/lang/Error.h"

@class JavaLangException;

/*!
 @brief A configuration error.
 */
@interface OrgApacheXalanExtensionsObjectFactory_ConfigurationError : JavaLangError

+ (jlong)serialVersionUID;

#pragma mark Package-Private

/*!
 @brief Construct a new instance with the specified detail string and
 exception.
 */
- (instancetype)initWithNSString:(NSString *)msg
           withJavaLangException:(JavaLangException *)x;

/*!
 @brief Returns the exception associated to this error.
 */
- (JavaLangException *)getException;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanExtensionsObjectFactory_ConfigurationError)

inline jlong OrgApacheXalanExtensionsObjectFactory_ConfigurationError_get_serialVersionUID();
#define OrgApacheXalanExtensionsObjectFactory_ConfigurationError_serialVersionUID 8564305128443551853LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanExtensionsObjectFactory_ConfigurationError, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanExtensionsObjectFactory_ConfigurationError_initWithNSString_withJavaLangException_(OrgApacheXalanExtensionsObjectFactory_ConfigurationError *self, NSString *msg, JavaLangException *x);

FOUNDATION_EXPORT OrgApacheXalanExtensionsObjectFactory_ConfigurationError *new_OrgApacheXalanExtensionsObjectFactory_ConfigurationError_initWithNSString_withJavaLangException_(NSString *msg, JavaLangException *x) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanExtensionsObjectFactory_ConfigurationError *create_OrgApacheXalanExtensionsObjectFactory_ConfigurationError_initWithNSString_withJavaLangException_(NSString *msg, JavaLangException *x);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanExtensionsObjectFactory_ConfigurationError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanExtensionsObjectFactory")
