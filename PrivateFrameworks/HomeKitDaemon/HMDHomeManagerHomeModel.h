//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomeManagerHomeModel_h
#define HMDHomeManagerHomeModel_h
@import Foundation;

#include "HMDBackingStoreModelObject.h"
#include "HMDBackingStoreModelObjectCDRepresentable-Protocol.h"
#include "HMDHomeManagerHomeHandle.h"

@class NSString;

@interface HMDHomeManagerHomeModel : HMDBackingStoreModelObject<HMDBackingStoreModelObjectCDRepresentable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, @dynamic, nonatomic) HMDHomeManagerHomeHandle *handle;

/* class methods */
+ (id)cd_parentReferenceName;
+ (Class)cd_entityClass;
+ (id)deriveUUIDFromHomeUUID:(id)uuid;
+ (id)properties;
+ (id)modelForHomeUUID:(id)uuid;
@end

#endif /* HMDHomeManagerHomeModel_h */
