//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/FilterWriter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFilterWriter")
#ifdef RESTRICT_JavaIoFilterWriter
#define INCLUDE_ALL_JavaIoFilterWriter 0
#else
#define INCLUDE_ALL_JavaIoFilterWriter 1
#endif
#undef RESTRICT_JavaIoFilterWriter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoFilterWriter_) && (INCLUDE_ALL_JavaIoFilterWriter || defined(INCLUDE_JavaIoFilterWriter))
#define JavaIoFilterWriter_

#define RESTRICT_JavaIoWriter 1
#define INCLUDE_JavaIoWriter 1
#include "java/io/Writer.h"

@class IOSCharArray;

/*!
 @brief Abstract class for writing filtered character streams.
 The abstract class <code>FilterWriter</code> itself
 provides default methods that pass all requests to the
 contained stream. Subclasses of <code>FilterWriter</code>
 should override some of these methods and may also
 provide additional methods and fields.
 @author Mark Reinhold
 @since JDK1.1
 */
@interface JavaIoFilterWriter : JavaIoWriter {
 @public
  /*!
   @brief The underlying character-output stream.
   */
  JavaIoWriter *out_;
}

#pragma mark Public

- (void)close;

/*!
 @brief Flushes the stream.
 @exception IOException  If an I/O error occurs
 */
- (void)flush;

/*!
 @brief Writes a portion of an array of characters.
 @param cbuf  Buffer of characters to be written
 @param off   Offset from which to start reading characters
 @param len   Number of characters to be written
 @exception IOException  If an I/O error occurs
 */
- (void)writeWithCharArray:(IOSCharArray *)cbuf
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Writes a single character.
 @exception IOException  If an I/O error occurs
 */
- (void)writeWithInt:(jint)c;

/*!
 @brief Writes a portion of a string.
 @param str  String to be written
 @param off  Offset from which to start reading characters
 @param len  Number of characters to be written
 @exception IOException  If an I/O error occurs
 */
- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)off
                  withInt:(jint)len;

#pragma mark Protected

/*!
 @brief Create a new filtered writer.
 @param outArg  a Writer object to provide the underlying stream.
 @throws NullPointerException if <code>out</code> is <code>null</code>
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFilterWriter)

J2OBJC_FIELD_SETTER(JavaIoFilterWriter, out_, JavaIoWriter *)

FOUNDATION_EXPORT void JavaIoFilterWriter_initWithJavaIoWriter_(JavaIoFilterWriter *self, JavaIoWriter *outArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFilterWriter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoFilterWriter")
