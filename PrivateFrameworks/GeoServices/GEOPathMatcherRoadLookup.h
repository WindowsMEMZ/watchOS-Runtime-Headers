//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPathMatcherRoadLookup_h
#define GEOPathMatcherRoadLookup_h
@import Foundation;

#include "GEOMapFeatureAccess.h"

@class NSCache;

@interface GEOPathMatcherRoadLookup : NSObject {
  /* instance variables */
  GEOMapFeatureAccess *_mapFeatureAccess;
  NSCache *_roadsCache;
  unsigned long long _cacheMissCount;
  unsigned long long _mapFeatureRoadsCount;
}

/* instance methods */
- (id)initWithAuditToken:(id)token;
- (void)dealloc;
- (struct GEOPathMatcherRoadKey { long long x0; unsigned long long x1; double x2; double x3; })keyForRoad:(id)road;
- (id)roadForKey:(struct GEOPathMatcherRoadKey { long long x0; unsigned long long x1; double x2; double x3; })key;
- (struct GEOPathMatcherRoadKey { long long x0; unsigned long long x1; double x2; double x3; })flippedRoad:(struct GEOPathMatcherRoadKey { long long x0; unsigned long long x1; double x2; double x3; })road;
- (id)findRoadWithMuid:(long long)muid nearCoordinate:(struct { double x0; double x1; })coordinate;
- (id)findRoadsNearCoordinate:(struct { double x0; double x1; })coordinate radius:(double)radius;
- (id)findOutgoingRoadsFrom:(struct GEOPathMatcherRoadKey { long long x0; unsigned long long x1; double x2; double x3; })from;
- (id)_roadForKey:(struct GEOPathMatcherRoadKey { long long x0; unsigned long long x1; double x2; double x3; })key;
- (void)_cacheRoad:(id)road;
- (id)description;
@end

#endif /* GEOPathMatcherRoadLookup_h */
