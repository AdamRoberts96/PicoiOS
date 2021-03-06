//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/AVTPartXPath.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesAVTPartXPath")
#ifdef RESTRICT_OrgApacheXalanTemplatesAVTPartXPath
#define INCLUDE_ALL_OrgApacheXalanTemplatesAVTPartXPath 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesAVTPartXPath 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesAVTPartXPath

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesAVTPartXPath_) && (INCLUDE_ALL_OrgApacheXalanTemplatesAVTPartXPath || defined(INCLUDE_OrgApacheXalanTemplatesAVTPartXPath))
#define OrgApacheXalanTemplatesAVTPartXPath_

#define RESTRICT_OrgApacheXalanTemplatesAVTPart 1
#define INCLUDE_OrgApacheXalanTemplatesAVTPart 1
#include "org/apache/xalan/templates/AVTPart.h"

@class JavaUtilVector;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXmlUtilsFastStringBuffer;
@class OrgApacheXpathCompilerXPathParser;
@class OrgApacheXpathXPath;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlUtilsPrefixResolver;
@protocol OrgApacheXpathXPathFactory;

/*!
 @brief Simple string part of a complex AVT.
  internal
 */
@interface OrgApacheXalanTemplatesAVTPartXPath : OrgApacheXalanTemplatesAVTPart

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct a simple AVT part.
 @param val A pure string section of an AVT.
 @param nsNode An object which can be used to determine the
 Namespace Name (URI) for any Namespace prefix used in the XPath. 
 Usually this is based on the context where the XPath was specified,
 such as a node within a Stylesheet.
 @param xpathProcessor XPath parser
 @param factory XPath factory
 @param liaison An XPathContext object, providing infomation specific
 to this invocation and this thread. Maintains SAX output state, 
 variables, error handler and so on, so the transformation/XPath 
 object itself can be simultaneously invoked from multiple threads.
 @throws javax.xml.transform.TransformerException
 TODO: Fix or remove this unused c'tor.
 */
- (instancetype)initWithNSString:(NSString *)val
withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)nsNode
withOrgApacheXpathCompilerXPathParser:(OrgApacheXpathCompilerXPathParser *)xpathProcessor
  withOrgApacheXpathXPathFactory:(id<OrgApacheXpathXPathFactory>)factory
  withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)liaison;

/*!
 @brief Construct a simple AVT part.
 @param xpath Xpath section of AVT
 */
- (instancetype)initWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)xpath;

/*!
 - seealso: XSLTVisitable#callVisitors(XSLTVisitor)
 */
- (void)callVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor;

/*!
 @brief Tell if this expression or it's subexpressions can traverse outside 
 the current subtree.
 @return true if traversal outside the context node's subtree can occur.
 */
- (jboolean)canTraverseOutsideSubtree;

/*!
 @brief Write the value into the buffer.
 @param xctxt An XPathContext object, providing infomation specific
 to this invocation and this thread. Maintains SAX state, variables, 
 error handler and  so on, so the transformation/XPath object itself
 can be simultaneously invoked from multiple threads.
 @param buf Buffer to write into.
 @param context The current source tree context.
 @param nsNode The current namespace context (stylesheet tree context).
 @throws javax.xml.transform.TransformerException
 */
- (void)evaluateWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
         withOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)buf
                                       withInt:(jint)context
           withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)nsNode;

/*!
 @brief This function is used to fixup variables from QNames to stack frame 
 indexes at stylesheet build time.
 @param vars List of QNames that correspond to variables.  This list 
 should be searched backwards for the first qualified name that 
 corresponds to the variable reference qname.  The position of the 
 QName in the vector from the start of the vector will be its position 
 in the stack frame (but variables above the globalsTop value will need 
 to be offset to the current stack frame).
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 @brief Get the AVT part as the original string.
 @return the AVT part as the original string.
 */
- (NSString *)getSimpleString;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesAVTPartXPath)

inline jlong OrgApacheXalanTemplatesAVTPartXPath_get_serialVersionUID();
#define OrgApacheXalanTemplatesAVTPartXPath_serialVersionUID -4460373807550527675LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesAVTPartXPath, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesAVTPartXPath_initWithOrgApacheXpathXPath_(OrgApacheXalanTemplatesAVTPartXPath *self, OrgApacheXpathXPath *xpath);

FOUNDATION_EXPORT OrgApacheXalanTemplatesAVTPartXPath *new_OrgApacheXalanTemplatesAVTPartXPath_initWithOrgApacheXpathXPath_(OrgApacheXpathXPath *xpath) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesAVTPartXPath *create_OrgApacheXalanTemplatesAVTPartXPath_initWithOrgApacheXpathXPath_(OrgApacheXpathXPath *xpath);

FOUNDATION_EXPORT void OrgApacheXalanTemplatesAVTPartXPath_initWithNSString_withOrgApacheXmlUtilsPrefixResolver_withOrgApacheXpathCompilerXPathParser_withOrgApacheXpathXPathFactory_withOrgApacheXpathXPathContext_(OrgApacheXalanTemplatesAVTPartXPath *self, NSString *val, id<OrgApacheXmlUtilsPrefixResolver> nsNode, OrgApacheXpathCompilerXPathParser *xpathProcessor, id<OrgApacheXpathXPathFactory> factory, OrgApacheXpathXPathContext *liaison);

FOUNDATION_EXPORT OrgApacheXalanTemplatesAVTPartXPath *new_OrgApacheXalanTemplatesAVTPartXPath_initWithNSString_withOrgApacheXmlUtilsPrefixResolver_withOrgApacheXpathCompilerXPathParser_withOrgApacheXpathXPathFactory_withOrgApacheXpathXPathContext_(NSString *val, id<OrgApacheXmlUtilsPrefixResolver> nsNode, OrgApacheXpathCompilerXPathParser *xpathProcessor, id<OrgApacheXpathXPathFactory> factory, OrgApacheXpathXPathContext *liaison) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesAVTPartXPath *create_OrgApacheXalanTemplatesAVTPartXPath_initWithNSString_withOrgApacheXmlUtilsPrefixResolver_withOrgApacheXpathCompilerXPathParser_withOrgApacheXpathXPathFactory_withOrgApacheXpathXPathContext_(NSString *val, id<OrgApacheXmlUtilsPrefixResolver> nsNode, OrgApacheXpathCompilerXPathParser *xpathProcessor, id<OrgApacheXpathXPathFactory> factory, OrgApacheXpathXPathContext *liaison);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesAVTPartXPath)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesAVTPartXPath")
