//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/Savepoint.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlSavepoint")
#ifdef RESTRICT_JavaSqlSavepoint
#define INCLUDE_ALL_JavaSqlSavepoint 0
#else
#define INCLUDE_ALL_JavaSqlSavepoint 1
#endif
#undef RESTRICT_JavaSqlSavepoint

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlSavepoint_) && (INCLUDE_ALL_JavaSqlSavepoint || defined(INCLUDE_JavaSqlSavepoint))
#define JavaSqlSavepoint_

/*!
 @brief The representation of a savepoint, which is a point within
 the current transaction that can be referenced from the
 <code>Connection.rollback</code> method.
 When a transaction
 is rolled back to a savepoint all changes made after that
 savepoint are undone.
 <p>
 Savepoints can be either named or unnamed. Unnamed savepoints
 are identified by an ID generated by the underlying data source.
 @since 1.4
 */
@protocol JavaSqlSavepoint < JavaObject >

/*!
 @brief Retrieves the generated ID for the savepoint that this
 <code>Savepoint</code> object represents.
 @return the numeric ID of this savepoint
 @exception SQLException if this is a named savepoint
 @since 1.4
 */
- (jint)getSavepointId;

/*!
 @brief Retrieves the name of the savepoint that this <code>Savepoint</code>
 object represents.
 @return the name of this savepoint
 @exception SQLException if this is an un-named savepoint
 @since 1.4
 */
- (NSString *)getSavepointName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSavepoint)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSavepoint)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlSavepoint")
