//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/reflection/AccessibilityChanger.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionAccessibilityChanger")
#ifdef RESTRICT_OrgMockitoInternalUtilReflectionAccessibilityChanger
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionAccessibilityChanger 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionAccessibilityChanger 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilReflectionAccessibilityChanger

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalUtilReflectionAccessibilityChanger_) && (INCLUDE_ALL_OrgMockitoInternalUtilReflectionAccessibilityChanger || defined(INCLUDE_OrgMockitoInternalUtilReflectionAccessibilityChanger))
#define OrgMockitoInternalUtilReflectionAccessibilityChanger_

@class JavaLangReflectAccessibleObject;

@interface OrgMockitoInternalUtilReflectionAccessibilityChanger : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief changes the accessibleObject accessibility and returns true if accessibility was changed
 */
- (void)enableAccessWithJavaLangReflectAccessibleObject:(JavaLangReflectAccessibleObject *)accessibleObject;

/*!
 @brief safely disables access
 */
- (void)safelyDisableAccessWithJavaLangReflectAccessibleObject:(JavaLangReflectAccessibleObject *)accessibleObject;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionAccessibilityChanger)

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionAccessibilityChanger_init(OrgMockitoInternalUtilReflectionAccessibilityChanger *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionAccessibilityChanger *new_OrgMockitoInternalUtilReflectionAccessibilityChanger_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionAccessibilityChanger *create_OrgMockitoInternalUtilReflectionAccessibilityChanger_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionAccessibilityChanger)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionAccessibilityChanger")
