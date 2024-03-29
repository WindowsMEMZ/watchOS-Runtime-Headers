//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMFHTTPClientDelegate_Protocol_h
#define HMFHTTPClientDelegate_Protocol_h
@import Foundation;

@protocol HMFHTTPClientDelegate <NSObject>
@optional
/* instance methods */
- (void)client:(id)client didRequestPingWithCompletionHandler:(id /* block */)handler;
- (void)clientDidBecomeReachable:(id)reachable;
- (void)clientDidBecomeUnreachable:(id)unreachable;
@end

#endif /* HMFHTTPClientDelegate_Protocol_h */
