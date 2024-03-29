//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 406.1.12.0.0
//
#ifndef HUHearingAidSettings_h
#define HUHearingAidSettings_h
@import Foundation;

#include "HCSettings.h"
#include "ACMonitoredAccountStoreDelegateProtocol-Protocol.h"

@class ACMonitoredAccountStore, NSArray, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HUHearingAidSettings : HCSettings<ACMonitoredAccountStoreDelegateProtocol> {
  /* instance variables */
  ACMonitoredAccountStore *_accountStore;
  int _contentProtectionNotifyToken;
  BOOL _finishediCloudSetup;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *icloudInitializationQueue;
@property (retain, nonatomic) NSDictionary *pairedHearingAids;
@property (readonly, nonatomic) NSArray *peripheralUUIDs;
@property (nonatomic) BOOL clearPartialPairing;
@property (retain, nonatomic) NSDictionary *knownPeripheralUUIDs;
@property (nonatomic) BOOL independentHearingAidSettings;
@property (nonatomic) BOOL allowHearingAidControlOnLockScreen;
@property (nonatomic) BOOL shouldStreamToLeftAid;
@property (nonatomic) BOOL shouldStreamToRightAid;
@property (nonatomic) long long callAudioRoute;
@property (nonatomic) long long mediaAudioRoute;
@property (nonatomic) BOOL multideviceSettingsEnabled;
@property (nonatomic) BOOL multideviceAudioEnabled;
@property (nonatomic) BOOL shouldStreamSystemSounds;
@property (nonatomic) long long complicationPreferredDisplayMode;
@property (nonatomic) unsigned long long usedHearingFeatures;
@property (nonatomic) BOOL exportsLiveListenToFile;
@property (nonatomic) BOOL liveHeadphoneLevelEnabled;
@property (nonatomic) BOOL anyGizmoLiveHeadphoneLevelEnabled;
@property (nonatomic) BOOL gizmoLiveHeadphoneLevelEnabled;
@property (nonatomic) BOOL gizmoLiveHeadphoneLevelNPEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_initializeICloudSetup;
- (void)accountWasAdded:(id)added;
- (void)accountWasModified:(id)modified;
- (void)accountWasRemoved:(id)removed;
- (void)accountCredentialChanged:(id)changed;
- (void)pairedWatchDidChange:(id)change;
- (void)dealloc;
- (BOOL)isPairedWithFakeHearingAids;
- (BOOL)isiCloudPaired;
- (unsigned long long)hearingAidsLEAVersionFromiCloud;
- (BOOL)isPairedWithRealHearingAids;
- (id)convertPersistentRepresentation:(id)representation fromVersion:(float)version toVersion:(float)version;
- (BOOL)shouldUseiCloud;
- (void)icloudHearingSettingsDidChange:(id)change;
- (void)iCloudAccountDidChange:(id)change;
- (void)setLocalHearingAidsFromiCloud:(id)cloud;
- (BOOL)shouldPushLocalAidsToiCloud;
- (void)pushLocalHearingAidsToiCloud;
- (id)preferenceDomainForPreferenceKey:(id)key;
- (BOOL)shouldStoreLocally;
- (id)keysToSync;
- (void)logMessage:(id)message;
- (id)preferenceKeyForSelector:(SEL)selector;
- (void)updateStreamingPreference;
- (id)deviceIDForPairingInformation:(id)information;
- (void)_accessibilitySettingsChangedOnCompanion;
- (void)addDeviceIDToCloudDenylist:(id)denylist;
- (void)removeDeviceIDFromCloudDenylist:(id)denylist;
- (BOOL)isDeviceIDOnCloudDenylist:(id)denylist;
@end

#endif /* HUHearingAidSettings_h */
