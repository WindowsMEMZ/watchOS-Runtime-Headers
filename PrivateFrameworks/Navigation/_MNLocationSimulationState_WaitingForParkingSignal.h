//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef _MNLocationSimulationState_WaitingForParkingSignal_h
#define _MNLocationSimulationState_WaitingForParkingSignal_h
@import Foundation;

#include "_MNLocationSimulationState.h"

@interface _MNLocationSimulationState_WaitingForParkingSignal : _MNLocationSimulationState
/* instance methods */
- (long long)type;
- (id)nextSimulatedLocationWithElapsedTime:(double)time;
- (void)updateWithRouteInfo:(id)info;
@end

#endif /* _MNLocationSimulationState_WaitingForParkingSignal_h */
