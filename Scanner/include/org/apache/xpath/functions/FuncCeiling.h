//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncCeiling.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncCeiling")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncCeiling
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncCeiling 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncCeiling 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncCeiling

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFuncCeiling_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncCeiling || defined(INCLUDE_OrgApacheXpathFunctionsFuncCeiling))
#define OrgApacheXpathFunctionsFuncCeiling_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Ceiling() function.
  advanced
 */
@interface OrgApacheXpathFunctionsFuncCeiling : OrgApacheXpathFunctionsFunctionOneArg

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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncCeiling)

inline jlong OrgApacheXpathFunctionsFuncCeiling_get_serialVersionUID();
#define OrgApacheXpathFunctionsFuncCeiling_serialVersionUID -1275988936390464739LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncCeiling, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncCeiling_init(OrgApacheXpathFunctionsFuncCeiling *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncCeiling *new_OrgApacheXpathFunctionsFuncCeiling_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncCeiling *create_OrgApacheXpathFunctionsFuncCeiling_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncCeiling)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncCeiling")
