//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runner/Describable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerDescribable")
#ifdef RESTRICT_OrgJunitRunnerDescribable
#define INCLUDE_ALL_OrgJunitRunnerDescribable 0
#else
#define INCLUDE_ALL_OrgJunitRunnerDescribable 1
#endif
#undef RESTRICT_OrgJunitRunnerDescribable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRunnerDescribable_) && (INCLUDE_ALL_OrgJunitRunnerDescribable || defined(INCLUDE_OrgJunitRunnerDescribable))
#define OrgJunitRunnerDescribable_

@class OrgJunitRunnerDescription;

/*!
 @brief Represents an object that can describe itself
 @since 4.5
 */
@protocol OrgJunitRunnerDescribable < JavaObject >

/*!
 @return a <code>Description</code> showing the tests to be run by the receiver
 */
- (OrgJunitRunnerDescription *)getDescription;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerDescribable)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerDescribable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerDescribable")
