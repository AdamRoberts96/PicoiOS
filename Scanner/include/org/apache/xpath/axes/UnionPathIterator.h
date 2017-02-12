//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/UnionPathIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesUnionPathIterator")
#ifdef RESTRICT_OrgApacheXpathAxesUnionPathIterator
#define INCLUDE_ALL_OrgApacheXpathAxesUnionPathIterator 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesUnionPathIterator 1
#endif
#undef RESTRICT_OrgApacheXpathAxesUnionPathIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesUnionPathIterator_) && (INCLUDE_ALL_OrgApacheXpathAxesUnionPathIterator || defined(INCLUDE_OrgApacheXpathAxesUnionPathIterator))
#define OrgApacheXpathAxesUnionPathIterator_

#define RESTRICT_OrgApacheXpathAxesLocPathIterator 1
#define INCLUDE_OrgApacheXpathAxesLocPathIterator 1
#include "org/apache/xpath/axes/LocPathIterator.h"

#define RESTRICT_OrgApacheXmlDtmDTMIterator 1
#define INCLUDE_OrgApacheXmlDtmDTMIterator 1
#include "org/apache/xml/dtm/DTMIterator.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

#define RESTRICT_OrgApacheXpathAxesPathComponent 1
#define INCLUDE_OrgApacheXpathAxesPathComponent 1
#include "org/apache/xpath/axes/PathComponent.h"

@class IOSObjectArray;
@class JavaUtilVector;
@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXpathExpressionOwner;

/*!
 @brief This class extends NodeSetDTM, which implements DTMIterator,
 and fetches nodes one at a time in document order based on a XPath
 <a href="http://www.w3.org/TR/xpath#NT-UnionExpr">UnionExpr</a>.
 As each node is iterated via nextNode(), the node is also stored
 in the NodeVector, so that previousNode() can easily be done.
  advanced
 */
@interface OrgApacheXpathAxesUnionPathIterator : OrgApacheXpathAxesLocPathIterator < NSCopying, OrgApacheXmlDtmDTMIterator, JavaIoSerializable, OrgApacheXpathAxesPathComponent > {
 @public
  /*!
   @brief The location path iterators, one for each
 <a href="http://www.w3.org/TR/xpath#NT-LocationPath">location
 path</a> contained in the union expression.
   */
  IOSObjectArray *m_exprs_;
  /*!
   @brief The location path iterators, one for each
 <a href="http://www.w3.org/TR/xpath#NT-LocationPath">location
 path</a> contained in the union expression.
   */
  IOSObjectArray *m_iterators_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructor to create an instance which you can add location paths to.
 */
- (instancetype)init;

/*!
 @brief Create a UnionPathIterator object, including creation 
 of location path iterators from the opcode list, and call back 
 into the Compiler to create predicate expressions.
 @param compiler The Compiler which is creating 
 this expression.
 @param opPos The position of this iterator in the 
 opcode list from the compiler.
 @throws javax.xml.transform.TransformerException
 */
- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                               withInt:(jint)opPos;

/*!
 @brief Add an iterator to the union list.
 @param expr non-null reference to a location path iterator.
 */
- (void)addIteratorWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)expr;

/*!
 - seealso: org.apache.xpath.XPathVisitable#callVisitors(ExpressionOwner,XPathVisitor)
 */
- (void)callVisitorsWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Get a cloned LocPathIterator that holds the same 
 position as this iterator.
 @return A clone of this iterator that holds the same node position.
 @throws CloneNotSupportedException
 */
- (id)java_clone;

/*!
 @brief This will return an iterator capable of handling the union of paths given.
 @param compiler The Compiler which is creating 
 this expression.
 @param opPos The position of this iterator in the 
 opcode list from the compiler.
 @return Object that is derived from LocPathIterator.
 @throws javax.xml.transform.TransformerException
 */
+ (OrgApacheXpathAxesLocPathIterator *)createUnionIteratorWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                                                                     withInt:(jint)opPos;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Detaches the iterator from the set which it iterated over, releasing
 any computational resources and placing the iterator in the INVALID
 state.
 After<code>detach</code> has been invoked, calls to
 <code>nextNode</code> or<code>previousNode</code> will raise the
 exception INVALID_STATE_ERR.
 */
- (void)detach;

/*!
 @brief This function is used to fixup variables from QNames to stack frame 
 indexes at stylesheet build time.
 @param vars List of QNames that correspond to variables.  This list 
 should be searched backwards for the first qualified name that 
 corresponds to the variable reference qname.  The position of the 
 QName in the vector from the start of the vector will be its position 
 in the stack frame (but variables above the globalsTop value will need 
 to be offset to the current stack frame).
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 @brief Get the analysis bits for this walker, as defined in the WalkerFactory.
 @return One of WalkerFactory#BIT_DESCENDANT, etc.
 */
- (jint)getAnalysisBits;

/*!
 @brief Returns the axis being iterated, if it is known.
 @return Axis.CHILD, etc., or -1 if the axis is not known or is of multiple 
 types.
 */
- (jint)getAxis;

/*!
 @brief Returns the next node in the set and advances the position of the
 iterator in the set.
 After a DTMIterator is created, the first call
 to nextNode() returns the first node in the set.
 @return The next <code>Node</code> in the set being iterated over, or
 <code>null</code> if there are no more members in that set.
 */
- (jint)nextNode;

/*!
 @brief Initialize the context values for this expression 
 after it is cloned.
 @param context The XPath runtime context for this 
 transformation.
 */
- (void)setRootWithInt:(jint)context
                withId:(id)environment;

#pragma mark Protected

/*!
 @brief Create a new location path iterator.
 @param compiler The Compiler which is creating 
 this expression.
 @param opPos The position of this iterator in the
 @return New location path iterator.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathAxesLocPathIterator *)createDTMIteratorWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                                                                   withInt:(jint)opPos;

/*!
 @brief Initialize the location path iterators.
 Recursive.
 @param compiler The Compiler which is creating 
 this expression.
 @param opPos The position of this iterator in the 
 opcode list from the compiler.
 @param count The insert position of the iterator.
 @throws javax.xml.transform.TransformerException
 */
- (void)loadLocationPathsWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                                    withInt:(jint)opPos
                                                    withInt:(jint)count;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesUnionPathIterator)

J2OBJC_FIELD_SETTER(OrgApacheXpathAxesUnionPathIterator, m_exprs_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgApacheXpathAxesUnionPathIterator, m_iterators_, IOSObjectArray *)

inline jlong OrgApacheXpathAxesUnionPathIterator_get_serialVersionUID();
#define OrgApacheXpathAxesUnionPathIterator_serialVersionUID -3910351546843826781LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesUnionPathIterator, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesUnionPathIterator_init(OrgApacheXpathAxesUnionPathIterator *self);

FOUNDATION_EXPORT OrgApacheXpathAxesUnionPathIterator *new_OrgApacheXpathAxesUnionPathIterator_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesUnionPathIterator *create_OrgApacheXpathAxesUnionPathIterator_init();

FOUNDATION_EXPORT void OrgApacheXpathAxesUnionPathIterator_initWithOrgApacheXpathCompilerCompiler_withInt_(OrgApacheXpathAxesUnionPathIterator *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos);

FOUNDATION_EXPORT OrgApacheXpathAxesUnionPathIterator *new_OrgApacheXpathAxesUnionPathIterator_initWithOrgApacheXpathCompilerCompiler_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesUnionPathIterator *create_OrgApacheXpathAxesUnionPathIterator_initWithOrgApacheXpathCompilerCompiler_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos);

FOUNDATION_EXPORT OrgApacheXpathAxesLocPathIterator *OrgApacheXpathAxesUnionPathIterator_createUnionIteratorWithOrgApacheXpathCompilerCompiler_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesUnionPathIterator)

#endif

#if !defined (OrgApacheXpathAxesUnionPathIterator_iterOwner_) && (INCLUDE_ALL_OrgApacheXpathAxesUnionPathIterator || defined(INCLUDE_OrgApacheXpathAxesUnionPathIterator_iterOwner))
#define OrgApacheXpathAxesUnionPathIterator_iterOwner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class OrgApacheXpathAxesUnionPathIterator;
@class OrgApacheXpathExpression;

@interface OrgApacheXpathAxesUnionPathIterator_iterOwner : NSObject < OrgApacheXpathExpressionOwner > {
 @public
  jint m_index_;
}

#pragma mark Public

/*!
 - seealso: ExpressionOwner#getExpression()
 */
- (OrgApacheXpathExpression *)getExpression;

/*!
 - seealso: ExpressionOwner#setExpression(Expression)
 */
- (void)setExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)exp;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheXpathAxesUnionPathIterator:(OrgApacheXpathAxesUnionPathIterator *)outer$
                                                    withInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesUnionPathIterator_iterOwner)

FOUNDATION_EXPORT void OrgApacheXpathAxesUnionPathIterator_iterOwner_initWithOrgApacheXpathAxesUnionPathIterator_withInt_(OrgApacheXpathAxesUnionPathIterator_iterOwner *self, OrgApacheXpathAxesUnionPathIterator *outer$, jint index);

FOUNDATION_EXPORT OrgApacheXpathAxesUnionPathIterator_iterOwner *new_OrgApacheXpathAxesUnionPathIterator_iterOwner_initWithOrgApacheXpathAxesUnionPathIterator_withInt_(OrgApacheXpathAxesUnionPathIterator *outer$, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesUnionPathIterator_iterOwner *create_OrgApacheXpathAxesUnionPathIterator_iterOwner_initWithOrgApacheXpathAxesUnionPathIterator_withInt_(OrgApacheXpathAxesUnionPathIterator *outer$, jint index);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesUnionPathIterator_iterOwner)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesUnionPathIterator")
