//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/FuturesGetChecked.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentFuturesGetChecked
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentFuturesGetChecked
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator
#define INCLUDE_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentFuturesGetChecked_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked || defined(INCLUDE_ComGoogleCommonUtilConcurrentFuturesGetChecked))
#define ComGoogleCommonUtilConcurrentFuturesGetChecked_

@class IOSClass;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator;
@protocol JavaUtilConcurrentFuture;

@interface ComGoogleCommonUtilConcurrentFuturesGetChecked : NSObject

#pragma mark Package-Private

+ (void)checkExceptionClassValidityWithIOSClass:(IOSClass *)exceptionClass;

+ (id)getCheckedWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)future
                                withIOSClass:(IOSClass *)exceptionClass;

+ (id)getCheckedWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)future
                                withIOSClass:(IOSClass *)exceptionClass
                                    withLong:(jlong)timeout
              withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

+ (id)getCheckedWithComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator:(id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator>)validator
                                                              withJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)future
                                                                              withIOSClass:(IOSClass *)exceptionClass;

+ (jboolean)isCheckedExceptionWithIOSClass:(IOSClass *)type;

+ (id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator>)weakSetValidator;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentFuturesGetChecked)

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentFuturesGetChecked_getCheckedWithJavaUtilConcurrentFuture_withIOSClass_(id<JavaUtilConcurrentFuture> future, IOSClass *exceptionClass);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentFuturesGetChecked_getCheckedWithComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator_withJavaUtilConcurrentFuture_withIOSClass_(id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator> validator, id<JavaUtilConcurrentFuture> future, IOSClass *exceptionClass);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentFuturesGetChecked_getCheckedWithJavaUtilConcurrentFuture_withIOSClass_withLong_withJavaUtilConcurrentTimeUnit_(id<JavaUtilConcurrentFuture> future, IOSClass *exceptionClass, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator> ComGoogleCommonUtilConcurrentFuturesGetChecked_weakSetValidator();

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentFuturesGetChecked_isCheckedExceptionWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentFuturesGetChecked_checkExceptionClassValidityWithIOSClass_(IOSClass *exceptionClass);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFuturesGetChecked)

#endif

#if !defined (ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked || defined(INCLUDE_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator))
#define ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator_

@class IOSClass;

@protocol ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator < JavaObject >

- (void)validateClassWithIOSClass:(IOSClass *)exceptionClass;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator)

#endif

#if !defined (ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked || defined(INCLUDE_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder))
#define ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_

@protocol ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator;

@interface ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder : NSObject

#pragma mark Package-Private

- (instancetype)init;

+ (id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator>)getBestValidator;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder)

inline NSString *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_get_CLASS_VALUE_VALIDATOR_NAME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_CLASS_VALUE_VALIDATOR_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder, CLASS_VALUE_VALIDATOR_NAME, NSString *)

inline id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator> ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_get_BEST_VALIDATOR();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator> ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_BEST_VALIDATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder, BEST_VALIDATOR, id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator>)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_init(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder *new_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder *create_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_init();

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator> ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_getBestValidator();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder)

#endif

#if !defined (ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked || defined(INCLUDE_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator))
#define ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSClass;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_Enum) {
  ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_Enum_INSTANCE = 0,
};

@interface ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator : JavaLangEnum < NSCopying, ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator >

#pragma mark Public

- (void)validateClassWithIOSClass:(IOSClass *)exceptionClass;

+ (ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_values_[];

inline ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_get_INSTANCE();
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_values();

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked")
