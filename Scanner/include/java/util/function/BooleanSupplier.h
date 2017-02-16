//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/BooleanSupplier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionBooleanSupplier")
#ifdef RESTRICT_JavaUtilFunctionBooleanSupplier
#define INCLUDE_ALL_JavaUtilFunctionBooleanSupplier 0
#else
#define INCLUDE_ALL_JavaUtilFunctionBooleanSupplier 1
#endif
#undef RESTRICT_JavaUtilFunctionBooleanSupplier

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionBooleanSupplier_) && (INCLUDE_ALL_JavaUtilFunctionBooleanSupplier || defined(INCLUDE_JavaUtilFunctionBooleanSupplier))
#define JavaUtilFunctionBooleanSupplier_

/*!
 @brief Represents a supplier of <code>boolean</code>-valued results.
 This is the
 <code>boolean</code>-producing primitive specialization of <code>Supplier</code>.
 <p>There is no requirement that a new or distinct result be returned each
 time the supplier is invoked.
 <p>This is a <a href="package-summary.html">functional interface</a>
 whose functional method is <code>getAsBoolean()</code>.
 - seealso: Supplier
 @since 1.8
 */
@protocol JavaUtilFunctionBooleanSupplier < JavaObject >

/*!
 @brief Gets a result.
 @return a result
 */
- (jboolean)getAsBoolean;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionBooleanSupplier)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionBooleanSupplier)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionBooleanSupplier")