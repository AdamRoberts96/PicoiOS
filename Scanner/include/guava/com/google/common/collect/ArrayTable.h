//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ArrayTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectArrayTable")
#ifdef RESTRICT_ComGoogleCommonCollectArrayTable
#define INCLUDE_ALL_ComGoogleCommonCollectArrayTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectArrayTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectArrayTable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectArrayTable_) && (INCLUDE_ALL_ComGoogleCommonCollectArrayTable || defined(INCLUDE_ComGoogleCommonCollectArrayTable))
#define ComGoogleCommonCollectArrayTable_

#define RESTRICT_ComGoogleCommonCollectAbstractTable 1
#define INCLUDE_ComGoogleCommonCollectAbstractTable 1
#include "com/google/common/collect/AbstractTable.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSet;
@class IOSClass;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectTable;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectArrayTable : ComGoogleCommonCollectAbstractTable < JavaIoSerializable >

#pragma mark Public

- (id)atWithInt:(jint)rowIndex
        withInt:(jint)columnIndex;

- (id<JavaUtilSet>)cellSet;

- (void)clear;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (ComGoogleCommonCollectImmutableList *)columnKeyList;

- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

+ (ComGoogleCommonCollectArrayTable *)createWithJavaLangIterable:(id<JavaLangIterable>)rowKeys
                                            withJavaLangIterable:(id<JavaLangIterable>)columnKeys;

+ (ComGoogleCommonCollectArrayTable *)createWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)eraseWithId:(id)rowKey
           withId:(id)columnKey;

- (void)eraseAll;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (jboolean)isEmpty;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (ComGoogleCommonCollectImmutableList *)rowKeyList;

- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (id)setWithInt:(jint)rowIndex
         withInt:(jint)columnIndex
          withId:(id)value;

- (jint)size;

- (IOSObjectArray *)toArrayWithIOSClass:(IOSClass *)valueClass;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (id<JavaUtilIterator>)cellIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable)

FOUNDATION_EXPORT ComGoogleCommonCollectArrayTable *ComGoogleCommonCollectArrayTable_createWithJavaLangIterable_withJavaLangIterable_(id<JavaLangIterable> rowKeys, id<JavaLangIterable> columnKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectArrayTable *ComGoogleCommonCollectArrayTable_createWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectArrayTable")
