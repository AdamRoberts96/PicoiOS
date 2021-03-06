//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/RateLimiter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentRateLimiter")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentRateLimiter
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentRateLimiter 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentRateLimiter 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentRateLimiter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentRateLimiter_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentRateLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentRateLimiter))
#define ComGoogleCommonUtilConcurrentRateLimiter_

@class ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch;
@class JavaUtilConcurrentTimeUnit;

@interface ComGoogleCommonUtilConcurrentRateLimiter : NSObject

#pragma mark Public

- (jdouble)acquire;

- (jdouble)acquireWithInt:(jint)permits;

+ (ComGoogleCommonUtilConcurrentRateLimiter *)createWithDouble:(jdouble)permitsPerSecond;

+ (ComGoogleCommonUtilConcurrentRateLimiter *)createWithDouble:(jdouble)permitsPerSecond
                                                      withLong:(jlong)warmupPeriod
                                withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jdouble)getRate;

- (void)setRateWithDouble:(jdouble)permitsPerSecond;

- (NSString *)description;

- (jboolean)tryAcquire;

- (jboolean)tryAcquireWithInt:(jint)permits;

- (jboolean)tryAcquireWithInt:(jint)permits
                     withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jboolean)tryAcquireWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)stopwatch;

+ (ComGoogleCommonUtilConcurrentRateLimiter *)createWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)stopwatch
                                                                                                        withDouble:(jdouble)permitsPerSecond;

+ (ComGoogleCommonUtilConcurrentRateLimiter *)createWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)stopwatch
                                                                                                        withDouble:(jdouble)permitsPerSecond
                                                                                                          withLong:(jlong)warmupPeriod
                                                                                    withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit
                                                                                                        withDouble:(jdouble)coldFactor;

- (jdouble)doGetRate;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                   withLong:(jlong)nowMicros;

- (jlong)queryEarliestAvailableWithLong:(jlong)nowMicros;

- (jlong)reserveWithInt:(jint)permits;

- (jlong)reserveAndGetWaitLengthWithInt:(jint)permits
                               withLong:(jlong)nowMicros;

- (jlong)reserveEarliestAvailableWithInt:(jint)permits
                                withLong:(jlong)nowMicros;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentRateLimiter)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createWithDouble_(jdouble permitsPerSecond);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withDouble_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jdouble permitsPerSecond);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createWithDouble_withLong_withJavaUtilConcurrentTimeUnit_(jdouble permitsPerSecond, jlong warmupPeriod, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withDouble_withLong_withJavaUtilConcurrentTimeUnit_withDouble_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jdouble permitsPerSecond, jlong warmupPeriod, JavaUtilConcurrentTimeUnit *unit, jdouble coldFactor);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentRateLimiter_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_(ComGoogleCommonUtilConcurrentRateLimiter *self, ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentRateLimiter)

#endif

#if !defined (ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentRateLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch))
#define ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_

@interface ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch : NSObject

#pragma mark Package-Private

- (instancetype)init;

+ (ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)createFromSystemTimer;

- (jlong)readMicros;

- (void)sleepMicrosUninterruptiblyWithLong:(jlong)micros;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_init(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_createFromSystemTimer();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentRateLimiter")
