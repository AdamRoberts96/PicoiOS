//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/MethodSorter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalMethodSorter")
#ifdef RESTRICT_OrgJunitInternalMethodSorter
#define INCLUDE_ALL_OrgJunitInternalMethodSorter 0
#else
#define INCLUDE_ALL_OrgJunitInternalMethodSorter 1
#endif
#undef RESTRICT_OrgJunitInternalMethodSorter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalMethodSorter_) && (INCLUDE_ALL_OrgJunitInternalMethodSorter || defined(INCLUDE_OrgJunitInternalMethodSorter))
#define OrgJunitInternalMethodSorter_

@class IOSClass;
@class IOSObjectArray;
@protocol JavaUtilComparator;

@interface OrgJunitInternalMethodSorter : NSObject

+ (id<JavaUtilComparator>)DEFAULT;

+ (void)setDEFAULT:(id<JavaUtilComparator>)value;

+ (id<JavaUtilComparator>)NAME_ASCENDING;

+ (void)setNAME_ASCENDING:(id<JavaUtilComparator>)value;

#pragma mark Public

/*!
 @brief Gets declared methods of a class in a predictable order, unless @@FixMethodOrder(MethodSorters.JVM) is specified.
 Using the JVM order is unwise since the Java platform does not
 specify any particular order, and in fact JDK 7 returns a more or less
 random order; well-written test code would not assume any order, but some
 does, and a predictable failure is better than a random failure on
 certain platforms. By default, uses an unspecified but deterministic order.
 @param clazz a class
 @return same as <code>Class.getDeclaredMethods</code> but sorted
 - seealso: <a href="http://bugs.sun.com/view_bug.do?bug_id=7023180">JDK
     *      (non-)bug #7023180</a>
 */
+ (IOSObjectArray *)getDeclaredMethodsWithIOSClass:(IOSClass *)clazz;

@end

J2OBJC_STATIC_INIT(OrgJunitInternalMethodSorter)

/*!
 @brief DEFAULT sort order
 */
inline id<JavaUtilComparator> OrgJunitInternalMethodSorter_get_DEFAULT();
inline id<JavaUtilComparator> OrgJunitInternalMethodSorter_set_DEFAULT(id<JavaUtilComparator> value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilComparator> OrgJunitInternalMethodSorter_DEFAULT;
J2OBJC_STATIC_FIELD_OBJ(OrgJunitInternalMethodSorter, DEFAULT, id<JavaUtilComparator>)

/*!
 @brief Method name ascending lexicographic sort order, with <code>Method.toString()</code> as a tiebreaker
 */
inline id<JavaUtilComparator> OrgJunitInternalMethodSorter_get_NAME_ASCENDING();
inline id<JavaUtilComparator> OrgJunitInternalMethodSorter_set_NAME_ASCENDING(id<JavaUtilComparator> value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilComparator> OrgJunitInternalMethodSorter_NAME_ASCENDING;
J2OBJC_STATIC_FIELD_OBJ(OrgJunitInternalMethodSorter, NAME_ASCENDING, id<JavaUtilComparator>)

FOUNDATION_EXPORT IOSObjectArray *OrgJunitInternalMethodSorter_getDeclaredMethodsWithIOSClass_(IOSClass *clazz);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalMethodSorter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalMethodSorter")
