//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDProfile_h
#define HDProfile_h
@import Foundation;

#include "HDAWDSubmissionManager.h"
#include "HDActivityCacheManager.h"
#include "HDAgeGatingManager.h"
#include "HDAppSubscriptionManager.h"
#include "HDAttachmentManager.h"
#include "HDAuthorizationManager.h"
#include "HDBackgroundObservationServerExtensionManager.h"
#include "HDCloudSyncManager.h"
#include "HDConceptIndexManager.h"
#include "HDContributorManager.h"
#include "HDCurrentActivitySummaryHelper.h"
#include "HDDaemon.h"
#include "HDDaemonSyncEngine.h"
#include "HDDataCollectionManager.h"
#include "HDDataManager.h"
#include "HDDataProvenanceManager.h"
#include "HDDatabase.h"
#include "HDDeviceContextStoreManager.h"
#include "HDDeviceKeyValueStoreManager.h"
#include "HDDeviceManager.h"
#include "HDFeatureSettingsManager.h"
#include "HDFitnessMachineManager.h"
#include "HDHealthDaemon-Protocol.h"
#include "HDHealthDaemonReadyObserver-Protocol.h"
#include "HDHealthRecordsAccountExistenceNotifier.h"
#include "HDHealthServiceManager.h"
#include "HDKeyValueDomainManager.h"
#include "HDMedicalIDDataManager.h"
#include "HDMetadataManager.h"
#include "HDNanoSyncManager.h"
#include "HDNotificationManager.h"
#include "HDNotificationSyncManager.h"
#include "HDOnboardingCompletionManager.h"
#include "HDOntologyConceptManager.h"
#include "HDOntologyDatabase.h"
#include "HDPeriodicCountryMonitor.h"
#include "HDProtectedDataOperationScheduler.h"
#include "HDRapportMessenger.h"
#include "HDRestorableAlarmScheduler.h"
#include "HDServiceConnectionManager.h"
#include "HDSharedSummaryManager.h"
#include "HDSharingAuthorizationManager.h"
#include "HDSourceManager.h"
#include "HDSourceOrderManager.h"
#include "HDSummarySharingEntryIDSManager.h"
#include "HDSummarySharingEntryManager.h"
#include "HDSyncEngine-Protocol.h"
#include "HDSyncIdentityManager.h"
#include "HDTinkerPrivacyAlertCoordinator.h"
#include "HDUnitPreferencesManager.h"
#include "HDUserCharacteristicsManager.h"
#include "HDUserDomainConceptManager.h"
#include "HDWorkoutCondenser.h"
#include "HDWorkoutManager.h"
#include "HKAnalyticsHealthDataSource-Protocol.h"
#include "HKFeatureAvailabilityHealthDataSource-Protocol.h"

@class HDAssertionManager, HKObserverSet, HKProfileIdentifier, HKSynchronousObserverSet, NSDictionary, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_group;

@interface HDProfile : NSObject<HKFeatureAvailabilityHealthDataSource, HKAnalyticsHealthDataSource, HDHealthDaemonReadyObserver> {
  /* instance variables */
  HDOntologyConceptManager *_ontologyManager;
  HDBackgroundObservationServerExtensionManager *_extensionManager;
  NSDictionary *_profileExtensionsByIdentifier;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _profileLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _profileObserverLock;
  NSObject<OS_dispatch_group> *_profileObserverGroup;
  BOOL _hasNotifiedProfileInitializedObservers;
  HKSynchronousObserverSet *_profileInitializedObservers;
  HKObserverSet *_profileReadyObservers;
  NSMutableArray *_postProfileReadyBlocks;
}

