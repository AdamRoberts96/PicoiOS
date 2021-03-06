//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/reflect/Element.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectElement")
#ifdef RESTRICT_ComGoogleCommonReflectElement
#define INCLUDE_ALL_ComGoogleCommonReflectElement 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectElement 1
#endif
#undef RESTRICT_ComGoogleCommonReflectElement

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectElement_) && (INCLUDE_ALL_ComGoogleCommonReflectElement || defined(INCLUDE_ComGoogleCommonReflectElement))
#define ComGoogleCommonReflectElement_

#define RESTRICT_JavaLangReflectAccessibleObject 1
#define INCLUDE_JavaLangReflectAccessibleObject 1
#include "java/lang/reflect/AccessibleObject.h"

#define RESTRICT_JavaLangReflectMember 1
#define INCLUDE_JavaLangReflectMember 1
#include "java/lang/reflect/Member.h"

@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangAnnotationAnnotation;

@interface ComGoogleCommonReflectElement : JavaLangReflectAccessibleObject < JavaLangReflectMember >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (id<JavaLangAnnotationAnnotation>)getAnnotationWithIOSClass:(IOSClass *)annotationClass;

- (IOSObjectArray *)getAnnotations;

- (IOSObjectArray *)getDeclaredAnnotations;

- (IOSClass *)getDeclaringClass;

- (jint)getModifiers;

- (NSString *)getName;

- (ComGoogleCommonReflectTypeToken *)getOwnerType;

- (NSUInteger)hash;

- (jboolean)isAbstract;

- (jboolean)isAccessible;

- (jboolean)isAnnotationPresentWithIOSClass:(IOSClass *)annotationClass;

- (jboolean)isFinal;

- (jboolean)isNative;

- (jboolean)isPackagePrivate;

- (jboolean)isPrivate;

- (jboolean)isProtected;

- (jboolean)isPublic;

- (jboolean)isStatic;

- (jboolean)isSynchronized;

- (jboolean)isSynthetic;

- (void)setAccessibleWithBoolean:(jboolean)flag;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithJavaLangReflectAccessibleObject:(JavaLangReflectAccessibleObject<JavaLangReflectMember> *)member;

- (jboolean)isTransient;

- (jboolean)isVolatile;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectElement)

FOUNDATION_EXPORT void ComGoogleCommonReflectElement_initWithJavaLangReflectAccessibleObject_(ComGoogleCommonReflectElement *self, JavaLangReflectAccessibleObject<JavaLangReflectMember> *member);

FOUNDATION_EXPORT ComGoogleCommonReflectElement *new_ComGoogleCommonReflectElement_initWithJavaLangReflectAccessibleObject_(JavaLangReflectAccessibleObject<JavaLangReflectMember> *member) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectElement *create_ComGoogleCommonReflectElement_initWithJavaLangReflectAccessibleObject_(JavaLangReflectAccessibleObject<JavaLangReflectMember> *member);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectElement)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectElement")
