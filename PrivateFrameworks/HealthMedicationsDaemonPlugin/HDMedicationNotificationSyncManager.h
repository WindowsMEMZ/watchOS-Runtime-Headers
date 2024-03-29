//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMedicationNotificationSyncManager_h
#define HDMedicationNotificationSyncManager_h
@import Foundation;

#include "HDMedicationScheduleSynchronousObserver-Protocol.h"
#include "HDNotificationSyncClientDelegate-Protocol.h"

@class HDNotificationManager, HDNotificationSyncClient, HDProfile, HDSyncIdentityManager, NSMutableDictionary, NSString;

@interface HDMedicationNotificationSyncManager : NSObject<HDMedicationScheduleSynchronousObserver, HDNotificationSyncClientDelegate> {
  /* instance variables */
  NSMutableDictionary *_scheduleDict;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _scheduleDictLock;
  HDSyncIdentityManager *_syncIdentityManager;
  HDProfile *_profile;
}

@property (readonly, nonatomic) HDNotificationManager *notificationManager;
@property (readonly, nonatomic) HDNotificationSyncClient *notificationSyncClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfileExtension:(id)extension;
- (id)initWithProfileExtension:(id)extension notificationSyncClient:(id)client;
- (id)init;
- (long long)isScheduleItemOnHold:(id)hold errorOut:(id *)out;
- (void)scheduleManager:(id)manager transaction:(id)transaction willReschedule:(id)reschedule;
- (void)scheduleManager:(id)manager transaction:(id)transaction didReschedule:(id)reschedule;
- (void)doseEventsAdded:(id)added;
- (BOOL)_shouldSendHoldInstructionForOldScheduleItem:(id)item compareWithNewScheduleItem:(id)item;
- (BOOL)_shouldSendHoldInstructionForNewDoseEvent:(id)event;
- (void)notificationSyncClient:(id)client didReceiveInstructionWithAction:(long long)action;
@end

#endif /* HDMedicationNotificationSyncManager_h */
