//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/Struct.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlStruct")
#ifdef RESTRICT_JavaSqlStruct
#define INCLUDE_ALL_JavaSqlStruct 0
#else
#define INCLUDE_ALL_JavaSqlStruct 1
#endif
#undef RESTRICT_JavaSqlStruct

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlStruct_) && (INCLUDE_ALL_JavaSqlStruct || defined(INCLUDE_JavaSqlStruct))
#define JavaSqlStruct_

@class IOSObjectArray;
@protocol JavaUtilMap;

/*!
 @brief <p>The standard mapping in the Java programming language for an SQL
 structured type.
 A <code>Struct</code> object contains a
 value for each attribute of the SQL structured type that
 it represents.
 By default, an instance of<code>Struct</code> is valid as long as the
 application has a reference to it.
 <p>
 All methods on the <code>Struct</code> interface must be fully implemented if the
 JDBC driver supports the data type.
 @since 1.2
 */
@protocol JavaSqlStruct < JavaObject >

/*!
 @brief Retrieves the SQL type name of the SQL structured type
 that this <code>Struct</code> object represents.
 @return the fully-qualified type name of the SQL structured
 type for which this <code>Struct</code> object
 is the generic representation
 @exception SQLException if a database access error occurs
 @exception SQLFeatureNotSupportedException if the JDBC driver does not support
 this method
 @since 1.2
 */
- (NSString *)getSQLTypeName;

/*!
 @brief Produces the ordered values of the attributes of the SQL
 structured type that this <code>Struct</code> object represents.
 As individual attributes are processed, this method uses the type map
 associated with the
 connection for customizations of the type mappings.
 If there is no
 entry in the connection's type map that matches the structured
 type that an attribute represents,
 the driver uses the standard mapping.
 <p>
 Conceptually, this method calls the method
 <code>getObject</code> on each attribute
 of the structured type and returns a Java array containing
 the result.
 @return an array containing the ordered attribute values
 @exception SQLException if a database access error occurs
 @exception SQLFeatureNotSupportedException if the JDBC driver does not support
 this method
 @since 1.2
 */
- (IOSObjectArray *)getAttributes;

/*!
 @brief Produces the ordered values of the attributes of the SQL
 structured type that this <code>Struct</code> object represents.
 As individual attrbutes are proccessed, this method uses the given type map
 for customizations of the type mappings.
 If there is no
 entry in the given type map that matches the structured
 type that an attribute represents,
 the driver uses the standard mapping. This method never
 uses the type map associated with the connection.
 <p>
 Conceptually, this method calls the method
 <code>getObject</code> on each attribute
 of the structured type and returns a Java array containing
 the result.
 @param map a mapping of SQL type names to Java classes
 @return an array containing the ordered attribute values
 @exception SQLException if a database access error occurs
 @exception SQLFeatureNotSupportedException if the JDBC driver does not support
 this method
 @since 1.2
 */
- (IOSObjectArray *)getAttributesWithJavaUtilMap:(id<JavaUtilMap>)map;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlStruct)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlStruct)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlStruct")