//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNETADisplayFormatter_h
#define MNETADisplayFormatter_h
@import Foundation;

#include "MNWeakTimer.h"

@class NSDate, NSTimeZone;
@protocol MNETADisplayFormatterDelegate;

@interface MNETADisplayFormatter : NSObject {
  /* instance variables */
  NSTimeZone *_timeZone;
  MNWeakTimer *_updateTimer;
}

@property (weak, nonatomic) NSObject<MNETADisplayFormatterDelegate> *delegate;
@property (nonatomic) double remainingTimeToEndOfRoute;
@property (nonatomic) double remainingTimeToEndOfLeg;
@property (readonly, nonatomic) double displayRemainingTimeToEndOfLeg;
@property (readonly, nonatomic) NSDate *displayETAToEndOfLeg;
@property (readonly, nonatomic) double displayRemainingTimeToEndOfRoute;
@property (readonly, nonatomic) NSDate *displayETAToEndOfRoute;

/* instance methods */
- (id)initWithTimeZone:(id)zone;
- (void)dealloc;
- (void)_updateDisplayETA;
- (void)_scheduleUpdateTimer;
- (void)_updateTimerFired;
- (double)_displayTimeIntervalForTimeInterval:(double)interval;
- (id)_displayDateWithRemainingTime:(double)time;
@end

#endif /* MNETADisplayFormatter_h */
