//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/Monitor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentMonitor")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentMonitor
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentMonitor 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentMonitor 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentMonitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentMonitor_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentMonitor || defined(INCLUDE_ComGoogleCommonUtilConcurrentMonitor))
#define ComGoogleCommonUtilConcurrentMonitor_

@class ComGoogleCommonUtilConcurrentMonitor_Guard;
@class JavaLangThread;
@class JavaUtilConcurrentTimeUnit;

@interface ComGoogleCommonUtilConcurrentMonitor : NSObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithBoolean:(jboolean)fair;

- (void)enter;

- (jboolean)enterWithLong:(jlong)time
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jboolean)enterIfWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard;

- (jboolean)enterIfWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard
                                                         withLong:(jlong)time
                                   withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jboolean)enterIfInterruptiblyWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard;

- (jboolean)enterIfInterruptiblyWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard
                                                                      withLong:(jlong)time
                                                withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)enterInterruptibly;

- (jboolean)enterInterruptiblyWithLong:(jlong)time
        withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)enterWhenWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard;

- (jboolean)enterWhenWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard
                                                           withLong:(jlong)time
                                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)enterWhenUninterruptiblyWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard;

- (jboolean)enterWhenUninterruptiblyWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard
                                                                          withLong:(jlong)time
                                                    withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jint)getOccupiedDepth;

- (jint)getQueueLength;

- (jint)getWaitQueueLengthWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard;

- (jboolean)hasQueuedThreadWithJavaLangThread:(JavaLangThread *)thread;

- (jboolean)hasQueuedThreads;

- (jboolean)hasWaitersWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard;

- (jboolean)isFair;

- (jboolean)isOccupied;

- (jboolean)isOccupiedByCurrentThread;

- (void)leave;

- (jboolean)tryEnter;

- (jboolean)tryEnterIfWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard;

- (void)waitForWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard;

- (jboolean)waitForWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard
                                                         withLong:(jlong)time
                                   withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)waitForUninterruptiblyWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard;

- (jboolean)waitForUninterruptiblyWithComGoogleCommonUtilConcurrentMonitor_Guard:(ComGoogleCommonUtilConcurrentMonitor_Guard *)guard
                                                                        withLong:(jlong)time
                                                  withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentMonitor)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentMonitor_init(ComGoogleCommonUtilConcurrentMonitor *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentMonitor *new_ComGoogleCommonUtilConcurrentMonitor_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentMonitor *create_ComGoogleCommonUtilConcurrentMonitor_init();

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentMonitor_initWithBoolean_(ComGoogleCommonUtilConcurrentMonitor *self, jboolean fair);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentMonitor *new_ComGoogleCommonUtilConcurrentMonitor_initWithBoolean_(jboolean fair) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentMonitor *create_ComGoogleCommonUtilConcurrentMonitor_initWithBoolean_(jboolean fair);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentMonitor)

#endif

#if !defined (ComGoogleCommonUtilConcurrentMonitor_Guard_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentMonitor || defined(INCLUDE_ComGoogleCommonUtilConcurrentMonitor_Guard))
#define ComGoogleCommonUtilConcurrentMonitor_Guard_

@class ComGoogleCommonUtilConcurrentMonitor;
@protocol JavaUtilConcurrentLocksCondition;

@interface ComGoogleCommonUtilConcurrentMonitor_Guard : NSObject {
 @public
  __unsafe_unretained ComGoogleCommonUtilConcurrentMonitor *monitor_;
  id<JavaUtilConcurrentLocksCondition> condition_;
  jint waiterCount_;
  ComGoogleCommonUtilConcurrentMonitor_Guard *next_;
}

#pragma mark Public

- (jboolean)isSatisfied;

#pragma mark Protected

- (instancetype)initWithComGoogleCommonUtilConcurrentMonitor:(ComGoogleCommonUtilConcurrentMonitor *)monitor;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentMonitor_Guard)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentMonitor_Guard, condition_, id<JavaUtilConcurrentLocksCondition>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentMonitor_Guard, next_, ComGoogleCommonUtilConcurrentMonitor_Guard *)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentMonitor_Guard_initWithComGoogleCommonUtilConcurrentMonitor_(ComGoogleCommonUtilConcurrentMonitor_Guard *self, ComGoogleCommonUtilConcurrentMonitor *monitor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentMonitor_Guard)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentMonitor")
