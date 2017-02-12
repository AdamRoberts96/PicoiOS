//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectOutput.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoObjectOutput")
#ifdef RESTRICT_JavaIoObjectOutput
#define INCLUDE_ALL_JavaIoObjectOutput 0
#else
#define INCLUDE_ALL_JavaIoObjectOutput 1
#endif
#undef RESTRICT_JavaIoObjectOutput

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoObjectOutput_) && (INCLUDE_ALL_JavaIoObjectOutput || defined(INCLUDE_JavaIoObjectOutput))
#define JavaIoObjectOutput_

#define RESTRICT_JavaIoDataOutput 1
#define INCLUDE_JavaIoDataOutput 1
#include "java/io/DataOutput.h"

#define RESTRICT_JavaLangAutoCloseable 1
#define INCLUDE_JavaLangAutoCloseable 1
#include "java/lang/AutoCloseable.h"

@class IOSByteArray;

/*!
 @brief Defines an interface for classes that allow reading serialized objects.
 - seealso: ObjectOutputStream
 - seealso: ObjectInput
 */
@protocol JavaIoObjectOutput < JavaIoDataOutput, JavaLangAutoCloseable, JavaObject >

/*!
 @brief Closes the target stream.
 Implementations of this method should free any
 resources used by the stream.
 @throws IOException
 if an error occurs while closing the target stream.
 */
- (void)close;

/*!
 @brief Flushes the target stream.
 Implementations of this method should ensure
 that any pending writes are written out to the target stream.
 @throws IOException
 if an error occurs while flushing the target stream.
 */
- (void)flush;

/*!
 @brief Writes the entire contents of the byte array <code>buffer</code> to the output
 stream.
 Blocks until all bytes are written.
 @param buffer
 the buffer to write.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer;

/*!
 @brief Writes <code>count</code> bytes from the byte array <code>buffer</code> starting at
 position <code>offset</code> to the target stream.
 Blocks until all bytes are
 written.
 @param buffer
 the buffer to write.
 @param offset
 the index of the first byte in <code>buffer</code> to write.
 @param count
 the number of bytes from <code>buffer</code> to write to the target
 stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)count;

/*!
 @brief Writes a single byte to the target stream.
 Only the least significant
 byte of the integer <code>value</code> is written to the stream. Blocks until
 the byte is actually written.
 @param value
 the byte to write.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeWithInt:(jint)value;

/*!
 @brief Writes the specified object <code>obj</code> to the target stream.
 @param obj
 the object to write.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeObjectWithId:(id)obj;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoObjectOutput)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectOutput)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoObjectOutput")
