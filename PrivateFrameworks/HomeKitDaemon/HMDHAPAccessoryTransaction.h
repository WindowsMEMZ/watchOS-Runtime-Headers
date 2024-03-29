//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHAPAccessoryTransaction_h
#define HMDHAPAccessoryTransaction_h
@import Foundation;

#include "HMDAccessoryTransaction.h"
#include "HMDBackingStoreModelObjectCDRepresentable-Protocol.h"
#include "HMFConnectivityInfo.h"

@class HAPAccessory, NSArray, NSData, NSDate, NSNumber, NSSet, NSString;

@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction<HMDBackingStoreModelObjectCDRepresentable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, @dynamic, nonatomic) NSNumber *soundAlertEnabled;
@property (copy, @dynamic, nonatomic) NSNumber *lightWhenUsingSiriEnabled;
@property (copy, @dynamic, nonatomic) NSNumber *siriEnabled;
@property (copy, @dynamic, nonatomic) NSString *siriLanguageCode;
@property (copy, @dynamic, nonatomic) NSString *siriLanguageVoiceCode;
@property (copy, @dynamic, nonatomic) NSString *siriLanguageVoiceGenderCode;
@property (copy, @dynamic, nonatomic) NSString *siriLanguageVoiceName;
@property (copy, @dynamic, nonatomic) NSNumber *hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property (copy, @dynamic, nonatomic) NSNumber *doorbellChimeEnabled;
@property (copy, @dynamic, nonatomic) NSNumber *announceEnabled;
@property (copy, @dynamic, nonatomic) NSNumber *visionDoubleTapSettingsTimeoutInterval;
@property (copy, @dynamic, nonatomic) NSNumber *visionVoiceOverEnabled;
@property (copy, @dynamic, nonatomic) NSNumber *visionVoiceOverAudioDuckingEnabled;
@property (copy, @dynamic, nonatomic) NSNumber *visionSpeakingRate;
@property (copy, @dynamic, nonatomic) NSNumber *interactionHoldDurationEnabled;
@property (copy, @dynamic, nonatomic) NSNumber *interactionHoldDurationSeconds;
@property (copy, @dynamic, nonatomic) NSNumber *interactionTouchAccommodationsEnabled;
@property (copy, @dynamic, nonatomic) NSNumber *interactionIgnoreRepeatEnabled;
@property (copy, @dynamic, nonatomic) NSNumber *interactionIgnoreRepeatSeconds;
@property (copy, @dynamic, nonatomic) NSNumber *shareSiriAnalytics;
@property (copy, @dynamic, nonatomic) NSNumber *shareSpeakerAnalytics;
@property (copy, @dynamic, nonatomic) NSNumber *airPlayEnabled;
@property (copy, @dynamic, nonatomic) NSNumber *siriEndpointEnabled;
@property (retain, @dynamic, nonatomic) NSData *chipPairingsData;
@property (retain, @dynamic, nonatomic) NSString *uniqueIdentifier;
@property (retain, @dynamic, nonatomic) NSString *bridgeUUID;
@property (retain, @dynamic, nonatomic) NSNumber *accessoryFlags;
@property (retain, @dynamic, nonatomic) NSNumber *certificationStatus;
@property (retain, @dynamic, nonatomic) NSData *broadcastKey;
@property (retain, @dynamic, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (retain, @dynamic, nonatomic) NSDate *keyUpdatedTime;
@property (retain, @dynamic, nonatomic) NSString *pairingUsername;
@property (retain, @dynamic, nonatomic) NSData *publicKey;
@property (retain, @dynamic, nonatomic) NSArray *transportInformation;
@property (retain, @dynamic, nonatomic) NSNumber *communicationProtocol;
@property (retain, @dynamic, nonatomic) NSData *accessorySetupHash;
@property (retain, @dynamic, nonatomic) NSNumber *wiFiTransportCapabilities;
@property (retain, @dynamic, nonatomic) NSArray *targetUUIDs;
@property (retain, @dynamic, nonatomic) NSNumber *hardwareSupport;
@property (retain, @dynamic, nonatomic) HMFConnectivityInfo *connectivityInfo;
@property (retain, nonatomic) HAPAccessory *hapAccessoryLocal;
@property (retain, @dynamic, nonatomic) NSNumber *sleepInterval;
@property (retain, @dynamic, nonatomic) NSNumber *hasOnboardedForNaturalLighting;
@property (copy, @dynamic, nonatomic) NSSet *initialServiceTypeUUIDs;
@property (retain, @dynamic, nonatomic) NSNumber *needsOnboarding;
@property (copy, @dynamic, nonatomic) NSNumber *supportsMatterAccessCode;
@property (copy, @dynamic, nonatomic) NSNumber *supportsMatterWalletKey;
@property (retain, @dynamic, nonatomic) NSNumber *suspendedState;
@property (copy, @dynamic, nonatomic) NSNumber *cameraAccessModeAtHome;
@property (copy, @dynamic, nonatomic) NSNumber *cameraAccessModeNotAtHome;
@property (copy, @dynamic, nonatomic) NSNumber *cameraRecordingEventTriggers;
@property (copy, @dynamic, nonatomic) NSData *cameraActivityZones;
@property (copy, @dynamic, nonatomic) NSNumber *cameraActivityZonesIncludedForSignificantEventDetection;
@property (copy, @dynamic, nonatomic) NSNumber *cameraCurrentAccessMode;
@property (copy, @dynamic, nonatomic) NSNumber *cameraCurrentAccessModeChangeReason;
@property (copy, @dynamic, nonatomic) NSDate *cameraCurrentAccessModeChangeDate;
@property (retain, @dynamic, nonatomic) NSNumber *enhancedAuthMethod;
@property (retain, @dynamic, nonatomic) NSNumber *enhancedAuthConfigNumber;
@property (copy, @dynamic, nonatomic) NSNumber *supportsNaturalLighting;
@property (retain, @dynamic, nonatomic) NSNumber *chipNodeID;
@property (retain, @dynamic, nonatomic) NSNumber *chipVendorID;
@property (retain, @dynamic, nonatomic) NSNumber *chipProductID;
@property (retain, @dynamic, nonatomic) NSData *chipAttributeDatabase;
@property (copy, nonatomic) NSSet *chipPairings;
@property (retain, @dynamic, nonatomic) NSNumber *chipWEDSupport;
@property (retain, @dynamic, nonatomic) NSString *chipExtendedMACAddress;

/* class methods */
+ (id)cd_parentReferenceName;
+ (Class)cd_entityClass;
+ (id)cd_getMKFServiceFromAccessoryUUID:(id)uuid serviceInstanceId:(id)id;
+ (id)cd_getMKFHAPAccessoryFromAccessory:(id)accessory;
+ (id)cd_getMKFHAPAccessoryFromAccessoryUUID:(id)uuid;
+ (id)properties;

/* instance methods */
- (id)cd_generateValueForModelObjectFromManagedObject:(id)object modelObjectField:(id)field modelFieldInfo:(id)info;
- (id)cd_generateValueForProperty:(id)property managedObjectField:(id)field context:(id)context;
- (id)dependentUUIDs;
@end

#endif /* HMDHAPAccessoryTransaction_h */
