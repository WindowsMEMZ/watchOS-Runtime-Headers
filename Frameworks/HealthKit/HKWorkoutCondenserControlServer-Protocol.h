//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKWorkoutCondenserControlServer_Protocol_h
#define HKWorkoutCondenserControlServer_Protocol_h
@import Foundation;

@protocol HKWorkoutCondenserControlServer 
/* instance methods */
- (void)remote_condenseWorkoutsForReason:(long long)reason workoutBatchLimit:(long long)limit completion:(id /* block */)completion;
- (void)remote_condenseWorkoutWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_condensedWorkoutsWithCompletion:(id /* block */)completion;
- (void)remote_condensableWorkoutsWithCompletion:(id /* block */)completion;
@end

#endif /* HKWorkoutCondenserControlServer_Protocol_h */
