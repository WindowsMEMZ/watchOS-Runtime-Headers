//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNTimeAndDistanceUpdaterDelegate_Protocol_h
#define MNTimeAndDistanceUpdaterDelegate_Protocol_h
@import Foundation;

@protocol MNTimeAndDistanceUpdaterDelegate <NSObject>
/* instance methods */
- (void)timeAndDistanceUpdater:(id)updater currentStepIndex:(unsigned long long)index didUpdateDistanceUntilManeuver:(double)maneuver timeUntilManeuver:(double)maneuver;
- (void)timeAndDistanceUpdater:(id)updater didUpdateDisplayETA:(id)eta remainingDistance:(id)distance batteryChargeInfo:(id)info;
@end

#endif /* MNTimeAndDistanceUpdaterDelegate_Protocol_h */
