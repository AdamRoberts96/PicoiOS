//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncExtElementAvailable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncExtElementAvailable")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncExtElementAvailable
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncExtElementAvailable 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncExtElementAvailable 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncExtElementAvailable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFuncExtElementAvailable_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncExtElementAvailable || defined(INCLUDE_OrgApacheXpathFunctionsFuncExtElementAvailable))
#define OrgApacheXpathFunctionsFuncExtElementAvailable_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the ExtElementAvailable() function.
  advanced
 */
@interface OrgApacheXpathFunctionsFuncExtElementAvailable : OrgApacheXpathFunctionsFunctionOneArg

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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncExtElementAvailable)

inline jlong OrgApacheXpathFunctionsFuncExtElementAvailable_get_serialVersionUID();
#define OrgApacheXpathFunctionsFuncExtElementAvailable_serialVersionUID -472533699257968546LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncExtElementAvailable, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncExtElementAvailable_init(OrgApacheXpathFunctionsFuncExtElementAvailable *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncExtElementAvailable *new_OrgApacheXpathFunctionsFuncExtElementAvailable_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncExtElementAvailable *create_OrgApacheXpathFunctionsFuncExtElementAvailable_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncExtElementAvailable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncExtElementAvailable")
