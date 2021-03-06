//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/ByteProcessor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoByteProcessor")
#ifdef RESTRICT_ComGoogleCommonIoByteProcessor
#define INCLUDE_ALL_ComGoogleCommonIoByteProcessor 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoByteProcessor 1
#endif
#undef RESTRICT_ComGoogleCommonIoByteProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoByteProcessor_) && (INCLUDE_ALL_ComGoogleCommonIoByteProcessor || defined(INCLUDE_ComGoogleCommonIoByteProcessor))
#define ComGoogleCommonIoByteProcessor_

@class IOSByteArray;

@protocol ComGoogleCommonIoByteProcessor < JavaObject >

- (jboolean)processBytesWithByteArray:(IOSByteArray *)buf
                              withInt:(jint)off
                              withInt:(jint)len;

- (id)getResult;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoByteProcessor)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoByteProcessor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoByteProcessor")
