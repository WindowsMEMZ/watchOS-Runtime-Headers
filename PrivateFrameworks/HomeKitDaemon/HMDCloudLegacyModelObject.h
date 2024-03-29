//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCloudLegacyModelObject_h
#define HMDCloudLegacyModelObject_h
@import Foundation;

#include "HMDBackingStoreModelObject.h"

@class NSData, NSNumber;

@interface HMDCloudLegacyModelObject : HMDBackingStoreModelObject

@property (retain, @dynamic, nonatomic) NSNumber *legacyRecordType;
@property (retain, @dynamic, nonatomic) NSData *data1;
@property (retain, @dynamic, nonatomic) NSData *data2;

/* class methods */
+ (id)properties;
@end

#endif /* HMDCloudLegacyModelObject_h */
