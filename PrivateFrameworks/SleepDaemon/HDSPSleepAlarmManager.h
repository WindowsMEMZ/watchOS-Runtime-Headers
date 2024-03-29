//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPSleepAlarmManager_h
#define HDSPSleepAlarmManager_h
@import Foundation;

#include "HDSPEnvironment.h"
#include "HDSPEnvironmentAware-Protocol.h"
#include "HDSPSleepScheduleModelObserver-Protocol.h"
#include "HDSPSource-Protocol.h"

@class NSString;
@protocol HDSPSleepAlarmProvider;

@interface HDSPSleepAlarmManager : NSObject<HDSPSource, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver>

@property (readonly, nonatomic) NSObject<HDSPSleepAlarmProvider> *sleepAlarmProvider;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

/* instance methods */
- (id)initWithEnvironment:(id)environment;
- (id)initWithEnvironment:(id)environment sleepAlarmProvider:(id)provider;
- (void)environmentWillBecomeReady:(id)ready;
- (id)currentSleepAlarms;
- (void)resetSleepAlarmSnoozeState;
- (void)sleepScheduleModelManager:(id)manager didUpdateSleepScheduleModel:(id)model;
@end

#endif /* HDSPSleepAlarmManager_h */
