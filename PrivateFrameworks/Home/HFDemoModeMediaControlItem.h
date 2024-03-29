//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFDemoModeMediaControlItem_h
#define HFDemoModeMediaControlItem_h
@import Foundation;

#include "HFControlItem.h"
#include "HFNullValueSource.h"
#include "HFToggleableControlItem-Protocol.h"

@class HMAccessory, NSString;

@interface HFDemoModeMediaControlItem : HFControlItem<HFToggleableControlItem>

@property (readonly, nonatomic) HFNullValueSource *mediaValueSource;
@property (weak, nonatomic) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)valueClass;

/* instance methods */
- (id)initWithDisplayResults:(id)results;
- (id)initWithValueSource:(id)source characteristicOptions:(id)options displayResults:(id)results;
- (id)copyWithCharacteristicOptions:(id)options valueSource:(id)source;
- (id)readValueAndPopulateStandardResults;
- (id)characteristicValuesForValue:(id)value;
- (id)valueForCharacteristicValues:(id)values;
- (id)normalizedValueForValue:(id)value;
- (id)toggleValue;
@end

#endif /* HFDemoModeMediaControlItem_h */
