//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef _MNLocationSimulationState_SearchingForParkingAfterArrival_h
#define _MNLocationSimulationState_SearchingForParkingAfterArrival_h
@import Foundation;

#include "_MNLocationSimulationState_SearchingForParkingBeforeArrival.h"

@interface _MNLocationSimulationState_SearchingForParkingAfterArrival : _MNLocationSimulationState_SearchingForParkingBeforeArrival
/* instance methods */
- (long long)type;
- (double)_scoreForRoad:(id)road coordinate:(struct { double x0; double x1; })coordinate;
- (void)_handleReachedParkingLocation;
@end

#endif /* _MNLocationSimulationState_SearchingForParkingAfterArrival_h */
