//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/SerializingExecutor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentSerializingExecutor")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentSerializingExecutor
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentSerializingExecutor 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentSerializingExecutor 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentSerializingExecutor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentSerializingExecutor_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentSerializingExecutor || defined(INCLUDE_ComGoogleCommonUtilConcurrentSerializingExecutor))
#define ComGoogleCommonUtilConcurrentSerializingExecutor_

#define RESTRICT_JavaUtilConcurrentExecutor 1
#define INCLUDE_JavaUtilConcurrentExecutor 1
#include "java/util/concurrent/Executor.h"

@protocol JavaLangRunnable;

@interface ComGoogleCommonUtilConcurrentSerializingExecutor : NSObject < JavaUtilConcurrentExecutor >

#pragma mark Public

- (instancetype)initWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (void)executeFirstWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (void)resume;

- (void)suspend;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentSerializingExecutor)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentSerializingExecutor_initWithJavaUtilConcurrentExecutor_(ComGoogleCommonUtilConcurrentSerializingExecutor *self, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSerializingExecutor *new_ComGoogleCommonUtilConcurrentSerializingExecutor_initWithJavaUtilConcurrentExecutor_(id<JavaUtilConcurrentExecutor> executor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSerializingExecutor *create_ComGoogleCommonUtilConcurrentSerializingExecutor_initWithJavaUtilConcurrentExecutor_(id<JavaUtilConcurrentExecutor> executor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSerializingExecutor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentSerializingExecutor")
