//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDeviceCapabilitiesModel_h
#define HMDDeviceCapabilitiesModel_h
@import Foundation;

#include "HMDBackingStoreModelObject.h"

@class NSNumber;

@interface HMDDeviceCapabilitiesModel : HMDBackingStoreModelObject

@property (copy, @dynamic, nonatomic) NSNumber *supportsKeychainSync;
@property (copy, @dynamic, nonatomic) NSNumber *supportsDeviceSetup;
@property (copy, @dynamic, nonatomic) NSNumber *supportsKeyTransferClient;
@property (copy, @dynamic, nonatomic) NSNumber *supportsKeyTransferServer;
@property (copy, @dynamic, nonatomic) NSNumber *supportsStandaloneMode;
@property (copy, @dynamic, nonatomic) NSNumber *supportsCloudDataSync;
@property (copy, @dynamic, nonatomic) NSNumber *supportsWholeHouseAudio;
@property (copy, @dynamic, nonatomic) NSNumber *supportsAssistantAccessControl;
@property (copy, @dynamic, nonatomic) NSNumber *residentCapable;
@property (copy, @dynamic, nonatomic) NSNumber *remoteGatewayCapable;
@property (copy, @dynamic, nonatomic) NSNumber *supportsHomeInvitation;
@property (copy, @dynamic, nonatomic) NSNumber *supportsTargetControl;
@property (copy, @dynamic, nonatomic) NSNumber *supportsMultiUser;
@property (copy, @dynamic, nonatomic) NSNumber *supportsCompanionInitiatedRestart;
@property (copy, @dynamic, nonatomic) NSNumber *supportsCameraRecording;
@property (copy, @dynamic, nonatomic) NSNumber *supportsRouterManagement;
@property (copy, @dynamic, nonatomic) NSNumber *supportsShortcutActions;
@property (copy, @dynamic, nonatomic) NSNumber *supportsMediaActions;
@property (copy, @dynamic, nonatomic) NSNumber *supportsCameraActivityZones;
@property (copy, @dynamic, nonatomic) NSNumber *supportsMusicAlarm;
@property (copy, @dynamic, nonatomic) NSNumber *supportsFirmwareUpdate;
@property (copy, @dynamic, nonatomic) NSNumber *supportsResidentFirmwareUpdate;
@property (copy, @dynamic, nonatomic) NSNumber *supportsFaceClassification;
@property (copy, @dynamic, nonatomic) NSNumber *supportsNaturalLighting;
@property (copy, @dynamic, nonatomic) NSNumber *supportsIDSActivityMonitorPresence;
@property (copy, @dynamic, nonatomic) NSNumber *supportsCameraRecordingReachabilityNotifications;
@property (copy, @dynamic, nonatomic) NSNumber *supportsAnnounce;
@property (copy, @dynamic, nonatomic) NSNumber *supportsAudioAnalysis;
@property (copy, @dynamic, nonatomic) NSNumber *supportsDropIn;
@property (copy, @dynamic, nonatomic) NSNumber *supportsThirdPartyMusic;
@property (copy, @dynamic, nonatomic) NSNumber *supportsPreferredMediaUser;
@property (copy, @dynamic, nonatomic) NSNumber *supportsThreadBorderRouter;
@property (copy, @dynamic, nonatomic) NSNumber *supportsDoorbellChime;
@property (copy, @dynamic, nonatomic) NSNumber *supportsSiriEndpointSetup;
@property (copy, @dynamic, nonatomic) NSNumber *supportsHomeHub;
@property (copy, @dynamic, nonatomic) NSNumber *supportsWakeOnLAN;
@property (copy, @dynamic, nonatomic) NSNumber *supportsLockNotificationContext;
@property (copy, @dynamic, nonatomic) NSNumber *supportsCoordinationDoorbellChime;
@property (copy, @dynamic, nonatomic) NSNumber *supportsAudioReturnChannel;
@property (copy, @dynamic, nonatomic) NSNumber *supportsWalletKey;
@property (copy, @dynamic, nonatomic) NSNumber *supportsCameraPackageDetection;
@property (copy, @dynamic, nonatomic) NSNumber *supportsAccessCodes;
@property (copy, @dynamic, nonatomic) NSNumber *supportsCHIP;
@property (copy, @dynamic, nonatomic) NSNumber *supportsUnifiedMediaNotifications;
@property (copy, @dynamic, nonatomic) NSNumber *supportsManagedConfigurationProfile;
@property (copy, @dynamic, nonatomic) NSNumber *supportsModernTransport;
@property (copy, @dynamic, nonatomic) NSNumber *supportsResidentFirstAccessoryCommunication;
@property (copy, @dynamic, nonatomic) NSNumber *supportsMessagedHomePodSettings;
@property (copy, @dynamic, nonatomic) NSNumber *supportsCustomMediaApplicationDestination;
@property (copy, @dynamic, nonatomic) NSNumber *supportsThreadNetworkCredentialSharing;
@property (copy, @dynamic, nonatomic) NSNumber *supportsMatterSharedAdminPairing;
@property (copy, @dynamic, nonatomic) NSNumber *supportsRMVonAppleTV;
@property (copy, @dynamic, nonatomic) NSNumber *supportsJustSiri;

/* class methods */
+ (id)schemaHashRoot;
+ (id)properties;
@end

#endif /* HMDDeviceCapabilitiesModel_h */
