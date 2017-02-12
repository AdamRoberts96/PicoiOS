//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/PredicatedNodeTest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesPredicatedNodeTest")
#ifdef RESTRICT_OrgApacheXpathAxesPredicatedNodeTest
#define INCLUDE_ALL_OrgApacheXpathAxesPredicatedNodeTest 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesPredicatedNodeTest 1
#endif
#undef RESTRICT_OrgApacheXpathAxesPredicatedNodeTest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesPredicatedNodeTest_) && (INCLUDE_ALL_OrgApacheXpathAxesPredicatedNodeTest || defined(INCLUDE_OrgApacheXpathAxesPredicatedNodeTest))
#define OrgApacheXpathAxesPredicatedNodeTest_

#define RESTRICT_OrgApacheXpathPatternsNodeTest 1
#define INCLUDE_OrgApacheXpathPatternsNodeTest 1
#include "org/apache/xpath/patterns/NodeTest.h"

#define RESTRICT_OrgApacheXpathAxesSubContextList 1
#define INCLUDE_OrgApacheXpathAxesSubContextList 1
#include "org/apache/xpath/axes/SubContextList.h"

@class IOSIntArray;
@class JavaUtilVector;
@class OrgApacheXpathAxesLocPathIterator;
@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;

@interface OrgApacheXpathAxesPredicatedNodeTest : OrgApacheXpathPatternsNodeTest < OrgApacheXpathAxesSubContextList > {
 @public
  jint m_predCount_;
  /*!
   @brief This is true if nextNode returns null.
   */
  jboolean m_foundLast_;
  /*!
   @brief The owning location path iterator.
    
   */
  OrgApacheXpathAxesLocPathIterator *m_lpi_;
  /*!
   @brief Which predicate we are executing.
   */
  jint m_predicateIndex_;
  /*!
   @brief An array of counts that correspond to the number
 of predicates the step contains.
   */
  IOSIntArray *m_proximityPositions_;
}

+ (jlong)serialVersionUID;

+ (jboolean)DEBUG_PREDICATECOUNTING;

#pragma mark Public

/*!
 @brief Test whether a specified node is visible in the logical view of a
 TreeWalker or NodeIterator.
 This function will be called by the
 implementation of TreeWalker and NodeIterator; it is not intended to
 be called directly from user code.
 @param n  The node to check to see if it passes the filter or not.
 @return a constant to determine whether the node is accepted,
 rejected, or skipped, as defined  above .
 */
- (jshort)acceptNodeWithInt:(jint)n;

/*!
 @brief This will traverse the heararchy, calling the visitor for 
 each member.
 If the called visitor method returns 
 false, the subtree should not be called.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callPredicateVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Tell if this expression or it's subexpressions can traverse outside 
 the current subtree.
 @return true if traversal outside the context node's subtree can occur.
 */
- (jboolean)canTraverseOutsideSubtree;

/*!
 @brief Get a cloned PrdicatedNodeTest.
 @return A new PredicatedNodeTest that can be used without mutating this one.
 @throws CloneNotSupportedException
 */
- (id)java_clone;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

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
 @brief Get the index of the last node that can be itterated to.
 @param xctxt XPath runtime context.
 @return the index of the last node that can be itterated to.
 */
- (jint)getLastPosWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Get the owning location path iterator.
 @return the owning location path iterator, which should not be null.
 */
- (OrgApacheXpathAxesLocPathIterator *)getLocPathIterator;

/*!
 @brief Get a predicate expression at the given index.
 @param index Index of the predicate.
 @return A predicate expression.
 */
- (OrgApacheXpathExpression *)getPredicateWithInt:(jint)index;

/*!
 @brief Get the number of predicates that this walker has.
 @return the number of predicates that this walker has.
 */
- (jint)getPredicateCount;

/*!
 @brief Get which predicate is executing.
 @return The current predicate index, or -1 if no predicate is executing.
 */
- (jint)getPredicateIndex;

/*!
 @brief Get the current sub-context position.
 @return The node position of this walker in the sub-context node list.
 */
- (jint)getProximityPosition;

/*!
 @brief Get the current sub-context position.
 @param xctxt The XPath runtime context.
 @return The node position of this walker in the sub-context node list.
 */
- (jint)getProximityPositionWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Init the proximity position to zero for a forward axes.
 @param i The index into the m_proximityPositions array.
 @throws javax.xml.transform.TransformerException
 */
- (void)initProximityPositionWithInt:(jint)i OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Tells if this is a reverse axes.
 @return false, unless a derived class overrides.
 */
- (jboolean)isReverseAxes;

/*!
 @brief Reset the proximity positions counts.
 */
- (void)resetProximityPositions;

/*!
 @brief Set the location path iterator owner for this walker.
 Besides 
 initialization, this function is called during cloning operations.
 @param li non-null reference to the owning location path iterator.
 */
- (void)setLocPathIteratorWithOrgApacheXpathAxesLocPathIterator:(OrgApacheXpathAxesLocPathIterator *)li;

/*!
 @brief Set the number of predicates that this walker has.
 This does more 
 that one would think, as it creates a new predicate array of the 
 size of the count argument, and copies count predicates into the new 
 one from the old, and then reassigns the predicates value.  All this 
 to keep from having to have a predicate count value.
 @param count The number of predicates, which must be equal or less 
 than the existing count.
 */
