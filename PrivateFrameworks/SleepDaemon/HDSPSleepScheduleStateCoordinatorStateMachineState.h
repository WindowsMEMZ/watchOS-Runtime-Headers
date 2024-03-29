//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPSleepScheduleStateCoordinatorStateMachineState_h
#define HDSPSleepScheduleStateCoordinatorStateMachineState_h
@import Foundation;

#include "HKSPPersistentStateMachineState.h"
#include "HDSPSleepScheduleStateCoordinatorStateMachine.h"
#include "HDSPSleepScheduleStateCoordinatorStateMachineEventHandler-Protocol.h"

@class NSString;

@interface HDSPSleepScheduleStateCoordinatorStateMachineState : HKSPPersistentStateMachineState<HDSPSleepScheduleStateCoordinatorStateMachineEventHandler>

@property (readonly, weak, @dynamic, nonatomic) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine;
@property (readonly, nonatomic) unsigned long long scheduleState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)didEnter;
- (void)updateState;
- (void)updateStateForcibly:(BOOL)forcibly;
- (void)_forceUpdateStateWithChangeReason:(unsigned long long)reason;
- (void)stateDidExpire;
- (BOOL)isSleepScheduleDisabled;
- (BOOL)isAlarmEnabled;
- (id)_timelineForDate:(id)date;
- (id)_determineNextStateFromTimeline;
- (void)significantTimeChange;
- (void)timeZoneChange;
- (void)scheduleModelChanged:(id)changed;
- (void)significantScheduleChangeOccurred:(unsigned long long)occurred;
- (void)windDownReached;
- (void)bedtimeReached;
- (void)wakeTimeReached;
- (void)wakeUpConfirmed;
@end

#endif /* HDSPSleepScheduleStateCoordinatorStateMachineState_h */
