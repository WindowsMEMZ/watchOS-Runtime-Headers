//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 207.0.0.0.0
//
#ifndef WCXPCPrivateManagerDaemonProtocol_Protocol_h
#define WCXPCPrivateManagerDaemonProtocol_Protocol_h
@import Foundation;

@protocol WCXPCPrivateManagerDaemonProtocol <NSObject>
/* instance methods */
- (void)fakeIncomingPayloadOnSubService:(id)service ofType:(id)type clientData:(id)data resource:(id)resource resourceSandboxToken:(id)token completionHandler:(id /* block */)handler;
- (void)reconnect;
@end

#endif /* WCXPCPrivateManagerDaemonProtocol_Protocol_h */
