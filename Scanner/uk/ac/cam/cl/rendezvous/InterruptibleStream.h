//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/adamroberts/Documents/Workspace6/JRendezvous/src/uk/ac/cam/cl/rendezvous/InterruptibleStream.java
//

/*!
 @brief Copyright Pico project, 2016
 */
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_InterruptibleStream")
#ifdef RESTRICT_InterruptibleStream
#define INCLUDE_ALL_InterruptibleStream 0
#else
#define INCLUDE_ALL_InterruptibleStream 1
#endif
#undef RESTRICT_InterruptibleStream

#if !defined (UkAcCamClRendezvousInterruptibleStream_) && (INCLUDE_ALL_InterruptibleStream || defined(INCLUDE_UkAcCamClRendezvousInterruptibleStream))
#define UkAcCamClRendezvousInterruptibleStream_

/*!
 @brief Streams marked with this should be thread safe, and their close method should work as
 java.nio.channels.InterruptibleChannel
 @author cw471
 */
@protocol UkAcCamClRendezvousInterruptibleStream < JavaObject >

- (jboolean)isOpen;

@end

J2OBJC_EMPTY_STATIC_INIT(UkAcCamClRendezvousInterruptibleStream)

J2OBJC_TYPE_LITERAL_HEADER(UkAcCamClRendezvousInterruptibleStream)

#endif

#pragma pop_macro("INCLUDE_ALL_InterruptibleStream")
