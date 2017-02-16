//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/KeyStoreSpi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityKeyStoreSpi")
#ifdef RESTRICT_JavaSecurityKeyStoreSpi
#define INCLUDE_ALL_JavaSecurityKeyStoreSpi 0
#else
#define INCLUDE_ALL_JavaSecurityKeyStoreSpi 1
#endif
#undef RESTRICT_JavaSecurityKeyStoreSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityKeyStoreSpi_) && (INCLUDE_ALL_JavaSecurityKeyStoreSpi || defined(INCLUDE_JavaSecurityKeyStoreSpi))
#define JavaSecurityKeyStoreSpi_

@class IOSByteArray;
@class IOSCharArray;
@class IOSClass;
@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaSecurityCertCertificate;
@class JavaUtilDate;
@protocol JavaSecurityKey;
@protocol JavaSecurityKeyStore_Entry;
@protocol JavaSecurityKeyStore_LoadStoreParameter;
@protocol JavaSecurityKeyStore_ProtectionParameter;
@protocol JavaUtilEnumeration;

/*!
 @brief <code>KeyStoreSpi</code> is the Service Provider Interface (SPI) definition for
 <code>KeyStore</code>.
 - seealso: KeyStore
 */
@interface JavaSecurityKeyStoreSpi : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Returns an <code>Enumeration</code> over all alias names stored in this
 <code>KeyStoreSpi</code>.
 @return an <code>Enumeration</code> over all alias names stored in this
 <code>KeyStoreSpi</code>.
 */
- (id<JavaUtilEnumeration>)engineAliases;

/*!
 @brief Indicates whether the given alias is present in this <code>KeyStoreSpi</code>.
 @param alias
 the alias of an entry.
 @return <code>true</code> if the alias exists, <code>false</code> otherwise.
 */
- (jboolean)engineContainsAliasWithNSString:(NSString *)alias;

/*!
 @brief Deletes the entry identified with the given alias from this <code>KeyStoreSpi</code>
 .
 @param alias
 the alias for the entry.
 @throws KeyStoreException
 if the entry can not be deleted.
 */
- (void)engineDeleteEntryWithNSString:(NSString *)alias;

/*!
 @brief Indicates whether the entry for the given alias is assignable to the
 provided <code>Class</code>.
 @param alias
 the alias for the entry.
 @param entryClass
 the type of the entry.
 @return <code>true</code> if the <code>Entry</code> for the alias is assignable to
 the specified <code>entryClass</code>.
 */
- (jboolean)engineEntryInstanceOfWithNSString:(NSString *)alias
                                 withIOSClass:(IOSClass *)entryClass;

/*!
 @brief Returns the trusted certificate for the entry with the given alias.
 @param alias
 the alias for the entry.
 @return the trusted certificate for the entry with the given alias, or
 <code>null</code> if the specified alias is not bound to an entry.
 */
- (JavaSecurityCertCertificate *)engineGetCertificateWithNSString:(NSString *)alias;

/*!
 @brief Returns the alias associated with the first entry whose certificate
 matches the specified certificate.
 @param cert
 the certificate to find the associated entry's alias for.
 @return the alias or <code>null</code> if no entry with the specified
 certificate can be found.
 */
- (NSString *)engineGetCertificateAliasWithJavaSecurityCertCertificate:(JavaSecurityCertCertificate *)cert;

/*!
 @brief Returns the certificate chain for the entry with the given alias.
 @param alias
 the alias for the entry
 @return the certificate chain for the entry with the given alias, or
 <code>null</code> if the specified alias is not bound to an entry.
 */
- (IOSObjectArray *)engineGetCertificateChainWithNSString:(NSString *)alias;

/*!
 @brief Returns the creation date of the entry with the given alias.
 @param alias
 the alias for the entry.
 @return the creation date, or <code>null</code> if the specified alias is not
 bound to an entry.
 */
- (JavaUtilDate *)engineGetCreationDateWithNSString:(NSString *)alias;

/*!
 @brief Returns the <code>Entry</code> with the given alias, using the specified
 <code>ProtectionParameter</code>.
 @param alias
 the alias of the requested entry.
 @param protParam
 the <code>ProtectionParameter</code>, used to protect the requested
 entry, maybe <code>null</code>.
 @return he <code>Entry</code> with the given alias, using the specified
 <code>ProtectionParameter</code>.
 @throws NoSuchAlgorithmException
 if the required algorithm is not available.
 @throws UnrecoverableEntryException
 if the entry can not be recovered.
 @throws KeyStoreException
 if this operation fails
 */
- (id<JavaSecurityKeyStore_Entry>)engineGetEntryWithNSString:(NSString *)alias
                withJavaSecurityKeyStore_ProtectionParameter:(id<JavaSecurityKeyStore_ProtectionParameter>)protParam;

/*!
 @brief Returns the key with the given alias, using the password to recover the
 key from the store.
 @param alias
 the alias for the entry.
 @param password
 the password used to recover the key.
 @return the key with the specified alias, or <code>null</code> if the
 specified alias is not bound to an entry.
 @throws NoSuchAlgorithmException
 if the algorithm for recovering the key is not available.
 @throws UnrecoverableKeyException
 if the key can not be recovered.
 */
- (id<JavaSecurityKey>)engineGetKeyWithNSString:(NSString *)alias
                                  withCharArray:(IOSCharArray *)password;

/*!
 @brief Indicates whether the specified alias is associated with a
 <code>KeyStore.TrustedCertificateEntry</code>.
 @param alias
 the alias of an entry.
 @return <code>true</code> if the given alias is associated with a certificate
 entry.
 */
- (jboolean)engineIsCertificateEntryWithNSString:(NSString *)alias;

/*!
 @brief Indicates whether the specified alias is associated with either a
 <code>KeyStore.PrivateKeyEntry</code> or a <code>KeyStore.SecretKeyEntry</code>.
 @param alias
 the alias of an entry.
 @return <code>true</code> if the given alias is associated with a key entry.
 */
- (jboolean)engineIsKeyEntryWithNSString:(NSString *)alias;

/*!
 @brief Loads this <code>KeyStoreSpi</code> from the given <code>InputStream</code>.
 Utilizes the given password to verify the stored data.
 @param stream
 the <code>InputStream</code> to load this <code>KeyStoreSpi</code>'s
 data from.
 @param password
 the password to verify the stored data, maybe <code>null</code>.
 @throws IOException
 if a problem occurred while reading from the stream.
 @throws NoSuchAlgorithmException
 if the required algorithm is not available.
 @throws CertificateException
 if the an exception occurred while loading the certificates
 of this code <code>KeyStoreSpi</code>.
 */
- (void)engineLoadWithJavaIoInputStream:(JavaIoInputStream *)stream
                          withCharArray:(IOSCharArray *)password;

/*!
 @brief Loads this <code>KeyStoreSpi</code> using the specified <code>LoadStoreParameter</code>
 .
 @param param
 the <code>LoadStoreParameter</code> that specifies how to load this
 <code>KeyStoreSpi</code>, maybe <code>null</code>.
 @throws IOException
 if a problem occurred while reading from the stream.
 @throws NoSuchAlgorithmException
 if the required algorithm is not available.
 @throws CertificateException
 if the an exception occurred while loading the certificates
 of this code <code>KeyStoreSpi</code>.
 @throws IllegalArgumentException
 if the given <code>KeyStore.LoadStoreParameter</code> is not
 recognized.
 */
- (void)engineLoadWithJavaSecurityKeyStore_LoadStoreParameter:(id<JavaSecurityKeyStore_LoadStoreParameter>)param;

/*!
 @brief Associates the given alias with a certificate.
 <p>
 If the specified alias already exists, it will be reassigned.
 @param alias
 the alias for the certificate.
 @param cert
 the certificate.
 @throws KeyStoreException
 if an existing alias is not associated to an entry containing
 a trusted certificate, or this method fails for any other
 reason.
 */
- (void)engineSetCertificateEntryWithNSString:(NSString *)alias
              withJavaSecurityCertCertificate:(JavaSecurityCertCertificate *)cert;

/*!
 @brief Stores the given <code>Entry</code> in this <code>KeyStoreSpi</code> and associates
 the entry with the given <code>alias</code>.
 The entry is protected by the
 specified <code>ProtectionParameter</code>.
 <p>
 If the specified alias already exists, it will be reassigned.
 @param alias
 the alias for the entry.
 @param entry_
 the entry to store.
 @param protParam
 the <code>ProtectionParameter</code> to protect the entry.
 @throws KeyStoreException
 if this operation fails.
 */
