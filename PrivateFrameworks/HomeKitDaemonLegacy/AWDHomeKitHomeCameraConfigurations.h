//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef AWDHomeKitHomeCameraConfigurations_h
#define AWDHomeKitHomeCameraConfigurations_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface AWDHomeKitHomeCameraConfigurations : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 enabledResidentsDeviceCapabilities; unsigned int x :1 isFaceClassificationEnabled; unsigned int x :1 isOwner; } _has;
}

@property (retain, nonatomic) NSMutableArray *homeKitCameraUserSettings;
@property (retain, nonatomic) NSMutableArray *homeKitCameraSettings;
@property (nonatomic) BOOL hasEnabledResidentsDeviceCapabilities;
@property (nonatomic) unsigned int enabledResidentsDeviceCapabilities;
@property (nonatomic) BOOL hasIsFaceClassificationEnabled;
@property (nonatomic) BOOL isFaceClassificationEnabled;
@property (nonatomic) BOOL hasIsOwner;
@property (nonatomic) BOOL isOwner;

/* class methods */
+ (Class)homeKitCameraUserSettingsType;
+ (Class)homeKitCameraSettingsType;

/* instance methods */
- (void)clearHomeKitCameraUserSettings;
- (void)addHomeKitCameraUserSettings:(id)settings;
- (unsigned long long)homeKitCameraUserSettingsCount;
- (id)homeKitCameraUserSettingsAtIndex:(unsigned long long)index;
- (void)clearHomeKitCameraSettings;
- (void)addHomeKitCameraSettings:(id)settings;
- (unsigned long long)homeKitCameraSettingsCount;
- (id)homeKitCameraSettingsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* AWDHomeKitHomeCameraConfigurations_h */
