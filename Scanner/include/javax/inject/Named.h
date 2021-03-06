//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/inject/javax_inject/build_result/java/javax/inject/Named.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxInjectNamed")
#ifdef RESTRICT_JavaxInjectNamed
#define INCLUDE_ALL_JavaxInjectNamed 0
#else
#define INCLUDE_ALL_JavaxInjectNamed 1
#endif
#undef RESTRICT_JavaxInjectNamed

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxInjectNamed_) && (INCLUDE_ALL_JavaxInjectNamed || defined(INCLUDE_JavaxInjectNamed))
#define JavaxInjectNamed_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief String-based qualifier.
 <p>Example usage:
 @code

   public class Car {
     &#064;Inject <b>@@Named("driver")</b> Seat driverSeat;
     &#064;Inject <b>@@Named("passenger")</b> Seat passengerSeat;
     ...
   
@endcode
 */
@protocol JavaxInjectNamed < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

@end

@interface JavaxInjectNamed : NSObject < JavaxInjectNamed > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxInjectNamed)

FOUNDATION_EXPORT id<JavaxInjectNamed> create_JavaxInjectNamed(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(JavaxInjectNamed)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxInjectNamed")
