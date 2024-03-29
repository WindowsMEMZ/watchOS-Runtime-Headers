//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISBeaconCountdownDelegate_Protocol_h
#define CUISBeaconCountdownDelegate_Protocol_h
@import Foundation;

@protocol CUISBeaconCountdownDelegate <NSObject>
/* instance methods */
- (void)beaconCountdown:(id)countdown updatedWithCurrentCount:(long long)count initialCount:(long long)count;
- (void)beaconCountdownCompletedCountdown:(id)countdown;
- (void)beaconCountdownEncounteredError:(id)error;
@end

#endif /* CUISBeaconCountdownDelegate_Protocol_h */
