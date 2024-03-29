//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTSleepCoordinatorStateMachineDelegate_Protocol_h
#define MTSleepCoordinatorStateMachineDelegate_Protocol_h
@import Foundation;

@protocol MTSleepCoordinatorStateMachineDelegate <MTStateMachineDelegate>
/* instance methods */
- (void)stateMachineUserWokeUp:(id)up;
- (void)stateMachineUserWentToBed:(id)bed;
- (void)stateMachine:(id)machine dismissWakeUpAlarm:(id)alarm dismissAction:(unsigned long long)action;
- (void)stateMachine:(id)machine shouldScheduleAlarmTimeoutForSecondsFromNow:(double)now;
@end

#endif /* MTSleepCoordinatorStateMachineDelegate_Protocol_h */