- (void)engineSetEntryWithNSString:(NSString *)alias
    withJavaSecurityKeyStore_Entry:(id<JavaSecurityKeyStore_Entry>)entry_
withJavaSecurityKeyStore_ProtectionParameter:(id<JavaSecurityKeyStore_ProtectionParameter>)protParam;

/*!
 @brief Associates the given alias with a key and a certificate chain.
 <p>
 If the specified alias already exists, it will be reassigned.
 @param alias
 the alias for the key.
 @param key
 the key in an encoded format.
 @param chain
 the certificate chain.
 @throws KeyStoreException
 if this operation fails.
 @throws IllegalArgumentException
 if <code>key</code> is a <code>PrivateKey</code> and <code>chain</code>
 does.
 */
- (void)engineSetKeyEntryWithNSString:(NSString *)alias
                        withByteArray:(IOSByteArray *)key
 withJavaSecurityCertCertificateArray:(IOSObjectArray *)chain;

/*!
 @brief Associates the given alias with the key, password and certificate chain.
 <p>
 If the specified alias already exists, it will be reassigned.
 @param alias
 the alias for the key.
 @param key
 the key.
 @param password
 the password.
 @param chain
 the certificate chain.
 @throws KeyStoreException
 if the specified key can not be protected, or if this
 operation fails for another reason.
 @throws IllegalArgumentException
 if <code>key</code> is a <code>PrivateKey</code> and <code>chain</code> does
 not contain any certificates.
 */
- (void)engineSetKeyEntryWithNSString:(NSString *)alias
                  withJavaSecurityKey:(id<JavaSecurityKey>)key
                        withCharArray:(IOSCharArray *)password
 withJavaSecurityCertCertificateArray:(IOSObjectArray *)chain;

/*!
 @brief Returns the number of entries stored in this <code>KeyStoreSpi</code>.
 @return the number of entries stored in this <code>KeyStoreSpi</code>.
 */
- (jint)engineSize;

/*!
 @brief Stores this <code>KeyStoreSpi</code> using the specified <code>LoadStoreParameter</code>
 .
 @param param
 the <code>LoadStoreParameter</code> that specifies how to store
 this <code>KeyStoreSpi</code>, maybe <code>null</code>.
 @throws IOException
 if a problem occurred while writing to the stream.
 @throws NoSuchAlgorithmException
 if the required algorithm is not available.
 @throws CertificateException
 if the an exception occurred while storing the certificates
 of this code <code>KeyStoreSpi</code>.
 @throws IllegalArgumentException
 if the given <code>KeyStore.LoadStoreParameter</code> is not
 recognized.
 */
- (void)engineStoreWithJavaSecurityKeyStore_LoadStoreParameter:(id<JavaSecurityKeyStore_LoadStoreParameter>)param;

/*!
 @brief Writes this <code>KeyStoreSpi</code> to the specified <code>OutputStream</code>.
 The data written to the <code>OutputStream</code> is protected by the
 specified password.
 @param stream
 the <code>OutputStream</code> to write the store's data to.
 @param password
 the password to protect the data.
 @throws IOException
 if a problem occurred while writing to the stream.
 @throws NoSuchAlgorithmException
 if the required algorithm is not available.
 @throws CertificateException
 if the an exception occurred while storing the certificates
 of this code <code>KeyStoreSpi</code>.
 */
- (void)engineStoreWithJavaIoOutputStream:(JavaIoOutputStream *)stream
                            withCharArray:(IOSCharArray *)password;

#pragma mark Package-Private

+ (IOSCharArray *)getPasswordFromCallBackWithJavaSecurityKeyStore_ProtectionParameter:(id<JavaSecurityKeyStore_ProtectionParameter>)protParam;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyStoreSpi)

FOUNDATION_EXPORT void JavaSecurityKeyStoreSpi_init(JavaSecurityKeyStoreSpi *self);

FOUNDATION_EXPORT IOSCharArray *JavaSecurityKeyStoreSpi_getPasswordFromCallBackWithJavaSecurityKeyStore_ProtectionParameter_(id<JavaSecurityKeyStore_ProtectionParameter> protParam);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyStoreSpi)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityKeyStoreSpi")