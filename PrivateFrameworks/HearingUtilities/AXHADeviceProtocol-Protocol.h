//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 406.1.12.0.0
//
#ifndef AXHADeviceProtocol_Protocol_h
#define AXHADeviceProtocol_Protocol_h
@import Foundation;

@protocol AXHADeviceProtocol <NSObject>

@property (readonly, nonatomic) BOOL isPaired;
@property (readonly, nonatomic) BOOL isConnecting;
@property (nonatomic) BOOL keepInSync;
@property (readonly, retain) NSString *name;
@property (readonly, retain) NSMutableArray *manufacturer;
@property (readonly, retain) NSMutableArray *model;
@property (readonly, retain) NSString *leftFirmwareVersion;
@property (readonly, retain) NSString *rightFirmwareVersion;
@property (readonly, retain) NSString *leftHardwareVersion;
@property (readonly, retain) NSString *rightHardwareVersion;
@property (nonatomic) int availableEars;
@property (readonly, retain) NSString *rightUUID;
@property (readonly, retain) NSString *leftUUID;
@property (readonly, retain) NSString *leftPeripheralUUID;
@property (readonly, retain) NSString *rightPeripheralUUID;
@property (readonly, nonatomic) unsigned long long leftLeaVersion;
@property (readonly, nonatomic) unsigned long long rightLeaVersion;
@property (nonatomic) double rightMicrophoneVolume;
@property (nonatomic) double leftMicrophoneVolume;
@property (nonatomic) double rightStreamVolume;
@property (nonatomic) double leftStreamVolume;
@property (nonatomic) double rightSensitivity;
@property (nonatomic) double leftSensitivity;
@property (nonatomic) double rightMixedVolume;
@property (nonatomic) double leftMixedVolume;
@property (nonatomic) char rightTreble;
@property (nonatomic) char leftTreble;
@property (nonatomic) char rightBass;
@property (nonatomic) char leftBass;
@property (readonly, nonatomic) double rightBatteryLevel;
@property (readonly, nonatomic) double leftBatteryLevel;
@property (readonly, retain) NSDate *leftBatteryLowDate;
@property (readonly, retain) NSDate *rightBatteryLowDate;
@property (readonly, nonatomic) short leftMicrophoneVolumeSteps;
@property (readonly, nonatomic) short rightMicrophoneVolumeSteps;
@property (readonly, nonatomic) short leftStreamVolumeSteps;
@property (readonly, nonatomic) short rightStreamVolumeSteps;
@property (readonly, nonatomic) short leftSensitivitySteps;
@property (readonly, nonatomic) short rightSensitivitySteps;
@property (readonly, nonatomic) short leftMixedVolumeSteps;
@property (readonly, nonatomic) short rightMixedVolumeSteps;
@property (readonly, nonatomic) BOOL supportsBinauralStreaming;
@property (readonly, nonatomic) BOOL supportsCombinedPresets;
@property (readonly, nonatomic) BOOL supportsCombinedVolumes;
@property (readonly, nonatomic) BOOL requiresBinauralStreaming;
@property (readonly, nonatomic) BOOL requiresCombinedPresets;
@property (readonly, nonatomic) BOOL requiresCombinedVolumes;
@property (readonly, copy) NSArray *rightPrograms;
@property (readonly, copy) NSArray *leftPrograms;
@property (readonly, retain, nonatomic) AXHearingAidMode *leftSelectedProgram;
@property (readonly, retain, nonatomic) AXHearingAidMode *rightSelectedProgram;
@property (readonly, retain, nonatomic) AXHearingAidMode *leftSelectedStreamingProgram;
@property (readonly, retain, nonatomic) AXHearingAidMode *rightSelectedStreamingProgram;
@property (readonly, retain, nonatomic) NSString *deviceUUID;

/* instance methods */
- (id)initWithPersistentRepresentation:(id)representation;
- (void)connect;
- (void)disconnectAndUnpair:(BOOL)unpair;
- (BOOL)leftAvailable;
- (BOOL)rightAvailable;
- (BOOL)isLeftConnected;
- (BOOL)isRightConnected;
- (BOOL)isConnected;
- (BOOL)hasConnection;
- (BOOL)containsPeripheralWithUUID:(id)uuid;
- (BOOL)didLoadBasicProperties;
- (BOOL)didLoadRequiredProperties;
- (void)loadRequiredProperties;
- (id)programs;
- (void)selectProgram:(id)program forEar:(int)ear;
- (id)selectedPrograms;
- (id)selectedProgramIndexes;
- (void)setValue:(id)value forProperty:(unsigned long long)property;
- (id)valueForProperty:(unsigned long long)property;
- (unsigned long long)deviceType;
@end

#endif /* AXHADeviceProtocol_Protocol_h */
