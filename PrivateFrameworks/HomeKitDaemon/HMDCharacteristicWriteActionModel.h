//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCharacteristicWriteActionModel_h
#define HMDCharacteristicWriteActionModel_h
@import Foundation;

#include "HMDActionModel.h"
#include "HMDBackingStoreModelObjectCDRepresentable-Protocol.h"

@class NSNumber, NSString;

@interface HMDCharacteristicWriteActionModel : HMDActionModel<HMDBackingStoreModelObjectCDRepresentable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, @dynamic, nonatomic) NSString *accessory;
@property (retain, @dynamic, nonatomic) NSNumber *serviceID;
@property (retain, @dynamic, nonatomic) NSNumber *characteristicID;
@property (retain, @dynamic, nonatomic) id targetValue;

/* class methods */
+ (Class)cd_entityClass;
+ (id)properties;

/* instance methods */
- (BOOL)cd_updateManagedObjectInContext:(id)context error:(id *)error;
- (id)cd_generateValueForModelObjectFromManagedObject:(id)object modelObjectField:(id)field modelFieldInfo:(id)info;
- (id)cd_generateValueForProperty:(id)property managedObjectField:(id)field context:(id)context;
- (void)loadModelWithActionInformation:(id)information;
- (id)dependentUUIDs;
@end

#endif /* HMDCharacteristicWriteActionModel_h */
