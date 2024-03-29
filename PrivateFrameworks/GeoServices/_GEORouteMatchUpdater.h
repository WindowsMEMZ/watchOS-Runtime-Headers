//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEORouteMatchUpdater_h
#define _GEORouteMatchUpdater_h
@import Foundation;

#include "GEOApplicationAuditToken.h"
#include "GEOComposedRoute.h"
#include "GEOMapFeatureAccess.h"
#include "GEOMotionContext.h"
#include "GEOTransitRouteMatcher.h"

@interface _GEORouteMatchUpdater : NSObject {
  /* instance variables */
  GEOTransitRouteMatcher *_routeMatcher;
  GEOComposedRoute *_route;
  GEOMapFeatureAccess *_mapFeatureAccess;
  GEOMotionContext *_motionContext;
  GEOApplicationAuditToken *_auditToken;
  double _stationRadius;
}

/* instance methods */
- (id)initWithTransitRouteMatcher:(id)matcher;
- (BOOL)updateRouteMatch:(id)match previousRouteMatch:(id)match forLocation:(id)location;
- (unsigned long long)priority;
- (BOOL)_isLocation:(id)location nearStop:(id)stop;
- (BOOL)_isLocation:(id)location nearStation:(id)station;
- (BOOL)_isLocation:(id)location nearTransitPoint:(struct { double x0; double x1; })point transitID:(unsigned long long)id featureSize:(double)size;
- (double)_stationRadiusForStation:(id)station accessPoint:(id)point adjacentWalkingLegCoordinate:(struct { double x0; double x1; })coordinate;
@end

#endif /* _GEORouteMatchUpdater_h */
