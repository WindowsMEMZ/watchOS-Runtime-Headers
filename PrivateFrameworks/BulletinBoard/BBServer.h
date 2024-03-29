//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBServer_h
#define BBServer_h
@import Foundation;

#include "AFSiriAnnouncementRequestCapabilityObserving-Protocol.h"
#include "BBBiometricResource.h"
#include "BBDataProviderManager.h"
#include "BBDataProviderManagerDelegate-Protocol.h"
#include "BBDismissalSyncCache.h"
#include "BBEffectiveSettingsProvider-Protocol.h"
#include "BBMaskedSet.h"
#include "BBMuteExpirationManager.h"
#include "BBMuteExpirationManagerDelegate-Protocol.h"
#include "BBPersistentStoreInterface-Protocol.h"
#include "BBSectionAuthorizationManager.h"
#include "BBSectionAuthorizationManagerDelegate-Protocol.h"
#include "BBSectionInfoStoreInterface-Protocol.h"
#include "BBServerConduitServerInterface-Protocol.h"
#include "BBSettingsGatewayServerInterface-Protocol.h"
#include "BBSyncServiceDelegate-Protocol.h"
#include "BBSyncServiceInterface-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class AFSiriAnnouncementRequestCapabilityManager, NSDate, NSDateComponents, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BBServer : NSObject<BBDataProviderManagerDelegate, BBServerConduitServerInterface, BBSettingsGatewayServerInterface, NSXPCListenerDelegate, AFSiriAnnouncementRequestCapabilityObserving, BBSectionAuthorizationManagerDelegate, BBMuteExpirationManagerDelegate, BBEffectiveSettingsProvider, BBSyncServiceDelegate> {
  /* instance variables */
  NSMutableDictionary *_bulletinRequestsByID;
  NSMutableDictionary *_sectionInfoByID;
  unsigned long long _currentSystemState;
  unsigned long long _globalCounter;
  NSObject<OS_dispatch_queue> *_queue;
  BOOL _isRunning;
  BBDataProviderManager *_dataProviderManager;
  NSMutableSet *_observers;
  BBMaskedSet *_observerFeedSet;
  NSMutableArray *_observerGateways;
  NSMutableDictionary *_observerGatewaysByName;
  NSMutableDictionary *_observerGatewayEnumerators;
  NSMutableDictionary *_pendingUpdatesByBulletinID;
  NSMutableSet *_settingsGatewayConnections;
  NSMutableDictionary *_bulletinsByID;
  NSMutableDictionary *_bulletinIDsBySectionID;
  NSMutableDictionary *_noticeBulletinIDsBySectionID;
  NSMutableArray *_expiringBulletinIDs;
  NSObject<OS_dispatch_source> *_expirationTimer;
  NSMutableArray *_eventBasedExpiringBulletinIDs;
  NSDate *_nextScheduledExpirationTimerFireDate;
  NSDateComponents *_defaultExpirationComponents;
  NSDateComponents *_expirationReferenceComponents;
  int _serverIsRunningToken;
  NSObject<BBSyncServiceInterface> *_syncService;
  NSObject<BBPersistentStoreInterface> *_persistentStore;
  NSObject<BBSectionInfoStoreInterface> *_sectionInfoStore;
  NSMutableSet *_activeSectionIDs;
  NSXPCListener *_observerListener;
  NSXPCListener *_conduitListener;
  NSXPCListener *_settingsListener;
  NSMutableSet *_suspendedConnections;
  BBDismissalSyncCache *_dismissalSyncCache;
  BBSectionAuthorizationManager *_sectionAuthorizationManager;
  BBMuteExpirationManager *_muteManager;
  BBBiometricResource *_biometricResource;
  BOOL _siriAllowedWhenLocked;
  BOOL _siriEnabled;
  BOOL _announceOnHearingAidsEnabled;
  BOOL _announceOnHearingAidsSupported;
  BOOL _announceOnBuiltInSpeakerEnabled;
  AFSiriAnnouncementRequestCapabilityManager *_announcementCapabilityManagerForHeadphones;
  AFSiriAnnouncementRequestCapabilityManager *_announcementCapabilityManagerForCarPlay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long effectiveGlobalContentPreviewSetting;
