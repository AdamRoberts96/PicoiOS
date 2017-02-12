//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/DTMNodeProxy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeProxy")
#ifdef RESTRICT_OrgApacheXmlDtmRefDTMNodeProxy
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeProxy 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeProxy 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDTMNodeProxy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefDTMNodeProxy_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeProxy || defined(INCLUDE_OrgApacheXmlDtmRefDTMNodeProxy))
#define OrgApacheXmlDtmRefDTMNodeProxy_

#define RESTRICT_OrgW3cDomNode 1
#define INCLUDE_OrgW3cDomNode 1
#include "org/w3c/dom/Node.h"

#define RESTRICT_OrgW3cDomDocument 1
#define INCLUDE_OrgW3cDomDocument 1
#include "org/w3c/dom/Document.h"

#define RESTRICT_OrgW3cDomText 1
#define INCLUDE_OrgW3cDomText 1
#include "org/w3c/dom/Text.h"

#define RESTRICT_OrgW3cDomElement 1
#define INCLUDE_OrgW3cDomElement 1
#include "org/w3c/dom/Element.h"

#define RESTRICT_OrgW3cDomAttr 1
#define INCLUDE_OrgW3cDomAttr 1
#include "org/w3c/dom/Attr.h"

#define RESTRICT_OrgW3cDomProcessingInstruction 1
#define INCLUDE_OrgW3cDomProcessingInstruction 1
#include "org/w3c/dom/ProcessingInstruction.h"

#define RESTRICT_OrgW3cDomComment 1
#define INCLUDE_OrgW3cDomComment 1
#include "org/w3c/dom/Comment.h"

#define RESTRICT_OrgW3cDomDocumentFragment 1
#define INCLUDE_OrgW3cDomDocumentFragment 1
#include "org/w3c/dom/DocumentFragment.h"

@protocol OrgApacheXmlDtmDTM;
@protocol OrgW3cDomCDATASection;
@protocol OrgW3cDomDOMConfiguration;
@protocol OrgW3cDomDOMImplementation;
@protocol OrgW3cDomDocumentType;
@protocol OrgW3cDomEntityReference;
@protocol OrgW3cDomNamedNodeMap;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomTypeInfo;
@protocol OrgW3cDomUserDataHandler;

/*!
 @brief <code>DTMNodeProxy</code> presents a DOM Node API front-end to the DTM model.
 <p>
 It does _not_ attempt to address the "node identity" question; no effort
 is made to prevent the creation of multiple proxies referring to a single
 DTM node. Users can create a mechanism for managing this, or relinquish the
 use of "==" and use the .sameNodeAs() mechanism, which is under
 consideration for future versions of the DOM.
 <p>
 DTMNodeProxy may be subclassed further to present specific DOM node types.
 - seealso: org.w3c.dom
  internal
 */
@interface OrgApacheXmlDtmRefDTMNodeProxy : NSObject < OrgW3cDomNode, OrgW3cDomDocument, OrgW3cDomText, OrgW3cDomElement, OrgW3cDomAttr, OrgW3cDomProcessingInstruction, OrgW3cDomComment, OrgW3cDomDocumentFragment > {
 @public
  /*!
   @brief The DTM for this node.
   */
  id<OrgApacheXmlDtmDTM> dtm_;
  /*!
   @brief The DTM node handle.
   */
  jint node_;
  /*!
   @brief DOM Level 3 feature: documentURI
   */
  NSString *fDocumentURI_;
  /*!
   @brief DOM Level 3 feature: Document actualEncoding
   */
  NSString *actualEncoding_;
}

+ (id<OrgW3cDomDOMImplementation>)implementation;

#pragma mark Public

/*!
 @brief Create a DTMNodeProxy Node representing a specific Node in a DTM
 @param dtm The DTM Reference, must be non-null.
 @param node The DTM node handle.
 */
- (instancetype)initWithOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm
                                   withInt:(jint)node;

/*!
 @brief NEEDSDOC Method adoptNode 
 NEEDSDOC @@param source
 @throws DOMException
 */
- (id<OrgW3cDomNode>)adoptNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)source;

/*!
 @param newChild
 @throws DOMException
 - seealso: org.w3c.dom.Node -- DTMNodeProxy is read-only
 */
- (id<OrgW3cDomNode>)appendChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild;

/*!
 @param arg
 @throws DOMException
 - seealso: org.w3c.dom.CharacterData
 */
- (void)appendDataWithNSString:(NSString *)arg;

/*!
 @param deep
 - seealso: org.w3c.dom.Node -- DTMNodeProxy is read-only
 */
- (id<OrgW3cDomNode>)cloneNodeWithBoolean:(jboolean)deep;

/*!
 @brief Compares a node with this node with regard to their position in the
 document.
 @param other The node to compare against this node.
 @return Returns how the given node is positioned relatively to this
 node.
 @since DOM Level 3
 */
- (jshort)compareDocumentPositionWithOrgW3cDomNode:(id<OrgW3cDomNode>)other;

