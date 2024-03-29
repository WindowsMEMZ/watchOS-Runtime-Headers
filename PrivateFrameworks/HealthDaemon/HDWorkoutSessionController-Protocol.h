//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDWorkoutSessionController_Protocol_h
#define HDWorkoutSessionController_Protocol_h
@import Foundation;

@protocol HDWorkoutSessionController <NSObject>
/* class methods */
+ (id)recoveryIdentifier;
+ (void)willFinishSessionWithRecoveryData:(id)data profile:(id)profile;
/* instance methods */
- (id)initWithProfile:(id)profile sessionConfiguration:(id)configuration sessionStateController:(id)controller recoveryState:(id)state;
- (void)workoutSessionServer:(id)server didChangeConfiguration:(id)configuration;
- (void)workoutSessionServer:(id)server didTransitionFromState:(long long)state toState:(long long)state date:(id)date;
- (void)workoutSessionServer:(id)server accumulatorDidChange:(id)change;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)handler;
- (void)unitTest_setCMWorkoutManager:(id)manager;
- (void)beginNewActivity:(id)activity;
- (void)endCurrentActivity:(id)activity;
- (BOOL)enableAutomaticDetectionForActivityConfigurations:(id)configurations;
@optional
/* instance methods */
- (void)unitTest_suggestActivity:(id)activity;
- (void)fakeActivityDetection:(id)detection workoutActivity:(id)activity;
@end

#endif /* HDWorkoutSessionController_Protocol_h */
