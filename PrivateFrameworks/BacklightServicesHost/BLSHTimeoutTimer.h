//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHTimeoutTimer_h
#define BLSHTimeoutTimer_h
@import Foundation;

#include "BLSHAssertionAttributeTimer.h"

@interface BLSHTimeoutTimer : BLSHAssertionAttributeTimer
/* instance methods */
- (BOOL)reactivateIfPossible;
- (void)timerFired;
- (void)restartTimer;
@end

#endif /* BLSHTimeoutTimer_h */
