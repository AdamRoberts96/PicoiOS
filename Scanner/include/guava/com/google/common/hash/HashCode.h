//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/hash/HashCode.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashHashCode")
#ifdef RESTRICT_ComGoogleCommonHashHashCode
#define INCLUDE_ALL_ComGoogleCommonHashHashCode 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashHashCode 1
#endif
#undef RESTRICT_ComGoogleCommonHashHashCode

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashHashCode_) && (INCLUDE_ALL_ComGoogleCommonHashHashCode || defined(INCLUDE_ComGoogleCommonHashHashCode))
#define ComGoogleCommonHashHashCode_

@class IOSByteArray;

@interface ComGoogleCommonHashHashCode : NSObject

#pragma mark Public

- (IOSByteArray *)asBytes;

- (jint)asInt;

- (jlong)asLong;

- (jint)bits;

- (jboolean)isEqual:(id)object;

+ (ComGoogleCommonHashHashCode *)fromBytesWithByteArray:(IOSByteArray *)bytes;

+ (ComGoogleCommonHashHashCode *)fromIntWithInt:(jint)hash_;

+ (ComGoogleCommonHashHashCode *)fromLongWithLong:(jlong)hash_;

+ (ComGoogleCommonHashHashCode *)fromStringWithNSString:(NSString *)string;

- (NSUInteger)hash;

- (jlong)padToLong;

- (NSString *)description;

- (jint)writeBytesToWithByteArray:(IOSByteArray *)dest
                          withInt:(jint)offset
                          withInt:(jint)maxLength;

#pragma mark Package-Private

- (instancetype)init;

- (jboolean)equalsSameBitsWithComGoogleCommonHashHashCode:(ComGoogleCommonHashHashCode *)that;

+ (ComGoogleCommonHashHashCode *)fromBytesNoCopyWithByteArray:(IOSByteArray *)bytes;

- (IOSByteArray *)getBytesInternal;

- (void)writeBytesToImplWithByteArray:(IOSByteArray *)dest
                              withInt:(jint)offset
                              withInt:(jint)maxLength;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonHashHashCode)

FOUNDATION_EXPORT void ComGoogleCommonHashHashCode_init(ComGoogleCommonHashHashCode *self);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonHashHashCode_fromIntWithInt_(jint hash_);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonHashHashCode_fromLongWithLong_(jlong hash_);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonHashHashCode_fromBytesWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonHashHashCode_fromBytesNoCopyWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonHashHashCode_fromStringWithNSString_(NSString *string);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashHashCode)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashHashCode")