/*!
 @param name
 @throws DOMException
 - seealso: org.w3c.dom.Document
 */
- (id<OrgW3cDomAttr>)createAttributeWithNSString:(NSString *)name;

/*!
 @param namespaceURI
 @param qualifiedName
 @throws DOMException
 - seealso: org.w3c.dom.Document as of DOM Level 2
 */
- (id<OrgW3cDomAttr>)createAttributeNSWithNSString:(NSString *)namespaceURI
                                      withNSString:(NSString *)qualifiedName;

/*!
 @param data
 @throws DOMException
 - seealso: org.w3c.dom.Document
 */
- (id<OrgW3cDomCDATASection>)createCDATASectionWithNSString:(NSString *)data;

/*!
 @param data
 - seealso: org.w3c.dom.Document
 */
- (id<OrgW3cDomComment>)createCommentWithNSString:(NSString *)data;

/*!
 - seealso: org.w3c.dom.Document
 */
- (id<OrgW3cDomDocumentFragment>)createDocumentFragment;

/*!
 @param tagName
 @throws DOMException
 - seealso: org.w3c.dom.Document
 */
- (id<OrgW3cDomElement>)createElementWithNSString:(NSString *)tagName;

/*!
 @param namespaceURI
 @param qualifiedName
 @throws DOMException
 - seealso: org.w3c.dom.Document as of DOM Level 2
 */
- (id<OrgW3cDomElement>)createElementNSWithNSString:(NSString *)namespaceURI
                                       withNSString:(NSString *)qualifiedName;

/*!
 @param name
 @throws DOMException
 - seealso: org.w3c.dom.Document
 */
- (id<OrgW3cDomEntityReference>)createEntityReferenceWithNSString:(NSString *)name;

/*!
 @param target
 @param data
 @throws DOMException
 - seealso: org.w3c.dom.Document
 */
- (id<OrgW3cDomProcessingInstruction>)createProcessingInstructionWithNSString:(NSString *)target
                                                                 withNSString:(NSString *)data;

/*!
 @param data
 - seealso: org.w3c.dom.Document
 */
- (id<OrgW3cDomText>)createTextNodeWithNSString:(NSString *)data;

/*!
 @param offset
 @param count
 @throws DOMException
 - seealso: org.w3c.dom.CharacterData
 */
- (void)deleteDataWithInt:(jint)offset
                  withInt:(jint)count;

/*!
 @brief Test for equality based on node number.
 @param node A DTM node proxy reference.
 @return true if the given node has the same handle as this node.
 */
- (jboolean)equalsWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief Test for equality based on node number.
 @param node A DTM node proxy reference.
 @return true if the given node has the same handle as this node.
 */
- (jboolean)isEqual:(id)node;

/*!
 @brief DOM Level 3
 An attribute specifying the actual encoding of this document.
 This is
 <code>null</code> otherwise.
 <br> This attribute represents the property [character encoding scheme]
 defined in .
 @since DOM Level 3
 */
- (NSString *)getActualEncoding;

/*!
 @param name
 - seealso: org.w3c.dom.Element
 */
- (NSString *)getAttributeWithNSString:(NSString *)name;

/*!
 @param name
 - seealso: org.w3c.dom.Element
 */
- (id<OrgW3cDomAttr>)getAttributeNodeWithNSString:(NSString *)name;

/*!
 @param namespaceURI
 @param localName
 - seealso: org.w3c.dom.Element
 */
- (id<OrgW3cDomAttr>)getAttributeNodeNSWithNSString:(NSString *)namespaceURI
                                       withNSString:(NSString *)localName;

/*!
 @param namespaceURI
 @param localName
 - seealso: org.w3c.dom.Element
 */
- (NSString *)getAttributeNSWithNSString:(NSString *)namespaceURI
                            withNSString:(NSString *)localName;

/*!
 - seealso: org.w3c.dom.Node
 */
- (id<OrgW3cDomNamedNodeMap>)getAttributes;

/*!
 @brief The absolute base URI of this node or <code>null</code> if undefined.
 This value is computed according to . However, when the
 <code>Document</code> supports the feature "HTML" , the base URI is
 computed using first the value of the href attribute of the HTML BASE
 element if any, and the value of the <code>documentURI</code>
 attribute from the <code>Document</code> interface otherwise.
 <br> When the node is an <code>Element</code>, a <code>Document</code>
 or a a <code>ProcessingInstruction</code>, this attribute represents
 the properties [base URI] defined in . When the node is a
 <code>Notation</code>, an <code>Entity</code>, or an
 <code>EntityReference</code>, this attribute represents the
 properties [declaration base URI] in the . How will this be affected
 by resolution of relative namespace URIs issue?It's not.Should this
 only be on Document, Element, ProcessingInstruction, Entity, and
 Notation nodes, according to the infoset? If not, what is it equal to
 on other nodes? Null? An empty string? I think it should be the
 parent's.No.Should this be read-only and computed or and actual
 read-write attribute?Read-only and computed (F2F 19 Jun 2000 and
 teleconference 30 May 2001).If the base HTML element is not yet
 attached to a document, does the insert change the Document.baseURI?
 Yes. (F2F 26 Sep 2001)
 @since DOM Level 3
 */