- (void)setPredicateCountWithInt:(jint)count;

#pragma mark Protected

/*!
 @brief Count forward one proximity position.
 @param i The index into the m_proximityPositions array, where the increment 
 will occur.
 */
- (void)countProximityPositionWithInt:(jint)i;

/*!
 @brief Get the current sub-context position.
 @param predicateIndex The index of the predicate where the proximity 
 should be taken from.
 @return The node position of this walker in the sub-context node list.
 */
- (jint)getProximityPositionWithInt:(jint)predicateIndex;

/*!
 @brief Init predicate info.
 @param compiler The Compiler object that has information about this 
 walker in the op map.
 @param opPos The op code position of this location step.
 @throws javax.xml.transform.TransformerException
 */
- (void)initPredicateInfoWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                                    withInt:(jint)opPos OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Diagnostics.
 @param n Node to give diagnostic information about, or null.
 @return Informative string about the argument.
 */
- (NSString *)nodeToStringWithInt:(jint)n;

#pragma mark Package-Private

/*!
 @brief Construct an AxesWalker.
 The location path iterator will have to be set
 before use.
 */
- (instancetype)init;

/*!
 @brief Construct an AxesWalker using a LocPathIterator.
 @param locPathIterator non-null reference to the parent iterator.
 */
- (instancetype)initWithOrgApacheXpathAxesLocPathIterator:(OrgApacheXpathAxesLocPathIterator *)locPathIterator;

/*!
 @brief Process the predicates.
 @param context The current context node.
 @param xctxt The XPath runtime context.
 @return the result of executing the predicate expressions.
 @throws javax.xml.transform.TransformerException
 */
- (jboolean)executePredicatesWithInt:(jint)context
      withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesPredicatedNodeTest)

J2OBJC_FIELD_SETTER(OrgApacheXpathAxesPredicatedNodeTest, m_lpi_, OrgApacheXpathAxesLocPathIterator *)
J2OBJC_FIELD_SETTER(OrgApacheXpathAxesPredicatedNodeTest, m_proximityPositions_, IOSIntArray *)

inline jlong OrgApacheXpathAxesPredicatedNodeTest_get_serialVersionUID();
#define OrgApacheXpathAxesPredicatedNodeTest_serialVersionUID -6193530757296377351LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesPredicatedNodeTest, serialVersionUID, jlong)

/*!
 @brief If true, diagnostic messages about predicate execution will be posted.
 */
inline jboolean OrgApacheXpathAxesPredicatedNodeTest_get_DEBUG_PREDICATECOUNTING();
#define OrgApacheXpathAxesPredicatedNodeTest_DEBUG_PREDICATECOUNTING false
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesPredicatedNodeTest, DEBUG_PREDICATECOUNTING, jboolean)

FOUNDATION_EXPORT void OrgApacheXpathAxesPredicatedNodeTest_initWithOrgApacheXpathAxesLocPathIterator_(OrgApacheXpathAxesPredicatedNodeTest *self, OrgApacheXpathAxesLocPathIterator *locPathIterator);

FOUNDATION_EXPORT void OrgApacheXpathAxesPredicatedNodeTest_init(OrgApacheXpathAxesPredicatedNodeTest *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesPredicatedNodeTest)

#endif

#if !defined (OrgApacheXpathAxesPredicatedNodeTest_PredOwner_) && (INCLUDE_ALL_OrgApacheXpathAxesPredicatedNodeTest || defined(INCLUDE_OrgApacheXpathAxesPredicatedNodeTest_PredOwner))
#define OrgApacheXpathAxesPredicatedNodeTest_PredOwner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class OrgApacheXpathAxesPredicatedNodeTest;
@class OrgApacheXpathExpression;

@interface OrgApacheXpathAxesPredicatedNodeTest_PredOwner : NSObject < OrgApacheXpathExpressionOwner > {
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

- (instancetype)initWithOrgApacheXpathAxesPredicatedNodeTest:(OrgApacheXpathAxesPredicatedNodeTest *)outer$
                                                     withInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesPredicatedNodeTest_PredOwner)

FOUNDATION_EXPORT void OrgApacheXpathAxesPredicatedNodeTest_PredOwner_initWithOrgApacheXpathAxesPredicatedNodeTest_withInt_(OrgApacheXpathAxesPredicatedNodeTest_PredOwner *self, OrgApacheXpathAxesPredicatedNodeTest *outer$, jint index);

FOUNDATION_EXPORT OrgApacheXpathAxesPredicatedNodeTest_PredOwner *new_OrgApacheXpathAxesPredicatedNodeTest_PredOwner_initWithOrgApacheXpathAxesPredicatedNodeTest_withInt_(OrgApacheXpathAxesPredicatedNodeTest *outer$, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesPredicatedNodeTest_PredOwner *create_OrgApacheXpathAxesPredicatedNodeTest_PredOwner_initWithOrgApacheXpathAxesPredicatedNodeTest_withInt_(OrgApacheXpathAxesPredicatedNodeTest *outer$, jint index);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesPredicatedNodeTest_PredOwner)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesPredicatedNodeTest")
