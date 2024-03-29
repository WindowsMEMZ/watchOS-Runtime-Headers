//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 324.0.0.0.0
//
#ifndef USTrackingAgentPrivateConnection_h
#define USTrackingAgentPrivateConnection_h
@import Foundation;

@interface USTrackingAgentPrivateConnection : NSObject
/* class methods */
+ (id)newConnection;
+ (id)newInterface;
+ (BOOL)connectionHasPrivateEntitlement:(id)entitlement;
+ (BOOL)connectionHasFamilyControlsEntitlement:(id)entitlement;
@end

#endif /* USTrackingAgentPrivateConnection_h */
