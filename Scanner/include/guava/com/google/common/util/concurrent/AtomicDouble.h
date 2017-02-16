//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/AtomicDouble.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicDouble")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAtomicDouble
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicDouble 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicDouble 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAtomicDouble

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAtomicDouble_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicDouble || defined(INCLUDE_ComGoogleCommonUtilConcurrentAtomicDouble))
#define ComGoogleCommonUtilConcurrentAtomicDouble_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonUtilConcurrentAtomicDouble : NSNumber < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithDouble:(jdouble)initialValue;

- (jdouble)addAndGetWithDouble:(jdouble)delta;

- (jboolean)compareAndSetWithDouble:(jdouble)expect
                         withDouble:(jdouble)update;

- (jdouble)doubleValue;

- (jfloat)floatValue;

- (jdouble)get;

- (jdouble)getAndAddWithDouble:(jdouble)delta;

- (jdouble)getAndSetWithDouble:(jdouble)newValue;

- (jint)intValue;

- (void)lazySetWithDouble:(jdouble)newValue;

- (jlong)longLongValue;

- (void)setWithDouble:(jdouble)newValue;

- (NSString *)description;

- (jboolean)weakCompareAndSetWithDouble:(jdouble)expect
                             withDouble:(jdouble)update;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentAtomicDouble)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAtomicDouble_initWithDouble_(ComGoogleCommonUtilConcurrentAtomicDouble *self, jdouble initialValue);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicDouble *new_ComGoogleCommonUtilConcurrentAtomicDouble_initWithDouble_(jdouble initialValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicDouble *create_ComGoogleCommonUtilConcurrentAtomicDouble_initWithDouble_(jdouble initialValue);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAtomicDouble_init(ComGoogleCommonUtilConcurrentAtomicDouble *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicDouble *new_ComGoogleCommonUtilConcurrentAtomicDouble_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicDouble *create_ComGoogleCommonUtilConcurrentAtomicDouble_init();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAtomicDouble)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicDouble")