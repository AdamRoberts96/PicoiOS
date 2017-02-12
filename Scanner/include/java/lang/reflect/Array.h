//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/Array.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectArray")
#ifdef RESTRICT_JavaLangReflectArray
#define INCLUDE_ALL_JavaLangReflectArray 0
#else
#define INCLUDE_ALL_JavaLangReflectArray 1
#endif
#undef RESTRICT_JavaLangReflectArray

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangReflectArray_) && (INCLUDE_ALL_JavaLangReflectArray || defined(INCLUDE_JavaLangReflectArray))
#define JavaLangReflectArray_

@class IOSClass;
@class IOSIntArray;

/*!
 @brief Provides static methods to create and access arrays dynamically.
 */
@interface JavaLangReflectArray : NSObject

#pragma mark Public

/*!
 @brief Returns the element of the array at the specified index.
 Equivalent to <code>array[index]</code>.
 If the array component is a primitive type, the result is automatically boxed.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if <code>array</code> is not an array
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (id)getWithId:(id)array
        withInt:(jint)index;

/*!
 @brief Returns the boolean at the given index in the given boolean array.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if <code>array</code> is not an array or the element at the
 index position can not be converted to the return type
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (jboolean)getBooleanWithId:(id)array
                     withInt:(jint)index;

/*!
 @brief Returns the byte at the given index in the given byte array.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if <code>array</code> is not an array or the element at the
 index position can not be converted to the return type
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (jbyte)getByteWithId:(id)array
               withInt:(jint)index;

/*!
 @brief Returns the char at the given index in the given char array.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if <code>array</code> is not an array or the element at the
 index position can not be converted to the return type
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (jchar)getCharWithId:(id)array
               withInt:(jint)index;

/*!
 @brief Returns the double at the given index in the given array.
 Applies to byte, char, float, double, int, long, and short arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if <code>array</code> is not an array or the element at the
 index position can not be converted to the return type
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (jdouble)getDoubleWithId:(id)array
                   withInt:(jint)index;

/*!
 @brief Returns the float at the given index in the given array.
 Applies to byte, char, float, int, long, and short arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if <code>array</code> is not an array or the element at the
 index position can not be converted to the return type
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (jfloat)getFloatWithId:(id)array
                 withInt:(jint)index;

/*!
 @brief Returns the int at the given index in the given array.
 Applies to byte, char, int, and short arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if <code>array</code> is not an array or the element at the
 index position can not be converted to the return type
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (jint)getIntWithId:(id)array
             withInt:(jint)index;

/*!
 @brief Returns the length of the array.
 Equivalent to <code>array.length</code>.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if <code>array</code> is not an array
 */
+ (jint)getLengthWithId:(id)array;

/*!
 @brief Returns the long at the given index in the given array.
 Applies to byte, char, int, long, and short arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if <code>array</code> is not an array or the element at the
 index position can not be converted to the return type
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (jlong)getLongWithId:(id)array
               withInt:(jint)index;

/*!
 @brief Returns the short at the given index in the given array.
 Applies to byte and short arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if <code>array</code> is not an array or the element at the
 index position can not be converted to the return type
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (jshort)getShortWithId:(id)array
                 withInt:(jint)index;

/*!
 @brief Returns a new multidimensional array of the specified component type and
 dimensions.
 Equivalent to <code>new componentType[d0][d1]...[dn]</code> for a
 dimensions array of { d0, d1, ... , dn }.
 @throws NullPointerException if <code>array == null</code>
 @throws NegativeArraySizeException
 if any of the dimensions are negative
 @throws IllegalArgumentException
 if the array of dimensions is of size zero, or exceeds the
 limit of the number of dimension for an array (currently 255)
 */
+ (id)newInstanceWithIOSClass:(IOSClass *)componentType
                 withIntArray:(IOSIntArray *)dimensions OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new array of the specified component type and length.
 Equivalent to <code>new componentType[size]</code>.
 @throws NullPointerException
 if the component type is null
 @throws NegativeArraySizeException
 if <code>size < 0</code>
 */
+ (id)newInstanceWithIOSClass:(IOSClass *)componentType
                      withInt:(jint)size OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Sets the element of the array at the specified index to the value.
 Equivalent to <code>array[index] = value</code>. If the array
 component is a primitive type, the value is automatically unboxed.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if <code>array</code> is not an array or the value cannot be
 converted to the array type by a widening conversion
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (void)setWithId:(id)array
          withInt:(jint)index
           withId:(id)value;

