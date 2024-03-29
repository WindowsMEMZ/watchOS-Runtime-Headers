//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDContextQueries_h
#define _CDContextQueries_h
@import Foundation;

@interface _CDContextQueries : NSObject
/* class methods */
+ (id)keyPathForDoNotDisturbStatusDataDictionary;
+ (id)doNotDisturbUpdateReason;
+ (id)doNotDisturbState;
+ (id)doNotDisturbStateMetadataArray;
+ (id)modeIdentifier;
+ (id)activeDateInterval;
+ (id)keyPathForSleepStateDictionary;
+ (id)sleepScheduleState;
+ (id)sleepModeOn;
+ (id)sleepModeState;
+ (id)sleepScheduleModelDateModified;
+ (id)sleepEvent;
+ (id)keyPathForMostRecentSafariSpotlightDonation;
+ (id)mostRecentSafariSearchableItem;
+ (id)safariURLInMostRecentSearchableItem;
+ (id)keyPathForSiriServiceDataDictionary;
+ (id)domainKey;
+ (id)commandKey;
+ (id)keyPathForCurrentAlarms;
+ (id)keyPathForNextAlarm;
+ (id)keyPathForCurrentTimers;
+ (id)timerIDKey;
+ (id)alarmIDKey;
+ (id)expectedFireDateKey;
+ (id)isSleepAlarm;
+ (id)transition;
+ (id)stateKey;
+ (id)modifiedDateKey;
+ (id)keyPathForMDCSProxies;
+ (id)keyPathForMDCSProxyTokenWithUserID:(id)id;
+ (id)keyPathForMDCSProxySourceDeviceUUIDWithUserID:(id)id;
+ (id)keyPathForMDCSUserIDWithProxySourceDeviceUUID:(id)uuid;
+ (id)keyPathForMDCSDevicesWithProxySourceDeviceUUID:(id)uuid;
+ (id)keyPathForMDCSDeviceIDsWithProxySourceDeviceUUID:(id)uuid;
+ (id)predicateForMDCSDevicesWithDeviceTypes:(unsigned long long)types;
+ (BOOL)isMDCSKeyPath:(id)path;
+ (id)keyPathForNFCTagIdentifiers;
+ (id)keyPathForUserActivityDataDictionary;
+ (id)userActivityUUID;
+ (id)eligibility;
+ (id)title;
+ (id)userActivityType;
+ (id)itemIdentifier;
+ (id)userActivityRequiredString;
+ (id)keyPathForBluetoothDataDictionary;
+ (id)bluetoothConnectionStatusKey;
+ (id)bluetoothNameKey;
+ (id)bluetoothAddressKey;
+ (id)bluetoothDeviceTypeKey;
+ (id)bluetoothIsAppleAudioDeviceKey;
+ (id)bluetoothIsUserWearingKey;
+ (id)bluetoothProductIDKey;
+ (id)predicateForBluetoothConnectionStatus:(BOOL)status;
+ (id)predicateForBluetoothConnectedAndUserIsWearing:(BOOL)wearing;
+ (id)keyPathForSunriseSunsetDataDictionary;
+ (id)sunriseSunsetAvailabilityStatusKey;
+ (id)currentSunriseKey;
+ (id)currentSunsetKey;
+ (id)nextSunriseKey;
+ (id)nextSunsetKey;
+ (id)previousSunriseKey;
+ (id)previousSunsetKey;
+ (id)isDaylightKey;
+ (id)keyPathForHomeKitAppViewDataDictionary;
+ (id)viewHomeUUID;
+ (id)viewUUID;
+ (id)viewName;
+ (id)viewInformation;
+ (id)keyPathForWorkoutDataDictionary;
+ (id)isFirstPartyWorkout;
+ (id)bundleId;
+ (id)workoutActivityType;
+ (id)sessionIdentifier;
+ (id)sessionState;
+ (id)keyPathForServicesAppearingForeground;
+ (id)keyPathForDefaultPairedServicesAppearingForeground;
+ (id)keyPathForAudioOutputDataDictionary;
+ (id)audioOutputStatusKey;
+ (id)audioPortTypeKey;
+ (id)audioPortNameKey;
+ (id)audioIdentifierKey;
+ (id)audioRouteChangeReasonKey;
+ (id)predicateForAudioOutputStatus:(BOOL)status;
+ (id)keyPathForNowPlayingDataDictionary;
+ (id)nowPlayingStatusKey;
+ (id)nowPlayingBundleIdKey;
+ (id)nowPlayingTrackKey;
+ (id)nowPlayingOutputDeviceIDsKey;
+ (id)nowPlayingMediaTypeKey;
+ (id)nowPlayingiTunesStoreIdentifierKey;
+ (id)nowPlayingiTunesSubscriptionIdentifierKey;
+ (id)nowPlayingCreationDateKey;
+ (id)keyPathForActiveCall;
+ (id)calleeContactIDKey;
+ (id)calleeHandleKey;
+ (id)calleeContactIDsKey;
+ (id)calleeHandlesKey;
+ (id)bundleIDKey;
+ (id)groupIDKey;
+ (id)groupNameKey;
+ (id)keyPathForPredictedLocationOfInterestTransitions;
+ (id)locationOfInterestUUIDKey;
+ (id)locationOfInterestTypeKey;
+ (id)transitionWithinTimeIntervalKey;
+ (id)keyPathForAppDataDictionary;
+ (id)appBundleIdKey;
+ (id)appLaunchReasonKey;
+ (id)keyPathForAppClipLaunch;
+ (id)timeSinceDownloadKey;
+ (id)URLHashKey;
+ (id)clipBundleIDKey;
+ (id)webAppBundleIDKey;
+ (id)fullURLKey;
+ (id)referrerURLKey;
+ (id)keyPathForHomeKitAccessoryDataDictionary;
+ (id)accessoryHomeUUID;
+ (id)accessoryUUID;
+ (id)accessoryName;
+ (id)serviceName;
+ (id)serviceType;
+ (id)characteristicType;
+ (id)accessoryClientName;
+ (id)serviceUUID;
+ (id)accessoryState;
+ (id)keyPathForCircularLocationRegions;
+ (id)predicateForCircularLocationRegion:(id)region;
+ (id)predicateForCircularLocationRegion:(id)region state:(long long)state;
+ (id)regionIdentifierKey;
+ (id)regionStateKey;
+ (id)changeDateKey;
+ (id)keyPathForIntentsDataDictionary;
+ (id)intentTypeKey;
+ (id)intentDirectionKey;
+ (id)intentSourceBundleIDKey;
+ (id)intentSourceItemIDKey;
+ (id)intentClassKey;
+ (id)intentVerbKey;
+ (id)intentDonatedBySiriKey;
+ (id)intentHandlingStatusKey;
+ (id)intentDKObjUUIDKey;
+ (id)keyPathForBatteryStateDataDictionary;
+ (id)batteryPercentageKey;
+ (id)batteryVoltageKey;
+ (id)batteryTemperatureKey;
+ (id)batteryExternalConnectedKey;
+ (id)batteryExternalConnectedChangeDateKey;
+ (id)batteryRawExternalConnectedKey;
+ (id)batteryRawExternalConnectedChangeDateKey;
+ (id)batteryAdapterTypeKey;
+ (id)batteryAdapterIsWirelessKey;
+ (id)batteryFullyChargedKey;
+ (id)batteryIsChargingKey;
+ (id)keyPathForAppMediaUsageDataDictionaries;
+ (id)appMediaUsageBundleID;
+ (id)appMediaUsageStartDate;
+ (id)appMediaUsageURL;
+ (id)appMediaUsageMediaURL;
+ (id)appMediaSafariProfileID;
+ (id)keyPathForAppWebUsageDataDictionaries;
+ (id)appWebUsageBundleID;
+ (id)appWebUsageStartDate;
+ (id)appWebUsageType;
+ (id)appWebUsageWepageURL;
+ (id)appWebUsageWebDomain;
+ (id)appWebUsageSafariProfileID;
+ (id)keyPathForAppUsageDataDictionaries;
+ (id)keyPathForAppRunningDataDictionaries;
+ (id)appUsageBundleID;
+ (id)appUsageStartDate;
+ (id)appUsageType;
+ (id)isUsageTrusted;
+ (id)appUsageSafariProfileID;
+ (id)keyPathForLocationCoordinates;
+ (id)latitudeKey;
+ (id)longitudeKey;
+ (id)altitudeKey;
+ (id)timestampKey;
+ (id)keyPathForRecentEmails;
+ (id)keyPathForRecentMessages;
+ (id)senderKey;
+ (id)recipientsKey;
+ (id)subjectKey;
+ (id)hasAttachmentsKey;
+ (id)identifierKey;
+ (id)accountIdentifierKey;
+ (id)incomingKey;
+ (id)senderHandlesKey;
+ (id)senderContactIDKey;
+ (id)recipientContactIDsKey;
+ (id)contentKey;
+ (id)conversationIdentifierKey;
+ (id)keyPathForHomeKitSceneDataDictionary;
+ (id)sceneHomeUUID;
+ (id)actionSetUUID;
+ (id)actionSetName;
+ (id)actionSetType;
+ (id)sceneClientName;
+ (id)sceneName;
+ (id)keyPathForInUseStatus;
+ (id)keyPathForLastUseDate;
+ (id)predicateForInUseStatus:(BOOL)status;
+ (id)keyPathForForegroundApp;
+ (id)keyPathForCallInProgressStatus;
+ (id)keyPathForBacklightOnStatus;
+ (id)keyPathForDisplayOnBeforeFirstUnlockOfTheDayStatus;
+ (id)keyPathForDeviceAssertionsHeldStatus;
+ (id)keyPathForNextUserVisibleWakeDate;
+ (id)keyPathForFirstWakeupStatus;
+ (id)keyPathForDeviceLockStatus;
+ (id)keyPathForKeybagLockStatus;
+ (id)keyPathForMediaPlayingStatus;
+ (id)keyPathForNavigationStatus;
+ (id)keyPathForCarConnectedStatus;
+ (id)keyPathForSiriActiveStatus;
+ (id)keyPathForDeviceName;
+ (id)keyPathForDeviceID;
+ (id)keyPathForLowPowerModeStatus;
+ (id)keyPathForDoNotDisturbStatus;
+ (id)predicateForDoNotDisturbStatus:(BOOL)status;
+ (id)keyPathForAirplaneModeStatus;
+ (id)keyPathForWiFiConnectionSSID;
+ (id)keyPathForWiredConnectionQuality;
+ (id)predicateForWiredConnectionAvailability:(BOOL)availability;
+ (id)keyPathForWiFiConnectionQuality;
+ (id)predicateForWiFiConnectionAvailability:(BOOL)availability;
+ (id)keyPathForCellConnectionQuality;
+ (id)predicateForCellConnectionAvailability:(BOOL)availability;
+ (id)keyPathForCarplayConnectedStatus;
+ (id)keyPathForWorkoutStatus;
+ (id)keyPathForMotionState;
+ (id)keyPathForSystemTime;
+ (id)predicateForSystemTimeInInterval:(id)interval;
+ (id)predicateForSystemTime:(id)time;
+ (id)predicateForSystemTime:(id)time gracePeriod:(double)period;
+ (id)keyPathForLowBattery;
+ (id)keyPathForBatteryLevel;
+ (id)predicateForBatteryLevel:(id)level;
+ (id)keyPathForPluginStatus;
+ (id)predicateForPluginStatus:(BOOL)status;
+ (id)keyPathForThermalPressureLevel;
+ (id)keyPathForCPUUsageLevel;
+ (id)keyPathForNearbyLOIIdentifiers;
+ (id)keyPathForEnergyBudgetRemainingStatus;
+ (id)keyPathForNetworkingBudgetRemainingStatus;
+ (id)keyPathForWatchNearbyStatus;
+ (id)keyPathForDefaultPairedDeviceNearbyStatus;
+ (id)keyPathForWatchActiveStatus;
+ (id)keyPathForWatchBatteryLevel;
+ (id)keyPathForDefaultPairedDeviceBatteryLevel;
+ (id)keyPathForWatchPluginStatus;
+ (id)keyPathForDefaultPairedDevicePluginStatus;
+ (id)keyPathForWatchThermalPressureLevel;
+ (id)keyPathForDefaultPairedDeviceThermalPressureLevel;
+ (id)keyPathForWatchForegroundApp;
+ (id)keyPathForDefaultPairedDeviceForegroundApp;
+ (id)keyPathForActiveComplications;
+ (id)keyPathForDefaultPairedDeviceWiFiWiredQuality;
+ (id)keyPathForDefaultPairedDeviceCellQuality;
+ (id)source;
@end

#endif /* _CDContextQueries_h */
