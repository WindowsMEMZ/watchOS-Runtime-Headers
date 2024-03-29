//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomeNetworkRouterManagingDeviceSettingsModel_h
#define HMDHomeNetworkRouterManagingDeviceSettingsModel_h
@import Foundation;

#include "HMDHomeSettingsBaseModel.h"

@class NSString;

@interface HMDHomeNetworkRouterManagingDeviceSettingsModel : HMDHomeSettingsBaseModel

@property (copy, @dynamic, nonatomic) NSString *primaryNetworkRouterManagingDeviceUUID;

/* class methods */
+ (id)modelNamespace;
+ (id)modelIDForHomeUUID:(id)uuid;
+ (id)defaultModelForHomeUUID:(id)uuid;
+ (id)properties;

/* instance methods */
- (id)dependentUUIDs;
@end

#endif /* HMDHomeNetworkRouterManagingDeviceSettingsModel_h */
