//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccessoryBrowserDelegate_Protocol_h
#define HMDAccessoryBrowserDelegate_Protocol_h
@import Foundation;

@protocol HMDAccessoryBrowserDelegate <NSObject>
/* instance methods */
- (void)accessoryBrowser:(id)browser didAddAccessoryAdvertisement:(id)advertisement;
- (void)accessoryBrowser:(id)browser didRemoveAccessoryAdvertisement:(id)advertisement;
- (void)accessoryBrowser:(id)browser didFindAccessoryServer:(id)server stateChanged:(BOOL)changed stateNumber:(id)number completion:(id /* block */)completion;
- (void)accessoryBrowser:(id)browser didTombstoneAccessoryServer:(id)server;
- (void)accessoryBrowser:(id)browser didRemoveAccessoryServer:(id)server error:(id)error;
- (void)accessoryBrowser:(id)browser didFindAccessoryServerNeedingReprovisioning:(id)reprovisioning error:(id)error;
- (void)accessoryBrowser:(id)browser didFinishWACForAccessoryWithIdentifier:(id)identifier error:(id)error;
- (void)accessoryBrowser:(id)browser didUpdateReachability:(BOOL)reachability forBTLEAccessoriesWithServerIdentifier:(id)identifier;
- (void)accessoryBrowser:(id)browser accessoryServer:(id)server didStopPairingWithError:(id)error;
- (void)accessoryBrowser:(id)browser accessoryServer:(id)server didDiscoverAccessories:(id)accessories transaction:(id)transaction error:(id)error;
- (void)accessoryBrowser:(id)browser identifier:(id)identifier reachable:(BOOL)reachable;
- (void)accessoryBrowser:(id)browser accessoryServer:(id)server didUpdateValuesForCharacteristics:(id)characteristics stateNumber:(id)number broadcast:(BOOL)broadcast;
- (void)accessoryBrowser:(id)browser accessoryServer:(id)server didUpdateHasPairings:(BOOL)pairings;
- (void)accessoryBrowser:(id)browser accessoryServer:(id)server didUpdateCategory:(id)category;
- (void)accessoryBrowser:(id)browser discoveryFailedWithError:(id)error accessoryServer:(id)server linkType:(long long)type;
- (void)accessoryBrowser:(id)browser didUpdateEndpoint:(id)endpoint;
- (void)accessoryBrowser:(id)browser accessoryServer:(id)server didUpdateConnectionState:(BOOL)state sessionInfo:(id)info linkLayerType:(long long)type withError:(id)error;
- (void)accessoryBrowser:(id)browser accessoryServer:(id)server didUpdateConnectionState:(BOOL)state linkLayerType:(long long)type bookkeeping:(id)bookkeeping withError:(id)error;
- (void)accessoryBrowser:(id)browser didFinishPairingForAccessoryServer:(id)server;
@end

#endif /* HMDAccessoryBrowserDelegate_Protocol_h */
