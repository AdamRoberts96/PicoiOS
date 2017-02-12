//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/AttributedCharacterIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextAttributedCharacterIterator")
#ifdef RESTRICT_JavaTextAttributedCharacterIterator
#define INCLUDE_ALL_JavaTextAttributedCharacterIterator 0
#else
#define INCLUDE_ALL_JavaTextAttributedCharacterIterator 1
#endif
#undef RESTRICT_JavaTextAttributedCharacterIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaTextAttributedCharacterIterator_) && (INCLUDE_ALL_JavaTextAttributedCharacterIterator || defined(INCLUDE_JavaTextAttributedCharacterIterator))
#define JavaTextAttributedCharacterIterator_

#define RESTRICT_JavaTextCharacterIterator 1
#define INCLUDE_JavaTextCharacterIterator 1
#include "java/text/CharacterIterator.h"

@class JavaTextAttributedCharacterIterator_Attribute;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief Extends the
 <code>CharacterIterator</code> interface, adding support for iterating over
 attributes and not only characters.
 An
 <code>AttributedCharacterIterator</code> also allows the user to find runs and
 their limits. Runs are defined as ranges of characters that all have the same
 attributes with the same values.
 */
@protocol JavaTextAttributedCharacterIterator < JavaTextCharacterIterator, JavaObject >

/*!
 @brief Returns a set of attributes present in the <code>AttributedCharacterIterator</code>
 .
 An empty set is returned if no attributes
 were defined.
 @return a set of attribute keys; may be empty.
 */
- (id<JavaUtilSet>)getAllAttributeKeys;

/*!
 @brief Returns the value stored in the attribute for the current character.
 If
 the attribute was not defined then <code>null</code> is returned.
 @param attribute the attribute for which the value should be returned.
 @return the value of the requested attribute for the current character or
 <code>null</code> if it was not defined.
 */
- (id)getAttributeWithJavaTextAttributedCharacterIterator_Attribute:(JavaTextAttributedCharacterIterator_Attribute *)attribute;

/*!
 @brief Returns a map of all attributes of the current character.
 If no
 attributes were defined for the current character then an empty map is
 returned.
 @return a map of all attributes for the current character or an empty
 map.
 */
- (id<JavaUtilMap>)getAttributes;

/*!
 @brief Returns the index of the last character in the run having the same
 attributes as the current character.
 @return the index of the last character of the current run.
 */
- (jint)getRunLimit;

/*!
 @brief Returns the index of the last character in the run that has the same
 attribute value for the given attribute as the current character.
 @param attribute
 the attribute which the run is based on.
 @return the index of the last character of the current run.
 */
- (jint)getRunLimitWithJavaTextAttributedCharacterIterator_Attribute:(JavaTextAttributedCharacterIterator_Attribute *)attribute;

/*!
 @brief Returns the index of the last character in the run that has the same
 attribute values for the attributes in the set as the current character.
 @param attributes
 the set of attributes which the run is based on.
 @return the index of the last character of the current run.
 */
- (jint)getRunLimitWithJavaUtilSet:(id<JavaUtilSet>)attributes;

/*!
 @brief Returns the index of the first character in the run that has the same
 attributes as the current character.
 @return the index of the last character of the current run.
 */
- (jint)getRunStart;

/*!
 @brief Returns the index of the first character in the run that has the same
 attribute value for the given attribute as the current character.
 @param attribute
 the attribute which the run is based on.
 @return the index of the last character of the current run.
 */
- (jint)getRunStartWithJavaTextAttributedCharacterIterator_Attribute:(JavaTextAttributedCharacterIterator_Attribute *)attribute;

/*!
 @brief Returns the index of the first character in the run that has the same
 attribute values for the attributes in the set as the current character.
 @param attributes
 the set of attributes which the run is based on.
 @return the index of the last character of the current run.
 */
- (jint)getRunStartWithJavaUtilSet:(id<JavaUtilSet>)attributes;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextAttributedCharacterIterator)

J2OBJC_TYPE_LITERAL_HEADER(JavaTextAttributedCharacterIterator)

#endif

