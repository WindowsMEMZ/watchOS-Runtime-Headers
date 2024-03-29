//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPTimeInBedTracker_h
#define HDSPTimeInBedTracker_h
@import Foundation;

#include "HDSPEnvironment.h"
#include "HDSPSleepScheduleStateObserver-Protocol.h"
#include "HDSPSleepTracker-Protocol.h"
#include "HDSPSleepTrackerDelegate-Protocol.h"

@class HKSPSleepScheduleModel, NSString;
@protocol NAScheduler;

@interface HDSPTimeInBedTracker : NSObject<HDSPSleepScheduleStateObserver, HDSPSleepTracker>

@property (readonly, nonatomic) NSObject<NAScheduler> *sleepIntervalScheduler;
@property (readonly, nonatomic) BOOL isTimeInBedTrackingEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPSleepTrackerDelegate> *delegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

/* instance methods */
- (id)initWithEnvironment:(id)environment;
- (void)environmentWillBecomeReady:(id)ready;
- (void)sleepScheduleStateDidChange:(unsigned long long)change previousState:(unsigned long long)state reason:(unsigned long long)reason;
- (void)_endSleepSessionWithReason:(unsigned long long)reason;
- (id)_createSleepSessionWithEndDate:(id)date endReason:(unsigned long long)reason;
- (id)_computeSleepSessionStartBeforeDate:(id)date;
- (id)computeSleepIntervalsForInterval:(id)interval;
- (id)_computeSessionMetadataForInterval:(id)interval;
- (id)processedSessionForSession:(id)session;
@end

#endif /* HDSPTimeInBedTracker_h */
