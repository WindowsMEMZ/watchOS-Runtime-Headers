//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRLegacyVolumeControlCapabilitiesDidChangeMessage_h
#define MRLegacyVolumeControlCapabilitiesDidChangeMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@interface MRLegacyVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int capabilities;

/* instance methods */
- (id)initWithCapabilities:(unsigned int)capabilities;
- (unsigned long long)type;
@end

#endif /* MRLegacyVolumeControlCapabilitiesDidChangeMessage_h */
