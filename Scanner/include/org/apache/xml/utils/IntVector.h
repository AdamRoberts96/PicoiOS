//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/IntVector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsIntVector")
#ifdef RESTRICT_OrgApacheXmlUtilsIntVector
#define INCLUDE_ALL_OrgApacheXmlUtilsIntVector 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsIntVector 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsIntVector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsIntVector_) && (INCLUDE_ALL_OrgApacheXmlUtilsIntVector || defined(INCLUDE_OrgApacheXmlUtilsIntVector))
#define OrgApacheXmlUtilsIntVector_

@class IOSIntArray;

/*!
 @brief A very simple table that stores a list of int.
 This version is based on a "realloc" strategy -- a simle array is
 used, and when more storage is needed, a larger array is obtained
 and all existing data is recopied into it. As a result, read/write
 access to existing nodes is O(1) fast but appending may be O(N**2)
 slow. See also SuballocatedIntVector.
  internal
 */
@interface OrgApacheXmlUtilsIntVector : NSObject < NSCopying > {
 @public
  /*!
   @brief Size of blocks to allocate
   */
  jint m_blocksize_;
  /*!
   @brief Array of ints
   */
  IOSIntArray *m_map_;
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
 @brief Copy constructor for IntVector
 @param v Existing IntVector to copy
 */
- (instancetype)initWithOrgApacheXmlUtilsIntVector:(OrgApacheXmlUtilsIntVector *)v;

/*!
 @brief Append a int onto the vector.
 @param value Int to add to the list
 */
- (void)addElementWithInt:(jint)value;

/*!
 @brief Append several slots onto the vector, but do not set the values.
 @param numberOfElements Int to add to the list
 */
- (void)addElementsWithInt:(jint)numberOfElements;

/*!
 @brief Append several int values onto the vector.
 @param value Int to add to the list
 */
- (void)addElementsWithInt:(jint)value
                   withInt:(jint)numberOfElements;

/*!
 @brief Returns clone of current IntVector
 @return clone of current IntVector
 */
- (id)java_clone;

/*!
 @brief Tell if the table contains the given node.
 @param s object to look for
 @return true if the object is in the list
 */
- (jboolean)containsWithInt:(jint)s;

/*!
 @brief Get the nth element.
 @param i index of object to get
 @return object at given index
 */
- (jint)elementAtWithInt:(jint)i;

/*!
 @brief Searches for the first occurence of the given argument,
 beginning the search at index, and testing for equality
 using the equals method.
 @param elem object to look for
 @return the index of the first occurrence of the object
 argument in this vector at position index or later in the
 vector; returns -1 if the object is not found.
 */
- (jint)indexOfWithInt:(jint)elem;

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
- (jint)indexOfWithInt:(jint)elem
               withInt:(jint)index;

/*!
 @brief Inserts the specified node in this vector at the specified index.
 Each component in this vector with an index greater or equal to
 the specified index is shifted upward to have an index one greater
 than the value it had previously.
 @param value Int to insert
 @param at Index of where to insert
 */
- (void)insertElementAtWithInt:(jint)value
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
- (jint)lastIndexOfWithInt:(jint)elem;

/*!
 @brief Inserts the specified node in this vector at the specified index.
 Each component in this vector with an index greater or equal to
 the specified index is shifted upward to have an index one greater
 than the value it had previously.
 */
- (void)removeAllElements;

/*!
 @brief Removes the first occurrence of the argument from this vector.
 If the object is found in this vector, each component in the vector
 with an index greater or equal to the object's index is shifted
 downward to have an index one smaller than the value it had
 previously.
 @param s Int to remove from array
 @return True if the int was removed, false if it was not found
 */
- (jboolean)removeElementWithInt:(jint)s;

/*!
 @brief Deletes the component at the specified index.
 Each component in
 this vector with an index greater or equal to the specified
 index is shifted downward to have an index one smaller than
 the value it had previously.
 @param i index of where to remove and int
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
- (void)setElementAtWithInt:(jint)value
                    withInt:(jint)index;

/*!
 @brief Get the length of the list.
 @return length of the list
 */
- (void)setSizeWithInt:(jint)sz;

/*!
 @brief Get the length of the list.
 @return length of the list
 */
- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsIntVector)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsIntVector, m_map_, IOSIntArray *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsIntVector_init(OrgApacheXmlUtilsIntVector *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *new_OrgApacheXmlUtilsIntVector_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *create_OrgApacheXmlUtilsIntVector_init();

FOUNDATION_EXPORT void OrgApacheXmlUtilsIntVector_initWithInt_(OrgApacheXmlUtilsIntVector *self, jint blocksize);

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *new_OrgApacheXmlUtilsIntVector_initWithInt_(jint blocksize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *create_OrgApacheXmlUtilsIntVector_initWithInt_(jint blocksize);

FOUNDATION_EXPORT void OrgApacheXmlUtilsIntVector_initWithInt_withInt_(OrgApacheXmlUtilsIntVector *self, jint blocksize, jint increaseSize);

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *new_OrgApacheXmlUtilsIntVector_initWithInt_withInt_(jint blocksize, jint increaseSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *create_OrgApacheXmlUtilsIntVector_initWithInt_withInt_(jint blocksize, jint increaseSize);

FOUNDATION_EXPORT void OrgApacheXmlUtilsIntVector_initWithOrgApacheXmlUtilsIntVector_(OrgApacheXmlUtilsIntVector *self, OrgApacheXmlUtilsIntVector *v);

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *new_OrgApacheXmlUtilsIntVector_initWithOrgApacheXmlUtilsIntVector_(OrgApacheXmlUtilsIntVector *v) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *create_OrgApacheXmlUtilsIntVector_initWithOrgApacheXmlUtilsIntVector_(OrgApacheXmlUtilsIntVector *v);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsIntVector)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsIntVector")
