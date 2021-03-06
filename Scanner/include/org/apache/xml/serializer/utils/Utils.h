//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/utils/Utils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsUtils")
#ifdef RESTRICT_OrgApacheXmlSerializerUtilsUtils
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsUtils 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsUtils 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerUtilsUtils

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerUtilsUtils_) && (INCLUDE_ALL_OrgApacheXmlSerializerUtilsUtils || defined(INCLUDE_OrgApacheXmlSerializerUtilsUtils))
#define OrgApacheXmlSerializerUtilsUtils_

@class OrgApacheXmlSerializerUtilsMessages;

/*!
 @brief This class contains utilities used by the serializer.
 This class is not a public API, it is only public because it is
 used by the serializer.
  internal
 */
@interface OrgApacheXmlSerializerUtilsUtils : NSObject

+ (OrgApacheXmlSerializerUtilsMessages *)messages;

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerUtilsUtils)

/*!
 @brief A singleton Messages object is used to load the 
 given resource bundle just once, it is
 used by multiple transformations as long as the JVM stays up.
 */
inline OrgApacheXmlSerializerUtilsMessages *OrgApacheXmlSerializerUtilsUtils_get_messages();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsMessages *OrgApacheXmlSerializerUtilsUtils_messages;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerUtilsUtils, messages, OrgApacheXmlSerializerUtilsMessages *)

FOUNDATION_EXPORT void OrgApacheXmlSerializerUtilsUtils_init(OrgApacheXmlSerializerUtilsUtils *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsUtils *new_OrgApacheXmlSerializerUtilsUtils_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsUtils *create_OrgApacheXmlSerializerUtilsUtils_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerUtilsUtils)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsUtils")
