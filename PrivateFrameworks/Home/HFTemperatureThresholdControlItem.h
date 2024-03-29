//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFTemperatureThresholdControlItem_h
#define HFTemperatureThresholdControlItem_h
@import Foundation;

#include "HFRangeControlItem.h"

@interface HFTemperatureThresholdControlItem : HFRangeControlItem
/* class methods */
+ (id)readOnlyCharacteristicTypes;

/* instance methods */
- (id)initWithValueSource:(id)source displayResults:(id)results;
- (unsigned long long)rangeModeWithCharacteristicValuesKeyedByType:(id)type;
- (id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)type;
- (id)numberValueFormatter;
@end

#endif /* HFTemperatureThresholdControlItem_h */
