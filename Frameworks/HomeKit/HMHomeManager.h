//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMHomeManager_h
#define HMHomeManager_h
@import Foundation;

#include "HMAccessory.h"
#include "HMAccessoryInfoDataProviderDataSource-Protocol.h"
#include "HMAccessoryInfoDataProviderFactory-Protocol.h"
#include "HMAccessorySettingsControllerDataSource-Protocol.h"
#include "HMAccessorySettingsControllerFactory-Protocol.h"
#include "HMAccessorySettingsDataSourceDataSource-Protocol.h"
#include "HMAccessorySettingsDataSourceFactory-Protocol.h"
#include "HMAccessorySettingsMessengerFactory-Protocol.h"
#include "HMAccessorySettingsMetricsDispatcher.h"
#include "HMAccessorySettingsMetricsDispatcherFactory-Protocol.h"
#include "HMAccessorySetupCoordinator.h"
#include "HMApplicationData-Protocol.h"
#include "HMApplicationData.h"
#include "HMCacheManager.h"
#include "HMCoreAnalyticsMetricEventDispatcher.h"
#include "HMCoreAnalyticsMetricEventDispatcherFactory-Protocol.h"
#include "HMDarwinNotificationProvider-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFMessageReceiver-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"
#include "HMHome.h"
#include "HMHomeManagerConfiguration.h"
#include "HMHomeManagerDelegate-Protocol.h"
#include "HMMigrationBoost.h"
#include "HMMutableApplicationData-Protocol.h"
#include "HMMutableArray.h"
#include "HMNetworkRouterFirewallRuleManager.h"
#include "HMSoftwareUpdateDocumentationManager.h"
#include "HMUserActionPredictionProvider.h"
#include "HMUserActionPredictionProviderDataSource-Protocol.h"
#include "HMUserCloudShareManager.h"
#include "HMUserCloudShareManagerDataSource-Protocol.h"
#include "HMWidgetManager.h"
#include "HMXPCEventRouterClient.h"
#include "_HMContext.h"
#include "_HMPrivacySettingsProvider-Protocol.h"

@class HMELastEventStore, HMFTimer, NSArray, NSCountedSet, NSError, NSMutableArray, NSOperationQueue, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMHomeManager : NSObject<HMAccessorySettingsControllerFactory, HMAccessorySettingsControllerDataSource, HMAccessoryInfoDataProviderFactory, HMAccessoryInfoDataProviderDataSource, HMAccessorySettingsDataSourceDataSource, HMAccessorySettingsMessengerFactory, HMAccessorySettingsMetricsDispatcherFactory, HMAccessorySettingsDataSourceFactory, HMCoreAnalyticsMetricEventDispatcherFactory, HMFTimerDelegate, HMUserActionPredictionProviderDataSource, HMUserCloudShareManagerDataSource, HMFLogging, HMFMessageReceiver, HMMutableApplicationData, HMApplicationData> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  id /* block */ _pendingChangeSetupModeOperation;
  unsigned long long _pendingChangeSetupMode;
  NSMutableArray *_refreshRequests;
  NSCountedSet *_batchNotificationReasons;
  HMFTimer *_batchNotificationEndTimer;
  BOOL _assistantIdentifierChanged;
  BOOL _eventStoreStarted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<_HMPrivacySettingsProvider> *privacySettingsProvider;