- (NSString *)getBaseURI;

/*!
 - seealso: org.w3c.dom.Node
 */
- (id<OrgW3cDomNodeList>)getChildNodes;

/*!
 @throws DOMException
 - seealso: org.w3c.dom.CharacterData
 */
- (NSString *)getData;

/*!
 - seealso: org.w3c.dom.Document
 */
- (id<OrgW3cDomDocumentType>)getDoctype;

/*!
 @brief This is a bit of a problem in DTM, since a DTM may be a Document
 Fragment and hence not have a clear-cut Document Element.
 We can
 make it work in the well-formed cases but would that be confusing for others?
 - seealso: org.w3c.dom.Document
 */
- (id<OrgW3cDomElement>)getDocumentElement;

/*!
 @brief DOM Level 3
 The location of the document or <code>null</code> if undefined.
 <br>Beware that when the <code>Document</code> supports the feature
 "HTML" , the href attribute of the HTML BASE element takes precedence
 over this attribute.
 @since DOM Level 3
 */
- (NSString *)getDocumentURI;

/*!
 @brief The configuration used when <code>Document.normalizeDocument</code> is
 invoked.
 @since DOM Level 3
 */
- (id<OrgW3cDomDOMConfiguration>)getDomConfig;

/*!
 @brief NON-DOM: Return the DTM model
 @return The DTM that this proxy is a representative for.
 */
- (id<OrgApacheXmlDtmDTM>)getDTM;

/*!
 @brief NON-DOM: Return the DTM node number
 @return The DTM node handle.
 */
- (jint)getDTMNodeNumber;

/*!
 @param elementId
 - seealso: org.w3c.dom.Document as of DOM Level 2
 */
- (id<OrgW3cDomElement>)getElementByIdWithNSString:(NSString *)elementId;

/*!
 @param tagname
 - seealso: org.w3c.dom.Document
 */
- (id<OrgW3cDomNodeList>)getElementsByTagNameWithNSString:(NSString *)tagname;

/*!
 @param namespaceURI
 @param localName
 - seealso: org.w3c.dom.Document as of DOM Level 2
 */
- (id<OrgW3cDomNodeList>)getElementsByTagNameNSWithNSString:(NSString *)namespaceURI
                                               withNSString:(NSString *)localName;

/*!
 @brief This method returns a specialized object which implements the
 specialized APIs of the specified feature and version.
 The
 specialized object may also be obtained by using binding-specific
 casting methods but is not necessarily expected to, as discussed in Mixed DOM implementations.
 @param feature The name of the feature requested (case-insensitive).
 @param version_  This is the version number of the feature to test. If
 the version is <code>null</code> or the empty string, supporting
 any version of the feature will cause the method to return an
 object that supports at least one version of the feature.
 @return Returns an object which implements the specialized APIs of
 the specified feature and version, if any, or <code>null</code> if
 there is no object which implements interfaces associated with that
 feature. If the <code>DOMObject</code> returned by this method
 implements the <code>Node</code> interface, it must delegate to the
 primary core <code>Node</code> and not return results inconsistent
 with the primary core <code>Node</code> such as attributes,
 childNodes, etc.
 @since DOM Level 3
 */
- (id)getFeatureWithNSString:(NSString *)feature
                withNSString:(NSString *)version_;

/*!
 - seealso: org.w3c.dom.Node
 */
- (id<OrgW3cDomNode>)getFirstChild;

/*!
 - seealso: org.w3c.dom.Document
 */
- (id<OrgW3cDomDOMImplementation>)getImplementation;

/*!
 @brief <p>Based on the <a
 href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document
 Object Model (DOM) Level 3 Core Specification of 07 April 2004.
 </a>.
 <p>
 An attribute specifying, as part of the XML declaration, the encoding
 of this document. This is <code>null</code> when unspecified.
 @since DOM Level 3
 */
- (NSString *)getInputEncoding;

/*!
 - seealso: org.w3c.dom.Node
 */
- (id<OrgW3cDomNode>)getLastChild;

/*!
 - seealso: org.w3c.dom.CharacterData
 */
- (jint)getLength;

/*!
 - seealso: org.w3c.dom.Node as of DOM Level 2
 */
- (NSString *)getLocalName;

/*!
 - seealso: org.w3c.dom.Attr
 */
- (NSString *)getName;

/*!
 - seealso: org.w3c.dom.Node as of DOM Level 2
 */
- (NSString *)getNamespaceURI;

/*!
 - seealso: org.w3c.dom.Node
 */
- (id<OrgW3cDomNode>)getNextSibling;

/*!
 - seealso: org.w3c.dom.Node
 */
- (NSString *)getNodeName;

/*!
 - seealso: org.w3c.dom.Node
 */
- (jshort)getNodeType;

/*!
 @throws DOMException
 - seealso: org.w3c.dom.Node
 */
