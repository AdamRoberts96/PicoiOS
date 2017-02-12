//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/ByteArrayDataOutput.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoByteArrayDataOutput")
#ifdef RESTRICT_ComGoogleCommonIoByteArrayDataOutput
#define INCLUDE_ALL_ComGoogleCommonIoByteArrayDataOutput 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoByteArrayDataOutput 1
#endif
#undef RESTRICT_ComGoogleCommonIoByteArrayDataOutput

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoByteArrayDataOutput_) && (INCLUDE_ALL_ComGoogleCommonIoByteArrayDataOutput || defined(INCLUDE_ComGoogleCommonIoByteArrayDataOutput))
#define ComGoogleCommonIoByteArrayDataOutput_

#define RESTRICT_JavaIoDataOutput 1
#define INCLUDE_JavaIoDataOutput 1
#include "java/io/DataOutput.h"

@class IOSByteArray;

@protocol ComGoogleCommonIoByteArrayDataOutput < JavaIoDataOutput, JavaObject >

- (void)writeWithInt:(jint)b;

- (void)writeWithByteArray:(IOSByteArray *)b;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeBooleanWithBoolean:(jboolean)v;

- (void)writeByteWithInt:(jint)v;

- (void)writeShortWithInt:(jint)v;

- (void)writeCharWithInt:(jint)v;

- (void)writeIntWithInt:(jint)v;

- (void)writeLongWithLong:(jlong)v;

- (void)writeFloatWithFloat:(jfloat)v;

- (void)writeDoubleWithDouble:(jdouble)v;

- (void)writeCharsWithNSString:(NSString *)s;

- (void)writeUTFWithNSString:(NSString *)s;

- (void)writeBytesWithNSString:(NSString *)s;

- (IOSByteArray *)toByteArray;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoByteArrayDataOutput)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoByteArrayDataOutput)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoByteArrayDataOutput")
