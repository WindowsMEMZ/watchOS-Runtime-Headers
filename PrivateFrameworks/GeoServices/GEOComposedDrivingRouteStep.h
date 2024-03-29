//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedDrivingRouteStep_h
#define GEOComposedDrivingRouteStep_h
@import Foundation;

#include "GEOComposedRouteStep.h"
#include "GEOComposedRouteEVStepInfo.h"

@interface GEOComposedDrivingRouteStep : GEOComposedRouteStep {
  /* instance variables */
  GEOComposedRouteEVStepInfo *_evInfo;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithComposedRoute:(id)route geoRouteLeg:(id)leg geoStep:(id)step stepIndex:(unsigned long long)index startRouteCoordinate:(struct { unsigned int x0; float x1; })coordinate endRouteCoordinate:(struct { unsigned int x0; float x1; })coordinate maneuverStartRouteCoordinate:(struct { unsigned int x0; float x1; })coordinate;
- (id)initWithComposedRoute:(id)route geoRouteLeg:(id)leg geoStep:(id)step stepIndex:(unsigned long long)index pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range maneuverPointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)evInfo;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* GEOComposedDrivingRouteStep_h */