#if !defined (JavaTextAttributedCharacterIterator_Attribute_) && (INCLUDE_ALL_JavaTextAttributedCharacterIterator || defined(INCLUDE_JavaTextAttributedCharacterIterator_Attribute))
#define JavaTextAttributedCharacterIterator_Attribute_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief Defines keys for text attributes.
 */
@interface JavaTextAttributedCharacterIterator_Attribute : NSObject < JavaIoSerializable >

+ (JavaTextAttributedCharacterIterator_Attribute *)INPUT_METHOD_SEGMENT;

+ (JavaTextAttributedCharacterIterator_Attribute *)LANGUAGE;

+ (JavaTextAttributedCharacterIterator_Attribute *)READING;

#pragma mark Public

/*!
 @brief Compares this attribute with the specified object.
 Checks if both
 objects are the same instance. It is defined final so all subclasses
 have the same behavior for this method.
 @param object
 the object to compare against.
 @return <code>true</code> if the object passed is equal to this instance;
 <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Calculates the hash code for objects of type <code>Attribute</code>.
 It
 is defined final so all sub types calculate their hash code
 identically.
 @return the hash code for this instance of <code>Attribute</code>.
 */
- (NSUInteger)hash;

/*!
 @brief Returns the name of the class followed by a "(", the name of the
 attribute, and a ")".
 @return the string representing this instance.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief The constructor for an <code>Attribute</code> with the name passed.
 @param name
 the name of the new <code>Attribute</code>.
 */
- (instancetype)initWithNSString:(NSString *)name;

/*!
 @brief Returns the name of this attribute.
 @return the name of this attribute.
 */
- (NSString *)getName;

/*!
 @brief Resolves a deserialized instance to the correct constant attribute.
 @return the <code>Attribute</code> this instance represents.
 @throws InvalidObjectException
 if this instance is not of type <code>Attribute.class</code>
 or if it is not a known <code>Attribute</code>.
 */
- (id)readResolve;

@end

J2OBJC_STATIC_INIT(JavaTextAttributedCharacterIterator_Attribute)

/*!
 @brief This attribute marks segments from an input method.
 Most input
 methods create these segments for words.
 The value objects are of the type <code>Annotation</code> which contain
 <code>null</code>.
 */
inline JavaTextAttributedCharacterIterator_Attribute *JavaTextAttributedCharacterIterator_Attribute_get_INPUT_METHOD_SEGMENT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextAttributedCharacterIterator_Attribute *JavaTextAttributedCharacterIterator_Attribute_INPUT_METHOD_SEGMENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextAttributedCharacterIterator_Attribute, INPUT_METHOD_SEGMENT, JavaTextAttributedCharacterIterator_Attribute *)

/*!
 @brief The attribute describing the language of a character.
 The value
 objects are of type <code>Locale</code> or a subtype of it.
 */
inline JavaTextAttributedCharacterIterator_Attribute *JavaTextAttributedCharacterIterator_Attribute_get_LANGUAGE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextAttributedCharacterIterator_Attribute *JavaTextAttributedCharacterIterator_Attribute_LANGUAGE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextAttributedCharacterIterator_Attribute, LANGUAGE, JavaTextAttributedCharacterIterator_Attribute *)

/*!
 @brief For languages that have different reading directions of text (like
 Japanese), this attribute allows to define which reading should be
 used.
 The value objects are of type <code>Annotation</code> which
 contain a <code>String</code>.
 */
inline JavaTextAttributedCharacterIterator_Attribute *JavaTextAttributedCharacterIterator_Attribute_get_READING();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextAttributedCharacterIterator_Attribute *JavaTextAttributedCharacterIterator_Attribute_READING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextAttributedCharacterIterator_Attribute, READING, JavaTextAttributedCharacterIterator_Attribute *)

FOUNDATION_EXPORT void JavaTextAttributedCharacterIterator_Attribute_initWithNSString_(JavaTextAttributedCharacterIterator_Attribute *self, NSString *name);

FOUNDATION_EXPORT JavaTextAttributedCharacterIterator_Attribute *new_JavaTextAttributedCharacterIterator_Attribute_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextAttributedCharacterIterator_Attribute *create_JavaTextAttributedCharacterIterator_Attribute_initWithNSString_(NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextAttributedCharacterIterator_Attribute)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextAttributedCharacterIterator")
