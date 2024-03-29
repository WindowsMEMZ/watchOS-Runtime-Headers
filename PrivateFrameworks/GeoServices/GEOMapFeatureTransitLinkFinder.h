//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapFeatureTransitLinkFinder_h
#define GEOMapFeatureTransitLinkFinder_h
@import Foundation;

#include "GEOMapFeatureAccessFinder.h"

@interface GEOMapFeatureTransitLinkFinder : GEOMapFeatureAccessFinder
/* instance methods */
- (id)findTransitLinksNear:(struct { double x0; double x1; })near radius:(double)radius handler:(id /* block */)handler completionHandler:(id /* block */)handler;
@end

#endif /* GEOMapFeatureTransitLinkFinder_h */
