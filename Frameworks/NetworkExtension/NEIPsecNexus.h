//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEIPsecNexus_h
#define NEIPsecNexus_h
@import Foundation;

#include "NEInternetNexus.h"

@class NSArray;

@interface NEIPsecNexus : NEInternetNexus

@property (retain, nonatomic) NSArray *nexusInstances;

/* instance methods */
- (id)initWithName:(id)name delegate:(id)delegate shouldCreateKernelChannel:(BOOL)channel;
- (id)initWithName:(id)name delegate:(id)delegate enableWithChannelCount:(unsigned int)count;
- (id)initWithName:(id)name delegate:(id)delegate enableWithChannelCount:(unsigned int)count netifRingSize:(unsigned int)size kernelPipeTxRingSize:(unsigned int)size kernelPipeRxRingSize:(unsigned int)size;
- (id)initWithName:(id)name delegate:(id)delegate enableWithChannelCount:(unsigned int)count netifRingSize:(unsigned int)size kernelPipeTxRingSize:(unsigned int)size kernelPipeRxRingSize:(unsigned int)size execUUID:(id)uuid;
- (BOOL)setDefaultInputHandler:(struct nw_protocol { unsigned char x0[16] struct nw_protocol_identifier * x1; struct nw_protocol_callbacks * x2; struct nw_protocol * x3; void * x4; struct nw_protocol * x5; void * x6; } *)handler;
- (void)setRemotePacketProxy:(id)proxy;
@end

#endif /* NEIPsecNexus_h */
