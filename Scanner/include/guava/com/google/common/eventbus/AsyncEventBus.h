//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/eventbus/AsyncEventBus.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEventbusAsyncEventBus")
#ifdef RESTRICT_ComGoogleCommonEventbusAsyncEventBus
#define INCLUDE_ALL_ComGoogleCommonEventbusAsyncEventBus 0
#else
#define INCLUDE_ALL_ComGoogleCommonEventbusAsyncEventBus 1
#endif
#undef RESTRICT_ComGoogleCommonEventbusAsyncEventBus

#if !defined (ComGoogleCommonEventbusAsyncEventBus_) && (INCLUDE_ALL_ComGoogleCommonEventbusAsyncEventBus || defined(INCLUDE_ComGoogleCommonEventbusAsyncEventBus))
#define ComGoogleCommonEventbusAsyncEventBus_

#define RESTRICT_ComGoogleCommonEventbusEventBus 1
#define INCLUDE_ComGoogleCommonEventbusEventBus 1
#include "com/google/common/eventbus/EventBus.h"

@protocol ComGoogleCommonEventbusSubscriberExceptionHandler;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonEventbusAsyncEventBus : ComGoogleCommonEventbusEventBus

#pragma mark Public

- (instancetype)initWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (instancetype)initWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor
withComGoogleCommonEventbusSubscriberExceptionHandler:(id<ComGoogleCommonEventbusSubscriberExceptionHandler>)subscriberExceptionHandler;

- (instancetype)initWithNSString:(NSString *)identifier
  withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusAsyncEventBus)

FOUNDATION_EXPORT void ComGoogleCommonEventbusAsyncEventBus_initWithNSString_withJavaUtilConcurrentExecutor_(ComGoogleCommonEventbusAsyncEventBus *self, NSString *identifier, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT ComGoogleCommonEventbusAsyncEventBus *new_ComGoogleCommonEventbusAsyncEventBus_initWithNSString_withJavaUtilConcurrentExecutor_(NSString *identifier, id<JavaUtilConcurrentExecutor> executor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonEventbusAsyncEventBus *create_ComGoogleCommonEventbusAsyncEventBus_initWithNSString_withJavaUtilConcurrentExecutor_(NSString *identifier, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT void ComGoogleCommonEventbusAsyncEventBus_initWithJavaUtilConcurrentExecutor_withComGoogleCommonEventbusSubscriberExceptionHandler_(ComGoogleCommonEventbusAsyncEventBus *self, id<JavaUtilConcurrentExecutor> executor, id<ComGoogleCommonEventbusSubscriberExceptionHandler> subscriberExceptionHandler);

FOUNDATION_EXPORT ComGoogleCommonEventbusAsyncEventBus *new_ComGoogleCommonEventbusAsyncEventBus_initWithJavaUtilConcurrentExecutor_withComGoogleCommonEventbusSubscriberExceptionHandler_(id<JavaUtilConcurrentExecutor> executor, id<ComGoogleCommonEventbusSubscriberExceptionHandler> subscriberExceptionHandler) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonEventbusAsyncEventBus *create_ComGoogleCommonEventbusAsyncEventBus_initWithJavaUtilConcurrentExecutor_withComGoogleCommonEventbusSubscriberExceptionHandler_(id<JavaUtilConcurrentExecutor> executor, id<ComGoogleCommonEventbusSubscriberExceptionHandler> subscriberExceptionHandler);

FOUNDATION_EXPORT void ComGoogleCommonEventbusAsyncEventBus_initWithJavaUtilConcurrentExecutor_(ComGoogleCommonEventbusAsyncEventBus *self, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT ComGoogleCommonEventbusAsyncEventBus *new_ComGoogleCommonEventbusAsyncEventBus_initWithJavaUtilConcurrentExecutor_(id<JavaUtilConcurrentExecutor> executor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonEventbusAsyncEventBus *create_ComGoogleCommonEventbusAsyncEventBus_initWithJavaUtilConcurrentExecutor_(id<JavaUtilConcurrentExecutor> executor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusAsyncEventBus)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEventbusAsyncEventBus")
