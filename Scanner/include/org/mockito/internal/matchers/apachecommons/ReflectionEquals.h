//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/apachecommons/ReflectionEquals.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersApachecommonsReflectionEquals")
#ifdef RESTRICT_OrgMockitoInternalMatchersApachecommonsReflectionEquals
#define INCLUDE_ALL_OrgMockitoInternalMatchersApachecommonsReflectionEquals 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersApachecommonsReflectionEquals 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersApachecommonsReflectionEquals

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalMatchersApachecommonsReflectionEquals_) && (INCLUDE_ALL_OrgMockitoInternalMatchersApachecommonsReflectionEquals || defined(INCLUDE_OrgMockitoInternalMatchersApachecommonsReflectionEquals))
#define OrgMockitoInternalMatchersApachecommonsReflectionEquals_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersApachecommonsReflectionEquals : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithId:(id)wanted
         withNSStringArray:(IOSObjectArray *)excludeFields;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersApachecommonsReflectionEquals)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersApachecommonsReflectionEquals_initWithId_withNSStringArray_(OrgMockitoInternalMatchersApachecommonsReflectionEquals *self, id wanted, IOSObjectArray *excludeFields);

FOUNDATION_EXPORT OrgMockitoInternalMatchersApachecommonsReflectionEquals *new_OrgMockitoInternalMatchersApachecommonsReflectionEquals_initWithId_withNSStringArray_(id wanted, IOSObjectArray *excludeFields) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersApachecommonsReflectionEquals *create_OrgMockitoInternalMatchersApachecommonsReflectionEquals_initWithId_withNSStringArray_(id wanted, IOSObjectArray *excludeFields);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersApachecommonsReflectionEquals)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersApachecommonsReflectionEquals")
