//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/NodeSequence.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesNodeSequence")
#ifdef RESTRICT_OrgApacheXpathAxesNodeSequence
#define INCLUDE_ALL_OrgApacheXpathAxesNodeSequence 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesNodeSequence 1
#endif
#undef RESTRICT_OrgApacheXpathAxesNodeSequence

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesNodeSequence_) && (INCLUDE_ALL_OrgApacheXpathAxesNodeSequence || defined(INCLUDE_OrgApacheXpathAxesNodeSequence))
#define OrgApacheXpathAxesNodeSequence_

#define RESTRICT_OrgApacheXpathObjectsXObject 1
#define INCLUDE_OrgApacheXpathObjectsXObject 1
#include "org/apache/xpath/objects/XObject.h"

#define RESTRICT_OrgApacheXmlDtmDTMIterator 1
#define INCLUDE_OrgApacheXmlDtmDTMIterator 1
#include "org/apache/xml/dtm/DTMIterator.h"

#define RESTRICT_OrgApacheXpathAxesPathComponent 1
#define INCLUDE_OrgApacheXpathAxesPathComponent 1
#include "org/apache/xpath/axes/PathComponent.h"

@class JavaUtilVector;
@class OrgApacheXmlDtmDTMManager;
@class OrgApacheXmlUtilsNodeVector;
@class OrgApacheXpathAxesNodeSequence_IteratorCache;
@protocol OrgApacheXmlDtmDTM;

/*!
 @brief This class is the dynamic wrapper for a Xalan DTMIterator instance, and 
 provides random access capabilities.
 */
@interface OrgApacheXpathAxesNodeSequence : OrgApacheXpathObjectsXObject < OrgApacheXmlDtmDTMIterator, NSCopying, OrgApacheXpathAxesPathComponent > {
 @public
  /*!
   @brief The index of the last node in the iteration.
   */
  jint m_last_;
  /*!
   @brief The index of the next node to be fetched.
   Useful if this
 is a cached iterator, and is being used as random access
 NodeList.
   */
  jint m_next_;
  /*!
   @brief The functional iterator that fetches nodes.
   */
  id<OrgApacheXmlDtmDTMIterator> m_iter_;
  /*!
   @brief The DTMManager to use if we're using a NodeVector only.
   We may well want to do away with this, and store it in the NodeVector.
   */
  OrgApacheXmlDtmDTMManager *m_dtmMgr_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Create a new NodeSequence in an invalid (null) state.
 */
- (instancetype)init;

/*!
 @brief Create a new NodeSequence from a (already cloned) iterator.
 @param nodeVector
 */
- (instancetype)initWithId:(id)nodeVector;

/*!
 @brief Calling this with a value of false will cause the nodeset 
 to be cached.
 - seealso: DTMIterator#allowDetachToRelease(boolean)
 */
- (void)allowDetachToReleaseWithBoolean:(jboolean)allowRelease;

/*!
 @brief Get a clone of this iterator, but don't reset the iteration in the 
 process, so that it may be used from the current position.
 Note: Not a deep clone.
 @return A clone of this object.
 @throws CloneNotSupportedException
 */
- (id)java_clone;

/*!
 @brief Note: Not a deep clone.
 - seealso: DTMIterator#cloneWithReset()
 */
- (id<OrgApacheXmlDtmDTMIterator>)cloneWithReset;

/*!
 - seealso: DTMIterator#detach()
 */
- (void)detach;

/*!
 - seealso: org.apache.xpath.Expression#fixupVariables(Vector,int)
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 - seealso: PathComponent#getAnalysisBits()
 */
- (jint)getAnalysisBits;

/*!
 - seealso: DTMIterator#getAxis()
 */
- (jint)getAxis;

/*!
 @brief Get the functional iterator that fetches nodes.
 @return The contained iterator.
 */
- (id<OrgApacheXmlDtmDTMIterator>)getContainedIter;

/*!
 - seealso: DTMIterator#getCurrentNode()
 */
- (jint)getCurrentNode;

/*!
 - seealso: DTMIterator#getCurrentPos()
 */
- (jint)getCurrentPos;

/*!
 - seealso: DTMIterator#getDTM(int)
 */
- (id<OrgApacheXmlDtmDTM>)getDTMWithInt:(jint)nodeHandle;

/*!
 - seealso: DTMIterator#getDTMManager()
 */
- (OrgApacheXmlDtmDTMManager *)getDTMManager;

/*!
 - seealso: DTMIterator#getExpandEntityReferences()
 */
- (jboolean)getExpandEntityReferences;

/*!
 - seealso: DTMIterator#getLength()
 */
- (jint)getLength;

/*!
 - seealso: DTMIterator#getRoot()
 */
- (jint)getRoot;

/*!
 - seealso: DTMIterator#getWhatToShow()
 */
- (jint)getWhatToShow;

/*!
 @brief If the iterator needs to cache nodes as they are fetched,
 then this method returns true.
 */
- (jboolean)hasCache;

/*!
 - seealso: DTMIterator#isDocOrdered()
 */
- (jboolean)isDocOrdered;

/*!
 - seealso: DTMIterator#isFresh()
 */
- (jboolean)isFresh;

/*!
 - seealso: DTMIterator#isMutable()
 */
- (jboolean)isMutable;

/*!
 - seealso: DTMIterator#item(int)
 */
- (jint)itemWithInt:(jint)index;

/*!
 - seealso: DTMIterator#nextNode()
 */
- (jint)nextNode;

/*!
 - seealso: DTMIterator#previousNode()
 */
- (jint)previousNode;

/*!
 - seealso: DTMIterator#reset()
 */
- (void)reset;

/*!
 - seealso: DTMIterator#runTo(int)
 */
- (void)runToWithInt:(jint)index;

/*!
 - seealso: DTMIterator#setCurrentPos(int)
 */
- (void)setCurrentPosWithInt:(jint)i;

/*!
 - seealso: DTMIterator#setItem(int,int)
 */
- (void)setItemWithInt:(jint)node
               withInt:(jint)index;

/*!
 @brief Set the functional iterator that fetches nodes.
 @param iter The iterator that is to be contained.
 */
- (void)setIterWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)iter;

