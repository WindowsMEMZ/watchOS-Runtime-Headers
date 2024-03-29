//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMockIDSDataChannelLinkContext_h
#define VCMockIDSDataChannelLinkContext_h
@import Foundation;

#include "IDSDataChannelLinkContext.h"

@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext {
  /* instance variables */
  BOOL _forceNetworkCellular;
  unsigned short _localLinkFlags;
  unsigned short _estimatedPerPacketConstantOverhead;
}

@property (nonatomic) BOOL idsUPlusOneMode;
@property unsigned char networkType;
@property unsigned char remoteNetworkType;

/* instance methods */
- (id)init;
- (unsigned int)RATType;
- (unsigned int)remoteRATType;
- (long long)connectionType;
- (BOOL)isVirtualRelayLink;
- (unsigned short)estimatedPerPacketConstantOverhead;
- (unsigned short)localLinkFlags;
@end

#endif /* VCMockIDSDataChannelLinkContext_h */
