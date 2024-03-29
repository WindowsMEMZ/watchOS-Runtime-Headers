//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHAwardsWorkoutServerInterface_Protocol_h
#define ACHAwardsWorkoutServerInterface_Protocol_h
@import Foundation;

@protocol ACHAwardsWorkoutServerInterface <NSObject>
/* instance methods */
- (void)remote_workoutsInDateInterval:(id)interval completion:(id /* block */)completion;
- (void)remote_numberOfWorkoutsWithDuration:(double)duration containedInInterval:(id)interval completion:(id /* block */)completion;
- (void)remote_numberOfFirstPartyWorkoutsWithDuration:(double)duration type:(unsigned long long)type endingOnOrBeforeDate:(id)date completion:(id /* block */)completion;
- (void)remote_numberOfFirstPartyWorkoutsWithDuration:(double)duration containedInInterval:(id)interval completion:(id /* block */)completion;
- (void)remote_numberOfFirstPartyWorkoutsWithDuration:(double)duration type:(unsigned long long)type andLocation:(unsigned long long)location containedInInterval:(id)interval completion:(id /* block */)completion;
- (void)remote_bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)type endingBeforeDate:(id)date completion:(id /* block */)completion;
- (void)remote_bestDistanceForFirstPartyWorkoutsWithType:(unsigned long long)type endingBeforeDate:(id)date completion:(id /* block */)completion;
- (void)remote_mindfulMinutesForForDateInterval:(id)interval completion:(id /* block */)completion;
@end

#endif /* ACHAwardsWorkoutServerInterface_Protocol_h */
