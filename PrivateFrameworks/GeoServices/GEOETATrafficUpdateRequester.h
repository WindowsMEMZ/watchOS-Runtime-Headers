//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOETATrafficUpdateRequester_h
#define GEOETATrafficUpdateRequester_h
@import Foundation;

@interface GEOETATrafficUpdateRequester : NSObject
/* instance methods */
- (void)sendETATrafficUpdateRequest:(id)request auditToken:(id)token throttleToken:(id)token finishedHandler:(id /* block */)handler;
- (void)sendConditionalETATrafficUpdateRequest:(id)request timeWindowDuration:(double)duration auditToken:(id)token throttleToken:(id)token willSendRequestHandler:(id /* block */)handler finishedHandler:(id /* block */)handler;
- (void)cancelRequest:(id)request;
@end

#endif /* GEOETATrafficUpdateRequester_h */
