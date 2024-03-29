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

@class NSNumber, NSString;

@interface HMDCharacteristicWriteActionModel : HMDActionModel

@property (retain, @dynamic, nonatomic) NSString *accessory;
@property (retain, @dynamic, nonatomic) NSNumber *serviceID;
@property (retain, @dynamic, nonatomic) NSNumber *characteristicID;
@property (retain, @dynamic, nonatomic) id targetValue;

/* class methods */
+ (id)properties;

/* instance methods */
- (void)loadModelWithActionInformation:(id)information;
- (id)dependentUUIDs;
@end

#endif /* HMDCharacteristicWriteActionModel_h */
