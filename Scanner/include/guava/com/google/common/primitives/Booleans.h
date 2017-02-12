//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/primitives/Booleans.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesBooleans")
#ifdef RESTRICT_ComGoogleCommonPrimitivesBooleans
#define INCLUDE_ALL_ComGoogleCommonPrimitivesBooleans 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesBooleans 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesBooleans

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesBooleans_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesBooleans || defined(INCLUDE_ComGoogleCommonPrimitivesBooleans))
#define ComGoogleCommonPrimitivesBooleans_

@class IOSBooleanArray;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

@interface ComGoogleCommonPrimitivesBooleans : NSObject

#pragma mark Public

+ (id<JavaUtilList>)asListWithBooleanArray:(IOSBooleanArray *)backingArray;

+ (jint)compareWithBoolean:(jboolean)a
               withBoolean:(jboolean)b;

+ (IOSBooleanArray *)concatWithBooleanArray2:(IOSObjectArray *)arrays;

+ (jboolean)containsWithBooleanArray:(IOSBooleanArray *)array
                         withBoolean:(jboolean)target;

+ (jint)countTrueWithBooleanArray:(IOSBooleanArray *)values;

+ (IOSBooleanArray *)ensureCapacityWithBooleanArray:(IOSBooleanArray *)array
                                            withInt:(jint)minLength
                                            withInt:(jint)padding;

+ (jint)hashCodeWithBoolean:(jboolean)value;

+ (jint)indexOfWithBooleanArray:(IOSBooleanArray *)array
                    withBoolean:(jboolean)target;

+ (jint)indexOfWithBooleanArray:(IOSBooleanArray *)array
               withBooleanArray:(IOSBooleanArray *)target;

+ (NSString *)joinWithNSString:(NSString *)separator
              withBooleanArray:(IOSBooleanArray *)array;

+ (jint)lastIndexOfWithBooleanArray:(IOSBooleanArray *)array
                        withBoolean:(jboolean)target;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (IOSBooleanArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesBooleans)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_hashCodeWithBoolean_(jboolean value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_compareWithBoolean_withBoolean_(jboolean a, jboolean b);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesBooleans_containsWithBooleanArray_withBoolean_(IOSBooleanArray *array, jboolean target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_indexOfWithBooleanArray_withBoolean_(IOSBooleanArray *array, jboolean target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_indexOfWithBooleanArray_withBooleanArray_(IOSBooleanArray *array, IOSBooleanArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_lastIndexOfWithBooleanArray_withBoolean_(IOSBooleanArray *array, jboolean target);

FOUNDATION_EXPORT IOSBooleanArray *ComGoogleCommonPrimitivesBooleans_concatWithBooleanArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT IOSBooleanArray *ComGoogleCommonPrimitivesBooleans_ensureCapacityWithBooleanArray_withInt_withInt_(IOSBooleanArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesBooleans_joinWithNSString_withBooleanArray_(NSString *separator, IOSBooleanArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesBooleans_lexicographicalComparator();

FOUNDATION_EXPORT IOSBooleanArray *ComGoogleCommonPrimitivesBooleans_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesBooleans_asListWithBooleanArray_(IOSBooleanArray *backingArray);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_countTrueWithBooleanArray_(IOSBooleanArray *values);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesBooleans)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesBooleans")
