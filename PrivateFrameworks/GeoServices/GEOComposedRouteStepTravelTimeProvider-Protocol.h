//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedRouteStepTravelTimeProvider_Protocol_h
#define GEOComposedRouteStepTravelTimeProvider_Protocol_h
@import Foundation;

@protocol GEOComposedRouteStepTravelTimeProvider <NSObject>
/* instance methods */
- (struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; })routeCoordinateRange;
- (double)distance;
- (double)travelTime;
- (id)timeCheckpoints;
@end

#endif /* GEOComposedRouteStepTravelTimeProvider_Protocol_h */
