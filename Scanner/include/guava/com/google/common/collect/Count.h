//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/Count.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectCount")
#ifdef RESTRICT_ComGoogleCommonCollectCount
#define INCLUDE_ALL_ComGoogleCommonCollectCount 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectCount 1
#endif
#undef RESTRICT_ComGoogleCommonCollectCount

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectCount_) && (INCLUDE_ALL_ComGoogleCommonCollectCount || defined(INCLUDE_ComGoogleCommonCollectCount))
#define ComGoogleCommonCollectCount_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonCollectCount : NSObject < JavaIoSerializable >

#pragma mark Public

- (jint)addAndGetWithInt:(jint)delta;

- (jboolean)isEqual:(id)obj;

- (jint)get;

- (jint)getAndAddWithInt:(jint)delta;

- (jint)getAndSetWithInt:(jint)newValue;

- (NSUInteger)hash;

- (void)setWithInt:(jint)newValue;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCount)

FOUNDATION_EXPORT void ComGoogleCommonCollectCount_initWithInt_(ComGoogleCommonCollectCount *self, jint value);

FOUNDATION_EXPORT ComGoogleCommonCollectCount *new_ComGoogleCommonCollectCount_initWithInt_(jint value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCount *create_ComGoogleCommonCollectCount_initWithInt_(jint value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCount)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectCount")
