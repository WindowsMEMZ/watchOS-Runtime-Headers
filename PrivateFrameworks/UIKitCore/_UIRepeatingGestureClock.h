//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIRepeatingGestureClock_h
#define _UIRepeatingGestureClock_h
@import Foundation;

#include "_UIRepeatingGestureClockDelegate-Protocol.h"

@interface _UIRepeatingGestureClock : NSObject {
  /* instance variables */
  unsigned long long _delayIndex;
  BOOL _timerOn;
}

@property (weak, nonatomic) NSObject<_UIRepeatingGestureClockDelegate> *delegate;

/* instance methods */
- (void)dealloc;
- (void)startClock;
- (void)stopClock;
- (void)_cancelTimer;
- (void)_scheduleTimer;
- (void)_createTick:(id)tick;
- (void)_performTick:(id)tick;
@end

#endif /* _UIRepeatingGestureClock_h */
