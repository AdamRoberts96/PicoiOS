//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/AfterClass.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitAfterClass")
#ifdef RESTRICT_OrgJunitAfterClass
#define INCLUDE_ALL_OrgJunitAfterClass 0
#else
#define INCLUDE_ALL_OrgJunitAfterClass 1
#endif
#undef RESTRICT_OrgJunitAfterClass

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitAfterClass_) && (INCLUDE_ALL_OrgJunitAfterClass || defined(INCLUDE_OrgJunitAfterClass))
#define OrgJunitAfterClass_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief <p>If you allocate expensive external resources in a <code>org.junit.BeforeClass</code> method you need to release them
 after all the tests in the class have run.
 Annotating a <code>public static void</code> method
 with <code>&#064;AfterClass</code> causes that method to be run after all the tests in the class have been run. All <code>&#064;AfterClass</code>
 methods are guaranteed to run even if a <code>org.junit.BeforeClass</code> method throws an
 exception. The <code>&#064;AfterClass</code> methods declared in superclasses will be run after those of the current
 class, unless they are shadowed in the current class.</p>
 Here is a simple example:
 @code

  public class Example {
    private static DatabaseConnection database;
    &#064;BeforeClass public static void login() {
          database= ...;
    }
    &#064;Test public void something() {
          ...
    }
    &#064;Test public void somethingElse() {
          ...
    }
    &#064;AfterClass public static void logout() {
          database.logout();
    }
  }
  
@endcode
 - seealso: org.junit.BeforeClass
 - seealso: org.junit.Test
 @since 4.0
 */
@protocol OrgJunitAfterClass < JavaLangAnnotationAnnotation >

@end

@interface OrgJunitAfterClass : NSObject < OrgJunitAfterClass >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitAfterClass)

FOUNDATION_EXPORT id<OrgJunitAfterClass> create_OrgJunitAfterClass();

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitAfterClass)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitAfterClass")
