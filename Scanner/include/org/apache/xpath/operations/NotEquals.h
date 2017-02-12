//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/NotEquals.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsNotEquals")
#ifdef RESTRICT_OrgApacheXpathOperationsNotEquals
#define INCLUDE_ALL_OrgApacheXpathOperationsNotEquals 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsNotEquals 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsNotEquals

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathOperationsNotEquals_) && (INCLUDE_ALL_OrgApacheXpathOperationsNotEquals || defined(INCLUDE_OrgApacheXpathOperationsNotEquals))
#define OrgApacheXpathOperationsNotEquals_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "org/apache/xpath/operations/Operation.h"

@class OrgApacheXpathObjectsXObject;

/*!
 @brief The '!
 =' operation expression executer.
 */
@interface OrgApacheXpathOperationsNotEquals : OrgApacheXpathOperationsOperation

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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsNotEquals)

inline jlong OrgApacheXpathOperationsNotEquals_get_serialVersionUID();
#define OrgApacheXpathOperationsNotEquals_serialVersionUID -7869072863070586900LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsNotEquals, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsNotEquals_init(OrgApacheXpathOperationsNotEquals *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsNotEquals *new_OrgApacheXpathOperationsNotEquals_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsNotEquals *create_OrgApacheXpathOperationsNotEquals_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsNotEquals)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsNotEquals")
