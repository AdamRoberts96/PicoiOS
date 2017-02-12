//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/CharacterIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextCharacterIterator")
#ifdef RESTRICT_JavaTextCharacterIterator
#define INCLUDE_ALL_JavaTextCharacterIterator 0
#else
#define INCLUDE_ALL_JavaTextCharacterIterator 1
#endif
#undef RESTRICT_JavaTextCharacterIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaTextCharacterIterator_) && (INCLUDE_ALL_JavaTextCharacterIterator || defined(INCLUDE_JavaTextCharacterIterator))
#define JavaTextCharacterIterator_

/*!
 @brief An interface for the bidirectional iteration over a group of characters.
 The
 iteration starts at the begin index in the group of characters and continues
 to one index before the end index.
 */
@protocol JavaTextCharacterIterator < NSCopying, JavaObject >

/*!
 @brief Returns a new <code>CharacterIterator</code> with the same properties.
 @return a shallow copy of this character iterator.
 - seealso: java.lang.Cloneable
 */
- (id)java_clone;

/*!
 @brief Returns the character at the current index.
 @return the current character, or <code>DONE</code> if the current index is
 past the beginning or end of the sequence.
 */
- (jchar)current;

/*!
 @brief Sets the current position to the begin index and returns the character at
 the new position.
 @return the character at the begin index.
 */
- (jchar)first;

/*!
 @brief Returns the begin index.
 @return the index of the first character of the iteration.
 */
- (jint)getBeginIndex;

/*!
 @brief Returns the end index.
 @return the index one past the last character of the iteration.
 */
- (jint)getEndIndex;

/*!
 @brief Returns the current index.
 @return the current index.
 */
- (jint)getIndex;

/*!
 @brief Sets the current position to the end index - 1 and returns the character
 at the new position.
 @return the character before the end index.
 */
- (jchar)last;

/*!
 @brief Increments the current index and returns the character at the new index.
 @return the character at the next index, or <code>DONE</code> if the next
 index would be past the end.
 */
- (jchar)next;

/*!
 @brief Decrements the current index and returns the character at the new index.
 @return the character at the previous index, or <code>DONE</code> if the
 previous index would be past the beginning.
 */
- (jchar)previous;

/*!
 @brief Sets the current index to a new position and returns the character at the
 new index.
 @param location
 the new index that this character iterator is set to.
 @return the character at the new index, or <code>DONE</code> if the index is
 past the end.
 @throws IllegalArgumentException
 if <code>location</code> is less than the begin index or greater than
 the end index.
 */
- (jchar)setIndexWithInt:(jint)location;

@end

@interface JavaTextCharacterIterator : NSObject

+ (jchar)DONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextCharacterIterator)

/*!
 @brief A constant which indicates that there is no character at the current
 index.
 */
inline jchar JavaTextCharacterIterator_get_DONE();
#define JavaTextCharacterIterator_DONE 0xffff
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCharacterIterator, DONE, jchar)

J2OBJC_TYPE_LITERAL_HEADER(JavaTextCharacterIterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextCharacterIterator")
