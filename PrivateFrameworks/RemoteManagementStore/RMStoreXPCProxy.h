//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMStoreXPCProxy_h
#define RMStoreXPCProxy_h
@import Foundation;

@interface RMStoreXPCProxy : NSObject
/* class methods */
+ (id)newConnectionWithScope:(long long)scope;
+ (id)newAgentConnection;
+ (id)newDaemonConnection;
+ (id)newConnectionWithListenerEndpoint:(id)endpoint;
+ (id)newInterface;
@end

#endif /* RMStoreXPCProxy_h */
