//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef NSNetServiceBrowserDelegate_Protocol_h
#define NSNetServiceBrowserDelegate_Protocol_h
@import Foundation;

@protocol NSNetServiceBrowserDelegate <NSObject>
@optional
/* instance methods */
- (void)netServiceBrowserWillSearch:(id)search;
- (void)netServiceBrowserDidStopSearch:(id)search;
- (void)netServiceBrowser:(id)browser didNotSearch:(id)search;
- (void)netServiceBrowser:(id)browser didFindDomain:(id)domain moreComing:(BOOL)coming;
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;
- (void)netServiceBrowser:(id)browser didRemoveDomain:(id)domain moreComing:(BOOL)coming;
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;
@end

#endif /* NSNetServiceBrowserDelegate_Protocol_h */
