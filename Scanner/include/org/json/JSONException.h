//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/json/src/main/java/org/json/JSONException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJsonJSONException")
#ifdef RESTRICT_OrgJsonJSONException
#define INCLUDE_ALL_OrgJsonJSONException 0
#else
#define INCLUDE_ALL_OrgJsonJSONException 1
#endif
#undef RESTRICT_OrgJsonJSONException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJsonJSONException_) && (INCLUDE_ALL_OrgJsonJSONException || defined(INCLUDE_OrgJsonJSONException))
#define OrgJsonJSONException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

/*!
 @brief Thrown to indicate a problem with the JSON API.
 Such problems include:
 <ul>
 <li>Attempts to parse or construct malformed documents
 <li>Use of null as a name
 <li>Use of numeric types not available to JSON, such as <code>NaNs</code>
  or <code>infinities</code>.
 <li>Lookups using an out of range index or nonexistent name
 <li>Type mismatches on lookups
 </ul>
 <p>Although this is a checked exception, it is rarely recoverable. Most
 callers should simply wrap this exception in an unchecked exception and
 rethrow:
 @code
  public JSONArray toJSONObject() {
     try {
         JSONObject result = new JSONObject();
         ...
     } catch (JSONException e) {
         throw new RuntimeException(e);
     }
  
@endcode
 */
@interface OrgJsonJSONException : JavaLangException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJsonJSONException)

FOUNDATION_EXPORT void OrgJsonJSONException_initWithNSString_(OrgJsonJSONException *self, NSString *s);

FOUNDATION_EXPORT OrgJsonJSONException *new_OrgJsonJSONException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONException *create_OrgJsonJSONException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(OrgJsonJSONException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJsonJSONException")
