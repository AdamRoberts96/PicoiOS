//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/ListeningScheduledExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentListeningScheduledExecutorService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService || defined(INCLUDE_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService))
#define ComGoogleCommonUtilConcurrentListeningScheduledExecutorService_

#define RESTRICT_JavaUtilConcurrentScheduledExecutorService 1
#define INCLUDE_JavaUtilConcurrentScheduledExecutorService 1
#include "java/util/concurrent/ScheduledExecutorService.h"

#define RESTRICT_ComGoogleCommonUtilConcurrentListeningExecutorService 1
#define INCLUDE_ComGoogleCommonUtilConcurrentListeningExecutorService 1
#include "com/google/common/util/concurrent/ListeningExecutorService.h"

@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol ComGoogleCommonUtilConcurrentListenableScheduledFuture;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;

@protocol ComGoogleCommonUtilConcurrentListeningScheduledExecutorService < JavaUtilConcurrentScheduledExecutorService, ComGoogleCommonUtilConcurrentListeningExecutorService, JavaObject >

- (id<ComGoogleCommonUtilConcurrentListenableScheduledFuture>)scheduleWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                                                  withLong:(jlong)delay
                                                            withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<ComGoogleCommonUtilConcurrentListenableScheduledFuture>)scheduleWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                                                                            withLong:(jlong)delay
                                                                      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<ComGoogleCommonUtilConcurrentListenableScheduledFuture>)scheduleAtFixedRateWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                                                             withLong:(jlong)initialDelay
                                                                                             withLong:(jlong)period
                                                                       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<ComGoogleCommonUtilConcurrentListenableScheduledFuture>)scheduleWithFixedDelayWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                                                                withLong:(jlong)initialDelay
                                                                                                withLong:(jlong)delay
                                                                          withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)arg0;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)arg0
                                                                         withId:(id)arg1;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)arg0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentListeningScheduledExecutorService)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentListeningScheduledExecutorService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService")
