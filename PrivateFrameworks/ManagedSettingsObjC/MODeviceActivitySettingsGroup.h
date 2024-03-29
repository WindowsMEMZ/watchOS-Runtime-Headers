//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 140.0.0.0.0
//
#ifndef MODeviceActivitySettingsGroup_h
#define MODeviceActivitySettingsGroup_h
@import Foundation;

#include "MOSettingsGroup.h"

@class NSNumber, NSSet;

@interface MODeviceActivitySettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSSet *allowedClients;
@property (retain, nonatomic) NSSet *sharingAppleIDs;
@property (retain, nonatomic) NSNumber *shareAcrossDevices;

/* class methods */
+ (id)groupName;
+ (id)allowedClientsMetadata;
+ (id)sharingAppleIDsMetadata;
+ (id)shareAcrossDevicesMetadata;
@end

#endif /* MODeviceActivitySettingsGroup_h */