- (NSString *)getNodeValue;

/*!
 - seealso: org.w3c.dom.Node
 */
- (id<OrgW3cDomDocument>)getOwnerDocument;

/*!
 @brief Get the owner element of an attribute.
 - seealso: org.w3c.dom.Attr as of DOM Level 2
 */
- (id<OrgW3cDomElement>)getOwnerElement;

/*!
 - seealso: org.w3c.dom.Node
 */
- (id<OrgW3cDomNode>)getOwnerNode;

/*!
 - seealso: org.w3c.dom.Node
 */
- (id<OrgW3cDomNode>)getParentNode;

/*!
 @return The prefix for this node.
 - seealso: org.w3c.dom.Node as of DOM Level 2
 */
- (NSString *)getPrefix;

/*!
 - seealso: org.w3c.dom.Node
 */
- (id<OrgW3cDomNode>)getPreviousSibling;

- (id<OrgW3cDomTypeInfo>)getSchemaTypeInfo;

/*!
 - seealso: org.w3c.dom.Attr
 */
- (jboolean)getSpecified;

/*!
 @brief <p>Based on the <a
 href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document
 Object Model (DOM) Level 3 Core Specification of 07 April 2004.
 </a>.
 <p>
 An attribute specifying whether errors checking is enforced or not.
 When set to <code>false</code>, the implementation is free to not
 test every possible error case normally defined on DOM operations,
 and not raise any <code>DOMException</code>. In case of error, the
 behavior is undefined. This attribute is <code>true</code> by
 defaults.
 @since DOM Level 3
 */
- (jboolean)getStrictErrorChecking;

/*!
 @return The string value of the node
 @throws DOMException
 */
- (NSString *)getStringValue;

/*!
 - seealso: org.w3c.dom.Element
 */
- (NSString *)getTagName;

/*!
 @brief A PI's "target" states what processor channel the PI's data
 should be directed to.
 It is defined differently in HTML and XML.
 <p>
 In XML, a PI's "target" is the first (whitespace-delimited) token
 following the "<?" token that begins the PI.
 <p>
 In HTML, target is always null.
 <p>
 Note that getNodeName is aliased to getTarget.
 */
- (NSString *)getTarget;

/*!
 @brief This attribute returns the text content of this node and its
 descendants.
 When it is defined to be null, setting it has no effect.
 When set, any possible children this node may have are removed and
 replaced by a single <code>Text</code> node containing the string
 this attribute is set to. On getting, no serialization is performed,
 the returned string does not contain any markup. No whitespace
 normalization is performed, the returned string does not contain the
 element content whitespaces . Similarly, on setting, no parsing is
 performed either, the input string is taken as pure textual content.
 <br>The string returned is made of the text content of this node
 depending on its type, as defined below:
 <table border='1'>
 <tr>
 <th>Node type</th>
 <th>Content</th>
 </tr>
 <tr>
 <td valign='top' rowspan='1' colspan='1'>
 ELEMENT_NODE, ENTITY_NODE, ENTITY_REFERENCE_NODE,
 DOCUMENT_FRAGMENT_NODE</td>
 <td valign='top' rowspan='1' colspan='1'>concatenation of the <code>textContent</code>
 attribute value of every child node, excluding COMMENT_NODE and
 PROCESSING_INSTRUCTION_NODE nodes</td>
 </tr>
 <tr>
 <td valign='top' rowspan='1' colspan='1'>ATTRIBUTE_NODE, TEXT_NODE,
 CDATA_SECTION_NODE, COMMENT_NODE, PROCESSING_INSTRUCTION_NODE</td>
 <td valign='top' rowspan='1' colspan='1'>
 <code>nodeValue</code></td>
 </tr>
 <tr>
 <td valign='top' rowspan='1' colspan='1'>DOCUMENT_NODE, DOCUMENT_TYPE_NODE, NOTATION_NODE</td>
 <td valign='top' rowspan='1' colspan='1'>
 null</td>
 </tr>
 </table>
 @exception DOMException
 NO_MODIFICATION_ALLOWED_ERR: Raised when the node is readonly.
 @exception DOMException
 DOMSTRING_SIZE_ERR: Raised when it would return more characters than
 fit in a <code>DOMString</code> variable on the implementation
 platform.
 @since DOM Level 3
 */
- (NSString *)getTextContent;

/*!
 @brief Retrieves the object associated to a key on a this node.
 The object
 must first have been set to this node by calling
 <code>setUserData</code> with the same key.
 @param key The key the object is associated to.
 @return Returns the <code>DOMObject</code> associated to the given key
 on this node, or <code>null</code> if there was none.
 @since DOM Level 3
 */
- (id)getUserDataWithNSString:(NSString *)key;

/*!
 - seealso: org.w3c.dom.Attr
 */
- (NSString *)getValue;

/*!
 @brief DOM Level 3
 Returns all text of <code>Text</code> nodes logically-adjacent text
 nodes to this node, concatenated in document order.
 @since DOM Level 3
 */
