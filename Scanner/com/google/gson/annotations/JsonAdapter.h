//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:gson-2.6.2-sources.jar!com/google/gson/annotations/JsonAdapter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleGsonAnnotationsJsonAdapter")
#ifdef RESTRICT_ComGoogleGsonAnnotationsJsonAdapter
#define INCLUDE_ALL_ComGoogleGsonAnnotationsJsonAdapter 0
#else
#define INCLUDE_ALL_ComGoogleGsonAnnotationsJsonAdapter 1
#endif
#undef RESTRICT_ComGoogleGsonAnnotationsJsonAdapter

#if !defined (ComGoogleGsonAnnotationsJsonAdapter_) && (INCLUDE_ALL_ComGoogleGsonAnnotationsJsonAdapter || defined(INCLUDE_ComGoogleGsonAnnotationsJsonAdapter))
#define ComGoogleGsonAnnotationsJsonAdapter_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol ComGoogleGsonAnnotationsJsonAdapter < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *value;

@end

@interface ComGoogleGsonAnnotationsJsonAdapter : NSObject < ComGoogleGsonAnnotationsJsonAdapter > {
 @public
  IOSClass *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleGsonAnnotationsJsonAdapter)

FOUNDATION_EXPORT id<ComGoogleGsonAnnotationsJsonAdapter> create_ComGoogleGsonAnnotationsJsonAdapter(IOSClass *value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleGsonAnnotationsJsonAdapter)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleGsonAnnotationsJsonAdapter")
