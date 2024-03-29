//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccessorySettingModel_h
#define HMDAccessorySettingModel_h
@import Foundation;

#include "HMDBackingStoreModelObject.h"

@class NSData, NSNumber, NSString;

@interface HMDAccessorySettingModel : HMDBackingStoreModelObject

@property (copy, @dynamic, nonatomic) NSNumber *type;
@property (copy, @dynamic, nonatomic) NSNumber *properties;
@property (copy, @dynamic, nonatomic) NSString *name;
@property (copy, @dynamic, nonatomic) NSData *value;
@property (copy, @dynamic, nonatomic) NSNumber *configurationVersion;

/* class methods */
+ (id)schemaHashRoot;
+ (id)properties;
@end

#endif /* HMDAccessorySettingModel_h */
