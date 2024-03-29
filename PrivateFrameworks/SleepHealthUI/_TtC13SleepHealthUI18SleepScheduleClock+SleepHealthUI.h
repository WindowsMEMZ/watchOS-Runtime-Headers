//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _TtC13SleepHealthUI18SleepScheduleClock_SleepHealthUI_h
#define _TtC13SleepHealthUI18SleepScheduleClock_SleepHealthUI_h
@import Foundation;

@interface SleepHealthUI.SleepScheduleClock (SleepHealthUI) <UIGestureRecognizerDelegate>
/* instance methods */
- (void)gestureReconizerDidChange:(id)change;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)gestureRecognizerDidStart:(id)start;
- (void)gestureRecognizerDidMove:(id)move;
- (void)gestureRecognizerDidEnd:(id)end;
- (double)accessibilityMinimumTimeInBed;
- (double)accessibilityMaximumTimeInBed;
- (void)accessibilitySetBedtimeAngle:(double)angle minimumTimeInBed:(double)bed maximumTimeInBed:(double)bed;
- (void)accessibilitySetWakeupAngle:(double)angle minimumTimeInBed:(double)bed maximumTimeInBed:(double)bed;
- (void)accessibilitySetModel:(id)model wakeUpComponents:(id)components timeInBedGoal:(double)goal alarmEnabled:(BOOL)enabled;
- (void)accessibilitySetModel:(id)model wakeUpComponents:(id)components timeInBedGoal:(double)goal alarmEnabled:(BOOL)enabled isForSingleDayOverride:(BOOL)override;
- (id)accessibilityRoundedBedtimeComponents;
- (id)accessibilityRoundedWakeUpComponents;
@end

#endif /* _TtC13SleepHealthUI18SleepScheduleClock_SleepHealthUI_h */
