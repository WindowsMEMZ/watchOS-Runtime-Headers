//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef _MNLocationSimulationState_h
#define _MNLocationSimulationState_h
@import Foundation;

#include "_MNLocationSimulationData.h"
#include "_MNLocationSimulationStateDelegate-Protocol.h"

@interface _MNLocationSimulationState : NSObject

@property (weak, nonatomic) NSObject<_MNLocationSimulationStateDelegate> *delegate;
@property (retain, nonatomic) _MNLocationSimulationData *data;
@property (readonly, nonatomic) long long type;

/* instance methods */
- (void)onEnterState;
- (void)onLeaveState;
- (id)nextSimulatedLocationWithElapsedTime:(double)time;
- (void)updateWithRouteInfo:(id)info;
- (id)_locationWithCoordinate:(struct { double x0; double x1; double x2; })coordinate course:(double)course speed:(double)speed;
- (struct { double x0; double x1; double x2; })_projectedCoordinateOffRouteFrom:(struct { double x0; double x1; double x2; })from toCoordinate:(struct { double x0; double x1; double x2; })coordinate overTimeDelta:(double)delta outCourse:(out double *)course outSpeed:(out double *)speed;
- (double)_courseFromCoordinate:(struct { double x0; double x1; double x2; })coordinate toCoordinate:(struct { double x0; double x1; double x2; })coordinate;
@end

#endif /* _MNLocationSimulationState_h */
