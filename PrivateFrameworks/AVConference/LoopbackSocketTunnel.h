//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef LoopbackSocketTunnel_h
#define LoopbackSocketTunnel_h
@import Foundation;

#include "LoopbackSocketTunnelDelegate-Protocol.h"

@class NSObject;

@interface LoopbackSocketTunnel : NSObject {
  /* instance variables */
  unsigned short _port;
  int sockFD;
  struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char x[8] sin_zero; } sa;
  struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char x[8] sin_zero; } vtpSA;
  NSObject<LoopbackSocketTunnelDelegate> *_delegate;
  BOOL foundVTPIP;
}

@property NSObject *optionalArg;

/* instance methods */
- (id)initWithPort:(unsigned short)port delegate:(id)delegate error:(id *)error;
- (int)sendPacketToVTP:(id)vtp;
- (void)getIPPort:(struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } *)ipport;
- (void)getVTPIPPort:(struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } *)vtpipport;
- (void)setVTPIP:(struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } *)vtpip;
- (void)shutdownSocket;
- (int)serverLoopProc;
@end

#endif /* LoopbackSocketTunnel_h */
