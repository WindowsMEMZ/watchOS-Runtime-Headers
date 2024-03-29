//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAppleMediaAccessory_h
#define HMDAppleMediaAccessory_h
@import Foundation;

#include "HMDMediaAccessory.h"
#include "HMAccessoryCapabilities-Protocol.h"
#include "HMDAccessorySettingsController.h"
#include "HMDAccessorySettingsControllerDataSource-Protocol.h"
#include "HMDAccessorySettingsControllerDelegate-Protocol.h"
#include "HMDAccessorySetupMetricDispatcher.h"
#include "HMDAccessorySymptomHandler.h"
#include "HMDAccessoryUserManagement-Protocol.h"
#include "HMDAppleMediaAccessoryDataSource-Protocol.h"
#include "HMDAppleMediaAccessoryDependencyFactory-Protocol.h"
#include "HMDAppleMediaAccessoryInfoController.h"
#include "HMDAppleMediaAccessoryInfoControllerDataSource-Protocol.h"
#include "HMDAppleMediaAccessoryInfoControllerDelegate-Protocol.h"
#include "HMDAppleMediaAccessoryInfoSubscriber.h"
#include "HMDAppleMediaAccessoryInfoSubscriberDataSource-Protocol.h"
#include "HMDAppleMediaAccessoryInfoSubscriberDelegate-Protocol.h"
#include "HMDAppleMediaAccessoryLocalMessageHandlerDataSource-Protocol.h"
#include "HMDAppleMediaAccessoryMessageRouterDataSource-Protocol.h"
#include "HMDAppleMediaAccessoryMessenger.h"
#include "HMDAppleMediaAccessoryMessengerFactory-Protocol.h"
#include "HMDAppleMediaAccessoryMetricsDispatcher.h"
#include "HMDAppleMediaAccessoryMetricsDispatcherDataSource-Protocol.h"
#include "HMDAppleMediaAccessorySensorManager.h"
#include "HMDAppleMediaAccessorySensorManagerDataSource-Protocol.h"
#include "HMDAppleMediaAccessorySleepWakeStateController.h"
#include "HMDAppleMediaAccessorySleepWakeStateControllerDataSource-Protocol.h"
#include "HMDAudioAnalysisEventSubscriber.h"
#include "HMDBackingStore.h"
#include "HMDBulletinBoardNotification.h"
#include "HMDCurrentAccessorySetupMetricDispatcher.h"
#include "HMDDevice.h"
#include "HMDDeviceAddress.h"
#include "HMDDeviceController.h"
#include "HMDDeviceControllerDelegate-Protocol.h"
#include "HMDFetchedAccessorySettingsController.h"
#include "HMDFetchedAccessorySettingsControllerDataSource-Protocol.h"
#include "HMDHome.h"
#include "HMDLanguageValueListSettingDataProvider-Protocol.h"
#include "HMDMediaDestinationController.h"
#include "HMDMediaDestinationControllerDataSource-Protocol.h"
#include "HMDMediaDestinationControllerDelegate-Protocol.h"
#include "HMDMediaDestinationControllerFactory-Protocol.h"
#include "HMDMediaDestinationManager.h"
#include "HMDMediaDestinationManagerDataSource-Protocol.h"
#include "HMDMediaDestinationManagerDelegate-Protocol.h"
#include "HMDMediaDestinationManagerFactory-Protocol.h"
#include "HMDMessageRouter-Protocol.h"
#include "HMDPreferredMediaUserEventController.h"
#include "HMDPreferredMediaUserEventControllerDataSource-Protocol.h"
#include "HMDRemoteDeviceMonitorDeviceRegistrationClient-Protocol.h"
#include "HMDRemoteLoginHandler.h"
#include "HMDSoftwareUpdateEventListener.h"
#include "HMDTargetControlManager.h"
#include "HMEEventForwarder-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMMLogEventSubmitting-Protocol.h"

