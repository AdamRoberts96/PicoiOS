//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/FutureCallback.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFutureCallback")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentFutureCallback
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFutureCallback 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFutureCallback 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentFutureCallback

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentFutureCallback_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFutureCallback || defined(INCLUDE_ComGoogleCommonUtilConcurrentFutureCallback))
#define ComGoogleCommonUtilConcurrentFutureCallback_

@protocol ComGoogleCommonUtilConcurrentFutureCallback < JavaObject >

- (void)onSuccessWithId:(id)result;

- (void)onFailureWithNSException:(NSException *)t;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentFutureCallback)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFutureCallback)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFutureCallback")