- (NSString *)getWholeText;

- (NSString *)getXmlEncoding;

- (jboolean)getXmlStandalone;

- (NSString *)getXmlVersion;

/*!
 @brief Method hasAttribute
 @param name
 */
- (jboolean)hasAttributeWithNSString:(NSString *)name;

/*!
 @brief Method hasAttributeNS
 @param namespaceURI
 @param localName
 */
- (jboolean)hasAttributeNSWithNSString:(NSString *)namespaceURI
                          withNSString:(NSString *)localName;

/*!
 @brief Introduced in DOM Level 2.
 */
- (jboolean)hasAttributes;

/*!
 - seealso: org.w3c.dom.Node
 */
- (jboolean)hasChildNodes;

/*!
 @param importedNode
 @param deep
 @throws DOMException
 - seealso: org.w3c.dom.Document as of DOM Level 2 -- DTMNodeProxy is read-only
 */
- (id<OrgW3cDomNode>)importNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)importedNode
                                     withBoolean:(jboolean)deep;

/*!
 @param newChild
 @param refChild
 @throws DOMException
 - seealso: org.w3c.dom.Node -- DTMNodeProxy is read-only
 */
- (id<OrgW3cDomNode>)insertBeforeWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)refChild;

/*!
 @param offset
 @param arg
 @throws DOMException
 - seealso: org.w3c.dom.CharacterData
 */
- (void)insertDataWithInt:(jint)offset
             withNSString:(NSString *)arg;

/*!
 @brief DOM Level 3:
 This method checks if the specified <code>namespaceURI</code> is the
 default namespace or not.
 @param namespaceURI The namespace URI to look for.
 @return <code>true</code> if the specified <code>namespaceURI</code>
 is the default namespace, <code>false</code> otherwise.
 @since DOM Level 3
 */
- (jboolean)isDefaultNamespaceWithNSString:(NSString *)namespaceURI;

/*!
 @brief DOM Level 3
 Returns whether this text node contains whitespace in element content,
 often abusively called "ignorable whitespace".
 */
- (jboolean)isElementContentWhitespace;

/*!
 @brief Tests whether two nodes are equal.
 <br>This method tests for equality of nodes, not sameness (i.e.,
 whether the two nodes are references to the same object) which can be
 tested with <code>Node.isSameNode</code>. All nodes that are the same
 will also be equal, though the reverse may not be true.
 <br>Two nodes are equal if and only if the following conditions are
 satisfied: The two nodes are of the same type.The following string
 attributes are equal: <code>nodeName</code>, <code>localName</code>,
 <code>namespaceURI</code>, <code>prefix</code>, <code>nodeValue</code>
 , <code>baseURI</code>. This is: they are both <code>null</code>, or
 they have the same length and are character for character identical.
 The <code>attributes</code> <code>NamedNodeMaps</code> are equal.
 This is: they are both <code>null</code>, or they have the same
 length and for each node that exists in one map there is a node that
 exists in the other map and is equal, although not necessarily at the
 same index.The <code>childNodes</code> <code>NodeLists</code> are
 equal. This is: they are both <code>null</code>, or they have the
 same length and contain equal nodes at the same index. This is true
 for <code>Attr</code> nodes as for any other type of node. Note that
 normalization can affect equality; to avoid this, nodes should be
 normalized before being compared.
 <br>For two <code>DocumentType</code> nodes to be equal, the following
 conditions must also be satisfied: The following string attributes
 are equal: <code>publicId</code>, <code>systemId</code>,
 <code>internalSubset</code>.The <code>entities</code>
 <code>NamedNodeMaps</code> are equal.The <code>notations</code>
 <code>NamedNodeMaps</code> are equal.
 <br>On the other hand, the following do not affect equality: the
 <code>ownerDocument</code> attribute, the <code>specified</code>
 attribute for <code>Attr</code> nodes, the
 <code>isWhitespaceInElementContent</code> attribute for
 <code>Text</code> nodes, as well as any user data or event listeners
 registered on the nodes.
 @param arg The node to compare equality with.
 @param deep If <code>true</code>, recursively compare the subtrees; if
 <code>false</code>, compare only the nodes themselves (and its
 attributes, if it is an <code>Element</code>).
 @return If the nodes, and possibly subtrees are equal,
 <code>true</code> otherwise <code>false</code>.
 @since DOM Level 3
 */
- (jboolean)isEqualNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)arg;

- (jboolean)isId;

/*!
 @brief Returns whether this node is the same node as the given one.
 <br>This method provides a way to determine whether two
 <code>Node</code> references returned by the implementation reference
 the same object. When two <code>Node</code> references are references
 to the same object, even if through a proxy, the references may be
 used completely interchangably, such that all attributes have the
 same values and calling the same DOM method on either reference
 always has exactly the same effect.
 @param other The node to test against.
 @return Returns <code>true</code> if the nodes are the same,
 <code>false</code> otherwise.
 @since DOM Level 3
 */
- (jboolean)isSameNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)other;

