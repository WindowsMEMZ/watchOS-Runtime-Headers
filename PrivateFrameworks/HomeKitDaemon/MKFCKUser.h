//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFCKUser_h
#define MKFCKUser_h
@import Foundation;

#include "MKFCKHomeObject.h"
#include "MKFCKHome.h"
#include "MKFCKOutgoingInvitation.h"

@class CKDeviceToDeviceShareInvitationToken, CKRecordID, HAPPairingIdentity, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@interface MKFCKUser : MKFCKHomeObject

@property (copy, @dynamic, nonatomic) NSString *accountHandle;
@property (@dynamic, nonatomic) long long analysisAccessSelection;
@property (@dynamic, nonatomic) long long announceAccessLevel;
@property (@dynamic, nonatomic) long long camerasAccessLevel;
@property (copy, @dynamic, nonatomic) NSUUID *flags;
@property (copy, @dynamic, nonatomic) NSString *homeAccessCode;
@property (copy, @dynamic, nonatomic) NSUUID *homeModelID;
@property (copy, @dynamic, nonatomic) NSString *idsMergeIdentifier;
@property (@dynamic, nonatomic) long long matterCASEAuthenticatedTagID;
@property (copy, @dynamic, nonatomic) NSUUID *modelID;
@property (@dynamic, nonatomic) BOOL ownerActivityNotificationsEnabledForPersonalRequests;
@property (@dynamic, nonatomic) long long ownerAddSceneButtonPresentedCount;
@property (@dynamic, nonatomic) BOOL ownerAllowExplicitContent;
@property (@dynamic, nonatomic) BOOL ownerAllowiTunesAccount;
@property (retain, @dynamic, nonatomic) NSDictionary *ownerCharacteristicAuthorizationData;
@property (@dynamic, nonatomic) BOOL ownerCompletedSwitchingHomesOnboardingUI;
@property (@dynamic, nonatomic) BOOL ownerDismissedAccessCodeOnboarding;
@property (@dynamic, nonatomic) BOOL ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property (@dynamic, nonatomic) BOOL ownerDismissedAnnounceOnboarding;
@property (@dynamic, nonatomic) BOOL ownerDismissedCameraRecordingOnboarding;
@property (@dynamic, nonatomic) BOOL ownerDismissedCameraRecordingSetupBanner;
@property (@dynamic, nonatomic) BOOL ownerDismissedCameraUpgradeOfferBanner;
@property (@dynamic, nonatomic) BOOL ownerDismissedHomeTheaterOnboarding;
@property (@dynamic, nonatomic) BOOL ownerDismissedIdentifyVoiceOnboarding;
@property (@dynamic, nonatomic) BOOL ownerDismissedIdentifyVoiceSetupBanner;
@property (@dynamic, nonatomic) BOOL ownerDismissedNaturalLightingOnboarding;
@property (@dynamic, nonatomic) BOOL ownerDismissedTVViewingProfileOnboarding;
@property (@dynamic, nonatomic) BOOL ownerDismissedTVViewingProfileSetupBanner;
@property (@dynamic, nonatomic) BOOL ownerDismissedUserSplitMediaAccountWarning;
@property (@dynamic, nonatomic) BOOL ownerDismissedWalletKeyExpressModeOnboarding;
@property (@dynamic, nonatomic) BOOL ownerDismissedWelcomeUI;
@property (@dynamic, nonatomic) BOOL ownerDolbyAtmosEnabled;
@property (@dynamic, nonatomic) BOOL ownerHasUserSeenRMVNewLanguageNotification;
@property (@dynamic, nonatomic) BOOL ownerLosslessMusicEnabled;
@property (@dynamic, nonatomic) BOOL ownerPlaybackInfluencesEnabled;
@property (@dynamic, nonatomic) BOOL ownerSiriIdentifyVoiceEnabled;
@property (retain, @dynamic, nonatomic) HAPPairingIdentity *pairingIdentity;
@property (copy, @dynamic, nonatomic) NSUUID *photosPersonDataZoneUUID;
@property (@dynamic, nonatomic) long long privilege;
@property (@dynamic, nonatomic) BOOL remoteAccessAllowed;
@property (retain, @dynamic, nonatomic) CKRecordID *reverseShareID;
@property (retain, @dynamic, nonatomic) CKDeviceToDeviceShareInvitationToken *reverseShareToken;
@property (@dynamic, nonatomic) BOOL sharePhotosFaceClassifications;
@property (@dynamic, nonatomic) long long uniqueIDForAccessories;
@property (copy, @dynamic, nonatomic) NSDate *writerTimestamp;
@property (copy, @dynamic, nonatomic) NSString *writerVersion;
@property (retain, @dynamic, nonatomic) NSSet *automations;
@property (retain, @dynamic, nonatomic) MKFCKHome *home;
@property (retain, @dynamic, nonatomic) MKFCKOutgoingInvitation *invitation;
@property (retain, @dynamic, nonatomic) MKFCKHome *ownedHome;
@property (retain, @dynamic, nonatomic) NSSet *personsFromPhotos;

/* class methods */
+ (id)fetchRequest;

/* instance methods */
- (BOOL)exportOwnerUserSettingsFromLocalModel:(id)model context:(id)context;
- (BOOL)importOwnerUserSettingsIntoLocalModel:(id)model context:(id)context;
- (BOOL)importSharedUserSettingsIntoLocalModel:(id)model context:(id)context;
- (id)_resolveSharedUserDataRootWithContext:(id)context;
- (BOOL)isOwner;
- (BOOL)importIntoLocalModel:(id)model updatedProperties:(id)properties context:(id)context;
- (BOOL)exportFromLocalModel:(id)model updatedProperties:(id)properties context:(id)context;
@end

#endif /* MKFCKUser_h */
