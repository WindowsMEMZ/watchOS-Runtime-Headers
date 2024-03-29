//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCharacteristicTriggerBuilderInterface_h
#define HFCharacteristicTriggerBuilderInterface_h
@import Foundation;

#include "HFEventTriggerBuilderInterface.h"

@class NSSet;

@interface HFCharacteristicTriggerBuilderInterface : HFEventTriggerBuilderInterface

@property (readonly, nonatomic) NSSet *characteristics;

/* instance methods */
- (void)setCharacteristic:(id)characteristic triggerValue:(id)value;
- (void)setCharacteristic:(id)characteristic triggerValueRange:(id)range;
- (void)removeCharacteristic:(id)characteristic;
- (void)removeAllCharacteristics;
- (BOOL)wouldFireForCharacteristic:(id)characteristic value:(id)value;
- (id)thresholdValueForCharacteristic:(id)characteristic thresholdValueRange:(id)range;
- (id)triggerValueForCharacteristic:(id)characteristic;
@end

#endif /* HFCharacteristicTriggerBuilderInterface_h */
