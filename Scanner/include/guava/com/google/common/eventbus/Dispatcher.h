//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/eventbus/Dispatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEventbusDispatcher")
#ifdef RESTRICT_ComGoogleCommonEventbusDispatcher
#define INCLUDE_ALL_ComGoogleCommonEventbusDispatcher 0
#else
#define INCLUDE_ALL_ComGoogleCommonEventbusDispatcher 1
#endif
#undef RESTRICT_ComGoogleCommonEventbusDispatcher

#if !defined (ComGoogleCommonEventbusDispatcher_) && (INCLUDE_ALL_ComGoogleCommonEventbusDispatcher || defined(INCLUDE_ComGoogleCommonEventbusDispatcher))
#define ComGoogleCommonEventbusDispatcher_

@protocol JavaUtilIterator;

@interface ComGoogleCommonEventbusDispatcher : NSObject

#pragma mark Package-Private

- (instancetype)init;

- (void)dispatchWithId:(id)event
  withJavaUtilIterator:(id<JavaUtilIterator>)subscribers;

+ (ComGoogleCommonEventbusDispatcher *)immediate;

+ (ComGoogleCommonEventbusDispatcher *)legacyAsync;

+ (ComGoogleCommonEventbusDispatcher *)perThreadDispatchQueue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusDispatcher)

FOUNDATION_EXPORT void ComGoogleCommonEventbusDispatcher_init(ComGoogleCommonEventbusDispatcher *self);

FOUNDATION_EXPORT ComGoogleCommonEventbusDispatcher *ComGoogleCommonEventbusDispatcher_perThreadDispatchQueue();

FOUNDATION_EXPORT ComGoogleCommonEventbusDispatcher *ComGoogleCommonEventbusDispatcher_legacyAsync();

FOUNDATION_EXPORT ComGoogleCommonEventbusDispatcher *ComGoogleCommonEventbusDispatcher_immediate();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusDispatcher)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEventbusDispatcher")
