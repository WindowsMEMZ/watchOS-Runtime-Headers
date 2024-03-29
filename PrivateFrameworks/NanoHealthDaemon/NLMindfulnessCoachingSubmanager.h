//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLMindfulnessCoachingSubmanager_h
#define NLMindfulnessCoachingSubmanager_h
@import Foundation;

#include "NLBridgeSettingsObserver-Protocol.h"
#include "NLCoachingSubmanager-Protocol.h"
#include "NLCoachingSubmanagerDelegate-Protocol.h"
#include "NLMindfulnessInstallationProvider.h"
#include "NLMindfulnessMigrator.h"
#include "NLMindfulnessReminderProvider.h"
#include "NLMindfulnessReminderProviderDelegate-Protocol.h"
#include "NLReminderConfigurationProvider.h"
#include "NLReminderConfigurationSelection.h"

@class FIMindfulnessReminder, FITypicalDayActivityModel, HDProfile, NSDate, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface NLMindfulnessCoachingSubmanager : NSObject<NLBridgeSettingsObserver, NLMindfulnessReminderProviderDelegate, NLCoachingSubmanager> {
  /* instance variables */
  NLReminderConfigurationProvider *_configurationProvider;
  NLReminderConfigurationSelection *_currentSelection;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  NLMindfulnessInstallationProvider *_installationProvider;
  NLMindfulnessMigrator *_mindfulnessMigrator;
  NLMindfulnessReminderProvider *_mindfulnessReminderProvider;
  NSDate *_mostRecentProcessedReminderDate;
  FIMindfulnessReminder *_mostRecentReminderToShow;
  NSNumber *_mostRecentWristOnState;
  HDProfile *_profile;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NLCoachingSubmanagerDelegate> *coachingSubmanagerDelegate;
@property (weak, nonatomic) FITypicalDayActivityModel *typicalDayModel;

/* class methods */
+ (id)submanagerIdentifier;

/* instance methods */
- (id)initWithProfile:(id)profile installationProvider:(id)provider configurationProvider:(id)provider bridgeSettings:(id)settings mindfulnessMigrator:(id)migrator mindfulnessReminderProvider:(id)provider;
- (void)_availabilityUpdated:(id)updated;
- (BOOL)_isMindfulnessEnabled;
- (void)_configurationAssetsDownloaded:(id)downloaded;
- (void)_updateCurrentConfigurationSelection;
- (void)_setCurrentConfigurationSelection:(id)selection;
- (id)_currentConfigurationSelection;
- (void)typicalDayActivityModelDidUpdate;
- (void)daemonAndCoachingManagerReady;
- (void)wristOnStateChangedTo:(BOOL)to;
- (void)protectedDataDidBecomeAvailable:(BOOL)available;
- (void)protectedDataDidBecomeUnavailable;
- (BOOL)alertsEnabled;
- (id)coachingAlertRequestsWhenForcedWithArguments:(id)arguments;
- (id)coachingAlertRequestsForPollingReason:(unsigned long long)reason;
- (void)coachingAlertRequestsWereProcessed:(id)processed acceptedRequests:(id)requests;
- (void)coachingAlertRequestDidCompleteWithResponse:(id)response;
- (BOOL)requiresMoveGoal;
- (long long)minimumRecentActiveDays;
- (BOOL)requiresCoachingConditionsOnRequests;
- (id)mindfulnessReminderProviderTypicalDayModel;
- (void)mindfulnessReminderProviderUpdated:(id)updated;
- (void)_rescheduleAlertIfRequired;
- (void)_onqueue_rescheduleAlertIfRequired;
- (void)_cancelExistingTask;
- (void)_onqueue_cancelExistingTask;
- (id)_configurationItemForReminder:(id)reminder selection:(id)selection;
@end

#endif /* NLMindfulnessCoachingSubmanager_h */
