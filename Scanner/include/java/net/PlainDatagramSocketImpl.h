//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/PlainDatagramSocketImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetPlainDatagramSocketImpl")
#ifdef RESTRICT_JavaNetPlainDatagramSocketImpl
#define INCLUDE_ALL_JavaNetPlainDatagramSocketImpl 0
#else
#define INCLUDE_ALL_JavaNetPlainDatagramSocketImpl 1
#endif
#undef RESTRICT_JavaNetPlainDatagramSocketImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetPlainDatagramSocketImpl_) && (INCLUDE_ALL_JavaNetPlainDatagramSocketImpl || defined(INCLUDE_JavaNetPlainDatagramSocketImpl))
#define JavaNetPlainDatagramSocketImpl_

#define RESTRICT_JavaNetDatagramSocketImpl 1
#define INCLUDE_JavaNetDatagramSocketImpl 1
#include "java/net/DatagramSocketImpl.h"

@class JavaIoFileDescriptor;
@class JavaNetDatagramPacket;
@class JavaNetInetAddress;
@class JavaNetNetworkInterface;
@class JavaNetSocketAddress;

/*!
  used in java.nio.
 */
@interface JavaNetPlainDatagramSocketImpl : JavaNetDatagramSocketImpl

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                     withInt:(jint)localPort;

- (void)bindWithInt:(jint)port
withJavaNetInetAddress:(JavaNetInetAddress *)address;

- (void)close;

- (void)connectWithJavaNetInetAddress:(JavaNetInetAddress *)inetAddr
                              withInt:(jint)port;

- (void)create;

- (void)disconnect;

- (id)getOptionWithInt:(jint)option;

- (jint)getTimeToLive;

- (jbyte)getTTL;

- (void)joinWithJavaNetInetAddress:(JavaNetInetAddress *)addr;

- (void)joinGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)addr
              withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

- (void)leaveWithJavaNetInetAddress:(JavaNetInetAddress *)addr;

- (void)leaveGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)addr
               withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

- (jint)peekDataWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)pack;

- (void)receiveWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)pack;

- (void)sendWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)packet;

- (void)setOptionWithInt:(jint)option
                  withId:(id)value;

- (void)setTimeToLiveWithInt:(jint)ttl;

- (void)setTTLWithByte:(jbyte)ttl;

#pragma mark Protected

- (void)java_finalize;

- (jint)peekWithJavaNetInetAddress:(JavaNetInetAddress *)sender;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetPlainDatagramSocketImpl)

FOUNDATION_EXPORT void JavaNetPlainDatagramSocketImpl_initWithJavaIoFileDescriptor_withInt_(JavaNetPlainDatagramSocketImpl *self, JavaIoFileDescriptor *fd, jint localPort);

FOUNDATION_EXPORT JavaNetPlainDatagramSocketImpl *new_JavaNetPlainDatagramSocketImpl_initWithJavaIoFileDescriptor_withInt_(JavaIoFileDescriptor *fd, jint localPort) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetPlainDatagramSocketImpl *create_JavaNetPlainDatagramSocketImpl_initWithJavaIoFileDescriptor_withInt_(JavaIoFileDescriptor *fd, jint localPort);

FOUNDATION_EXPORT void JavaNetPlainDatagramSocketImpl_init(JavaNetPlainDatagramSocketImpl *self);

FOUNDATION_EXPORT JavaNetPlainDatagramSocketImpl *new_JavaNetPlainDatagramSocketImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetPlainDatagramSocketImpl *create_JavaNetPlainDatagramSocketImpl_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNetPlainDatagramSocketImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetPlainDatagramSocketImpl")
