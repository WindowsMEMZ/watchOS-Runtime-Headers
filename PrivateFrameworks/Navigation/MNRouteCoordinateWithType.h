//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNRouteCoordinateWithType_h
#define MNRouteCoordinateWithType_h
@import Foundation;

@interface MNRouteCoordinateWithType : NSObject

@property (nonatomic) unsigned long long significanceType;
@property (nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } routeCoordinate;

/* class methods */
+ (id)divergenceCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })coordinate;
+ (id)convergenceCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })coordinate;

/* instance methods */
- (id)description;
@end

#endif /* MNRouteCoordinateWithType_h */
