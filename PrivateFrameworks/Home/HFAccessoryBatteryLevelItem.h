//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAccessoryBatteryLevelItem_h
#define HFAccessoryBatteryLevelItem_h
@import Foundation;

#include "HFItem.h"
#include "HFCharacteristicValueSource-Protocol.h"
#include "NSCopying-Protocol.h"

@class HMAccessory;

@interface HFAccessoryBatteryLevelItem : HFItem<NSCopying>

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;

/* instance methods */
- (id)initWithAccessory:(id)accessory valueSource:(id)source;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_subclass_updateWithOptions:(id)options;
@end

#endif /* HFAccessoryBatteryLevelItem_h */
