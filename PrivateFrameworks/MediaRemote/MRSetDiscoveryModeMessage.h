//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRSetDiscoveryModeMessage_h
#define MRSetDiscoveryModeMessage_h
@import Foundation;

#include "MRProtocolMessage.h"
#include "MRAVRoutingDiscoverySessionConfiguration.h"

@interface MRSetDiscoveryModeMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int mode;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration;

/* instance methods */
- (id)initWithUnderlyingCodableMessage:(id)message error:(id)error;
- (id)initWithMode:(unsigned int)mode configuration:(id)configuration;
- (id)initWithMode:(unsigned int)mode features:(unsigned int)features;
- (unsigned long long)type;
@end

#endif /* MRSetDiscoveryModeMessage_h */
