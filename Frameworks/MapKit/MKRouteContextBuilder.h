//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKRouteContextBuilder_h
#define MKRouteContextBuilder_h
@import Foundation;

@class NSCache;

@interface MKRouteContextBuilder : NSObject {
  /* instance variables */
  NSCache *_routeOverlapCache;
}

/* instance methods */
- (id)buildRouteContextForRoutes:(id)routes selectedRouteIndex:(unsigned long long)index;
@end

#endif /* MKRouteContextBuilder_h */
