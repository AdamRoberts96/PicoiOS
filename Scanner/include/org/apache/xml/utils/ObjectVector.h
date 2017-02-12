//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/ObjectVector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsObjectVector")
#ifdef RESTRICT_OrgApacheXmlUtilsObjectVector
#define INCLUDE_ALL_OrgApacheXmlUtilsObjectVector 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsObjectVector 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsObjectVector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsObjectVector_) && (INCLUDE_ALL_OrgApacheXmlUtilsObjectVector || defined(INCLUDE_OrgApacheXmlUtilsObjectVector))
#define OrgApacheXmlUtilsObjectVector_

@class IOSObjectArray;

/*!
 @brief A very simple table that stores a list of objects.
 This version is based on a "realloc" strategy -- a simle array is
 used, and when more storage is needed, a larger array is obtained
 and all existing data is recopied into it. As a result, read/write
 access to existing nodes is O(1) fast but appending may be O(N**2)
 slow. 
  internal
 */
@interface OrgApacheXmlUtilsObjectVector : NSObject < NSCopying > {
 @public
  /*!
   @brief Size of blocks to allocate
   */
  jint m_blocksize_;
  /*!
   @brief Array of objects
   */
  IOSObjectArray *m_map_;
  /*!
   @brief Number of ints in array
   */
  jint m_firstFree_;
  /*!
   @brief Size of array
   */
  jint m_mapSize_;
}

#pragma mark Public

/*!
 @brief Default constructor.
 Note that the default
 block size is very small, for small lists.
 */
- (instancetype)init;

/*!
 @brief Construct a IntVector, using the given block size.
 @param blocksize Size of block to allocate
 */
- (instancetype)initWithInt:(jint)blocksize;

/*!
 @brief Construct a IntVector, using the given block size.
 @param blocksize Size of block to allocate
 */
- (instancetype)initWithInt:(jint)blocksize
                    withInt:(jint)increaseSize;

/*!
 @brief Copy constructor for ObjectVector
 @param v Existing ObjectVector to copy
 */
- (instancetype)initWithOrgApacheXmlUtilsObjectVector:(OrgApacheXmlUtilsObjectVector *)v;

/*!
 @brief Append an object onto the vector.
 @param value Object to add to the list
 */
- (void)addElementWithId:(id)value;

/*!
 @brief Append several slots onto the vector, but do not set the values.
 @param numberOfElements number of slots to append
 */
- (void)addElementsWithInt:(jint)numberOfElements;

/*!
 @brief Append several Object values onto the vector.
 @param value Object to add to the list
 */
- (void)addElementsWithId:(id)value
                  withInt:(jint)numberOfElements;

/*!
 @brief Returns clone of current ObjectVector
 @return clone of current ObjectVector
 */
- (id)java_clone;

/*!
 @brief Tell if the table contains the given Object.
 @param s object to look for
 @return true if the object is in the list
 */
- (jboolean)containsWithId:(id)s;

/*!
 @brief Get the nth element.
 @param i index of object to get
 @return object at given index
 */
- (id)elementAtWithInt:(jint)i;

/*!
 @brief Searches for the first occurence of the given argument,
 beginning the search at index, and testing for equality
 using the equals method.
 @param elem object to look for
 @return the index of the first occurrence of the object
 argument in this vector at position index or later in the
 vector; returns -1 if the object is not found.
 */
- (jint)indexOfWithId:(id)elem;

/*!
 @brief Searches for the first occurence of the given argument,
 beginning the search at index, and testing for equality
 using the equals method.
 @param elem object to look for
 @param index Index of where to begin search
 @return the index of the first occurrence of the object
 argument in this vector at position index or later in the
 vector; returns -1 if the object is not found.
 */
- (jint)indexOfWithId:(id)elem
              withInt:(jint)index;

/*!
 @brief Inserts the specified object in this vector at the specified index.
 Each component in this vector with an index greater or equal to
 the specified index is shifted upward to have an index one greater
 than the value it had previously.
 @param value Object to insert
 @param at Index of where to insert
 */
- (void)insertElementAtWithId:(id)value
                      withInt:(jint)at;

/*!
 @brief Searches for the first occurence of the given argument,
 beginning the search at index, and testing for equality
 using the equals method.
 @param elem Object to look for
 @return the index of the first occurrence of the object
 argument in this vector at position index or later in the
 vector; returns -1 if the object is not found.
 */
- (jint)lastIndexOfWithId:(id)elem;

/*!
 @brief Remove all elements objects from the list.
 */
- (void)removeAllElements;

/*!
 @brief Removes the first occurrence of the argument from this vector.
 If the object is found in this vector, each component in the vector
 with an index greater or equal to the object's index is shifted
 downward to have an index one smaller than the value it had
 previously.
 @param s Object to remove from array
 @return True if the object was removed, false if it was not found
 */
- (jboolean)removeElementWithId:(id)s;

/*!
 @brief Deletes the component at the specified index.
 Each component in
 this vector with an index greater or equal to the specified
 index is shifted downward to have an index one smaller than
 the value it had previously.
 @param i index of where to remove an object
 */
- (void)removeElementAtWithInt:(jint)i;

/*!
 @brief Sets the component at the specified index of this vector to be the
 specified object.
 The previous component at that position is discarded.
 The index must be a value greater than or equal to 0 and less
 than the current size of the vector.
 @param value object to set
 @param index Index of where to set the object
 */
- (void)setElementAtWithId:(id)value
                   withInt:(jint)index;

/*!
 @brief Get the length of the list.
 @return length of the list
 */
- (void)setSizeWithInt:(jint)sz;

- (void)setToSizeWithInt:(jint)size;

/*!
 @brief Get the length of the list.
 @return length of the list
 */
- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsObjectVector)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsObjectVector, m_map_, IOSObjectArray *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectVector_init(OrgApacheXmlUtilsObjectVector *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectVector *new_OrgApacheXmlUtilsObjectVector_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectVector *create_OrgApacheXmlUtilsObjectVector_init();

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectVector_initWithInt_(OrgApacheXmlUtilsObjectVector *self, jint blocksize);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectVector *new_OrgApacheXmlUtilsObjectVector_initWithInt_(jint blocksize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectVector *create_OrgApacheXmlUtilsObjectVector_initWithInt_(jint blocksize);

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectVector_initWithInt_withInt_(OrgApacheXmlUtilsObjectVector *self, jint blocksize, jint increaseSize);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectVector *new_OrgApacheXmlUtilsObjectVector_initWithInt_withInt_(jint blocksize, jint increaseSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectVector *create_OrgApacheXmlUtilsObjectVector_initWithInt_withInt_(jint blocksize, jint increaseSize);

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectVector_initWithOrgApacheXmlUtilsObjectVector_(OrgApacheXmlUtilsObjectVector *self, OrgApacheXmlUtilsObjectVector *v);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectVector *new_OrgApacheXmlUtilsObjectVector_initWithOrgApacheXmlUtilsObjectVector_(OrgApacheXmlUtilsObjectVector *v) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectVector *create_OrgApacheXmlUtilsObjectVector_initWithOrgApacheXmlUtilsObjectVector_(OrgApacheXmlUtilsObjectVector *v);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsObjectVector)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsObjectVector")