/*!
 @brief Ask whether we support a given DOM feature.
 In fact, we do not _fully_ support any DOM feature -- we're a
 read-only subset -- so arguably we should always return false.
 @param feature
 @param version_
 @return false
 - seealso: org.w3c.dom.Node as of DOM Level 2
 */
- (jboolean)isSupportedWithNSString:(NSString *)feature
                       withNSString:(NSString *)version_;

/*!
 @brief DOM Level 3:
 Look up the namespace URI associated to the given prefix, starting from this node.
 Use lookupNamespaceURI(null) to lookup the default namespace
 @param namespaceURI
 @return th URI for the namespace
 @since DOM Level 3
 */
- (NSString *)lookupNamespaceURIWithNSString:(NSString *)specifiedPrefix;

/*!
 @brief DOM Level 3:
 Look up the prefix associated to the given namespace URI, starting from this node.
 @param namespaceURI
 @return the prefix for the namespace
 */
- (NSString *)lookupPrefixWithNSString:(NSString *)namespaceURI;

/*!
 - seealso: org.w3c.dom.Element
 */
- (void)normalize;

/*!
 @brief DOM Level 3
 Normalize document.
 */
- (void)normalizeDocument;

/*!
 @param name
 @throws DOMException
 - seealso: org.w3c.dom.Element
 */
- (void)removeAttributeWithNSString:(NSString *)name;

/*!
 @param oldAttr
 @throws DOMException
 - seealso: org.w3c.dom.Element
 */
- (id<OrgW3cDomAttr>)removeAttributeNodeWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)oldAttr;

/*!
 @param namespaceURI
 @param localName
 @throws DOMException
 - seealso: org.w3c.dom.Element
 */
- (void)removeAttributeNSWithNSString:(NSString *)namespaceURI
                         withNSString:(NSString *)localName;

/*!
 @param oldChild
 @throws DOMException
 - seealso: org.w3c.dom.Node -- DTMNodeProxy is read-only
 */
- (id<OrgW3cDomNode>)removeChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)oldChild;

/*!
 @brief DOM Level 3
 Renaming node
 */
- (id<OrgW3cDomNode>)renameNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n
                                    withNSString:(NSString *)namespaceURI
                                    withNSString:(NSString *)name;

/*!
 @param newChild
 @param oldChild
 @throws DOMException
 - seealso: org.w3c.dom.Node -- DTMNodeProxy is read-only
 */
- (id<OrgW3cDomNode>)replaceChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)oldChild;

/*!
 @param offset
 @param count
 @param arg
 @throws DOMException
 - seealso: org.w3c.dom.CharacterData
 */
- (void)replaceDataWithInt:(jint)offset
                   withInt:(jint)count
              withNSString:(NSString *)arg;

/*!
 @brief DOM Level 3
 */
- (id<OrgW3cDomText>)replaceWholeTextWithNSString:(NSString *)content;

/*!
 @brief FUTURE DOM: Test node identity, in lieu of Node==Node
 @param other
 @return true if the given node has the same handle as this node.
 */
- (jboolean)sameNodeAsWithOrgW3cDomNode:(id<OrgW3cDomNode>)other;

/*!
 @brief DOM Level 3
 An attribute specifying the actual encoding of this document.
 This is
 <code>null</code> otherwise.
 <br> This attribute represents the property [character encoding scheme]
 defined in .
 @since DOM Level 3
 */
- (void)setActualEncodingWithNSString:(NSString *)value;

/*!
 @param name
 @param value
 @throws DOMException
 - seealso: org.w3c.dom.Element
 */
- (void)setAttributeWithNSString:(NSString *)name
                    withNSString:(NSString *)value;

/*!
 @param newAttr
 @throws DOMException
 - seealso: org.w3c.dom.Element
 */
- (id<OrgW3cDomAttr>)setAttributeNodeWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)newAttr;

/*!
 @param newAttr
 @throws DOMException
 - seealso: org.w3c.dom.Element
 */
- (id<OrgW3cDomAttr>)setAttributeNodeNSWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)newAttr;

/*!
 @param namespaceURI
 @param qualifiedName
 @param value
 @throws DOMException
 - seealso: org.w3c.dom.Element
 */
- (void)setAttributeNSWithNSString:(NSString *)namespaceURI
                      withNSString:(NSString *)qualifiedName
                      withNSString:(NSString *)value;

/*!
 @param data
 @throws DOMException
 - seealso: org.w3c.dom.CharacterData
 */
- (void)setDataWithNSString:(NSString *)data;

/*!
 @brief DOM Level 3
 */
- (void)setDocumentURIWithNSString:(NSString *)documentURI;

/*!
 @brief NON-DOM: set the type of this attribute to be ID type.
 @param id_
 */
- (void)setIdAttributeWithBoolean:(jboolean)id_;

/*!
 @brief DOM Level 3: register the given attribute node as an ID attribute
 */
- (void)setIdAttributeWithNSString:(NSString *)name
                       withBoolean:(jboolean)makeId;

