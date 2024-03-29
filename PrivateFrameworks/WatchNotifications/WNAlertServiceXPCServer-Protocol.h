//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNAlertServiceXPCServer_Protocol_h
#define WNAlertServiceXPCServer_Protocol_h
@import Foundation;

@protocol WNAlertServiceXPCServer <NSObject>
/* instance methods */
- (void)activateAlertWithIdentity:(id)identity request:(id)request completion:(id /* block */)completion;
- (void)deactivateAlertWithIdentity:(id)identity request:(id)request;
- (void)sendActions:(id)actions forAlertWithIdentity:(id)identity completion:(id /* block */)completion;
@end

#endif /* WNAlertServiceXPCServer_Protocol_h */
