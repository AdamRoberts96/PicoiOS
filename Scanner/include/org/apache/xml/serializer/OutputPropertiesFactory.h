//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/OutputPropertiesFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerOutputPropertiesFactory")
#ifdef RESTRICT_OrgApacheXmlSerializerOutputPropertiesFactory
#define INCLUDE_ALL_OrgApacheXmlSerializerOutputPropertiesFactory 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerOutputPropertiesFactory 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerOutputPropertiesFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerOutputPropertiesFactory_) && (INCLUDE_ALL_OrgApacheXmlSerializerOutputPropertiesFactory || defined(INCLUDE_OrgApacheXmlSerializerOutputPropertiesFactory))
#define OrgApacheXmlSerializerOutputPropertiesFactory_

@class JavaUtilProperties;

/*!
 @brief This class is a factory to generate a set of default properties
 of key/value pairs that are used to create a serializer through the
 factory <code>SerilizerFactory</code>.
 The properties generated by this factory
 may be modified to non-default values before the SerializerFactory is used to
 create a Serializer.
 <p>
 The given output types supported are "xml", "text", and "html". 
 These type strings can be obtained from the 
 <code>Method</code> class in this package.
 <p>
 Other constants defined in this class are the non-standard property keys
 that can be used to set non-standard property values on a java.util.Properties object
 that is used to create or configure a serializer. Here are the non-standard keys:
 <ul>
 <li> <b>S_KEY_INDENT_AMOUNT </b> -
 The non-standard property key to use to set the indentation amount.
 The "indent" key needs to have a value of "yes", and this
 properties value is a the number of whitespaces to indent by per
 indentation level.
 <li> <b>S_KEY_CONTENT_HANDLER </b> -
 This non-standard property key is used to set the name of the fully qualified 
 Java class that implements the ContentHandler interface. 
 The output of the serializer will be SAX events sent to this an
 object of this class.
 <li> <b>S_KEY_ENTITIES </b> -
 This non-standard property key is used to specify the name of the property file
 that specifies character to entity reference mappings. A line in such a
 file is has the name of the entity and the numeric (base 10) value
 of the corresponding character, like this one: <br> quot=34 <br>
 <li> <b>S_USE_URL_ESCAPING </b> -
 This non-standard property key is used to set a value of "yes" if the href values for HTML serialization should
 use %xx escaping.
 <li> <b>S_OMIT_META_TAG </b> -
 This non-standard property key is used to set a value of "yes" if the META tag should be omitted where it would
 otherwise be supplied.
 </ul>
 - seealso: SerializerFactory
 - seealso: Method
 - seealso: Serializer
 */
@interface OrgApacheXmlSerializerOutputPropertiesFactory : NSObject

+ (NSString *)S_BUILTIN_EXTENSIONS_UNIVERSAL;

+ (NSString *)S_KEY_INDENT_AMOUNT;

+ (NSString *)S_KEY_LINE_SEPARATOR;

+ (NSString *)S_KEY_CONTENT_HANDLER;

+ (NSString *)S_KEY_ENTITIES;

+ (NSString *)S_USE_URL_ESCAPING;

+ (NSString *)S_OMIT_META_TAG;

+ (NSString *)S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL;

+ (jint)S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Creates an empty OutputProperties with the property key/value defaults specified by
 a property file.
 The method argument is used to construct a string of
 the form output_[method].properties (for instance, output_html.properties).
 The output_xml.properties file is always used as the base.
 <p>Anything other than 'text', 'xml', and 'html', will
 use the output_xml.properties file.</p>
 @param method non-null reference to method name.
 @return Properties object that holds the defaults for the given method.
 */
+ (JavaUtilProperties *)getDefaultMethodPropertiesWithNSString:(NSString *)method;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerOutputPropertiesFactory)

/*!
 @brief This is not a public API.
 This is the built-in extensions namespace, 
 reexpressed in {namespaceURI} syntax
 suitable for prepending to a localname to produce a "universal
 name".
 */
