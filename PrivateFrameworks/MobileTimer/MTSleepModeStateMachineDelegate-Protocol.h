//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTSleepModeStateMachineDelegate_Protocol_h
#define MTSleepModeStateMachineDelegate_Protocol_h
@import Foundation;

@protocol MTSleepModeStateMachineDelegate <MTStateMachineDelegate>
/* instance methods */
- (BOOL)stateMachine:(id)machine engageSleepModeUntilDate:(id)date userEngaged:(BOOL)engaged;
- (BOOL)stateMachine:(id)machine disengageSleepModeUserRequested:(BOOL)requested;
- (void)stateMachine:(id)machine keepSleepModeOffUntilDate:(id)date;
- (void)stateMachineClearKeepSleepModeOff:(id)off;
- (void)stateMachine:(id)machine scheduleUpdateForSecondsFromNow:(double)now;
@end

#endif /* MTSleepModeStateMachineDelegate_Protocol_h */
