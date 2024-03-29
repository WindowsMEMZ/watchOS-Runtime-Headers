//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 749.20.0.0.0
//
#ifndef WorkoutKitXPCServiceProtocol_Protocol_h
#define WorkoutKitXPCServiceProtocol_Protocol_h
@import Foundation;

@protocol WorkoutKitXPCServiceProtocol 
/* instance methods */
- (void)presentWorkoutCompositionData:(id)data completion:(id /* block */)completion;
- (void)presentWorkoutConfigurationData:(id)data completion:(id /* block */)completion;
- (void)openWorkoutAppWithWorkoutCompositionData:(id)data completion:(id /* block */)completion;
- (void)openWorkoutAppWithWorkoutPlanData:(id)data completion:(id /* block */)completion;
- (void)saveWorkoutCompositionData:(id)data completion:(id /* block */)completion;
- (void)addScheduledWorkouts:(id)workouts sourceBundleId:(id)id completion:(id /* block */)completion;
- (void)removeScheduledWorkouts:(id)workouts sourceBundleId:(id)id completion:(id /* block */)completion;
- (void)storeScheduledWorkoutCompositions:(id)compositions sourceBundleId:(id)id completion:(id /* block */)completion;
- (void)retrieveScheduledWorkoutCompositionsForSourceBundleId:(id)id completion:(id /* block */)completion;
- (void)deleteScheduledWorkoutCompositionsForSourceBundleId:(id)id completion:(id /* block */)completion;
- (void)iconForBundleId:(id)id completion:(id /* block */)completion;
- (void)retrieveWorkoutCompositionFromWorkout:(id)workout completion:(id /* block */)completion;
- (void)retrieveWorkoutCompositionFromWorkoutUUID:(id)uuid completion:(id /* block */)completion;
- (void)retrieveAuthorizationStateForBundleId:(id)id completion:(id /* block */)completion;
- (void)requestAuthorizationForBundleId:(id)id completion:(id /* block */)completion;
- (void)setAuthorizationState:(id)state forBundleId:(id)id completion:(id /* block */)completion;
- (void)handleUninstalledAppIds:(id)ids completion:(id /* block */)completion;
@end

#endif /* WorkoutKitXPCServiceProtocol_Protocol_h */
