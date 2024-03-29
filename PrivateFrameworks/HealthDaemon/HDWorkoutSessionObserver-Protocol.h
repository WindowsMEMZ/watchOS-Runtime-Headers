//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDWorkoutSessionObserver_Protocol_h
#define HDWorkoutSessionObserver_Protocol_h
@import Foundation;

@protocol HDWorkoutSessionObserver <NSObject>
/* instance methods */
- (void)workoutSession:(id)session didChangeToState:(long long)state fromState:(long long)state date:(id)date;
- (void)workoutSession:(id)session didGenerateEvent:(id)event;
- (void)workoutSession:(id)session didFailWithError:(id)error;
@optional
/* instance methods */
- (void)workoutSession:(id)session didUpdateDataAccumulator:(id)accumulator;
- (void)workoutSession:(id)session didUpdateControllerStateForRecoveryIdentifier:(id)identifier;
- (void)workoutSession:(id)session didBeginActivity:(id)activity;
- (void)workoutSession:(id)session didEndActivity:(id)activity;
@end

#endif /* HDWorkoutSessionObserver_Protocol_h */
