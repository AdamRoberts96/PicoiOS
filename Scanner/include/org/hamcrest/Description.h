//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/Description.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestDescription")
#ifdef RESTRICT_OrgHamcrestDescription
#define INCLUDE_ALL_OrgHamcrestDescription 0
#else
#define INCLUDE_ALL_OrgHamcrestDescription 1
#endif
#undef RESTRICT_OrgHamcrestDescription
#ifdef INCLUDE_OrgHamcrestDescription_NullDescription
#define INCLUDE_OrgHamcrestDescription 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestDescription_) && (INCLUDE_ALL_OrgHamcrestDescription || defined(INCLUDE_OrgHamcrestDescription))
#define OrgHamcrestDescription_

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestSelfDescribing;

/*!
 @brief A description of a Matcher.
 A Matcher will describe itself to a description
 which can later be used for reporting.
 - seealso: Matcher#describeTo(Description)
 */
@protocol OrgHamcrestDescription < JavaObject >

/*!
 @brief Appends some plain text to the description.
 */
- (id<OrgHamcrestDescription>)appendTextWithNSString:(NSString *)text;

/*!
 @brief Appends the description of a <code>SelfDescribing</code> value to this description.
 */
- (id<OrgHamcrestDescription>)appendDescriptionOfWithOrgHamcrestSelfDescribing:(id<OrgHamcrestSelfDescribing>)value;

/*!
 @brief Appends an arbitary value to the description.
 */
- (id<OrgHamcrestDescription>)appendValueWithId:(id)value;

/*!
 @brief Appends a list of values to the description.
 */
- (id<OrgHamcrestDescription>)appendValueListWithNSString:(NSString *)start
                                             withNSString:(NSString *)separator
                                             withNSString:(NSString *)end
                                        withNSObjectArray:(IOSObjectArray *)values;

/*!
 @brief Appends a list of values to the description.
 */
- (id<OrgHamcrestDescription>)appendValueListWithNSString:(NSString *)start
                                             withNSString:(NSString *)separator
                                             withNSString:(NSString *)end
                                     withJavaLangIterable:(id<JavaLangIterable>)values;

/*!
 @brief Appends a list of <code>org.hamcrest.SelfDescribing</code> objects
 to the description.
 */
- (id<OrgHamcrestDescription>)appendListWithNSString:(NSString *)start
                                        withNSString:(NSString *)separator
                                        withNSString:(NSString *)end
                                withJavaLangIterable:(id<JavaLangIterable>)values;

@end

@interface OrgHamcrestDescription : NSObject

+ (id<OrgHamcrestDescription>)NONE;

@end

J2OBJC_STATIC_INIT(OrgHamcrestDescription)

/*!
 @brief A description that consumes input but does nothing.
 */
inline id<OrgHamcrestDescription> OrgHamcrestDescription_get_NONE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgHamcrestDescription> OrgHamcrestDescription_NONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgHamcrestDescription, NONE, id<OrgHamcrestDescription>)

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestDescription)

#endif

#if !defined (OrgHamcrestDescription_NullDescription_) && (INCLUDE_ALL_OrgHamcrestDescription || defined(INCLUDE_OrgHamcrestDescription_NullDescription))
#define OrgHamcrestDescription_NullDescription_

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestSelfDescribing;

@interface OrgHamcrestDescription_NullDescription : NSObject < OrgHamcrestDescription >

#pragma mark Public

- (instancetype)init;

- (id<OrgHamcrestDescription>)appendDescriptionOfWithOrgHamcrestSelfDescribing:(id<OrgHamcrestSelfDescribing>)value;

- (id<OrgHamcrestDescription>)appendListWithNSString:(NSString *)start
                                        withNSString:(NSString *)separator
                                        withNSString:(NSString *)end
                                withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<OrgHamcrestDescription>)appendTextWithNSString:(NSString *)text;

- (id<OrgHamcrestDescription>)appendValueWithId:(id)value;

- (id<OrgHamcrestDescription>)appendValueListWithNSString:(NSString *)start
                                             withNSString:(NSString *)separator
                                             withNSString:(NSString *)end
                                     withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<OrgHamcrestDescription>)appendValueListWithNSString:(NSString *)start
                                             withNSString:(NSString *)separator
                                             withNSString:(NSString *)end
                                        withNSObjectArray:(IOSObjectArray *)values;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestDescription_NullDescription)

FOUNDATION_EXPORT void OrgHamcrestDescription_NullDescription_init(OrgHamcrestDescription_NullDescription *self);

FOUNDATION_EXPORT OrgHamcrestDescription_NullDescription *new_OrgHamcrestDescription_NullDescription_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestDescription_NullDescription *create_OrgHamcrestDescription_NullDescription_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestDescription_NullDescription)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestDescription")