/*!
 @brief Sets <code>array[index] = value</code>.
 Applies to boolean arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if the <code>array</code> is not an array or the value cannot be
 converted to the array type by a widening conversion
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (void)setBooleanWithId:(id)array
                 withInt:(jint)index
             withBoolean:(jboolean)value;

/*!
 @brief Sets <code>array[index] = value</code>.
 Applies to byte, double, float, int, long, and short arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if the <code>array</code> is not an array or the value cannot be
 converted to the array type by a widening conversion
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (void)setByteWithId:(id)array
              withInt:(jint)index
             withByte:(jbyte)value;

/*!
 @brief Sets <code>array[index] = value</code>.
 Applies to char, double, float, int, and long arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if the <code>array</code> is not an array or the value cannot be
 converted to the array type by a widening conversion
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (void)setCharWithId:(id)array
              withInt:(jint)index
             withChar:(jchar)value;

/*!
 @brief Sets <code>array[index] = value</code>.
 Applies to double arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if the <code>array</code> is not an array or the value cannot be
 converted to the array type by a widening conversion
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (void)setDoubleWithId:(id)array
                withInt:(jint)index
             withDouble:(jdouble)value;

/*!
 @brief Sets <code>array[index] = value</code>.
 Applies to double and float arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if the <code>array</code> is not an array or the value cannot be
 converted to the array type by a widening conversion
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (void)setFloatWithId:(id)array
               withInt:(jint)index
             withFloat:(jfloat)value;

/*!
 @brief Sets <code>array[index] = value</code>.
 Applies to double, float, int, and long arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if the <code>array</code> is not an array or the value cannot be
 converted to the array type by a widening conversion
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (void)setIntWithId:(id)array
             withInt:(jint)index
             withInt:(jint)value;

/*!
 @brief Sets <code>array[index] = value</code>.
 Applies to double, float, and long arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if the <code>array</code> is not an array or the value cannot be
 converted to the array type by a widening conversion
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (void)setLongWithId:(id)array
              withInt:(jint)index
             withLong:(jlong)value;

/*!
 @brief Sets <code>array[index] = value</code>.
 Applies to double, float, int, long, and short arrays.
 @throws NullPointerException if <code>array == null</code>
 @throws IllegalArgumentException
 if the <code>array</code> is not an array or the value cannot be
 converted to the array type by a widening conversion
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0 || index >= array.length</code>
 */
+ (void)setShortWithId:(id)array
               withInt:(jint)index
             withShort:(jshort)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectArray)

FOUNDATION_EXPORT id JavaLangReflectArray_getWithId_withInt_(id array, jint index);

FOUNDATION_EXPORT jboolean JavaLangReflectArray_getBooleanWithId_withInt_(id array, jint index);

FOUNDATION_EXPORT jbyte JavaLangReflectArray_getByteWithId_withInt_(id array, jint index);

FOUNDATION_EXPORT jchar JavaLangReflectArray_getCharWithId_withInt_(id array, jint index);

FOUNDATION_EXPORT jdouble JavaLangReflectArray_getDoubleWithId_withInt_(id array, jint index);

FOUNDATION_EXPORT jfloat JavaLangReflectArray_getFloatWithId_withInt_(id array, jint index);

FOUNDATION_EXPORT jint JavaLangReflectArray_getIntWithId_withInt_(id array, jint index);

FOUNDATION_EXPORT jint JavaLangReflectArray_getLengthWithId_(id array);

FOUNDATION_EXPORT jlong JavaLangReflectArray_getLongWithId_withInt_(id array, jint index);

FOUNDATION_EXPORT jshort JavaLangReflectArray_getShortWithId_withInt_(id array, jint index);

FOUNDATION_EXPORT id JavaLangReflectArray_newInstanceWithIOSClass_withIntArray_(IOSClass *componentType, IOSIntArray *dimensions);

FOUNDATION_EXPORT id JavaLangReflectArray_newInstanceWithIOSClass_withInt_(IOSClass *componentType, jint size);

FOUNDATION_EXPORT void JavaLangReflectArray_setWithId_withInt_withId_(id array, jint index, id value);

FOUNDATION_EXPORT void JavaLangReflectArray_setBooleanWithId_withInt_withBoolean_(id array, jint index, jboolean value);

FOUNDATION_EXPORT void JavaLangReflectArray_setByteWithId_withInt_withByte_(id array, jint index, jbyte value);

FOUNDATION_EXPORT void JavaLangReflectArray_setCharWithId_withInt_withChar_(id array, jint index, jchar value);

FOUNDATION_EXPORT void JavaLangReflectArray_setDoubleWithId_withInt_withDouble_(id array, jint index, jdouble value);

FOUNDATION_EXPORT void JavaLangReflectArray_setFloatWithId_withInt_withFloat_(id array, jint index, jfloat value);

FOUNDATION_EXPORT void JavaLangReflectArray_setIntWithId_withInt_withInt_(id array, jint index, jint value);

FOUNDATION_EXPORT void JavaLangReflectArray_setLongWithId_withInt_withLong_(id array, jint index, jlong value);

FOUNDATION_EXPORT void JavaLangReflectArray_setShortWithId_withInt_withShort_(id array, jint index, jshort value);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectArray)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectArray")
