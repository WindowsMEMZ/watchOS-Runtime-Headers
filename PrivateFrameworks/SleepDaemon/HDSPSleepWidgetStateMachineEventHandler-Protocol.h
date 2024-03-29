//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPSleepWidgetStateMachineEventHandler_Protocol_h
#define HDSPSleepWidgetStateMachineEventHandler_Protocol_h
@import Foundation;

@protocol HDSPSleepWidgetStateMachineEventHandler <HKSPPersistentStateMachineEventHandler>
/* instance methods */
- (void)sleepModeDidChange:(long long)change isUserRequested:(BOOL)requested;
- (void)sleepScheduleModelDidChange:(id)change;
- (void)sleepScheduleStateDidChange:(unsigned long long)change;
- (void)significantTimeChangeOccurred;
@end

#endif /* HDSPSleepWidgetStateMachineEventHandler_Protocol_h */