/*!
 @brief DOM Level 3: register the given attribute node as an ID attribute
 */
- (void)setIdAttributeNodeWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)at
                                withBoolean:(jboolean)makeId;

/*!
 @brief DOM Level 3: register the given attribute node as an ID attribute
 */
- (void)setIdAttributeNSWithNSString:(NSString *)namespaceURI
                        withNSString:(NSString *)localName
                         withBoolean:(jboolean)makeId;

/*!
 @param nodeValue
 @throws DOMException
 - seealso: org.w3c.dom.Node -- DTMNodeProxy is read-only
 */
- (void)setNodeValueWithNSString:(NSString *)nodeValue;

/*!
 @param prefix
 @throws DOMException
 - seealso: org.w3c.dom.Node as of DOM Level 2 -- DTMNodeProxy is read-only
 */
- (void)setPrefixWithNSString:(NSString *)prefix;

/*!
 @brief <p>Based on the <a
 href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document
 Object Model (DOM) Level 3 Core Specification of 07 April 2004.
 </a>.
 <p>
 An attribute specifying whether errors checking is enforced or not.
 When set to <code>false</code>, the implementation is free to not
 test every possible error case normally defined on DOM operations,
 and not raise any <code>DOMException</code>. In case of error, the
 behavior is undefined. This attribute is <code>true</code> by
 defaults.
 @since DOM Level 3
 NEEDSDOC @@param strictErrorChecking
 */
- (void)setStrictErrorCheckingWithBoolean:(jboolean)strictErrorChecking;

/*!
 @brief This attribute returns the text content of this node and its
 descendants.
 When it is defined to be null, setting it has no effect.
 When set, any possible children this node may have are removed and
 replaced by a single <code>Text</code> node containing the string
 this attribute is set to. On getting, no serialization is performed,
 the returned string does not contain any markup. No whitespace
 normalization is performed, the returned string does not contain the
 element content whitespaces . Similarly, on setting, no parsing is
 performed either, the input string is taken as pure textual content.
 <br>The string returned is made of the text content of this node
 depending on its type, as defined below:
 <table border='1'>
 <tr>
 <th>Node type</th>
 <th>Content</th>
 </tr>
 <tr>
 <td valign='top' rowspan='1' colspan='1'>
 ELEMENT_NODE, ENTITY_NODE, ENTITY_REFERENCE_NODE,
 DOCUMENT_FRAGMENT_NODE</td>
 <td valign='top' rowspan='1' colspan='1'>concatenation of the <code>textContent</code>
 attribute value of every child node, excluding COMMENT_NODE and
 PROCESSING_INSTRUCTION_NODE nodes</td>
 </tr>
 <tr>
 <td valign='top' rowspan='1' colspan='1'>ATTRIBUTE_NODE, TEXT_NODE,
 CDATA_SECTION_NODE, COMMENT_NODE, PROCESSING_INSTRUCTION_NODE</td>
 <td valign='top' rowspan='1' colspan='1'>
 <code>nodeValue</code></td>
 </tr>
 <tr>
 <td valign='top' rowspan='1' colspan='1'>DOCUMENT_NODE, DOCUMENT_TYPE_NODE, NOTATION_NODE</td>
 <td valign='top' rowspan='1' colspan='1'>
 null</td>
 </tr>
 </table>
 @exception DOMException
 NO_MODIFICATION_ALLOWED_ERR: Raised when the node is readonly.
 @exception DOMException
 DOMSTRING_SIZE_ERR: Raised when it would return more characters than
 fit in a <code>DOMString</code> variable on the implementation
 platform.
 @since DOM Level 3
 */
- (void)setTextContentWithNSString:(NSString *)textContent;

- (id)setUserDataWithNSString:(NSString *)key
                       withId:(id)data
 withOrgW3cDomUserDataHandler:(id<OrgW3cDomUserDataHandler>)handler;

/*!
 @param value
 - seealso: org.w3c.dom.Attr
 */
- (void)setValueWithNSString:(NSString *)value;

- (void)setXmlEncodingWithNSString:(NSString *)xmlEncoding;

- (void)setXmlStandaloneWithBoolean:(jboolean)xmlStandalone;

- (void)setXmlVersionWithNSString:(NSString *)xmlVersion;

/*!
 @param offset
 @throws DOMException
 - seealso: org.w3c.dom.Text
 */
- (id<OrgW3cDomText>)splitTextWithInt:(jint)offset;

/*!
 @param offset
 @param count
 @throws DOMException
 - seealso: org.w3c.dom.CharacterData
 */
- (NSString *)substringDataWithInt:(jint)offset
                           withInt:(jint)count;

/*!
 @brief Ask whether we support a given DOM feature.
 In fact, we do not _fully_ support any DOM feature -- we're a
 read-only subset -- so arguably we should always return false.
 Or we could say that we support DOM Core Level 2 but all nodes
 are read-only. Unclear which answer is least misleading.
 NON-DOM method. This was present in early drafts of DOM Level 2,
 but was renamed isSupported. It's present here only because it's
 cheap, harmless, and might help some poor fool who is still trying
 to use an early Working Draft of the DOM.
 @param feature
 @param version_
 @return false
 */