@property (retain, nonatomic) HMMutableArray *homeInvitations;
@property (retain, nonatomic) HMHome *primaryHome;
@property (nonatomic) BOOL didUpdateHomes;
@property (nonatomic) BOOL frameworkMergeComplete;
@property (nonatomic) int serverGenerationCounterToken;
@property (readonly, nonatomic) unsigned long long serverGenerationCounter;
@property (readonly) NSString *homeCacheDir;
@property (retain) NSString *homeDataCache;
@property (retain) NSString *metadataCache;
@property (readonly) NSObject<HMDarwinNotificationProvider> *darwinNotificationProvider;
@property (readonly) id /* block */ timerFactory;
@property (retain, nonatomic) HMXPCEventRouterClient *xpcEventRouterClient;
@property (retain, nonatomic) HMMigrationBoost *migrationBoost;
@property (retain, nonatomic) NSArray *sharedHomeUUIDsNotYetMigrated;
@property (retain) HMCoreAnalyticsMetricEventDispatcher *coreAnalyticsMetricEventDispatcher;
@property (retain) HMAccessorySettingsMetricsDispatcher *accessorySettingsMetricsDispatcher;
@property (readonly, nonatomic) HMMutableArray *currentHomes;
@property (readonly, nonatomic) NSOperationQueue *syncOperationQueue;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) _HMContext *context;
@property (nonatomic) unsigned long long generationCounter;
@property (nonatomic) unsigned long long generationCounterPostHomeGraphUpdate;
@property (nonatomic) unsigned long long metadataVersion;
@property (nonatomic) double homeManagerCreationTimeStamp;
@property (nonatomic) BOOL viewServiceActive;
@property (retain) HMCacheManager *cacheManager;
@property (retain) HMUserActionPredictionProvider *predictionProvider;
@property (readonly) HMELastEventStore *lastEventStore;
@property (nonatomic) BOOL daemonRunningWithROARFramework;
@property (nonatomic) BOOL osCapableOfRunningROAR;
@property (retain, nonatomic) HMSoftwareUpdateDocumentationManager *softwareUpdateDocumentationManager;
@property (readonly) unsigned long long options;
@property (readonly) HMHomeManagerConfiguration *configuration;
@property (readonly, copy, nonatomic) NSArray *incomingHomeInvitations;
@property (readonly, nonatomic) HMHome *currentHome;
@property (readonly) HMAccessory *currentAccessory;
@property (readonly, nonatomic) BOOL dataSyncInProgress;
@property (readonly, nonatomic) unsigned long long dataSyncState;
@property (readonly) unsigned long long status;
@property (readonly) BOOL thisDeviceResidentCapable;
@property (readonly) BOOL residentEnabledForThisDevice;
@property (readonly) BOOL accessAllowedWhenLocked;
@property (readonly) unsigned long long residentProvisioningStatus;
@property (readonly, nonatomic) HMNetworkRouterFirewallRuleManager *firewallRuleManager;
@property (readonly) HMUserCloudShareManager *userCloudShareManager;
@property (readonly) HMAccessorySetupCoordinator *accessorySetupCoordinator;
@property (readonly, copy) NSUUID *lastRemovedCurrentAccessoryUUID;
@property (readonly, nonatomic) BOOL optedToHH2;
@property (readonly, nonatomic) BOOL hh2MigrationAvailable;
@property (readonly) BOOL hh2MigrationInProgress;
@property (readonly) NSError *hh2MigrationFailedError;
@property (readonly) BOOL homeSafetySecurityEnabled;
@property (readonly) HMWidgetManager *widgetManager;
@property (readonly) long long multiUserStatus;
@property (weak, nonatomic) NSObject<HMHomeManagerDelegate> *delegate;
@property (readonly) unsigned long long authorizationStatus;
@property (readonly, copy, nonatomic) NSArray *homes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (retain, nonatomic) HMApplicationData *applicationData;

/* class methods */
+ (id)instanceTracker;
+ (id)unconfigureQueue;
+ (id)sharedEventStore;
+ (BOOL)dataSyncInProgressFromDataSyncState:(unsigned long long)state;
+ (void)fetchSetupModeWithCompletion:(id /* block */)completion;
+ (id)logCategory;

