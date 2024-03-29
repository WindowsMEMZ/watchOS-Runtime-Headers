//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEVPNPluginManager_Protocol_h
#define NEVPNPluginManager_Protocol_h
@import Foundation;

@protocol NEVPNPluginManager 
/* instance methods */
- (void)createVirtualInterfaceWithParameters:(id)parameters completionHandler:(id /* block */)handler;
- (void)handleIPCDetached;
- (void)setStatus:(int)status error:(id)error;
- (void)setTunnelNetworkSettings:(id)settings completionHandler:(id /* block */)handler;
@end

#endif /* NEVPNPluginManager_Protocol_h */
