//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/adamroberts/Documents/Workspace6/JRendezvous/src/uk/ac/cam/cl/rendezvous/RendezvousClient.java
//

/*!
 @brief Copyright Pico project, 2016
 */
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_RendezvousClient")
#ifdef RESTRICT_RendezvousClient
#define INCLUDE_ALL_RendezvousClient 0
#else
#define INCLUDE_ALL_RendezvousClient 1
#endif
#undef RESTRICT_RendezvousClient

#if !defined (UkAcCamClRendezvousRendezvousClient_) && (INCLUDE_ALL_RendezvousClient || defined(INCLUDE_UkAcCamClRendezvousRendezvousClient))
#define UkAcCamClRendezvousRendezvousClient_

@class JavaNetURL;
@class UkAcCamClRendezvousRendezvousChannel;

/*!
 @brief Provides a clean interface for obtaining new rendezvous channels from the rendezvous point.
 */
@interface UkAcCamClRendezvousRendezvousClient : NSObject

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)root;

- (instancetype)initWithJavaNetURL:(JavaNetURL *)root;

- (UkAcCamClRendezvousRendezvousChannel *)newChannel OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(UkAcCamClRendezvousRendezvousClient)

FOUNDATION_EXPORT void UkAcCamClRendezvousRendezvousClient_initWithJavaNetURL_(UkAcCamClRendezvousRendezvousClient *self, JavaNetURL *root);

FOUNDATION_EXPORT UkAcCamClRendezvousRendezvousClient *new_UkAcCamClRendezvousRendezvousClient_initWithJavaNetURL_(JavaNetURL *root) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT UkAcCamClRendezvousRendezvousClient *create_UkAcCamClRendezvousRendezvousClient_initWithJavaNetURL_(JavaNetURL *root);

FOUNDATION_EXPORT void UkAcCamClRendezvousRendezvousClient_initWithNSString_(UkAcCamClRendezvousRendezvousClient *self, NSString *root);

FOUNDATION_EXPORT UkAcCamClRendezvousRendezvousClient *new_UkAcCamClRendezvousRendezvousClient_initWithNSString_(NSString *root) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT UkAcCamClRendezvousRendezvousClient *create_UkAcCamClRendezvousRendezvousClient_initWithNSString_(NSString *root);

J2OBJC_TYPE_LITERAL_HEADER(UkAcCamClRendezvousRendezvousClient)

#endif

#pragma pop_macro("INCLUDE_ALL_RendezvousClient")