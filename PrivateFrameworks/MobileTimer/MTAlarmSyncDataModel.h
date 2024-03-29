//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTAlarmSyncDataModel_h
#define MTAlarmSyncDataModel_h
@import Foundation;

#include "MTAgentDiagnosticDelegate-Protocol.h"
#include "MTAlarmObserver-Protocol.h"
#include "MTAlarmStorage.h"
#include "MTMetrics.h"
#include "MTSource-Protocol.h"
#include "MTSyncDataModel-Protocol.h"
#include "MTSyncServiceManager.h"
#include "NAScheduler-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface MTAlarmSyncDataModel : NSObject<MTSource, MTAlarmObserver, MTSyncDataModel, MTAgentDiagnosticDelegate>

@property (retain, nonatomic) MTSyncServiceManager *syncServiceManager;
@property (retain, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<NAScheduler> *serializer;
@property (retain, nonatomic) MTMetrics *syncMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id /* block */)defaultBlock;

/* instance methods */
- (id)initWithAlarmStorage:(id)storage syncMetrics:(id)metrics;
- (id)initWithAlarmStorage:(id)storage syncMetrics:(id)metrics syncServiceManagerBlock:(id /* block */)block serializer:(id)serializer serialQueue:(id)queue;
- (void)_setupSyncManagerWithBlock:(id /* block */)block;
- (void)startSyncServices;
- (void)stopSyncServices;
- (void)source:(id)source didDismissAlarm:(id)alarm dismissAction:(unsigned long long)action;
- (void)source:(id)source didSnoozeAlarm:(id)alarm snoozeAction:(unsigned long long)action;
- (void)source:(id)source didAddAlarms:(id)alarms;
- (void)source:(id)source didUpdateAlarms:(id)alarms;
- (void)source:(id)source didRemoveAlarms:(id)alarms;
- (void)source:(id)source didFireAlarm:(id)alarm triggerType:(unsigned long long)type;
- (void)source:(id)source didChangeNextAlarm:(id)alarm;
- (id)dataFileName;
- (void)applyChange:(id)change;
- (void)_performAction:(id)action;
- (void)_performDismiss:(id)dismiss;
- (void)_performSnooze:(id)snooze;
- (void)resetDataStore;
- (id)sourceIdentifier;
- (BOOL)isFromOtherDevice;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
@end

#endif /* MTAlarmSyncDataModel_h */