@class HMAccessoryCapabilities, HMDAudioAnalysisRequestManager, HMFActivity, HMFPairingIdentity, HMFSoftwareVersion, HMFWiFiManager, HMFWiFiNetworkInfo, HMMediaDestination, HMMediaDestinationControllerData, HMSoftwareUpdateDescriptor, HMSoftwareUpdateProgress, NSArray, NSData, NSHashTable, NSString, NSUUID;
@protocol HMELastEventStoreReadHandle, HMESubscriptionProviding, OS_os_log;

@interface HMDAppleMediaAccessory : HMDMediaAccessory<HMDAppleMediaAccessoryLocalMessageHandlerDataSource, HMDLanguageValueListSettingDataProvider, HMDAppleMediaAccessoryMessengerFactory, HMDAppleMediaAccessoryMessageRouterDataSource, HMDAppleMediaAccessoryMetricsDispatcherDataSource, HMDAppleMediaAccessorySleepWakeStateControllerDataSource, HMDDeviceControllerDelegate, HMDFetchedAccessorySettingsControllerDataSource, HMDAppleMediaAccessoryInfoControllerDataSource, HMDAppleMediaAccessoryInfoControllerDelegate, HMDAppleMediaAccessoryInfoSubscriberDataSource, HMDAppleMediaAccessoryInfoSubscriberDelegate, HMDAppleMediaAccessorySensorManagerDataSource, HMDMediaDestinationControllerDataSource, HMDMediaDestinationControllerDelegate, HMDMediaDestinationControllerFactory, HMDMediaDestinationManagerDataSource, HMDMediaDestinationManagerDelegate, HMDMediaDestinationManagerFactory, HMDPreferredMediaUserEventControllerDataSource, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, HMDAccessoryUserManagement, HMFLogging> {
  /* instance variables */
  HMDDeviceController *_deviceController;
  HMMediaDestination *_committedAudioDestination;
  HMMediaDestinationControllerData *_committedAudioDestinationControllerData;
  NSObject<OS_os_log> *_logger;
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
@property (retain, nonatomic) HMDTargetControlManager *targetControlManager;
@property (retain, nonatomic) HMFPairingIdentity *lastCreatedPairingIdentity;
@property (retain) NSArray *supportedMultiUserLanguageCodes;
@property unsigned long long supportedStereoPairVersions;
@property (readonly, copy) id /* block */ deviceMediaRouteIdentifierFactory;
@property (retain) HMDMediaDestinationController *audioDestinationController;
@property (retain) HMDMediaDestinationManager *audioDestinationManager;
@property (retain) HMFWiFiNetworkInfo *lastStagedWifiNetworkInfo;
@property (retain) HMDAppleMediaAccessorySleepWakeStateController *sleepWakeStateController;
@property (retain) HMDDeviceAddress *deviceAddress;
@property (retain) NSData *deviceIRK;
@property (retain) HMDPreferredMediaUserEventController *preferredMediaUserEventController;
@property (retain, nonatomic) HMAccessoryCapabilities *capabilitiesInternal;
@property (retain) HMDSoftwareUpdateEventListener *softwareUpdateListener;
@property (retain, nonatomic) NSData *rawCapabilities;
@property (retain, nonatomic) NSObject<HMDAppleMediaAccessoryDependencyFactory> *dependencyFactory;
@property BOOL shouldApplySoftwareUpdateWhenFound;
@property (retain) NSUUID *idsIdentifier;
@property (retain) HMDAccessorySymptomHandler *symptomsHandler;
@property (retain) HMDAppleMediaAccessoryMessenger *messenger;
@property (weak) NSObject<HMDMediaDestinationControllerFactory> *mediaDestinationControllerFactory;
@property (weak) NSObject<HMDMediaDestinationManagerFactory> *mediaDestinationManagerFactory;
@property (retain) HMFWiFiManager *wifiManager;
@property (retain) HMDAccessorySettingsController *settingsController;
@property long long productColor;
@property (retain) HMDAppleMediaAccessoryMetricsDispatcher *metricsDispatcher;
@property (readonly) NSHashTable *hostedAccessories;
@property (nonatomic) BOOL fixedPairingIdentityInCloud;
@property (retain) HMFSoftwareVersion *softwareVersion;
@property (weak) NSObject<HMDAppleMediaAccessoryDataSource> *dataSource;
@property (retain) HMDAppleMediaAccessorySensorManager *sensorManager;
@property (retain) HMDFetchedAccessorySettingsController *currentAccessorySettingsController;
@property (retain) HMDAppleMediaAccessoryInfoController *currentAccessoryInfoController;
@property (retain) HMDAppleMediaAccessoryInfoSubscriber *accessoryInfoSubscriber;
@property (readonly) HMSoftwareUpdateDescriptor *lastSentSoftwareUpdateDescriptor;
@property (readonly) HMSoftwareUpdateProgress *lastSentSoftwareUpdateProgress;
@property unsigned long long variant;
@property (copy) id /* block */ settingsConnectionFactory;
@property (retain) HMDBulletinBoardNotification *audioAnalysisEventNotification;
@property (readonly) HMDDevice *device;
@property (readonly) HMDDevice *deviceForDirectMessaging;
@property (readonly) NSObject<HMDMessageRouter> *messageRouter;
@property (readonly, copy) HMFPairingIdentity *pairingIdentity;
@property (readonly) HMDRemoteLoginHandler *remoteLoginHandler;
@property (readonly, copy) NSUUID *sensorAccessoryUUID;
@property (nonatomic) BOOL deviceReachable;
@property (readonly) unsigned long long homePodVariant;
@property (readonly) HMFWiFiNetworkInfo *wifiNetworkInfo;
@property (readonly) HMMediaDestination *audioDestination;
@property (readonly) HMMediaDestinationControllerData *audioDestinationControllerData;
@property (retain) HMDAudioAnalysisRequestManager *audioAnalysisRequestManager;
@property (retain) HMDAudioAnalysisEventSubscriber *audioAnalysisEventSubscriber;
@property (readonly, nonatomic) long long fallbackMediaUserType;
@property (readonly, nonatomic) NSObject<HMAccessoryCapabilities> *capabilities;
@property (readonly) BOOL isHomePod;
@property (readonly) BOOL isAppleTV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<HMEEventForwarder> *eventForwarder;
@property (readonly) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle;
@property double setupStartTimestamp;
@property (readonly) HMFActivity *setupActivity;
@property (readonly) HMDCurrentAccessorySetupMetricDispatcher *currentAccessorySetupMetricDispatcher;
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) NSObject<HMESubscriptionProviding> *subscriptionProvider;
@property (readonly) HMDBackingStore *backingStore;
@property (weak) HMDHome *home;
@property (readonly) HMDAccessorySetupMetricDispatcher *accessorySetupMetricDispatcher;
@property (readonly) BOOL supportsUserManagement;