@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) BOOL requiresWeakRetention;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL testModeEnabled;
@property (readonly, nonatomic) HDAgeGatingManager *ageGatingManager;
@property (readonly, nonatomic) HDAppSubscriptionManager *appSubscriptionManager;
@property (readonly, nonatomic) HDAWDSubmissionManager *awdSubmissionManager;
@property (readonly, nonatomic) HDProtectedDataOperationScheduler *protectedDataOperationScheduler;
@property (readonly, nonatomic) HDNotificationSyncManager *notificationSyncManager;
@property (readonly, nonatomic) HDServiceConnectionManager *serviceConnectionManager;
@property (readonly, nonatomic) HDKeyValueDomainManager *keyValueDomainManager;
@property (readonly, nonatomic) BOOL hasNotifiedProfileReadyObservers;
@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, weak, nonatomic) NSObject<HDHealthDaemon> *healthDaemon;
@property (readonly, nonatomic) HDActivityCacheManager *activityCacheManager;
@property (readonly, nonatomic) HDRestorableAlarmScheduler *alarmScheduler;
@property (readonly, nonatomic) HDAttachmentManager *attachmentManager;
@property (readonly, nonatomic) HDAuthorizationManager *authorizationManager;
@property (readonly, nonatomic) HDCloudSyncManager *cloudSyncManager;
@property (readonly, nonatomic) HDConceptIndexManager *conceptIndexManager;
@property (readonly, nonatomic) HDContributorManager *contributorManager;
@property (readonly, nonatomic) HDCurrentActivitySummaryHelper *currentActivitySummaryHelper;
@property (readonly, nonatomic) HDDataManager *dataManager;
@property (readonly, nonatomic) HDDataCollectionManager *dataCollectionManager;
@property (readonly, nonatomic) HDDataProvenanceManager *dataProvenanceManager;
@property (readonly, nonatomic) HDDeviceContextStoreManager *deviceContextManager;
@property (readonly, nonatomic) HDDeviceKeyValueStoreManager *deviceKeyValueStoreManager;
@property (readonly, nonatomic) HDDeviceManager *deviceManager;
@property (readonly, nonatomic) HDFeatureSettingsManager *featureSettingsManager;
@property (readonly, nonatomic) HDFitnessMachineManager *fitnessMachineManager;
@property (readonly, nonatomic) HDHealthRecordsAccountExistenceNotifier *healthRecordsAccountExistenceNotifier;
@property (readonly, nonatomic) HDMedicalIDDataManager *medicalIDDataManager;
@property (readonly, nonatomic) HDMetadataManager *metadataManager;
@property (readonly, nonatomic) HDNanoSyncManager *nanoSyncManager;
@property (readonly, nonatomic) HDNotificationManager *notificationManager;
@property (readonly, nonatomic) HDOnboardingCompletionManager *onboardingCompletionManager;
@property (readonly, nonatomic) HDOntologyConceptManager *ontologyConceptManager;
@property (readonly, nonatomic) HDOntologyDatabase *ontologyDatabase;
@property (readonly, nonatomic) HDPeriodicCountryMonitor *periodicCountryMonitor;
@property (readonly, nonatomic) HDRapportMessenger *rapportMessenger;
@property (readonly, nonatomic) HDHealthServiceManager *serviceManager;
@property (readonly, nonatomic) HDAssertionManager *sessionAssertionManager;
@property (readonly, nonatomic) HDSharedSummaryManager *sharedSummaryManager;
@property (readonly, nonatomic) HDSharingAuthorizationManager *sharingAuthorizationManager;
@property (readonly, nonatomic) HDSummarySharingEntryManager *sharingEntryManager;
@property (readonly, nonatomic) HDSummarySharingEntryIDSManager *summarySharingEntryIDSManager;
@property (readonly, nonatomic) HDSourceManager *sourceManager;
@property (readonly, nonatomic) HDSourceOrderManager *sourceOrderManager;
@property (readonly, nonatomic) NSObject<HDSyncEngine> *syncEngine;
@property (readonly, nonatomic) HDSyncIdentityManager *syncIdentityManager;
@property (readonly, nonatomic) HDTinkerPrivacyAlertCoordinator *tinkerPrivacyAlertCoordinator;
@property (readonly, nonatomic) HDUserCharacteristicsManager *userCharacteristicsManager;
@property (readonly, nonatomic) HDUserDomainConceptManager *userDomainConceptManager;
@property (readonly, nonatomic) HDWorkoutCondenser *workoutCondenser;
@property (readonly, nonatomic) HDWorkoutManager *workoutManager;
@property (readonly, nonatomic) HDDatabase *database;
@property (readonly, nonatomic) long long profileType;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, copy, nonatomic) NSString *directoryPath;
@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (readonly, nonatomic) long long currentSyncIdentityPersistentID;
@property (readonly, copy, nonatomic) NSString *medicalIDDirectoryPath;
@property (readonly, nonatomic) HDUnitPreferencesManager *unitPreferencesManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)_concurrentDatabaseReaderLimitForProfileType:(long long)type;

/* instance methods */
- (BOOL)setPairedGuardianParticipant:(id)participant error:(id *)error;
- (id)pairedGuardianParticipantWithError:(id *)error;
- (BOOL)setPairedGuardianUserInfo:(id)info error:(id *)error;
- (id)pairedGuardianUserInfoWithError:(id *)error;
- (id)ageWithCurrentDate:(id)date error:(id *)error;
- (id)biologicalSexWithError:(id *)error;
- (id)featureStatusProviderForIdentifier:(id)identifier;
- (id)featureAvailabilityProviderForIdentifier:(id)identifier;
- (id)isImproveHealthRecordsAllowedWithError:(id *)error;
- (id)featureAvailabilityProvidingForFeatureIdentifier:(id)identifier;
- (id)requirementSatisfactionOverridesDataSource;
- (id)watchLowPowerModeDataSource;
- (id)wristDetectionSettingManager;
- (id)initWithDirectoryPath:(id)path medicalIDDirectoryPath:(id)path daemon:(id)daemon profileIdentifier:(id)identifier;
- (void)daemonReady:(id)ready;
- (void)registerProfileInitializedObserver:(id)observer queue:(id)queue;
- (void)notifyProfileInitializedObservers;
- (void)registerProfileReadyObserver:(id)observer queue:(id)queue;
- (void)_notifyProfileReadyObservers;
- (void)awakeFromDisk;
- (void)prepareForObliterationWithReason:(id)reason;
- (void)invalidateAndWaitWithReason:(id)reason;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)options reason:(id)reason completion:(id /* block */)completion;
- (void)obliterateWithOptions:(unsigned long long)options reason:(id)reason;
- (void)terminationCleanup;
- (void)executeBlockAfterProfileReady:(id /* block */)ready;
- (BOOL)fetchDisplayFirstName:(id *)name lastName:(id *)name error:(id *)error;
- (BOOL)setDisplayFirstName:(id)name lastName:(id)name error:(id *)error;
- (id)profileExtensionWithIdentifier:(id)identifier;
- (id)profileExtensionsConformingToProtocol:(id)protocol;
- (id)allProfileExtensions;
- (id)fetchDisplayImageDataWithError:(id *)error;
- (BOOL)setDisplayImageData:(id)data error:(id *)error;
- (void)triggerDeletion;
- (id)_newDatabase;
- (id)_newAWDSubmissionManager;
- (id)_newWorkoutManager;
- (id)_newUserCharacteristicsManager;
- (id)_newCloudSyncManager;
- (id)_newContributorManager;
- (void)_setOnboardingCompletionManager:(id)manager;
@end

#endif /* HDProfile_h */
