//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/mock/MockCreationSettings.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoMockMockCreationSettings")
#ifdef RESTRICT_OrgMockitoMockMockCreationSettings
#define INCLUDE_ALL_OrgMockitoMockMockCreationSettings 0
#else
#define INCLUDE_ALL_OrgMockitoMockMockCreationSettings 1
#endif
#undef RESTRICT_OrgMockitoMockMockCreationSettings

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoMockMockCreationSettings_) && (INCLUDE_ALL_OrgMockitoMockMockCreationSettings || defined(INCLUDE_OrgMockitoMockMockCreationSettings))
#define OrgMockitoMockMockCreationSettings_

@class IOSClass;
@protocol JavaUtilList;
@protocol JavaUtilSet;
@protocol OrgMockitoMockMockName;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief Informs about the mock settings.
 An immutable view of <code>org.mockito.MockSettings</code>.
 */
@protocol OrgMockitoMockMockCreationSettings < JavaObject >

/*!
 @brief Mocked type.
 An interface or class the mock should implement / extend.
 */
- (IOSClass *)getTypeToMock;

/*!
 @brief the extra interfaces the mock object should implement.
 */
- (id<JavaUtilSet>)getExtraInterfaces;

/*!
 @brief the name of this mock, as printed on verification errors; see <code>org.mockito.MockSettings.name</code>.
 */
- (id<OrgMockitoMockMockName>)getMockName;

/*!
 @brief the default answer for this mock, see <code>org.mockito.MockSettings.defaultAnswer</code>.
 */
- (id<OrgMockitoStubbingAnswer>)getDefaultAnswer;

/*!
 @brief the spied instance - needed for spies.
 */
- (id)getSpiedInstance;

/*!
 @brief if the mock is serializable, see <code>org.mockito.MockSettings.serializable</code>.
 */
- (jboolean)isSerializable;

/*!
 @brief the invocation listeners attached to this mock, see <code>org.mockito.MockSettings.invocationListeners</code>.
 */
- (id<JavaUtilList>)getInvocationListeners;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoMockMockCreationSettings)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoMockMockCreationSettings)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoMockMockCreationSettings")
