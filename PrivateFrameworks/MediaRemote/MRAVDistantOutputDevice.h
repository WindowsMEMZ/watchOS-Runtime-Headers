//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRAVDistantOutputDevice_h
#define MRAVDistantOutputDevice_h
@import Foundation;

#include "MRAVOutputDevice.h"
#include "MRAVOutputDeviceSourceInfo.h"
#include "NSSecureCoding-Protocol.h"
#include "_MRAVOutputDeviceDescriptorProtobuf.h"

@class NSArray, NSDictionary;

@interface MRAVDistantOutputDevice : MRAVOutputDevice<NSSecureCoding> {
  /* instance variables */
  MRAVOutputDeviceSourceInfo *_sourceInfo;
  NSDictionary *_modelSpecificInfo;
  NSArray *_clusterComposition;
  NSArray *_activatedClusterMemebers;
  NSArray *_allClusterMembers;
  NSArray *_rooms;
}

@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *protobuf;
@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *generateDescriptor;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDescriptor:(id)descriptor;
- (id)initWithSkeleton:(id)skeleton;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)descriptor;
- (id)name;
- (id)uid;
- (id)modelID;
- (id)firmwareVersion;
- (id)groupID;
- (id)logicalDeviceID;
- (id)tightSyncID;
- (id)MACAddress;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canAccessAppleMusic;
- (BOOL)canAccessiCloudMusicLibrary;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)isRemoteControllable;
- (BOOL)canRelayCommunicationChannel;
- (BOOL)supportsBufferedAirPlay;
- (BOOL)isGroupLeader;
- (BOOL)groupContainsGroupLeader;
- (BOOL)isAirPlayReceiverSessionActive;
- (id)parentGroupIdentifier;
- (BOOL)parentGroupContainsDiscoverableLeader;
- (BOOL)isGroupable;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isDeviceGroupable;
- (unsigned int)deviceType;
- (unsigned int)deviceSubtype;
- (long long)hostDeviceClass;
- (id)modelSpecificInfo;
- (float)batteryLevel;
- (BOOL)hasBatteryLevel;
- (BOOL)isLocalDevice;
- (BOOL)supportsExternalScreen;
- (BOOL)requiresAuthorization;
- (float)volume;
- (BOOL)isVolumeMuted;
- (id)sourceInfo;
- (BOOL)isAddedToHomeKit;
- (unsigned int)volumeCapabilities;
- (id)bluetoothID;
- (BOOL)supportsHAP;
- (BOOL)supportsMultiplayer;
- (BOOL)isUsingJSONProtocol;
- (id)clusterComposition;
- (unsigned int)clusterType;
- (id)primaryID;
- (unsigned long long)configuredClusterSize;
- (BOOL)supportsRapportRemoteControlTransport;
- (id)availableBluetoothListeningModes;
- (id)currentBluetoothListeningMode;
- (BOOL)supportsConversationDetection;
- (BOOL)isConversationDetectionEnabled;
- (BOOL)producesLowFidelityAudio;
- (id)airPlayGroupID;
- (BOOL)supportsSharePlayHandoff;
- (float)distance;
- (BOOL)discoveredOnSameInfra;
- (id)activatedClusterMembersOutputDevices;
- (id)allClusterMembers;
- (BOOL)isPickable;
- (long long)transportType;
- (id)clusterID;
- (BOOL)isClusterLeader;
- (BOOL)isAppleAccessory;
- (id)parentUID;
- (id)roomID;
- (id)roomName;
- (BOOL)supportsEngageOnClusterActivation;
- (id)rooms;
- (id)groupableOutputDevice;
- (id)groupSessionInfo;
- (BOOL)supportsBluetoothSharing;
- (id)deviceEnclosureColor;
- (id)playingPairedDeviceName;
- (BOOL)supportsRapport;
- (BOOL)isPickedOnPairedDevice;
- (BOOL)supportsHeadTrackedSpatialAudio;
- (BOOL)allowsHeadTrackedSpatialAudio;
- (BOOL)isHeadTrackedSpatialAudioActive;
- (id)headTrackedSpatialAudioMode;
- (id)dnsNames;
@end

#endif /* MRAVDistantOutputDevice_h */