/* instance methods */
- (void)handleInstanceCreated;
- (void)handleInstanceDestroyed;
- (void)checkAndLogMultipleInstanceWarning;
- (void)configureCoreAnalyticsMetricEventDispatcherWithFactory:(id)factory;
- (id)createCoreAnalyticsMetricEventDispatcher;
- (id)createAccessorySettingsDataSource;
- (void)createAutoAddWalletKeySupressionAssertionWithIncomingInvitation:(id)invitation completion:(id /* block */)completion;
- (void)configureAccessorySettingsMetricsDispatcherWithFactory:(id)factory;
- (id)createAccessorySettingsMetricsDispatcherWithCoreAnalyticsMetricDispatcher:(id)dispatcher;
- (id)createAccessorySettingsMessengerWithHomeUUID:(id)uuid;
- (id)accessorySettingsDataSource:(id)source homeWithHomeIdentifier:(id)identifier;
- (BOOL)accessorySettingsDataSource:(id)source transformHomeUUID:(id)uuid accessoryUUID:(id)uuid toClientHomeIdentifier:(id *)identifier clientAccessoryIdentifier:(id *)identifier;
- (BOOL)accessorySettingsDataSource:(id)source transformHomeUUID:(id)uuid mediaSystemUUID:(id)uuid toClientHomeIdentifier:(id *)identifier clientMediaSystemIdentifier:(id *)identifier;
- (void)prepareForDiagnosticExtensionWithCompletion:(id /* block */)completion;
- (id)_beginActiveAssertionWithReason:(id)reason;
- (void)_endActiveAssertion:(id)assertion;
- (void)dumpCloudDatabase:(BOOL)database localDatabase:(BOOL)database workingDatabase:(BOOL)database fakeCloudModels:(BOOL)models completion:(id /* block */)completion;
- (BOOL)removeAllHomeKitPairingIdentities;
- (id)createAccessoryInfoDataProvider;
- (BOOL)accessoryInfoDataProvider:(id)provider transformHomeUUID:(id)uuid accessoryUUID:(id)uuid toClientHomeIdentifier:(id *)identifier clientAccessoryIdentifier:(id *)identifier;
- (id)accessoryInfoDataProvider:(id)provider homeWithHomeIdentifier:(id)identifier;
- (id)createMultiuserSettingsMessenger;
- (id)accessorySettingsController:(id)controller homeWithHomeIdentifier:(id)identifier;
- (id)createAccessorySettingsController;
- (id)init;
- (id)initWithOptions:(unsigned long long)options;
- (id)initWithConfiguration:(id)configuration;
- (id)initWithHomeMangerConfiguration:(id)configuration;
- (id)initWithUUID:(id)uuid configuration:(id)configuration context:(id)context xpcEventRouterClient:(id)client lastEventStore:(id)store timerFactory:(id /* block */)factory darwinNotificationProvider:(id)provider privacySettingsProvider:(id)provider;
- (void)unconfigure;
- (void)dealloc;
- (id)eventRouter;
- (BOOL)isThisDeviceResidentCapable;
- (BOOL)hasOptedToHH2;
- (void)setHasOptedToHH2:(BOOL)hh2;
- (BOOL)isHH2MigrationAvailable;
- (void)setIsHH2MigrationAvailable:(BOOL)available;
- (BOOL)isHH2MigrationInProgress;
- (unsigned long long)_dataSyncStateFromPayload:(id)payload;
- (void)_updateDataSyncState:(id)state;
- (BOOL)isDataSyncInProgress;
- (void)_handleStatusUpdated:(id)updated;
- (void)_updateStatusWithPayload:(id)payload;
- (void)_updateStatusWithPayload:(id)payload sourceIsFetch:(BOOL)fetch;
- (void)notifyResidentCapableUpdated:(BOOL)updated;
- (BOOL)isResidentEnabledForThisDevice;
- (void)notifyResidentEnabledUpdated:(BOOL)updated;
- (BOOL)isAccessAllowedWhenLocked;
- (void)_notifyAccessAllowedWhenLockedUpdated:(BOOL)updated;
- (void)_setResidentProvisioningStatus:(unsigned long long)status;
- (void)_notifyResidentProvisioningStatus:(unsigned long long)status;
- (id)_refreshBeforeDate:(id)date completionHandler:(id /* block */)handler;
- (void)updatePrimaryHome:(id)home completionHandler:(id /* block */)handler;
- (void)addHomeWithName:(id)name completionHandler:(id /* block */)handler;
- (void)removeHome:(id)home completionHandler:(id /* block */)handler;
- (void)resetConfiguration:(BOOL)configuration withoutPopup:(BOOL)popup completionHandler:(id /* block */)handler;
- (void)eraseHomeDataWithCompletionHandler:(id /* block */)handler;
- (void)eraseHomeDataAndDeleteMetadata:(BOOL)metadata completionHandler:(id /* block */)handler;
- (void)queryHomeKitUsageStateWithCompletionHandler:(id /* block */)handler;
- (void)_queryHomeKitUsageStateWithCompletionHandler:(id /* block */)handler;
- (void)queryVersionWithCompletionHandler:(id /* block */)handler;
- (void)dumpState:(id)state payload:(id)payload completion:(id /* block */)completion;
- (void)readCountersForGroup:(id)group homeUUIDString:(id)uuidstring accessoryUUIDString:(id)uuidstring counter:(id)counter statistics:(id)statistics datePartition:(id)partition ephemeralContainer:(id)container completion:(id /* block */)completion;
- (void)saveCountersWithCompletion:(id /* block */)completion;
- (void)deleteCountersBeforeDate:(id)date afterDate:(id)date completion:(id /* block */)completion;
- (void)addEphemeralContainer:(id)container completion:(id /* block */)completion;
- (void)deactivateEphemeralContainer:(id)container completion:(id /* block */)completion;
- (void)deleteEphemeralContainer:(id)container completion:(id /* block */)completion;
- (void)startupEphemeralContainer:(id)container completion:(id /* block */)completion;
- (void)listEphemeralContainersWithCompletion:(id /* block */)completion;
- (void)fetchEventCounters:(id /* block */)counters;
- (void)resetEventCounters:(id /* block */)counters;
- (void)requestLogEventDailySchedulerStatusWithCompletion:(id /* block */)completion;
- (void)submitLogEventDailySchedulerRegisteredBlocksWithCompletion:(id /* block */)completion;
- (void)presentTTRDialog:(id)ttrdialog completionHandler:(id /* block */)handler;
- (void)resetLastTTRTimeWithCompletionHandler:(id /* block */)handler;
- (void)queryMetadata:(id)metadata completionHandler:(id /* block */)handler;
- (void)setMetadata:(id)metadata completionHandler:(id /* block */)handler;
- (void)shouldDisplayiCloudSwitchWithCompletionHandler:(id /* block */)handler;
- (void)_shouldDisplayiCloudSwitchWithCompletionHandler:(id /* block */)handler;
- (void)queryiCloudSwitchStateWithCompletionHandler:(id /* block */)handler;
- (void)_queryiCloudSwitchStateWithCompletionHandler:(id /* block */)handler;
- (void)updateiCloudSwitchState:(BOOL)state completionHandler:(id /* block */)handler;
- (void)_updateiCloudSwitchState:(BOOL)state completionHandler:(id /* block */)handler;
- (void)updateApplicationData:(id)data completionHandler:(id /* block */)handler;
- (void)_updateApplicationData:(id)data completionHandler:(id /* block */)handler;
- (void)updateResidentEnabledForThisDevice:(BOOL)device completionHandler:(id /* block */)handler;
- (void)_updateResidentEnabledForThisDevice:(BOOL)device completionHandler:(id /* block */)handler;
- (void)updateAccessAllowedWhenLocked:(BOOL)locked completionHandler:(id /* block */)handler;
- (void)generateFirewallRuleTLVsFromNetworkDeclarations:(id)declarations completionHandler:(id /* block */)handler;
- (void)_generateFirewallRuleTLVsFromNetworkDeclarations:(id)declarations completionHandler:(id /* block */)handler;
- (void)checkName:(id)name inHome:(id)home withValidationOptions:(unsigned long long)options completionHandler:(id /* block */)handler;
- (void)_checkName:(id)name inHome:(id)home withValidationOptions:(unsigned long long)options completionHandler:(id /* block */)handler;
- (void)fetchDevicesWithCompletionHandler:(id /* block */)handler;
- (BOOL)isiPhoneOnlyPairingSupportedForMatterAccessories;
- (void)__resolveAccountHandle:(id)handle completionHandler:(id /* block */)handler;
- (void)__removeAccountWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)__removeAccountWithHandle:(id)handle completionHandler:(id /* block */)handler;
- (void)_pingDeviceWithUUID:(id)uuid monitor:(BOOL)monitor secure:(BOOL)secure restrictToLocalNetwork:(BOOL)network completionHandler:(id /* block */)handler;
- (void)_pingDeviceWithDestination:(id)destination monitor:(BOOL)monitor secure:(BOOL)secure restrictToLocalNetwork:(BOOL)network completionHandler:(id /* block */)handler;
- (id)_loadHH2MigrationInfoFromHMCache:(id)hmcache;
- (void)_requestRefresh;
- (void)_fetchHomeConfigurationWithRefreshRequested:(BOOL)requested;
- (void)__processSyncResponse:(id)response refreshRequested:(BOOL)requested completionHandler:(id /* block */)handler;
- (void)__preconfigure;
- (void)__start;
- (void)__handleHomeManagerState:(id)state;
- (void)_recomputeAssistantIdentifiers;
- (void)_handleHH2StateWithPayload:(id)payload;
- (void)_handleHH2MigrationProgressStateWithPayload:(id)payload;
- (void)_processHomeConfigurationRequest:(id)request refreshRequested:(BOOL)requested;
- (BOOL)_shouldWeMergeLatestHomeGraphFromDaemonResponse:(id)response;
- (void)_determineCacheFiles;
- (void)_removeCacheFiles;
- (BOOL)_isValidCachedHomeConfiguration:(id)configuration;
- (void)_dumpCaches:(id)caches metadata:(id)metadata;
- (void)_writeCaches:(id)caches homeData:(BOOL)data metadata:(BOOL)metadata;
- (void)_handleRuntimeStateUpdatePayload:(id)payload reason:(id)reason;
- (void)_requestRuntimeUpdate:(id)update;
- (void)_handleRuntimeStateUpdateNotification:(id)notification;
- (void)_updatePrimaryHome:(id)home notifyDelegate:(BOOL)delegate;
- (void)_updateCurrentHome:(id)home;
- (void)_updateHomes:(id)homes;
- (void)_notifyDelegateOfAppDataUpdate;
- (void)_forceBatchNotificationsEnd;
- (void)notifyDelegateOfBatchNotificationsStartWithReason:(id)reason;
- (void)notifyDelegateOfBatchNotificationsEndWithReason:(id)reason;
- (void)_mergeCurrentHomesWithNewHomes:(id)homes newPrimaryHome:(id)home newCurrentHome:(id)home newInvitations:(id)invitations newAppData:(id)data refreshRequested:(BOOL)requested;
- (void)_mergeHomeInvitations:(id)invitations;
- (void)_updateAppData:(id)data;
- (void)_mergeNewAppData:(id)data;
- (id)_privateDelegate;
- (void)_registerNotificationHandlers;
- (id)homeWithUniqueIdentifier:(id)identifier;
- (id)_homeWithUUID:(id)uuid;
- (void)_processHomeAddedPayload:(id)payload completionHandler:(id /* block */)handler;
- (void)_handleCurrentHomeChangedNotification:(id)notification;
- (void)_handleHomesDidUpdateNotification:(id)notification;
- (void)_handleUserInvitationsUpdatedNotification:(id)notification;
- (void)_handleMetadataUpdatedNotification:(id)notification;
- (void)_handleQueryHomeKitUsageStateResponse:(id)response completionHandler:(id /* block */)handler;
- (void)_declineInvitation:(id)invitation completionHandler:(id /* block */)handler;
- (void)_reportJunkInvitation:(id)invitation completionHandler:(id /* block */)handler;
- (void)_ignoreInvitation:(id)invitation completionHandler:(id /* block */)handler;
- (void)_acceptInvitation:(id)invitation completionHandler:(id /* block */)handler;
- (void)_acceptInvitation:(id)invitation presenceAuthStatus:(unsigned long long)status completionHandler:(id /* block */)handler;
- (void)_updateInvitation:(id)invitation presenceAuthStatus:(unsigned long long)status invitationState:(long long)state invitationOptions:(long long)options completionHandler:(id /* block */)handler;
- (void)_handleResidentDeviceCapableUpdatedNotification:(id)notification;
- (void)_handleResidentEnabledForThisDeviceUpdatedNotification:(id)notification;
- (void)_handleDevicesUpdatedMessage:(id)message;
- (void)_handleAccessAllowedWhenLockedUpdatedNotification:(id)notification;
- (void)_handleResidentProvisioningStatusChanged:(id)changed;
- (void)pairingIdentityForAccessoryWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)fetchAllPairingIdentitiesForRepairFlowWithCompletionHandler:(id /* block */)handler;
- (id)allPairingIdentitiesInRankOrderWithError:(id *)error;
- (void)_addKeysToRepairListIfUnique:(id)unique includePrivateKeys:(BOOL)keys repairList:(id)list;
- (void)timerDidFire:(id)fire;
- (void)upgradeToROARWithCompletionHandler:(id /* block */)handler;
- (void)_upgradeToHH2WithCompletionHandler:(id /* block */)handler payload:(id)payload;
- (void)_testHH2MigrationWithCompletionHandler:(id /* block */)handler payload:(id)payload;
- (void)fetchDiagnosticInfoWithCompletionHandler:(id /* block */)handler;
- (void)fetchAppleMediaAccesoryDiagnosticInfo:(id)info options:(unsigned long long)options completion:(id /* block */)completion;
- (void)_saveMigrationProgressToHMCache:(BOOL)hmcache error:(id)error;
- (void)attemptHH2AutoMigrationWithCompletionHandler:(id /* block */)handler;
- (void)handleDaemonReconnectedNotification:(id)notification;
- (void)_handleSetupModeMessageResponse:(id)response error:(id)error;
- (void)setSetupMode:(unsigned long long)mode completion:(id /* block */)completion;
- (void)sendSetupModeMessage:(unsigned long long)message;
- (void)addAndSetupAccessoriesWithPayload:(id)payload completionHandler:(id /* block */)handler;
- (void)launchHomeUIServiceToResumeSetupWithUserInfo:(id)info completionHandler:(id /* block */)handler;
- (id)homesForUserActionPredictionProvider:(id)provider;
- (BOOL)deviceUnlockedSinceBootForUserActionPredictionProvider:(id)provider;
- (id)logIdentifier;
- (BOOL)needsOSUpdateToRunHH2;
- (BOOL)isHomeRemovedPermanently:(id)permanently;
- (id)shareManager:(id)manager homeWithUUID:(id)uuid;
- (BOOL)isViewServiceActive;
- (BOOL)isDaemonRunningWithROARFramework;
- (BOOL)isThisOSCapableOfRunningROAR;
@end

#endif /* HMHomeManager_h */
