//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDSPWakeDetectionDetectingState_h
#define _HDSPWakeDetectionDetectingState_h
@import Foundation;

#include "HDSPWakeDetectionStateMachineState.h"

@interface _HDSPWakeDetectionDetectingState : HDSPWakeDetectionStateMachineState

@property (readonly, nonatomic) unsigned long long activeTypes;

/* instance methods */
- (void)didEnter;
- (void)didExit;
- (BOOL)isDetectingState;
- (BOOL)_isActivityDateInDetectionWindow:(id)window type:(unsigned long long)type;
- (void)wakeupEventDetected:(unsigned long long)detected date:(id)date;
- (void)earlyWakeUpWasNotifiedRemotely;
@end

#endif /* _HDSPWakeDetectionDetectingState_h */
