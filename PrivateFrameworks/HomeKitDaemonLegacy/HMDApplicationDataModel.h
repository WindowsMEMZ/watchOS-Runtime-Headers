//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDApplicationDataModel_h
#define HMDApplicationDataModel_h
@import Foundation;

#include "HMDBackingStoreModelObject.h"

@class NSDictionary;

@interface HMDApplicationDataModel : HMDBackingStoreModelObject

@property (retain, @dynamic, nonatomic) NSDictionary *appDataDictionary;

/* class methods */
+ (id)schemaHashRoot;
+ (id)properties;
@end

#endif /* HMDApplicationDataModel_h */
