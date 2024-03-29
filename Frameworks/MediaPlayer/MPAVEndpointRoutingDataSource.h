//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPAVEndpointRoutingDataSource_h
#define MPAVEndpointRoutingDataSource_h
@import Foundation;

#include "MPAVRoutingDataSource.h"

@class MRAVRoutingDiscoverySession, MRAVRoutingDiscoverySessionConfiguration, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {
  /* instance variables */
  MRAVRoutingDiscoverySession *_discoverySession;
  id _callbackToken;
  unsigned int _targetSessionID;
}

@property (nonatomic) BOOL didReceiveDiscoveryResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableDictionary *endpoints;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL suppressNotifications;

/* instance methods */
- (id)init;
- (id)initWithThrottlingEnabled:(BOOL)enabled;
- (void)dealloc;
- (void)setTargetSessionID:(unsigned int)id;
- (long long)discoveryMode;
- (void)setDiscoveryMode:(long long)mode;
- (BOOL)devicePresenceDetected;
- (id)getRoutesForCategory:(id)category;
- (void)setPickedRoute:(id)route withPassword:(id)password completion:(id /* block */)completion;
- (void)_endpointsDidChange:(id)change;
- (void)_clearDiscoverySessionCallback;
- (void)_setDiscoverySessionCallback;
- (unsigned int)targetSessionID;
@end

#endif /* MPAVEndpointRoutingDataSource_h */
