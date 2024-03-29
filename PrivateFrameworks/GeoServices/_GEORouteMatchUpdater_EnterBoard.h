//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEORouteMatchUpdater_EnterBoard_h
#define _GEORouteMatchUpdater_EnterBoard_h
@import Foundation;

#include "_GEORouteMatchUpdater.h"
#include "GEOComposedRouteStep.h"
#include "GEOComposedTransitTripRouteStep.h"
#include "GEOPBTransitStation.h"
#include "GEOPBTransitStop.h"

@interface _GEORouteMatchUpdater_EnterBoard : _GEORouteMatchUpdater {
  /* instance variables */
  GEOPBTransitStop *_transitStop;
  GEOPBTransitStation *_transitStation;
  struct { double latitude; double longitude; } _entranceCoordinate;
  struct PolylineCoordinate { unsigned int index; float offset; } _routeCoordinateApproaching;
  struct PolylineCoordinate { unsigned int index; float offset; } _routeCoordinateAtStation;
  GEOComposedRouteStep *_enterStationStep;
  GEOComposedRouteStep *_boardVehicleStep;
  GEOComposedTransitTripRouteStep *_rideStep;
  BOOL _hasEnteredStation;
}

/* instance methods */
- (id)initWithTransitRouteMatcher:(id)matcher boardVehicleStep:(id)step;
- (BOOL)updateRouteMatch:(id)match previousRouteMatch:(id)match forLocation:(id)location;
- (BOOL)_hasLocationEnteredStation:(id)station routeMatch:(id)match;
- (BOOL)_hasLocationExitedStation:(id)station;
- (BOOL)_isLocationNearEndOfWalkingSegment:(id)segment;
- (BOOL)_isLocationNearTransitNode:(id)node;
- (BOOL)_isLocationNearAccessPoint:(id)point;
@end

#endif /* _GEORouteMatchUpdater_EnterBoard_h */