/* class methods */
+ (BOOL)shouldAcceptMessage:(id)message home:(id)home privilege:(unsigned long long)privilege;
+ (BOOL)hasMessageReceiverChildren;
+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

/* instance methods */
- (id)deviceForAppleMediaAccessoryMessageRouter:(id)router message:(id)message;
- (BOOL)isCurrentDevicePrimaryResident;
- (void)configureAppleMediaAccessoryMessengerWithFactory:(id)factory;
- (id)createAppleMediaAccessoryMessengerWithIdentifier:(id)identifier messageDispatcher:(id)dispatcher router:(id)router localHandler:(id)handler;
- (id)languageValueList;
- (id)assistantObject;
- (id)accessoryWithUUID:(id)uuid forAppleMediaAccessoryLocalMessageHandler:(id)handler;
- (BOOL)supportsHomeHub;
- (void)deleteSiriHistoryForAccessoryWithUUID:(id)uuid completionHandler:(id /* block */)handler;
- (id)initWithTransaction:(id)transaction home:(id)home;
- (id)initWithTransaction:(id)transaction home:(id)home dependencyFactory:(id)factory;
- (id)init;
- (id)initWithDeviceController:(id)controller deviceIdentifierFactory:(id /* block */)factory;
- (void)dealloc;
- (void)_registerForMessages;
- (BOOL)_shouldFilterAccessoryProfile:(id)profile;
- (void)_configureGroupParticipantLocalDataStorageWithHome:(id)home;
- (void)configureWithHome:(id)home msgDispatcher:(id)dispatcher configurationTracker:(id)tracker initialConfiguration:(BOOL)configuration;
- (void)configurePairingIdentity;
- (void)createNewPairingIdentity;
- (void)updateProductInformation;
- (void)createAccessoryInfoSubscriberIfNecessary;
- (void)configureSensors;
- (id)legacyAudioDestinationControllerData;
- (id)committedAudioDestinationControllerData;
- (id)legacyCommittedAudioDestinationControllerData;
- (void)unsetAudioDestinationControllerData;
- (void)mergeAudioDestinationControllerData:(id)data;
- (void)configureAudioDestinationController;
- (void)createAudioDestinationController;
- (void)legacyCreateAudioDestinationControllerWithControllerIdentifier:(id)identifier;
- (id)committedAudioDestination;
- (id)legacyCommittedAudioDestination;
- (id)legacyAudioDestination;
- (void)unsetAudioDestination;
- (void)mergeAudioDestination:(id)destination;
- (void)configureAudioDestinationManager;
- (void)migrateLocalParticipantData;
- (unsigned long long)expectedDestinationSupportOptions;
- (void)createAudioDestination;
- (id)defaultAudioGroupIdentifier;
- (void)legacyCreateAudioDestinationWithIdentifier:(id)identifier supportedOptions:(unsigned long long)options;
- (id)mediaGroupParticipantDataLocalStorage;
- (void)removeAudioDestination;
- (id)_createMediaProfile;
- (void)_fetchMultiUserLanguages;
- (void)_fixCloudKeyIfNeeded;
- (void)autoConfigureTargetControllers;
- (void)configureTargetController:(id)controller;
- (id)idsIdentifierInternal;
- (BOOL)isCurrentAccessory;
- (BOOL)supportsTargetControl;
- (BOOL)supportsMultiUser;
- (BOOL)supportsAudioReturnChannel;
- (BOOL)supportsCompanionInitiatedRestart;
- (BOOL)supportsMusicAlarm;
- (BOOL)supportsThirdPartyMusic;
- (BOOL)supportsPreferredMediaUser;
- (BOOL)supportsAudioAnalysis;
- (BOOL)supportsDropIn;
- (BOOL)supportsDoorbellChime;
- (BOOL)supportsCoordinationDoorbellChime;
- (BOOL)supportsAnnounce;
- (BOOL)supportsMediaActions;
- (BOOL)supportsManagedConfigurationProfile;
- (BOOL)requiresHomeAppForManagement;
- (BOOL)supportsMediaContentProfile;
- (BOOL)supportsPersonalRequests;
- (BOOL)supportsMessagedHomePodSettings;
- (BOOL)supportsRMVonAppleTV;
- (BOOL)supportsJustSiri;
- (BOOL)supportsSoftwareUpdateV2;
- (BOOL)isHomePodMini;
- (BOOL)isHomePod2ndGen;
- (void)setDeviceController:(id)controller;
- (void)updateWithDevice:(id)device;
- (BOOL)shouldUpdateWithDevice:(id)device initialConfiguration:(BOOL)configuration;
- (void)handleCurrentDeviceUpdated:(id)updated;
- (void)handleFetchManagedConfigurationProfiles:(id)profiles;
- (void)handleRemoveManagedConfigurationProfile:(id)profile;
- (void)handleInstallManagedConfigurationProfile:(id)profile;
- (void)_removeManagedConfigurationProfileWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)_installManagedConfigurationProfileWithData:(id)data completion:(id /* block */)completion;
- (void)updateReachabilityOfCurrentDevice;
- (BOOL)isDeviceReachable;
- (void)notifyClientsOfUpdatedAccessoryControllableValue:(BOOL)value;
- (id)deviceMonitor;
- (void)startMonitoringReachability;
- (void)handleDeviceIsReachable:(id)reachable;
- (void)handleDeviceIsNotReachable:(id)reachable;
- (void)addAdvertisement:(id)advertisement;
- (void)removeAdvertisement:(id)advertisement;
- (BOOL)isRemotelyReachable;
- (void)setRemotelyReachable:(BOOL)reachable;
- (long long)reachableTransports;
- (id)runtimeState;
- (void)_handleUpdatedName:(id)name;
- (void)notifyFrameworkOfUpdatedPairingIdentity;
- (void)_handleTriggerPairingIdentityUpdateNotification:(id)notification;
- (void)addUser:(id)user completionHandler:(id /* block */)handler;
- (void)removeUser:(id)user completionHandler:(id /* block */)handler;
- (void)pairingsWithCompletionHandler:(id /* block */)handler;
- (BOOL)supportsSettings;
- (void)handleHomeUserRemovedNotification:(id)notification;
- (void)handleRoomNameChanged:(id)changed;
- (void)handleRoomChanged:(id)changed;
- (void)handleCurrentDeviceIRKUpdated:(id)irkupdated;
- (void)postDeviceIRKIfDifferent:(id)different;
- (void)_updateSoftwareVersion:(id)version;
- (BOOL)supportsSoftwareUpdate;
- (void)_applySoftwareUpdateModel:(id)model completion:(id /* block */)completion;
- (BOOL)_allowSoftwareUpdateChangeFromSource:(unsigned long long)source;
- (void)_startUpdate:(id)update;
- (void)handleDeleteSiriHistoryRequest:(id)request;
- (void)handleUpdatePreferredMediaUser:(id)user;
- (void)updatePreferredMediaUserWithUUID:(id)uuid selectionType:(unsigned long long)type completion:(id /* block */)completion;
- (void)updatePreferredMediaUser:(id)user selectionType:(unsigned long long)type;
- (void)runTransactionWithPreferredMediaUserUUID:(id)uuid selectionType:(unsigned long long)type completion:(id /* block */)completion;
- (void)createSoftwareUpdateEventProviderIfNecessary;
- (void)createSoftwareUpdateEventListenerIfNecessary;
- (void)handleSoftwareUpdateV2ScanRepeatedlyAndApplyMessage:(id)message;
- (void)_scanForSoftwareUpdateRepeatedlyAndInstallUpdate:(BOOL)update;
- (void)handleSoftwareUpdateDidBecomeAvailableWithDescriptor:(id)descriptor;
- (void)_applySoftwareUpdateWithDescriptor:(id)descriptor;
- (id)_softwareUpdateV2FromDescriptor:(id)descriptor;
- (id)_scanForSoftwareUpdateWithRetries;
- (id)_scanForSoftwareUpdate;
- (void)handleSoftwareUpdateV2Scan:(id)scan;
- (void)updateWiFiNetworkInfo;
- (void)handleCurrentNetworkChangedNotification:(id)notification;
- (void)_relayRequestMessage:(id)message responseHandler:(id /* block */)handler;
- (id)remoteMessageDestination;
- (void)migrateWithCloudZone:(id)zone migrationQueue:(id)queue completion:(id /* block */)completion;
- (void)migrateAudioDestinationControllerWithCloudZone:(id)zone migrationQueue:(id)queue completion:(id /* block */)completion;
- (void)migrateAudioDestinationWithCloudZone:(id)zone migrationQueue:(id)queue completion:(id /* block */)completion;
- (id)messageSendPolicy;
- (id)transactionWithObjectChangeType:(unsigned long long)type;
- (id)modelObjectWithChangeType:(unsigned long long)type;
- (void)populateModelObject:(id)object version:(long long)version;
- (id)backingStoreObjects:(long long)objects;
- (id)backingStoreObjectForMediaDestination;
- (id)backingStoreObjectForMediaDestinationControllerData;
- (void)transactionObjectUpdated:(id)updated newValues:(id)values message:(id)message;
- (void)handleTransactionUpdatedPublicPairingIdentity:(id)identity result:(id)result;
- (void)handleUpdatedMediaDestinationControllerModel:(id)model message:(id)message;
- (void)handleUpdatedMediaDestinationModel:(id)model message:(id)message;
- (void)transactionObjectRemoved:(id)removed message:(id)message;
- (void)handleRemovedMediaDestinationModel:(id)model message:(id)message;
- (void)handleRemovedMediaDestinationControllerModel:(id)model message:(id)message;
- (void)deviceController:(id)controller didUpdateDevice:(id)device;
- (id)messageReceiverChildren;
- (id)availableDestinationIdentifiersForMediaDestinationController:(id)controller;
- (id)mediaDestinationController:(id)controller destinationManagerWithIdentifier:(id)identifier;
- (id)mediaDestinationController:(id)controller destinationWithParentIdentifier:(id)identifier;
- (id)targetAccessoryForMediaDestinationController:(id)controller;
- (id)mediaDestinationController:(id)controller rootDestinationWithDecendantIdentifier:(id)identifier;
- (id)mediaGroupLocalDataStorageForMediaDestinationController:(id)controller;
- (id)currentUserForMediaDestinationControllerMetricsEventDispatcher:(id)dispatcher;
- (BOOL)isTriggeredOnControllerDeviceForMediaDestinationControllerMetricsEventDispatcher:(id)dispatcher;
- (long long)mediaDestinationControllerMetricsEventDispatcher:(id)dispatcher destinationTypeForDestinationWithIdentifier:(id)identifier;
- (id)currentDestinationTypeForMediaDestinationControllerMetricsEventDispatcher:(id)dispatcher;
- (void)mediaDestinationControllerDidUpdateStagedValues:(id)values;
- (id)mediaDestinationControllerWithData:(id)data backingStore:(id)store messageDispatcher:(id)dispatcher notificationCenter:(id)center logEventSubmitter:(id)submitter dailyScheduler:(id)scheduler targetDevice:(BOOL)device dataSource:(id)source delegate:(id)delegate;
- (id)targetAccessoryForMediaDestinationManager:(id)manager;
- (id)mediaDestinationManager:(id)manager destinationControllerWithIdentifier:(id)identifier;
- (id)rootDestinationManagerForMediaDestinationManager:(id)manager;
- (id)mediaGroupParticipantLocalDataStorageForMediaDestinationManager:(id)manager;
- (id)mediaDestinationManagerWithDestination:(id)destination messageDispatcher:(id)dispatcher notificationCenter:(id)center backingStore:(id)store targetDevice:(BOOL)device dataSource:(id)source delegate:(id)delegate;
- (void)mediaDestinationManagerDidUpdateStagedValues:(id)values;
- (id)modelsToMakeSettingsForController:(id)controller parentUUID:(id)uuid;
- (id)modelsToMigrateSettingsForController:(id)controller;
- (void)removeManagedConfigurationProfileWithProfileData:(id)data completion:(id /* block */)completion;
- (void)accessorySettingsController:(id)controller saveWithReason:(id)reason model:(id)model;
- (void)accessorySettingsController:(id)controller saveWithReason:(id)reason;
- (BOOL)isMultiUserEnabledForAccessorySettingsController:(id)controller;
- (id)supportedMultiUserLanguageCodesForAccessorySettingsController:(id)controller;
- (id)remoteMessageDestinationForAccessorySettingsController:(id)controller target:(id)target;
- (id)assistantAccessControlModelWithRemovedAccessoriesForAccessorySettingsController:(id)controller;
- (void)languagesChangedForAccessorySettingsController:(id)controller;
- (id)homeUUID;
- (id)accessoryUUID;
- (id)controller:(id)controller topicForKeyPath:(id)path;
- (id)eventSourceIdentifierNameForFetchedSettingsController:(id)controller;
- (id)accessoryInfoControllerTopicForWifiInfo;
- (id)eventSourceIdentifierNameForAccessoryInfoController:(id)controller;
- (id)accessoryInfoControllerSoftwareVersionTopicForController:(id)controller;
- (id)currentAccessorySoftwareVersion;
- (void)accessoryInfoController:(id)controller didUpdateWifiInfo:(id)info;
- (id)initWithCoder:(id)coder;
- (void)_encodeMediaDestinationAndControllerDataWithCoder:(id)coder;
- (void)_legacyEncodeMediaDestinationAndControllerDataWithCoder:(id)coder;
- (void)addHostedAccessory:(id)accessory;
- (void)removeHostedAccessory:(id)accessory;
- (void)encodeWithCoder:(id)coder;
- (void)encodeServicesFromHostedAccessories:(id)accessories coder:(id)coder;
- (void)encodeFlagsFromHostedAccessories:(id)accessories coder:(id)coder;
- (id)dumpState;
- (id)dumpSimpleState;
- (id)dumpStateLocalSettings;
- (id)_dumpStateCachedSettingsForHome:(id)home accessory:(id)accessory eventStoreReadHandle:(id)handle;
- (id)logIdentifier;
- (void)_handleAudioAnalysisBulletinBoardCommit:(id)commit;
- (id)currentRoomForAppleMediaAccessoryMetricsDispatcher:(id)dispatcher;
- (long long)numberOfCurrentAccessoryPairedSensorsForAppleMediaAccessoryMetricsDispatcher:(id)dispatcher;
- (long long)numberOfTriggersWithCurrentAccessoryPairedSensorsForAppleMediaAccessoryMetricsDispatcher:(id)dispatcher;
- (long long)numberOfActionSetsWithCurrentAccessoryMediaActionForAppleMediaAccessoryMetricsDispatcher:(id)dispatcher;
- (id)workQueueForAppleMediaAccessoryMetricsDispatcher:(id)dispatcher;
- (void)currentAccessorySensorStatusFlagsForAppleMediaAccessoryMetricsDispatcher:(id)dispatcher completion:(id /* block */)completion;
- (id)deviceForAppleMediaAccessorySleepWakeStateController:(id)controller;
- (id)currentDeviceProductInfoForAppleMediaAccessorySleepWakeStateController:(id)controller;
- (id)appleMediaProfileForAccessoryUUID:(id)uuid;
- (void)forwardAccessoryPublicPairingIdentity:(id)identity;
- (id)pairingIdentityTopic;
- (id)cachedEventPairingIdentity;
- (BOOL)isMatchingCachedEventPublicPairingIdentity:(id)identity;
- (void)infoSubscriber:(id)subscriber didReceiveWiFiInfoUpdate:(id)update;
- (id)accessoryBrowserForAppleMediaAccessorySensorManager:(id)manager;
- (id)addAccessoryNotificationObjectForAppleMediaAccessorySensorManager:(id)manager;
- (id)accessoryWithUUID:(id)uuid forAppleMediaAccessorySensorManager:(id)manager;
- (id)homeUUIDForAppleMediaAccessorySensorManager:(id)manager;
- (BOOL)isResidentConfirmedForAppleMediaAccessorySensorManager:(id)manager;
- (id)notificationCenterForAppleMediaAccessorySensorManager:(id)manager;
- (id)messageDispatcherForAppleMediaAccessorySensorManager:(id)manager;
- (void)performLocalAddAccessoryWithDescription:(id)description progressHandlerDelegate:(id)delegate completion:(id /* block */)completion;
- (void)renameService:(id)service name:(id)name;
- (id)residentNotificationObjectForAppleMediaAccessorySensorManager:(id)manager;
- (id)accessoriesWithHostUUID:(id)uuid forAppleMediaAccessorySensorManager:(id)manager;
- (id)hostUUIDForAppleMediaAccessorySensorManager:(id)manager;
- (BOOL)isReadyForSensorPairing:(id)pairing;
- (id)logSubmitterForAppleMediaAccessorySensorManager:(id)manager;
- (id)residentSyncClientDidSyncFutureForAppleMediaAccessorySensorManager:(id)manager;
- (id)firstCloudKitImportFutureForAppleMediaAccessorySensorManager:(id)manager;
- (id)keychainStoreForAppleMediaAccessorySensorManager:(id)manager;
- (void)performAfterDelay:(double)delay block:(id /* block */)block queue:(id)queue;
@end

#endif /* HMDAppleMediaAccessory_h */