inline NSString *OrgApacheXmlSerializerOutputPropertiesFactory_get_S_BUILTIN_EXTENSIONS_UNIVERSAL();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerOutputPropertiesFactory_S_BUILTIN_EXTENSIONS_UNIVERSAL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerOutputPropertiesFactory, S_BUILTIN_EXTENSIONS_UNIVERSAL, NSString *)

/*!
 @brief The non-standard property key to use to set the
 number of whitepaces to indent by, per indentation level,
 if indent="yes".
 */
inline NSString *OrgApacheXmlSerializerOutputPropertiesFactory_get_S_KEY_INDENT_AMOUNT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerOutputPropertiesFactory_S_KEY_INDENT_AMOUNT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerOutputPropertiesFactory, S_KEY_INDENT_AMOUNT, NSString *)

/*!
 @brief The non-standard property key to use to set the
 characters to write out as at the end of a line,
 rather than the default ones from the runtime.
 */
inline NSString *OrgApacheXmlSerializerOutputPropertiesFactory_get_S_KEY_LINE_SEPARATOR();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerOutputPropertiesFactory_S_KEY_LINE_SEPARATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerOutputPropertiesFactory, S_KEY_LINE_SEPARATOR, NSString *)

/*!
 @brief This non-standard property key is used to set the name of the fully qualified 
 Java class that implements the ContentHandler interface.
 Fully qualified name of class with a default constructor that
 implements the ContentHandler interface, where the result tree events
 will be sent to.
 */
inline NSString *OrgApacheXmlSerializerOutputPropertiesFactory_get_S_KEY_CONTENT_HANDLER();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerOutputPropertiesFactory_S_KEY_CONTENT_HANDLER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerOutputPropertiesFactory, S_KEY_CONTENT_HANDLER, NSString *)

/*!
 @brief This non-standard property key is used to specify the name of the property file
 that specifies character to entity reference mappings.
 */
inline NSString *OrgApacheXmlSerializerOutputPropertiesFactory_get_S_KEY_ENTITIES();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerOutputPropertiesFactory_S_KEY_ENTITIES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerOutputPropertiesFactory, S_KEY_ENTITIES, NSString *)

/*!
 @brief This non-standard property key is used to set a value of "yes" if the href values for HTML serialization should
 use %xx escaping.
 */
inline NSString *OrgApacheXmlSerializerOutputPropertiesFactory_get_S_USE_URL_ESCAPING();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerOutputPropertiesFactory_S_USE_URL_ESCAPING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerOutputPropertiesFactory, S_USE_URL_ESCAPING, NSString *)

/*!
 @brief This non-standard property key is used to set a value of "yes" if the META tag should be omitted where it would
 otherwise be supplied.
 */
inline NSString *OrgApacheXmlSerializerOutputPropertiesFactory_get_S_OMIT_META_TAG();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerOutputPropertiesFactory_S_OMIT_META_TAG;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerOutputPropertiesFactory, S_OMIT_META_TAG, NSString *)

/*!
 @brief The old built-in extension namespace, this is not a public API.
 */
inline NSString *OrgApacheXmlSerializerOutputPropertiesFactory_get_S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerOutputPropertiesFactory_S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerOutputPropertiesFactory, S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL, NSString *)

/*!
 @brief This is not a public API, it is only public because it is used
 by outside of this package,
 it is the length of the old built-in extension namespace.
 */
inline jint OrgApacheXmlSerializerOutputPropertiesFactory_get_S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint OrgApacheXmlSerializerOutputPropertiesFactory_S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN;
J2OBJC_STATIC_FIELD_PRIMITIVE_FINAL(OrgApacheXmlSerializerOutputPropertiesFactory, S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN, jint)

FOUNDATION_EXPORT void OrgApacheXmlSerializerOutputPropertiesFactory_init(OrgApacheXmlSerializerOutputPropertiesFactory *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerOutputPropertiesFactory *new_OrgApacheXmlSerializerOutputPropertiesFactory_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerOutputPropertiesFactory *create_OrgApacheXmlSerializerOutputPropertiesFactory_init();

FOUNDATION_EXPORT JavaUtilProperties *OrgApacheXmlSerializerOutputPropertiesFactory_getDefaultMethodPropertiesWithNSString_(NSString *method);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerOutputPropertiesFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerOutputPropertiesFactory")
