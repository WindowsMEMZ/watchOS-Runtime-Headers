//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1131.0.0.0.0
//
#ifndef NSXPCProxyCreating_Protocol_h
#define NSXPCProxyCreating_Protocol_h
@import Foundation;

@protocol NSXPCProxyCreating 
/* instance methods */
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)handler;
@optional
/* instance methods */
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)handler;
@end

#endif /* NSXPCProxyCreating_Protocol_h */
