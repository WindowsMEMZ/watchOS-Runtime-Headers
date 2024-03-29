//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTransitUpdateRequester_h
#define GEOTransitUpdateRequester_h
@import Foundation;

@class NSHashTable, geo_isolater;

@interface GEOTransitUpdateRequester : NSObject {
  /* instance variables */
  geo_isolater *_isolater;
  NSHashTable *_pendingRequests;
}

/* class methods */
+ (id)sharedRequester;

/* instance methods */
- (id)init;
- (void)startTransitRouteUpdateRequest:(id)request auditToken:(id)token throttleToken:(id)token queue:(id)queue networkActivity:(id /* block */)activity completion:(id /* block */)completion;
- (void)cancelTransitRouteUpdateRequest:(id)request;
- (BOOL)_finishRequest:(id)request;
@end

#endif /* GEOTransitUpdateRequester_h */
