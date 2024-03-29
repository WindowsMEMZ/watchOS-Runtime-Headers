//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapRequestManager_h
#define GEOMapRequestManager_h
@import Foundation;

@class NSMutableSet, geo_isolater;

@interface GEOMapRequestManager : NSObject {
  /* instance variables */
  NSMutableSet *_requests;
  geo_isolater *_isolater;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)trackRequest:(id)request;
- (void)requestComplete:(id)complete;
@end

#endif /* GEOMapRequestManager_h */
