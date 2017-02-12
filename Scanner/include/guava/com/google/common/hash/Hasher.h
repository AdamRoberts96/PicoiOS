//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/hash/Hasher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashHasher")
#ifdef RESTRICT_ComGoogleCommonHashHasher
#define INCLUDE_ALL_ComGoogleCommonHashHasher 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashHasher 1
#endif
#undef RESTRICT_ComGoogleCommonHashHasher

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashHasher_) && (INCLUDE_ALL_ComGoogleCommonHashHasher || defined(INCLUDE_ComGoogleCommonHashHasher))
#define ComGoogleCommonHashHasher_

#define RESTRICT_ComGoogleCommonHashPrimitiveSink 1
#define INCLUDE_ComGoogleCommonHashPrimitiveSink 1
#include "com/google/common/hash/PrimitiveSink.h"

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashFunnel;
@protocol JavaLangCharSequence;

@protocol ComGoogleCommonHashHasher < ComGoogleCommonHashPrimitiveSink, JavaObject >

- (id<ComGoogleCommonHashHasher>)putByteWithByte:(jbyte)b;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes
                                               withInt:(jint)off
                                               withInt:(jint)len;

- (id<ComGoogleCommonHashHasher>)putShortWithShort:(jshort)s;

- (id<ComGoogleCommonHashHasher>)putIntWithInt:(jint)i;

- (id<ComGoogleCommonHashHasher>)putLongWithLong:(jlong)l;

- (id<ComGoogleCommonHashHasher>)putFloatWithFloat:(jfloat)f;

- (id<ComGoogleCommonHashHasher>)putDoubleWithDouble:(jdouble)d;

- (id<ComGoogleCommonHashHasher>)putBooleanWithBoolean:(jboolean)b;

- (id<ComGoogleCommonHashHasher>)putCharWithChar:(jchar)c;

- (id<ComGoogleCommonHashHasher>)putUnencodedCharsWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence;

- (id<ComGoogleCommonHashHasher>)putStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence
                                         withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

- (id<ComGoogleCommonHashHasher>)putObjectWithId:(id)instance
                   withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel;

- (ComGoogleCommonHashHashCode *)hash__;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashHasher)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashHasher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashHasher")
