//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/DOMError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomDOMError")
#ifdef RESTRICT_OrgW3cDomDOMError
#define INCLUDE_ALL_OrgW3cDomDOMError 0
#else
#define INCLUDE_ALL_OrgW3cDomDOMError 1
#endif
#undef RESTRICT_OrgW3cDomDOMError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgW3cDomDOMError_) && (INCLUDE_ALL_OrgW3cDomDOMError || defined(INCLUDE_OrgW3cDomDOMError))
#define OrgW3cDomDOMError_

@protocol OrgW3cDomDOMLocator;

/*!
 @brief <code>DOMError</code> is an interface that describes an error.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 @since DOM Level 3
 */
@protocol OrgW3cDomDOMError < JavaObject >

/*!
 @brief The severity of the error, either <code>SEVERITY_WARNING</code>,
 <code>SEVERITY_ERROR</code>, or <code>SEVERITY_FATAL_ERROR</code>.
 */
- (jshort)getSeverity;

/*!
 @brief An implementation specific string describing the error that occurred.
 */
- (NSString *)getMessage;

/*!
 @brief A <code>DOMString</code> indicating which related data is expected in
 <code>relatedData</code>.
 Users should refer to the specification of
 the error in order to find its <code>DOMString</code> type and
 <code>relatedData</code> definitions if any.
 <p ><b>Note:</b>  As an example,
 <code>Document.normalizeDocument()</code> does generate warnings when
 the "split-cdata-sections" parameter is in use. Therefore, the method
 generates a <code>SEVERITY_WARNING</code> with <code>type</code>
 <code>"cdata-sections-splitted"</code> and the first
 <code>CDATASection</code> node in document order resulting from the
 split is returned by the <code>relatedData</code> attribute.
 */
- (NSString *)getType;

/*!
 @brief The related platform dependent exception if any.
 */
- (id)getRelatedException;

/*!
 @brief The related <code>DOMError.type</code> dependent data if any.
 */
- (id)getRelatedData;

/*!
 @brief The location of the error.
 */
- (id<OrgW3cDomDOMLocator>)getLocation;

@end

@interface OrgW3cDomDOMError : NSObject

+ (jshort)SEVERITY_WARNING;

+ (jshort)SEVERITY_ERROR;

+ (jshort)SEVERITY_FATAL_ERROR;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomDOMError)

/*!
 @brief The severity of the error described by the <code>DOMError</code> is
 warning.
 A <code>SEVERITY_WARNING</code> will not cause the
 processing to stop, unless <code>DOMErrorHandler.handleError()</code>
 returns <code>false</code>.
 */
inline jshort OrgW3cDomDOMError_get_SEVERITY_WARNING();
#define OrgW3cDomDOMError_SEVERITY_WARNING 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMError, SEVERITY_WARNING, jshort)

/*!
 @brief The severity of the error described by the <code>DOMError</code> is
 error.
 A <code>SEVERITY_ERROR</code> may not cause the processing to
 stop if the error can be recovered, unless
 <code>DOMErrorHandler.handleError()</code> returns <code>false</code>.
 */
inline jshort OrgW3cDomDOMError_get_SEVERITY_ERROR();
#define OrgW3cDomDOMError_SEVERITY_ERROR 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMError, SEVERITY_ERROR, jshort)

/*!
 @brief The severity of the error described by the <code>DOMError</code> is
 fatal error.
 A <code>SEVERITY_FATAL_ERROR</code> will cause the
 normal processing to stop. The return value of
 <code>DOMErrorHandler.handleError()</code> is ignored unless the
 implementation chooses to continue, in which case the behavior
 becomes undefined.
 */
inline jshort OrgW3cDomDOMError_get_SEVERITY_FATAL_ERROR();
#define OrgW3cDomDOMError_SEVERITY_FATAL_ERROR 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMError, SEVERITY_FATAL_ERROR, jshort)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomDOMError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomDOMError")
