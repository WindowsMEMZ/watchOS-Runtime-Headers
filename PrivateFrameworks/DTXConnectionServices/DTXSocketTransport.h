//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTXSocketTransport_h
#define DTXSocketTransport_h
@import Foundation;

#include "DTXFileDescriptorTransport.h"

@class NSArray;
@protocol OS_dispatch_semaphore;

@interface DTXSocketTransport : DTXFileDescriptorTransport {
  /* instance variables */
  NSObject<OS_dispatch_semaphore> *_socketAcceptedSem;
  atomic int _socketSemProtector;
  NSArray *_addresses;
}

@property (readonly) int port;

/* class methods */
+ (id)schemes;
+ (id)addressForHost:(const char *)host port:(int)port;

/* instance methods */
- (void)_setupWithLocalPort:(int)port;
- (void)_setupChannelWithConnectedSocket:(int)socket assumingOwnership:(BOOL)ownership orDisconnectBlock:(id /* block */)block;
- (void)_commonSocketTransportInit;
- (void)_signalSocketAccepted;
- (id)initWithConnectedSocket:(int)socket disconnectAction:(id /* block */)action;
- (id)initWithLocalPort:(int)port;
- (id)initWithRemoteAddress:(id)address;
- (unsigned long long)transmit:(const void *)transmit ofLength:(unsigned long long)length;
- (void)disconnect;
- (id)localAddresses;
- (unsigned int)supportedDirections;
@end

#endif /* DTXSocketTransport_h */
