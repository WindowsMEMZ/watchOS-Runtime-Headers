//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRClientUpdatesConfigMessage_h
#define MRClientUpdatesConfigMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@class NSArray;

@interface MRClientUpdatesConfigMessage : MRProtocolMessage

@property (copy, nonatomic) NSArray *subscribedPlayerPaths;
@property (readonly, nonatomic) BOOL nowPlayingUpdates;
@property (readonly, nonatomic) BOOL artworkUpdates;
@property (readonly, nonatomic) BOOL volumeUpdates;
@property (readonly, nonatomic) BOOL keyboardUpdates;
@property (readonly, nonatomic) BOOL outputDeviceUpdates;
@property (readonly, nonatomic) BOOL systemEndpointUpdates;

/* instance methods */
- (id)initWithUnderlyingCodableMessage:(id)message error:(id)error;
- (id)initWithNowPlayingUpdates:(BOOL)updates artworkUpdates:(BOOL)updates volumeUpdates:(BOOL)updates keyboardUpdates:(BOOL)updates outputDeviceUpdates:(BOOL)updates systemEndpointUpdates:(BOOL)updates subscribedPlayerPaths:(id)paths;
- (unsigned long long)type;
@end

#endif /* MRClientUpdatesConfigMessage_h */
