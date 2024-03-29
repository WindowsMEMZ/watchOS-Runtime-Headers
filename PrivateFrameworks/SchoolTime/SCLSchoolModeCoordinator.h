//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLSchoolModeCoordinator_h
#define SCLSchoolModeCoordinator_h
@import Foundation;

#include "SCLActiveDurationAnalyticsSource.h"
#include "SCLPersistentSettings.h"
#include "SCLScheduleSettings.h"
#include "SCLSchoolModeCoordinatorConfiguration.h"
#include "SCLSchoolModeServerObserver-Protocol.h"
#include "SCLSettingsSyncCoordinator.h"
#include "SCLState.h"
#include "SCLTransportControllerDelegate-Protocol.h"
#include "SCLUnlockHistoryItem.h"

@class NSMutableSet, NSString, NSURL;

@interface SCLSchoolModeCoordinator : NSObject<SCLTransportControllerDelegate, SCLSchoolModeServerObserver> {
  /* instance variables */
  int _firstUnlockToken;
  BOOL _hasReceivedFirstUnlock;
}

@property (readonly, nonatomic) NSMutableSet *clients;
@property (readonly, nonatomic) NSURL *directoryURL;
@property (readonly, nonatomic) NSURL *scheduleURL;
@property (retain, nonatomic) SCLUnlockHistoryItem *pendingUnlockItem;
@property (retain, nonatomic) SCLPersistentSettings *persistentSettings;
@property (retain, nonatomic) SCLSettingsSyncCoordinator *settingsSyncCoordinator;
@property (nonatomic) unsigned long long stateHandle;
@property (readonly, nonatomic) SCLActiveDurationAnalyticsSource *activeDurationAnalyticsSource;
@property (readonly, copy, nonatomic) SCLSchoolModeCoordinatorConfiguration *configuration;
@property (readonly, nonatomic) SCLState *currentState;
@property (retain, @dynamic, nonatomic) SCLScheduleSettings *scheduleSettings;
@property (readonly, nonatomic) BOOL ready;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)dealloc;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 :32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64] char x1[64] } x2; char x3[64] unsigned char x4[0] } *)stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char * x1; unsigned int x2; unsigned int x3; } *)hints;
- (void)_createSchoolTimeDirectoryIfNeeded;
- (void)_lock_loadPersistentSchedule;
- (void)_requestRemoteScheduleSettingsIfNeeded;
- (void)_classCDataIsAvailable;
- (void)activateSettingsSyncCoordinatorWithSettings:(id)settings;
- (void)_checkIfClassCDataIsAvailable;
- (void)_registerForFirstUnlockIfNeeded;
- (void)addClient:(id)client;
- (void)removeClient:(id)client;
- (BOOL)applySchedule:(id)schedule error:(id *)error;
- (BOOL)applySchedule:(id)schedule forInitialSync:(BOOL)sync error:(id *)error;
- (void)_updateClientsWithSchedule:(id)schedule notify:(BOOL)notify;
- (void)addUnlockHistoryItem:(id)item completion:(id /* block */)completion;
- (void)fetchRecentUnlockHistoryItemsWithCompletion:(id /* block */)completion;
- (BOOL)setActive:(BOOL)active options:(unsigned long long)options error:(id *)error;
- (void)deleteHistoryWithCompletion:(id /* block */)completion;
- (void)purgeOldHistoryItems;
- (void)_noteHistoryDidUpdate;
- (void)_lock_updatePersistentSettingsWithBlock:(id /* block */)block;
- (void)_persistSettings:(id)settings;
- (void)server:(id)server didUpdateState:(id)state fromState:(id)state;
- (void)transportController:(id)controller didReceiveSchedule:(id)schedule forInitialSync:(BOOL)sync;
- (void)transportController:(id)controller didReceiveUnlockHistoryItem:(id)item;
- (id)currentScheduleSettingsForTransportController:(id)controller;
- (id)transportController;
- (id)nrDevice;
- (id)idsDevice;
- (id)server;
- (id)historyStore;
- (id)_configuration;
- (BOOL)isReady;
@end

#endif /* SCLSchoolModeCoordinator_h */
