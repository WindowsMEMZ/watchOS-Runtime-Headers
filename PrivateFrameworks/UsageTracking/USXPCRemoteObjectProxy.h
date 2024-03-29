//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 324.0.0.0.0
//
#ifndef USXPCRemoteObjectProxy_h
#define USXPCRemoteObjectProxy_h
@import Foundation;

@interface USXPCRemoteObjectProxy : NSObject
/* class methods */
+ (void)proxyFromConnection:(id)connection withRetryCount:(unsigned long long)count proxyHandler:(id /* block */)handler;
+ (void)synchronousProxyFromConnection:(id)connection withRetryCount:(unsigned long long)count proxyHandler:(id /* block */)handler;
@end

#endif /* USXPCRemoteObjectProxy_h */
