//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTAlarmSnapshot_h
#define MTAlarmSnapshot_h
@import Foundation;

#include "MTSnapshotScheduler.h"
#include "MTAlarmObserver-Protocol.h"
#include "MTAlarmStorage.h"

@class NSString;

@interface MTAlarmSnapshot : MTSnapshotScheduler<MTAlarmObserver>

@property (readonly, nonatomic) MTAlarmStorage *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)shouldScheduleSnapshotForAlarms:(id)alarms;

/* instance methods */
- (id)initWithStorage:(id)storage;
- (void)source:(id)source didAddAlarms:(id)alarms;
- (void)source:(id)source didUpdateAlarms:(id)alarms;
- (void)source:(id)source didRemoveAlarms:(id)alarms;
- (void)source:(id)source didSnoozeAlarm:(id)alarm snoozeAction:(unsigned long long)action;
- (void)source:(id)source didDismissAlarm:(id)alarm dismissAction:(unsigned long long)action;
- (void)source:(id)source didFireAlarm:(id)alarm triggerType:(unsigned long long)type;
- (void)source:(id)source didChangeNextAlarm:(id)alarm;
@end

#endif /* MTAlarmSnapshot_h */
