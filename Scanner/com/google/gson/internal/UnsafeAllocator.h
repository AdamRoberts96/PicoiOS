//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:gson-2.6.2-sources.jar!com/google/gson/internal/UnsafeAllocator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleGsonInternalUnsafeAllocator")
#ifdef RESTRICT_ComGoogleGsonInternalUnsafeAllocator
#define INCLUDE_ALL_ComGoogleGsonInternalUnsafeAllocator 0
#else
#define INCLUDE_ALL_ComGoogleGsonInternalUnsafeAllocator 1
#endif
#undef RESTRICT_ComGoogleGsonInternalUnsafeAllocator

#if !defined (ComGoogleGsonInternalUnsafeAllocator_) && (INCLUDE_ALL_ComGoogleGsonInternalUnsafeAllocator || defined(INCLUDE_ComGoogleGsonInternalUnsafeAllocator))
#define ComGoogleGsonInternalUnsafeAllocator_

@class IOSClass;

@interface ComGoogleGsonInternalUnsafeAllocator : NSObject

#pragma mark Public

- (instancetype)init;

+ (ComGoogleGsonInternalUnsafeAllocator *)create;

- (id)newInstanceWithIOSClass:(IOSClass *)c OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleGsonInternalUnsafeAllocator)

FOUNDATION_EXPORT void ComGoogleGsonInternalUnsafeAllocator_init(ComGoogleGsonInternalUnsafeAllocator *self);

FOUNDATION_EXPORT ComGoogleGsonInternalUnsafeAllocator *ComGoogleGsonInternalUnsafeAllocator_create();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleGsonInternalUnsafeAllocator)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleGsonInternalUnsafeAllocator")
