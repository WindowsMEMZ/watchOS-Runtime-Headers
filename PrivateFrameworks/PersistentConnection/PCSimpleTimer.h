//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 543.100.1.0.0
//
#ifndef PCSimpleTimer_h
#define PCSimpleTimer_h
@import Foundation;

#include "PCDispatchTimer.h"

@class NSDate, NSRunLoop, NSString;
@protocol OS_dispatch_queue;

@interface PCSimpleTimer : NSObject {
  /* instance variables */
  double _fireTime;
  double _startTime;
  double _lastUpdateTime;
  double _earlyFireDelta;
  BOOL _triggerOnGMTChange;
  NSDate *_scheduledWakeDate;
  NSString *_serviceIdentifier;
  id _target;
  SEL _selector;
  id _userInfo;
  PCDispatchTimer *_preventSleepTimer;
  PCDispatchTimer *_fireTimer;
  BOOL _sleepIsImminent;
  unsigned int _powerAssertionID;
  id _timeChangeSource;
  NSRunLoop *_timerRunLoop;
  NSString *_timerMode;
  int _significantTimeChangeToken;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL disableSystemWaking;
@property (nonatomic) BOOL userVisible;

/* class methods */
+ (id)lastSystemWakeDate;
+ (double)currentMachTimeInterval;

/* instance methods */
- (id)initWithFireDate:(id)date serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info;
- (id)initWithTimeInterval:(double)interval serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info;
- (id)initWithAbsoluteTime:(double)time serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info triggerOnGMTChange:(BOOL)gmtchange;
- (void)dealloc;
- (void)updateFireTime:(double)time triggerOnGMTChange:(BOOL)gmtchange;
- (BOOL)isUserVisible;
- (void)scheduleInRunLoop:(id)loop;
- (void)scheduleInRunLoop:(id)loop inMode:(id)mode;
- (void)scheduleInQueue:(id)queue;
- (void)_scheduleTimer;
- (void)invalidate;
- (void)_invalidateAllowAsync:(BOOL)async;
- (BOOL)isValid;
- (BOOL)firingIsImminent;
- (id)userInfo;
- (id)_getTimerRunLoop;
- (id)_getTimerMode;
- (void)_performBlockOnQueue:(id /* block */)queue;
- (void)_updateTimers;
- (void)_preventSleepFired;
- (void)_fireTimerFired;
- (void)_setPowerMonitoringEnabled:(BOOL)enabled;
- (void)_powerNotificationSleepIsNotImminent;
- (void)_powerNotificationSleepIsImminent;
- (void)_significantTimeChange;
- (void)_setSignificantTimeChangeMonitoringEnabled:(BOOL)enabled;
- (id)debugDescription;
@end

#endif /* PCSimpleTimer_h */
