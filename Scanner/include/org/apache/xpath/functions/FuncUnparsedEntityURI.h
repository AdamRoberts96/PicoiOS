//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncUnparsedEntityURI.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncUnparsedEntityURI")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncUnparsedEntityURI
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncUnparsedEntityURI 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncUnparsedEntityURI 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncUnparsedEntityURI

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFuncUnparsedEntityURI_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncUnparsedEntityURI || defined(INCLUDE_OrgApacheXpathFunctionsFuncUnparsedEntityURI))
#define OrgApacheXpathFunctionsFuncUnparsedEntityURI_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
  advanced
 */
@interface OrgApacheXpathFunctionsFuncUnparsedEntityURI : OrgApacheXpathFunctionsFunctionOneArg

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Execute the function.
 The function must return
 a valid object.
 @param xctxt The current execution context.
 @return A valid XObject.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncUnparsedEntityURI)

inline jlong OrgApacheXpathFunctionsFuncUnparsedEntityURI_get_serialVersionUID();
#define OrgApacheXpathFunctionsFuncUnparsedEntityURI_serialVersionUID 845309759097448178LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncUnparsedEntityURI, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncUnparsedEntityURI_init(OrgApacheXpathFunctionsFuncUnparsedEntityURI *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncUnparsedEntityURI *new_OrgApacheXpathFunctionsFuncUnparsedEntityURI_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncUnparsedEntityURI *create_OrgApacheXpathFunctionsFuncUnparsedEntityURI_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncUnparsedEntityURI)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncUnparsedEntityURI")
