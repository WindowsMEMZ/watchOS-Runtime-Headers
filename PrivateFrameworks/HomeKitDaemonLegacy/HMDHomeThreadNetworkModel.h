//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomeThreadNetworkModel_h
#define HMDHomeThreadNetworkModel_h
@import Foundation;

#include "HMDBackingStoreModelObject.h"

@class NSString;

@interface HMDHomeThreadNetworkModel : HMDBackingStoreModelObject

@property (copy, @dynamic, nonatomic) NSString *threadNetworkID;

/* class methods */
+ (id)modelIDForHome:(id)home;
+ (id)modelIDForHomeUUID:(id)uuid;
+ (id)defaultModelForHome:(id)home;
+ (id)defaultModelForHomeUUID:(id)uuid;
+ (id)properties;
@end

#endif /* HMDHomeThreadNetworkModel_h */
