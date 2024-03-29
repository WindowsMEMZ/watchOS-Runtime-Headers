//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFRangeControlItem_h
#define HFRangeControlItem_h
@import Foundation;

#include "HFControlItem.h"
#include "HFNumberValueConstraints.h"

@class NSNumber, NSSet, NSString;

@interface HFRangeControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSSet *targetCharacteristicTypes;
@property (readonly, copy, nonatomic) NSString *minimumCharacteristicType;
@property (readonly, copy, nonatomic) NSString *maximumCharacteristicType;
@property (readonly, nonatomic) HFNumberValueConstraints *minimumValueConstraints;
@property (readonly, nonatomic) HFNumberValueConstraints *maximumValueConstraints;
@property (readonly, nonatomic) HFNumberValueConstraints *targetValueConstraints;
@property (readonly, copy, nonatomic) NSNumber *maximumValue;
@property (readonly, copy, nonatomic) NSNumber *minimumValue;
@property (readonly, copy, nonatomic) NSNumber *stepValue;

/* class methods */
+ (Class)valueClass;
+ (id)readOnlyCharacteristicTypes;
+ (BOOL)_hasWritableCharacteristicsOfType:(id)type valueSource:(id)source;

/* instance methods */
- (id)initWithValueSource:(id)source targetCharacteristicTypes:(id)types minimumCharacteristicType:(id)type maximumCharacteristicType:(id)type displayResults:(id)results;
- (id)initWithValueSource:(id)source characteristicOptions:(id)options displayResults:(id)results;
- (id)copyWithCharacteristicOptions:(id)options valueSource:(id)source;
- (id)valueForCharacteristicValues:(id)values;
- (id)characteristicValuesForValue:(id)value;
- (id)resultsForBatchReadResponse:(id)response;
- (id)maximumCharacteristicTypeStepValue;
- (id)minimumCharacteristicTypeStepValue;
- (id)numberValueFormatter;
- (unsigned long long)rangeModeWithCharacteristicValuesKeyedByType:(id)type;
- (id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)type;
- (id)_minimumCharacteristicTypeMetadata;
- (id)_maximumCharacteristicTypeMetadata;
- (id)_targetCharacteristicTypeMetadataWithCharacteristicValuesKeyedByType:(id)type;
@end

#endif /* HFRangeControlItem_h */
