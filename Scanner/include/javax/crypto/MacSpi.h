//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/crypto/MacSpi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoMacSpi")
#ifdef RESTRICT_JavaxCryptoMacSpi
#define INCLUDE_ALL_JavaxCryptoMacSpi 0
#else
#define INCLUDE_ALL_JavaxCryptoMacSpi 1
#endif
#undef RESTRICT_JavaxCryptoMacSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxCryptoMacSpi_) && (INCLUDE_ALL_JavaxCryptoMacSpi || defined(INCLUDE_JavaxCryptoMacSpi))
#define JavaxCryptoMacSpi_

@class IOSByteArray;
@class JavaNioByteBuffer;
@protocol JavaSecurityKey;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief The <i>Service-Provider Interface</i> (<b>SPI</b>) definition for the <code>Mac</code>
  class.
 - seealso: Mac
 */
@interface JavaxCryptoMacSpi : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>MacSpi</code> instance.
 */
- (instancetype)init;

/*!
 @brief Clones this <code>MacSpi</code> instance.
 @return the cloned instance.
 @throws CloneNotSupportedException
 if cloning is not supported.
 */
- (id)java_clone;

#pragma mark Protected

/*!
 @brief Computes the digest of this MAC based on the data previously specified in
 <code>engineUpdate</code> calls.
 <p>
 This <code>MacSpi</code> instance is reverted to its initial state and
 can be used to start the next MAC computation with the same parameters or
 initialized with different parameters.
 @return the generated digest.
 */
- (IOSByteArray *)engineDoFinal;

/*!
 @brief Returns the length of this MAC (in bytes).
 @return the length of this MAC (in bytes).
 */
- (jint)engineGetMacLength;

/*!
 @brief Initializes this <code>MacSpi</code> instance with the specified key and
 algorithm parameters.
 @param key
 the key to initialize this algorithm.
 @param params
 the parameters for this algorithm.
 @throws InvalidKeyException
 if the specified key cannot be used to initialize this
 algorithm, or it is <code>null</code>.
 @throws InvalidAlgorithmParameterException
 if the specified parameters cannot be used to initialize this
 algorithm.
 */
- (void)engineInitWithJavaSecurityKey:(id<JavaSecurityKey>)key
withJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params;

/*!
 @brief Resets this <code>MacSpi</code> instance to its initial state.
 <p>
 This <code>MacSpi</code> instance is reverted to its initial state and can be
 used to start the next MAC computation with the same parameters or
 initialized with different parameters.
 */
- (void)engineReset;

/*!
 @brief Updates this <code>MacSpi</code> instance with the specified byte.
 @param input
 the byte.
 */
- (void)engineUpdateWithByte:(jbyte)input;

/*!
 @brief Updates this <code>MacSpi</code> instance with the data from the specified
 buffer <code>input</code> from the specified <code>offset</code> and length <code>len</code>
 .
 @param input
 the buffer.
 @param offset
 the offset in the buffer.
 @param len
 the length of the data in the buffer.
 */
- (void)engineUpdateWithByteArray:(IOSByteArray *)input
                          withInt:(jint)offset
                          withInt:(jint)len;

/*!
 @brief Updates this <code>MacSpi</code> instance with the data from the specified
 buffer, starting at <code>ByteBuffer.position()</code>, including the next
 <code>ByteBuffer.remaining()</code> bytes.
 @param input
 the buffer.
 */
- (void)engineUpdateWithJavaNioByteBuffer:(JavaNioByteBuffer *)input;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoMacSpi)

FOUNDATION_EXPORT void JavaxCryptoMacSpi_init(JavaxCryptoMacSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoMacSpi)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoMacSpi")
