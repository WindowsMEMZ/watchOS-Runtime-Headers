//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2AccessoryServerBrowserPrivate_Protocol_h
#define HAP2AccessoryServerBrowserPrivate_Protocol_h
@import Foundation;

@protocol HAP2AccessoryServerBrowserPrivate <HAP2AccessoryServerBrowser>

@property (readonly, nonatomic) NSObject<HAP2Storage> *storage;

/* instance methods */
- (void)accessoryWithDeviceIDIsPaired:(id)paired completion:(id /* block */)completion;
- (void)savePublicKey:(id)key forAccessoryWithID:(id)id completion:(id /* block */)completion;
- (void)removePublicKeyForAccessoryWithID:(id)id completion:(id /* block */)completion;
- (void)retrieveLocalPairingIdentityForDeviceID:(id)id completion:(id /* block */)completion;
- (id)operationQueueForDeviceID:(id)id;
- (void)accessoryServerDidUpdateConnectionState:(id)state;
@end

#endif /* HAP2AccessoryServerBrowserPrivate_Protocol_h */
