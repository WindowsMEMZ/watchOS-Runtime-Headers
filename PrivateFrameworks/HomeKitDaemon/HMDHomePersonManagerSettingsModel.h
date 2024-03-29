//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomePersonManagerSettingsModel_h
#define HMDHomePersonManagerSettingsModel_h
@import Foundation;

#include "HMDHomeSettingsBaseModel.h"
#include "HMDBackingStoreModelObjectCDRepresentable-Protocol.h"

@class NSString, NSUUID;

@interface HMDHomePersonManagerSettingsModel : HMDHomeSettingsBaseModel<HMDBackingStoreModelObjectCDRepresentable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, @dynamic) NSString *zoneUUIDString;
@property (retain) NSUUID *zoneUUID;

/* class methods */
+ (Class)cd_entityClass;
+ (id)properties;
+ (id)modelIDForHomeUUID:(id)uuid;
+ (id)defaultModelForHomeUUID:(id)uuid;

/* instance methods */
- (id)cd_generateValueForModelObjectFromManagedObject:(id)object modelObjectField:(id)field modelFieldInfo:(id)info;
- (id)cd_generateValueForProperty:(id)property managedObjectField:(id)field context:(id)context;
- (id)initWithHomeUUID:(id)uuid;
- (id)createSettings;
@end

#endif /* HMDHomePersonManagerSettingsModel_h */
