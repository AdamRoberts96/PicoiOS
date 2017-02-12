//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/ForwardingListeningExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingListeningExecutorService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentForwardingListeningExecutorService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingListeningExecutorService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingListeningExecutorService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentForwardingListeningExecutorService

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingListeningExecutorService || defined(INCLUDE_ComGoogleCommonUtilConcurrentForwardingListeningExecutorService))
#define ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_

#define RESTRICT_ComGoogleCommonUtilConcurrentForwardingExecutorService 1
#define INCLUDE_ComGoogleCommonUtilConcurrentForwardingExecutorService 1
#include "com/google/common/util/concurrent/ForwardingExecutorService.h"

#define RESTRICT_ComGoogleCommonUtilConcurrentListeningExecutorService 1
#define INCLUDE_ComGoogleCommonUtilConcurrentListeningExecutorService 1
#include "com/google/common/util/concurrent/ListeningExecutorService.h"

@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;

@interface ComGoogleCommonUtilConcurrentForwardingListeningExecutorService : ComGoogleCommonUtilConcurrentForwardingExecutorService < ComGoogleCommonUtilConcurrentListeningExecutorService >

#pragma mark Public

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                                         withId:(id)result;

#pragma mark Protected

- (instancetype)init;

- (id<ComGoogleCommonUtilConcurrentListeningExecutorService>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingListeningExecutorService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_init(ComGoogleCommonUtilConcurrentForwardingListeningExecutorService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingListeningExecutorService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingListeningExecutorService")