- (jboolean)supportsWithNSString:(NSString *)feature
                    withNSString:(NSString *)version_;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlDtmRefDTMNodeProxy)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDTMNodeProxy, dtm_, id<OrgApacheXmlDtmDTM>)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDTMNodeProxy, fDocumentURI_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDTMNodeProxy, actualEncoding_, NSString *)

/*!
 @brief The DOMImplementation object
 */
inline id<OrgW3cDomDOMImplementation> OrgApacheXmlDtmRefDTMNodeProxy_get_implementation();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgW3cDomDOMImplementation> OrgApacheXmlDtmRefDTMNodeProxy_implementation;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlDtmRefDTMNodeProxy, implementation, id<OrgW3cDomDOMImplementation>)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMNodeProxy_initWithOrgApacheXmlDtmDTM_withInt_(OrgApacheXmlDtmRefDTMNodeProxy *self, id<OrgApacheXmlDtmDTM> dtm, jint node);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNodeProxy *new_OrgApacheXmlDtmRefDTMNodeProxy_initWithOrgApacheXmlDtmDTM_withInt_(id<OrgApacheXmlDtmDTM> dtm, jint node) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNodeProxy *create_OrgApacheXmlDtmRefDTMNodeProxy_initWithOrgApacheXmlDtmDTM_withInt_(id<OrgApacheXmlDtmDTM> dtm, jint node);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMNodeProxy)

#endif

#if !defined (OrgApacheXmlDtmRefDTMNodeProxy_DTMNodeProxyImplementation_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeProxy || defined(INCLUDE_OrgApacheXmlDtmRefDTMNodeProxy_DTMNodeProxyImplementation))
#define OrgApacheXmlDtmRefDTMNodeProxy_DTMNodeProxyImplementation_

#define RESTRICT_OrgW3cDomDOMImplementation 1
#define INCLUDE_OrgW3cDomDOMImplementation 1
#include "org/w3c/dom/DOMImplementation.h"

@protocol OrgW3cDomDocument;
@protocol OrgW3cDomDocumentType;

/*!
 @brief Inner class to support getDOMImplementation.
 */
@interface OrgApacheXmlDtmRefDTMNodeProxy_DTMNodeProxyImplementation : NSObject < OrgW3cDomDOMImplementation >

#pragma mark Public

- (id<OrgW3cDomDocument>)createDocumentWithNSString:(NSString *)namespaceURI
                                       withNSString:(NSString *)qualfiedName
                          withOrgW3cDomDocumentType:(id<OrgW3cDomDocumentType>)doctype;

- (id<OrgW3cDomDocumentType>)createDocumentTypeWithNSString:(NSString *)qualifiedName
                                               withNSString:(NSString *)publicId
                                               withNSString:(NSString *)systemId;

/*!
 @brief This method returns a specialized object which implements the
 specialized APIs of the specified feature and version.
 The
 specialized object may also be obtained by using binding-specific
 casting methods but is not necessarily expected to, as discussed in Mixed DOM implementations
 .
 @param feature The name of the feature requested (case-insensitive).
 @param version_  This is the version number of the feature to test. If
 the version is <code>null</code> or the empty string, supporting
 any version of the feature will cause the method to return an
 object that supports at least one version of the feature.
 @return Returns an object which implements the specialized APIs of
 the specified feature and version, if any, or <code>null</code> if
 there is no object which implements interfaces associated with that
 feature. If the <code>DOMObject</code> returned by this method
 implements the <code>Node</code> interface, it must delegate to the
 primary core <code>Node</code> and not return results inconsistent
 with the primary core <code>Node</code> such as attributes,
 childNodes, etc.
 @since DOM Level 3
 */
- (id)getFeatureWithNSString:(NSString *)feature
                withNSString:(NSString *)version_;

/*!
 @brief Ask whether we support a given DOM feature.
 In fact, we do not _fully_ support any DOM feature -- we're a
 read-only subset -- so arguably we should always return false.
 On the other hand, it may be more practically useful to return
 true and simply treat the whole DOM as read-only, failing on the
 methods we can't support. I'm not sure which would be more useful
 to the caller.
 */
- (jboolean)hasFeatureWithNSString:(NSString *)feature
                      withNSString:(NSString *)version_;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDTMNodeProxy_DTMNodeProxyImplementation)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMNodeProxy_DTMNodeProxyImplementation_init(OrgApacheXmlDtmRefDTMNodeProxy_DTMNodeProxyImplementation *self);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNodeProxy_DTMNodeProxyImplementation *new_OrgApacheXmlDtmRefDTMNodeProxy_DTMNodeProxyImplementation_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNodeProxy_DTMNodeProxyImplementation *create_OrgApacheXmlDtmRefDTMNodeProxy_DTMNodeProxyImplementation_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMNodeProxy_DTMNodeProxyImplementation)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeProxy")
