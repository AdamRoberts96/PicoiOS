//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/ForwardingBlockingQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingQueue")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentForwardingBlockingQueue
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingQueue 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingQueue 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentForwardingBlockingQueue

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentForwardingBlockingQueue_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingQueue || defined(INCLUDE_ComGoogleCommonUtilConcurrentForwardingBlockingQueue))
#define ComGoogleCommonUtilConcurrentForwardingBlockingQueue_

#define RESTRICT_ComGoogleCommonCollectForwardingQueue 1
#define INCLUDE_ComGoogleCommonCollectForwardingQueue 1
#include "com/google/common/collect/ForwardingQueue.h"

#define RESTRICT_JavaUtilConcurrentBlockingQueue 1
#define INCLUDE_JavaUtilConcurrentBlockingQueue 1
#include "java/util/concurrent/BlockingQueue.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilCollection;

@interface ComGoogleCommonUtilConcurrentForwardingBlockingQueue : ComGoogleCommonCollectForwardingQueue < JavaUtilConcurrentBlockingQueue >

#pragma mark Public

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)putWithId:(id)e;

- (jint)remainingCapacity;

- (id)take;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilConcurrentBlockingQueue>)delegate;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingBlockingQueue)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingBlockingQueue_init(ComGoogleCommonUtilConcurrentForwardingBlockingQueue *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingBlockingQueue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingQueue")
