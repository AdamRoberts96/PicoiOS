//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/Lt.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsLt")
#ifdef RESTRICT_OrgApacheXpathOperationsLt
#define INCLUDE_ALL_OrgApacheXpathOperationsLt 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsLt 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsLt

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathOperationsLt_) && (INCLUDE_ALL_OrgApacheXpathOperationsLt || defined(INCLUDE_OrgApacheXpathOperationsLt))
#define OrgApacheXpathOperationsLt_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "org/apache/xpath/operations/Operation.h"

@class OrgApacheXpathObjectsXObject;

/*!
 @brief The '<' operation expression executer.
 */
@interface OrgApacheXpathOperationsLt : OrgApacheXpathOperationsOperation

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Apply the operation to two operands, and return the result.
 @param left non-null reference to the evaluated left operand.
 @param right non-null reference to the evaluated right operand.
 @return non-null reference to the XObject that represents the result of the operation.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)operateWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)left
                                         withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)right;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsLt)

inline jlong OrgApacheXpathOperationsLt_get_serialVersionUID();
#define OrgApacheXpathOperationsLt_serialVersionUID 3388420509289359422LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsLt, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsLt_init(OrgApacheXpathOperationsLt *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsLt *new_OrgApacheXpathOperationsLt_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsLt *create_OrgApacheXpathOperationsLt_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsLt)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsLt")