/*!
 - seealso: DTMIterator#setRoot(int,Object)
 */
- (void)setRootWithInt:(jint)nodeHandle
                withId:(id)environment;

/*!
 - seealso: DTMIterator#setShouldCacheNodes(boolean)
 */
- (void)setShouldCacheNodesWithBoolean:(jboolean)b;

#pragma mark Protected

/*!
 @brief Add the node into a vector of nodes where it should occur in
 document order.
 @param node The node to be added.
 @return insertIndex.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (jint)addNodeInDocOrderWithInt:(jint)node;

/*!
 @brief Get the cached list of nodes appended with
 values obtained from the iterator as
 a NodeSequence is walked when its
 nextNode() method is called.
 */
- (OrgApacheXpathAxesNodeSequence_IteratorCache *)getIteratorCache;

/*!
 @brief If this iterator needs to cache nodes that are fetched, they
 are stored in the Vector in the generic object.
 */
- (OrgApacheXmlUtilsNodeVector *)getVector;

/*!
 @brief It used to be that many locations in the code simply
 did an assignment to this.m_obj directly, rather than
 calling the setObject(Object) method.
 The problem is
 that our super-class would be updated on what the 
 cache associated with this NodeSequence, but
 we wouldn't know ourselves.
 <p>
 All setting of m_obj is done through setObject() now,
 and this method over-rides the super-class method.
 So now we are in the loop have an opportunity
 to update some caching information.
 */
- (void)setObjectWithId:(id)obj;

/*!
 @brief Set the vector where nodes will be cached.
 */
- (void)SetVectorWithOrgApacheXmlUtilsNodeVector:(OrgApacheXmlUtilsNodeVector *)v;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesNodeSequence)

J2OBJC_FIELD_SETTER(OrgApacheXpathAxesNodeSequence, m_iter_, id<OrgApacheXmlDtmDTMIterator>)
J2OBJC_FIELD_SETTER(OrgApacheXpathAxesNodeSequence, m_dtmMgr_, OrgApacheXmlDtmDTMManager *)

inline jlong OrgApacheXpathAxesNodeSequence_get_serialVersionUID();
#define OrgApacheXpathAxesNodeSequence_serialVersionUID 3866261934726581044LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesNodeSequence, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesNodeSequence_initWithId_(OrgApacheXpathAxesNodeSequence *self, id nodeVector);

FOUNDATION_EXPORT OrgApacheXpathAxesNodeSequence *new_OrgApacheXpathAxesNodeSequence_initWithId_(id nodeVector) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesNodeSequence *create_OrgApacheXpathAxesNodeSequence_initWithId_(id nodeVector);

FOUNDATION_EXPORT void OrgApacheXpathAxesNodeSequence_init(OrgApacheXpathAxesNodeSequence *self);

FOUNDATION_EXPORT OrgApacheXpathAxesNodeSequence *new_OrgApacheXpathAxesNodeSequence_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesNodeSequence *create_OrgApacheXpathAxesNodeSequence_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesNodeSequence)

#endif

#if !defined (OrgApacheXpathAxesNodeSequence_IteratorCache_) && (INCLUDE_ALL_OrgApacheXpathAxesNodeSequence || defined(INCLUDE_OrgApacheXpathAxesNodeSequence_IteratorCache))
#define OrgApacheXpathAxesNodeSequence_IteratorCache_

/*!
 @brief Each NodeSequence object has an iterator which is "walked".
 As an iterator is walked one obtains nodes from it.
 As those nodes are obtained they may be cached, making
 the next walking of a copy or clone of the iterator faster.
 This field (m_cache) is a reference to such a cache, 
 which is populated as the iterator is walked.
 <p>
 Note that multiple NodeSequence objects may hold a 
 reference to the same cache, and also 
 (and this is important) the same iterator.
 The iterator and its cache may be shared among 
 many NodeSequence objects.
 <p>
 If one of the NodeSequence objects walks ahead
 of the others it fills in the cache.
 As the others NodeSequence objects catch up they
 get their values from
 the cache rather than the iterator itself, so
 the iterator is only ever walked once and everyone
 benefits from the cache.
 <p>
 At some point the cache may be
 complete due to walking to the end of one of
 the copies of the iterator, and the cache is
 then marked as "complete".
 and the cache will have no more nodes added to it.
 <p>
 Its use-count is the number of NodeSequence objects that use it.
 */
@interface OrgApacheXpathAxesNodeSequence_IteratorCache : NSObject

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesNodeSequence_IteratorCache)

FOUNDATION_EXPORT void OrgApacheXpathAxesNodeSequence_IteratorCache_init(OrgApacheXpathAxesNodeSequence_IteratorCache *self);

FOUNDATION_EXPORT OrgApacheXpathAxesNodeSequence_IteratorCache *new_OrgApacheXpathAxesNodeSequence_IteratorCache_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesNodeSequence_IteratorCache *create_OrgApacheXpathAxesNodeSequence_IteratorCache_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesNodeSequence_IteratorCache)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesNodeSequence")
