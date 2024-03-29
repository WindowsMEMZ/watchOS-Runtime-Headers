//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _MKFHomeNetworkRouterManagingDeviceSetting_h
#define _MKFHomeNetworkRouterManagingDeviceSetting_h
@import Foundation;

#include "_MKFHomeSetting.h"
#include "HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h"
#include "MKFDevice-Protocol.h"
#include "MKFHome-Protocol.h"
#include "MKFHomeNetworkRouterManagingDeviceSetting-Protocol.h"
#include "MKFHomeNetworkRouterManagingDeviceSettingDatabaseID.h"
#include "MKFHomeNetworkRouterManagingDeviceSettingPrivateExtensions-Protocol.h"

@class NSDate, NSString, NSUUID;

@interface _MKFHomeNetworkRouterManagingDeviceSetting : _MKFHomeSetting<HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeNetworkRouterManagingDeviceSetting, MKFHomeNetworkRouterManagingDeviceSettingPrivateExtensions>

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, @dynamic, nonatomic) _MKFDevice *device;
@property (retain, @dynamic, nonatomic) NSObject<MKFDevice> *device;
@property (readonly, copy, nonatomic) MKFHomeNetworkRouterManagingDeviceSettingDatabaseID *databaseID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)fetchRequest;
+ (Class)cd_modelClass;
+ (id)modelIDForParentRelationshipTo:(id)to;
+ (id)backingModelProtocol;

/* instance methods */
- (id)castIfHomeNetworkRouterManagingDeviceSetting;
@end

#endif /* _MKFHomeNetworkRouterManagingDeviceSetting_h */
