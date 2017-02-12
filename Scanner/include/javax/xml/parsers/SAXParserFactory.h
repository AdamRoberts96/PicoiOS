//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/parsers/SAXParserFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlParsersSAXParserFactory")
#ifdef RESTRICT_JavaxXmlParsersSAXParserFactory
#define INCLUDE_ALL_JavaxXmlParsersSAXParserFactory 0
#else
#define INCLUDE_ALL_JavaxXmlParsersSAXParserFactory 1
#endif
#undef RESTRICT_JavaxXmlParsersSAXParserFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlParsersSAXParserFactory_) && (INCLUDE_ALL_JavaxXmlParsersSAXParserFactory || defined(INCLUDE_JavaxXmlParsersSAXParserFactory))
#define JavaxXmlParsersSAXParserFactory_

@class JavaLangClassLoader;
@class JavaxXmlParsersSAXParser;
@class JavaxXmlValidationSchema;

/*!
 @brief Defines a factory API that enables applications to configure and
 obtain a SAX based parser to parse XML documents.
 @author <a href="Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 884950 $, $Date: 2009-11-27 10:46:18 -0800 (Fri, 27 Nov 2009) $
 */
@interface JavaxXmlParsersSAXParserFactory : NSObject

#pragma mark Public

/*!
 @brief <p>Returns the particular property requested for in the underlying
 implementation of org.xml.sax.XMLReader.
 </p>
 @param name The name of the property to be retrieved.
 @return Value of the requested property.
 @exception ParserConfigurationException if a parser cannot be created which satisfies the requested configuration.
 @exception SAXNotRecognizedException When the underlying XMLReader does not recognize the property name.
 @exception SAXNotSupportedException When the underlying XMLReader recognizes the property name but doesn't support the property.
 - seealso: org.xml.sax.XMLReader#getProperty
 */
- (jboolean)getFeatureWithNSString:(NSString *)name;

/*!
 @brief Gets the <code>Schema</code> object specified through
 the <code>schema)</code> method.
 @throws UnsupportedOperationException
 For backward compatibility, when implementations for
 earlier versions of JAXP is used, this exception will be
 thrown.
 @return the <code>Schema</code> object that was last set through
 the <code>setSchema(Schema)</code> method, or null
 if the method was not invoked since a <code>SAXParserFactory</code>
 is created.
 @since 1.5
 */
- (JavaxXmlValidationSchema *)getSchema;

/*!
 @brief Indicates whether or not the factory is configured to produce
 parsers which are namespace aware.
 @return true if the factory is configured to produce
 parsers which are namespace aware; false otherwise.
 */
- (jboolean)isNamespaceAware;

/*!
 @brief Indicates whether or not the factory is configured to produce
 parsers which validate the XML content during parse.
 @return true if the factory is configured to produce parsers which validate
 the XML content during parse; false otherwise.
 */
- (jboolean)isValidating;

/*!
 @brief <p>Get state of XInclude processing.
 </p>
 @return current state of XInclude processing
 @throws UnsupportedOperationException
 For backward compatibility, when implementations for
 earlier versions of JAXP is used, this exception will be
 thrown.
 @since 1.5
 */
- (jboolean)isXIncludeAware;

/*!
 @brief Returns Android's implementation of <code>SAXParserFactory</code>.
 Unlike
 other Java implementations, this method does not consult system
 properties, property files, or the services API.
 @return a new SAXParserFactory.
 @exception FactoryConfigurationError never. Included for API
 compatibility with other Java implementations.
 */
+ (JavaxXmlParsersSAXParserFactory *)newInstance OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an instance of the named implementation of <code>SAXParserFactory</code>.
 @throws FactoryConfigurationError if <code>factoryClassName</code> is not available or cannot be
 instantiated.
 @since 1.6
 */
+ (JavaxXmlParsersSAXParserFactory *)newInstanceWithNSString:(NSString *)factoryClassName
                                     withJavaLangClassLoader:(JavaLangClassLoader *)classLoader OBJC_METHOD_FAMILY_NONE;

/*!
 @brief <p>Creates a new instance of a SAXParser using the currently
 configured factory parameters.
 </p>
 @return A new instance of a SAXParser.
 @exception ParserConfigurationException if a parser cannot
 be created which satisfies the requested configuration.
 @exception SAXException for SAX errors.
 */
- (JavaxXmlParsersSAXParser *)newSAXParser OBJC_METHOD_FAMILY_NONE;

/*!
 @brief <p>Sets the particular feature in the underlying implementation of
 org.xml.sax.XMLReader.
 A list of the core features and properties can be found at
 <a href="http://www.saxproject.org/">http://www.saxproject.org/</a></p>
 <p>All implementations are required to support the <code>javax.xml.XMLConstants.FEATURE_SECURE_PROCESSING</code> feature.
 When the feature is</p>
 <ul>
 <li>
 <code>true</code>: the implementation will limit XML processing to conform to implementation limits.
 Examples include entity expansion limits and XML Schema constructs that would consume large amounts of resources.
 If XML processing is limited for security reasons, it will be reported via a call to the registered
 <code>exception)</code>.
 See <code>SAXParser</code> <code>parse</code> methods for handler specification.
 </li>
 <li>
 When the feature is <code>false</code>, the implementation will processing XML according to the XML specifications without
 regard to possible implementation limits.
 </li>
 </ul>
 @param name The name of the feature to be set.
 @param value The value of the feature to be set.
 @exception ParserConfigurationException if a parser cannot
 be created which satisfies the requested configuration.
 @exception SAXNotRecognizedException When the underlying XMLReader does
 not recognize the property name.
 @exception SAXNotSupportedException When the underlying XMLReader
 recognizes the property name but doesn't support the
 property.
 @throws NullPointerException If the <code>name</code> parameter is null.
 - seealso: org.xml.sax.XMLReader#setFeature
 */
- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

/*!
 @brief Specifies that the parser produced by this code will
 provide support for XML namespaces.
 By default the value of this is set
 to <code>false</code>.
 @param awareness true if the parser produced by this code will
 provide support for XML namespaces; false otherwise.
 */
- (void)setNamespaceAwareWithBoolean:(jboolean)awareness;

/*!
 @brief <p>Set the <code>Schema</code> to be used by parsers created
 from this factory.
 </p>
 <p>When a <code>Schema</code> is non-null, a parser will use a validator
 created from it to validate documents before it passes information
 down to the application.</p>
 <p>When warnings/errors/fatal errors are found by the validator, the parser must
 handle them as if those errors were found by the parser itself.
 In other words, if the user-specified <code>org.xml.sax.ErrorHandler</code>
 is set, it must receive those errors, and if not, they must be
 treated according to the implementation specific
 default error handling rules.
 <p>A validator may modify the SAX event stream (for example by
 adding default values that were missing in documents), and a parser
 is responsible to make sure that the application will receive
 those modified event stream.</p>
 <p>Initially, <code>null</code> is set as the <code>Schema</code>.</p>
 <p>This processing will take effect even if
 the <code>isValidating()</code> method returns <code>false</code>.
 <p>It is an error to use
 the <code>http://java.sun.com/xml/jaxp/properties/schemaSource</code>
 property and/or the <code>http://java.sun.com/xml/jaxp/properties/schemaLanguage</code>
 property in conjunction with a non-null <code>Schema</code> object.
 Such configuration will cause a <code>SAXException</code>
 exception when those properties are set on a <code>SAXParser</code>.</p>
 <h4>Note for implementors</h4>
 <p>
 A parser must be able to work with any <code>Schema</code>
 implementation. However, parsers and schemas are allowed
 to use implementation-specific custom mechanisms
 as long as they yield the result described in the specification.
 </p>
 @param schema <code>Schema</code> to use, <code>null</code> to remove a schema.
 @throws UnsupportedOperationException
 For backward compatibility, when implementations for
 earlier versions of JAXP is used, this exception will be
 thrown.
 @since 1.5
 */
- (void)setSchemaWithJavaxXmlValidationSchema:(JavaxXmlValidationSchema *)schema;

/*!
 @brief Specifies that the parser produced by this code will
 validate documents as they are parsed.
 By default the value of this is
 set to <code>false</code>.
 <p>
 Note that "the validation" here means
 <a href="http://www.w3.org/TR/REC-xml#proc-types">a validating
 parser</a> as defined in the XML recommendation.
 In other words, it essentially just controls the DTD validation.
 (except the legacy two properties defined in JAXP 1.2.
 See <a href="#validationCompatibility">here</a> for more details.)
 </p>
 <p>
 To use modern schema languages such as W3C XML Schema or
 RELAX NG instead of DTD, you can configure your parser to be
 a non-validating parser by leaving the <code>setValidating(boolean)</code>
 method <tt>false</tt>, then use the <code>setSchema(Schema)</code>
 method to associate a schema to a parser.
 </p>
 @param validating true if the parser produced by this code will
 validate documents as they are parsed; false otherwise.
 */
- (void)setValidatingWithBoolean:(jboolean)validating;

/*!
 @brief <p>Set state of XInclude processing.
 </p>
 <p>If XInclude markup is found in the document instance, should it be
 processed as specified in <a href="http://www.w3.org/TR/xinclude/">
 XML Inclusions (XInclude) Version 1.0</a>.</p>
 <p>XInclude processing defaults to <code>false</code>.</p>
 @param state Set XInclude processing to <code>true</code> or
 <code>false</code>
 @throws UnsupportedOperationException
 For backward compatibility, when implementations for
 earlier versions of JAXP is used, this exception will be
 thrown.
 @since 1.5
 */
- (void)setXIncludeAwareWithBoolean:(jboolean)state;

#pragma mark Protected

/*!
 @brief <p>Protected constructor to force use of <code>newInstance()</code>.
 </p>
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlParsersSAXParserFactory)

FOUNDATION_EXPORT void JavaxXmlParsersSAXParserFactory_init(JavaxXmlParsersSAXParserFactory *self);

FOUNDATION_EXPORT JavaxXmlParsersSAXParserFactory *JavaxXmlParsersSAXParserFactory_newInstance();

FOUNDATION_EXPORT JavaxXmlParsersSAXParserFactory *JavaxXmlParsersSAXParserFactory_newInstanceWithNSString_withJavaLangClassLoader_(NSString *factoryClassName, JavaLangClassLoader *classLoader);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlParsersSAXParserFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlParsersSAXParserFactory")