@property (readonly, nonatomic) long long effectiveGlobalAnnounceSetting;
@property (readonly, nonatomic) long long effectiveGlobalScheduledDeliverySetting;
@property (readonly, nonatomic) BOOL hasPairedVehiclesForCarPlay;

/* class methods */
+ (void)initialize;
+ (id)_persistentSettingsStore;
+ (id)_dataDirectoryPath;
+ (unsigned long long)pairedDeviceCount;
+ (id)savedChronologicalSectionOrder;
+ (id)savedSectionInfo;
+ (void)removeSavedChronologicalSectionInfo:(id)info;

/* instance methods */
- (id)_bulletinRequestsForIDs:(id)ids;
- (void)_assignIDToBulletinRequest:(id)request;
- (void)_assignIDToBulletinRequest:(id)request checkAgainstBulletins:(id)bulletins;
- (void)noteFinishedWithBulletinID:(id)id;
- (void)deliverResponse:(id)response withCompletion:(id /* block */)completion;
- (void)_updateShowsMessagePreviewForBulletin:(id)bulletin;
- (void)_updateInterruptionLevelForBulletin:(id)bulletin;
- (void)publishBulletinRequest:(id)request destinations:(unsigned long long)destinations;
- (void)updateSection:(id)section inFeed:(unsigned long long)feed withBulletinRequests:(id)requests;
- (void)withdrawBulletinRequestsWithRecordID:(id)id forSectionID:(id)id;
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)id shouldSync:(BOOL)sync forSectionID:(id)id;
- (id)initWithQueue:(id)queue;
- (id)initWithQueue:(id)queue dataProviderManager:(id)manager syncService:(id)service dismissalSyncCache:(id)cache observerListener:(id)listener conduitListener:(id)listener settingsListener:(id)listener;
- (void)dealloc;
- (BOOL)isRunning;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)_addSettingsGatewayConnection:(id)connection;
- (void)_removeSettingsGatewayConnection:(id)connection;
- (id)_sectionInfoStore;
- (void)publishBulletin:(id)bulletin destinations:(unsigned long long)destinations;
- (void)withdrawBulletinID:(id)id shouldSync:(BOOL)sync;
- (id)_mapForFeed:(unsigned long long)feed;
- (void)removeBulletinID:(id)id fromSection:(id)section inFeed:(unsigned long long)feed;
- (void)removeBulletinID:(id)id fromNoticesSection:(id)section;
- (id)bulletinIDsForSectionID:(id)id inFeed:(unsigned long long)feed;
- (id)noticesBulletinIDsForSectionID:(id)id;
- (id)carBulletinIDsForSectionID:(id)id;
- (id)allBulletinIDsForSectionID:(id)id;
- (void)_addSuspendedConnection:(id)connection;
- (void)_removeSuspendedConnection:(id)connection;
- (void)_resumeAllSuspendedConnectionsWithCompletionHandler:(id /* block */)handler;
- (void)_addObserver:(id)observer;
- (void)_removeObserver:(id)observer;
- (void)_sendUpdateSectionInfo:(id)info;
- (id)_observersForNoticesFeed;
- (void)_sendRemoveSection:(id)section;
- (id)_observerGatewaysForFeeds:(unsigned long long)feeds;
- (void)_sendAddBulletin:(id)bulletin toFeeds:(unsigned long long)feeds;
- (void)_enqueueBulletinUpdate:(id)update;
- (void)_performPendingBulletinUpdatesForBulletinID:(id)id;
- (void)_sendBulletinUpdate:(id)update;
- (void)_sendModifyBulletin:(id)bulletin toFeeds:(unsigned long long)feeds;
- (void)_sendRemoveBulletins:(id)bulletins toFeeds:(unsigned long long)feeds shouldSync:(BOOL)sync;
- (void)_sendRemoveBulletin:(id)bulletin toFeeds:(unsigned long long)feeds shouldSync:(BOOL)sync;
- (void)_addBulletin:(id)bulletin;
- (void)_modifyBulletin:(id)bulletin;
- (void)_removeBulletin:(id)bulletin rescheduleTimerIfAffected:(BOOL)affected shouldSync:(BOOL)sync;
- (void)_removeBulletin:(id)bulletin shouldSync:(BOOL)sync;
- (void)_removeBulletins:(id)bulletins forSectionID:(id)id shouldSync:(BOOL)sync;
- (void)_dataProviderDidClearInfo:(id)info forSection:(id)section;
- (void)clearBulletinIDIfPossible:(id)possible rescheduleExpirationTimer:(BOOL)timer;
- (void)_clearBulletinIDs:(id)ids forSectionID:(id)id shouldSync:(BOOL)sync;
- (void)_clearBulletinsFromDate:(id)date toDate:(id)date forSection:(id)section;
- (void)_clearSection:(id)section;
- (void)_removeSection:(id)section;
- (id)_applicableSectionInfosForBulletin:(id)bulletin inSection:(id)section;
- (unsigned long long)_feedsForBulletin:(id)bulletin destinations:(unsigned long long)destinations;
- (id)_bulletinsForIDs:(id)ids;
- (id)_allBulletinsForSectionID:(id)id;
- (id)_sectionInfoForSectionID:(id)id;
- (id)_sectionInfoForSectionID:(id)id effective:(BOOL)effective;
- (id)_sectionInfoArrayForSectionIDs:(id)ids effective:(BOOL)effective;
- (id)_sectionInfoArrayForActiveSections:(BOOL)sections;
- (id)_sectionInfoArray:(BOOL)array;
- (id)_allSectionInfoIDs;
- (void)_clearBulletinIDIfPossible:(id)possible rescheduleExpirationTimer:(BOOL)timer;
- (BOOL)_didNotificationCenterSettingsChangeWithSectionInfo:(id)info replacingSectionInfo:(id)info;
- (void)_setSectionInfoNoteSettingsChanged:(id)changed forSectionID:(id)id;
- (void)_setPrimitiveSectionInfo:(id)info forSectionID:(id)id;
- (void)_setSectionInfo:(id)info forSectionID:(id)id;
- (void)_updateDataProviderForSectionInfo:(id)info sectionID:(id)id;
- (void)_addStateCaptureHandlers;
- (void)_handleSystemSleep;
- (void)_handleSystemWake;
- (void)_handleSignificantTimeChange;
- (void)_clearExpirationTimer;
- (void)_scheduleTimerForDate:(id)date;
- (id)_nextExpireBulletinsDate;
- (void)_expireBulletinsAndRescheduleTimerIfNecessary;
- (id)_bulletinIDsInSortedArray:(id)array withDateForKey:(id)key beforeCutoff:(id)cutoff;
- (unsigned long long)_indexForNewDate:(id)date inBulletinIDArray:(id)idarray sortedAscendingByDateForKey:(id)key;
- (void)_expireBulletinsDueToSystemEvent:(unsigned long long)event;
- (void)_expireBulletins;
- (id)_newValidatedDefaultExpirationComponentsFromComponents:(id)components;
- (id)_newDateCompontentsByInvertingInterestingPartsOfComponents:(id)components;
- (void)_setDefaultExpirationComponents:(id)components;
- (id)_bulletinDefaultExpirationDateFromDate:(id)date;
- (void)_validateExpirationDateForBulletinRequest:(id)request;
- (void)_scheduleExpirationForBulletin:(id)bulletin;
- (void)ping:(id /* block */)ping;
- (void)getSectionParametersForSectionID:(id)id withHandler:(id /* block */)handler;
- (void)_storeObserver:(id)observer forFeed:(unsigned long long)feed;
- (void)observer:(id)observer setObserverFeed:(unsigned long long)feed attachToLightsAndSirensGateway:(id)gateway;
- (void)observer:(id)observer setObserverFeed:(unsigned long long)feed asLightsAndSirensGateway:(id)gateway priority:(unsigned long long)priority;
- (id)_openApplicationOptionsForResponse:(id)response;
- (void)_didReceiveResponseForBulletin:(id)bulletin;
- (void)_sendBulletinsLoadedForSectionID:(id)id;
- (void)observer:(id)observer handleResponse:(id)response withCompletion:(id /* block */)completion;
- (void)observer:(id)observer finishedWithBulletinID:(id)id transactionID:(unsigned long long)id;
- (void)observer:(id)observer clearSection:(id)section;
- (void)observer:(id)observer clearBulletinsFromDate:(id)date toDate:(id)date inSections:(id)sections;
- (void)observer:(id)observer clearBulletinIDs:(id)ids inSection:(id)section;
- (void)observer:(id)observer removeBulletins:(id)bulletins inSection:(id)section fromFeeds:(unsigned long long)feeds;
- (void)observer:(id)observer getSectionInfoWithHandler:(id /* block */)handler;
- (void)observer:(id)observer getSectionInfoForActiveSectionsWithHandler:(id /* block */)handler;
- (void)observer:(id)observer getSectionInfoForSectionIDs:(id)ids withHandler:(id /* block */)handler;
- (void)observer:(id)observer requestNoticesBulletinsForSectionID:(id)id;
- (void)requestNoticesBulletinsForAllSections:(id)sections;
- (void)_sendObserver:(id)observer noticesBulletinsForSectionID:(id)id;
- (BOOL)_shouldUseUNSSettings;
- (void)getEffectiveSectionInfoWithHandler:(id /* block */)handler;
- (void)getSectionInfoWithHandler:(id /* block */)handler;
- (void)getSectionInfoForActiveSectionsWithHandler:(id /* block */)handler;
- (void)getActiveSectionIDsWithHandler:(id /* block */)handler;
- (void)getSectionInfoForSectionID:(id)id withHandler:(id /* block */)handler;
- (void)getEffectiveSectionInfoForSectionID:(id)id withHandler:(id /* block */)handler;
- (void)getSectionInfoForSectionIDs:(id)ids withHandler:(id /* block */)handler;
- (void)getEffectiveSectionInfoForSectionIDs:(id)ids withHandler:(id /* block */)handler;
- (void)getSectionIDsWithHandler:(id /* block */)handler;
- (long long)_defaultGlobalContentPreviewSetting;
- (void)_updateAllSectionInfos;
- (void)_updateGlobalSettings;
- (void)_biometricResourceStateChanged;
- (long long)_globalContentPreviewsSetting;
- (void)_setGlobalContentPreviewsSetting:(long long)setting;
- (long long)_effectiveGlobalContentPreviewsSetting;
- (void)getEffectiveGlobalContentPreviewsSettingWithHandler:(id /* block */)handler;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)setting withHandler:(id /* block */)handler;
- (void)eligibleAnnouncementRequestTypesChanged:(unsigned long long)changed onPlatform:(long long)platform;
- (void)availableAnnouncementRequestTypesChanged:(unsigned long long)changed onPlatform:(long long)platform;
- (void)_siriPreferencesDidChange:(id)change;
- (void)_updateSiriPreferences;
- (void)_updateAnnounceControlCenterModuleAvailability;
- (void)_saveGlobalAnnounceSettingEnabledEvent;
- (void)_updateAnnounceSettings;
- (long long)_globalAnnounceSetting;
- (void)_setGlobalAnnounceSetting:(long long)setting;
- (long long)_effectiveGlobalAnnounceSetting;
- (void)getEffectiveGlobalAnnounceSettingWithHandler:(id /* block */)handler;
- (void)setEffectiveGlobalAnnounceSetting:(long long)setting withHandler:(id /* block */)handler;
- (BOOL)_isAnnounceSupportedForHeadphones;
- (void)_setAnnounceSupportedForHeadphones:(BOOL)headphones;
- (long long)_globalAnnounceHeadphonesSetting;
- (void)_setGlobalAnnounceHeadphonesSetting:(long long)setting;
- (long long)_effectiveGlobalAnnounceHeadphonesSetting;
- (long long)_effectiveGlobalAnnounceHearingAidsSetting;
- (long long)_effectiveGlobalAnnounceBuiltInSpeakerSetting;
- (void)getEffectiveGlobalAnnounceHeadphonesSettingWithHandler:(id /* block */)handler;
- (void)setEffectiveGlobalAnnounceHeadphonesSetting:(long long)setting withHandler:(id /* block */)handler;
- (BOOL)_isAnnounceSupportedForCarPlay;
- (void)_setAnnounceSupportedForCarPlay:(BOOL)play;
- (BOOL)_hasPairedVehiclesForCarPlay;
- (void)_setPairedVehiclesForCarPlay:(BOOL)play;
- (long long)_globalAnnounceCarPlaySetting;
- (void)_setGlobalAnnounceCarPlaySetting:(long long)setting;
- (long long)_effectiveGlobalAnnounceCarPlaySetting;
- (void)getEffectiveGlobalAnnounceCarPlaySettingWithHandler:(id /* block */)handler;
- (void)setEffectiveGlobalAnnounceCarPlaySetting:(long long)setting withHandler:(id /* block */)handler;
- (long long)_globalScheduledDeliverySetting;
- (void)_setGlobalScheduledDeliverySetting:(long long)setting;
- (long long)_effectiveGlobalScheduledDeliverySetting;
- (void)getEffectiveGlobalScheduledDeliverySettingWithHandler:(id /* block */)handler;
- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)setting withHandler:(id /* block */)handler;
- (id)_scheduledDeliveryTimesForEncodedDeliveryTimes:(id)times;
- (id)_encodedScheduledDeliveryTimesForDeliveryTimes:(id)times;
- (id)_globalScheduledDeliveryTimes;
- (void)_setGlobalScheduledDeliveryTimes:(id)times;
- (id)_effectiveGlobalScheduledDeliveryTimes;
- (void)getEffectiveGlobalScheduledDeliveryTimesWithHandler:(id /* block */)handler;
- (void)setEffectiveGlobalScheduledDeliveryTimes:(id)times withHandler:(id /* block */)handler;
- (long long)_globalScheduledDeliveryShowNextSummarySetting;
- (void)_setGlobalScheduledDeliveryShowNextSummarySetting:(long long)setting;
- (long long)_effectiveGlobalScheduledDeliveryShowNextSummarySetting;
- (void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithHandler:(id /* block */)handler;
- (void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(long long)setting withHandler:(id /* block */)handler;
- (long long)_globalNotificationListDisplayStyleSetting;
- (void)_setGlobalNotificationListDisplayStyleSetting:(long long)setting;
- (long long)_effectiveGlobalNotificationListDisplayStyleSetting;
- (void)getEffectiveGlobalNotificationListDisplayStyleSettingWithHandler:(id /* block */)handler;
- (void)setEffectiveGlobalNotificationListDisplayStyleSetting:(long long)setting withHandler:(id /* block */)handler;
- (void)_publishBiomeSignalEventForGlobalNotificationListDisplayStyleSettingChangeToSetting:(long long)setting;
- (id)universalSectionIDForSectionID:(id)id;
- (id)sectionIDsForUniversalSectionID:(id)id;
- (void)getUniversalSectionIDForSectionID:(id)id withHandler:(id /* block */)handler;
- (id)bulletinsRequestsForBulletinIDs:(id)ids;
- (id)bulletinsForPublisherMatchIDs:(id)ids sectionID:(id)id;
- (void)getBulletinsWithHandler:(id /* block */)handler;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)date withHandler:(id /* block */)handler;
- (void)getBulletinsForPublisherMatchIDs:(id)ids sectionID:(id)id withHandler:(id /* block */)handler;
- (unsigned long long)effectivePushSettingsForSectionInfo:(id)info;
- (void)setSectionInfo:(id)info forSectionID:(id)id;
- (void)setSectionInfo:(id)info forSectionID:(id)id withHandler:(id /* block */)handler;
- (void)refreshAnnounceSettings;
- (void)refreshGlobalSettings;
- (void)refreshSectionInfo;
- (void)sendMessageToDataProviderSectionID:(id)id name:(id)name userInfo:(id)info;
- (void)weeAppWithBundleID:(id)id setHiddenFromUser:(BOOL)user;
- (void)weeAppWithBundleID:(id)id getHiddenFromUser:(id /* block */)user;
- (id)_sectionIDsToMigrate;
- (void)_migrateLoadedData;
- (void)loadDataProvidersAndSettings;
- (void)_migrateGlobalAnnounceSettingIfNeeded;
- (void)_loadSystemCapabilities;
- (void)_loadDataProvidersAndSettings;
- (void)_publishBulletinsForAllDataProviders;
- (BOOL)_verifyBulletinRequest:(id)request forDataProvider:(id)provider;
- (id)_enabledSectionIDsForDataProvider:(id)provider;
- (void)_updateBulletinsInFeed:(unsigned long long)feed ifSectionIsEnabled:(id)enabled;
- (void)_updateBulletinsInFeed:(unsigned long long)feed forDataProviderIfSectionIsEnabled:(id)enabled;
- (void)_updateAllBulletinsForDataProviderIfSectionIsEnabled:(id)enabled;
- (id)_sinceDate;
- (void)_updateBulletinsInFeed:(unsigned long long)feed forDataProvider:(id)provider enabledSectionIDs:(id)ids;
- (void)_updateAllBulletinsForDataProvider:(id)provider;
- (void)_reloadSectionParametersForSectionID:(id)id;
- (void)_updateSectionParametersForDataProvider:(id)provider;
- (void)_reloadReloadSectionInfoForSectionID:(id)id;
- (void)_publishBulletinRequest:(id)request forSectionID:(id)id forDestinations:(unsigned long long)destinations;
- (unsigned long long)_filtersForSectionID:(id)id;
- (id)_clearedInfoForSectionID:(id)id;
- (void)_setClearedInfo:(id)info forSectionID:(id)id;
- (void)_saveUpdatedClearedInfo:(id)info forSectionID:(id)id;
- (void)_updateClearedInfoForSectionID:(id)id handler:(id /* block */)handler;
- (void)_saveUpdatedSectionInfo:(id)info forSectionID:(id)id;
- (void)_updateSectionInfoForSectionID:(id)id handler:(id /* block */)handler;
- (id)dataProviderForSectionID:(id)id;
- (id)dpManager:(id)manager sectionInfoForSectionID:(id)id;
- (void)dpManager:(id)manager addDataProvider:(id)provider withSectionInfo:(id)info;
- (void)dpManager:(id)manager addParentSectionFactory:(id)factory;
- (void)dpManager:(id)manager removeDataProviderSectionID:(id)id;
- (void)_addActiveSectionID:(id)id;
- (id)_bulletinsForSectionID:(id)id inFeeds:(unsigned long long)feeds;
- (void)_ensureDataDirectoryExists;
- (id)savedClearedSections;
- (void)writeClearedSections:(id)sections;
- (void)_loadClearedSections;
- (void)_writeClearedSections;
- (id)savedOrderDictionary;
- (void)writeOrderDictionary:(id)dictionary;
- (id)savedSectionInfo;
- (void)writeSectionInfo:(id)info withVersionNumber:(unsigned long long)number;
- (void)writeSectionInfo:(id)info;
- (void)_loadSavedSectionInfo;
- (void)_writeSectionInfo;
- (BOOL)_deviceSupportsFavorites;
- (void)_observeManagedProfileChanges;
- (void)_unobserveManagedProfileChanges;
- (void)_queue_managedUserNotificationsSetttingsDidChange;
- (void)noteChangeOfState:(unsigned long long)state newValue:(BOOL)value;
- (void)noteOccurrenceOfEvent:(unsigned long long)event;
- (void)syncService:(id)service receivedDismissalDictionaries:(id)dictionaries dismissalIDs:(id)ids inSection:(id)section universalSectionID:(id)id forFeeds:(unsigned long long)feeds;
- (void)handleDismissalDictionaries:(id)dictionaries dismissalIDs:(id)ids inSection:(id)section forFeeds:(unsigned long long)feeds;
- (id)syncService:(id)service universalSectionIdentifierForSectionIdentifier:(id)identifier;
- (void)didChangeEffectiveAuthorizationStatusForSectionID:(id)id;
- (void)didChangeMuteAssertionForSectionID:(id)id;
- (unsigned long long)_pairedDeviceCount;
@end

#endif /* BBServer_h */
