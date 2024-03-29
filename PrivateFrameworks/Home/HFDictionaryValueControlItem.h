//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFDictionaryValueControlItem_h
#define HFDictionaryValueControlItem_h
@import Foundation;

#include "HFControlItem.h"

@class NSString;

@interface HFDictionaryValueControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSString *characteristicType;

/* class methods */
+ (Class)valueClass;
+ (id)defaultMainTextColorForCharacteristicType:(id)type;

/* instance methods */
- (id)initWithValueSource:(id)source characteristicOptions:(id)options displayResults:(id)results;
- (id)initWithValueSource:(id)source characteristicType:(id)type displayResults:(id)results;
- (BOOL)canCopyWithCharacteristicOptions:(id)options;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyWithCharacteristicOptions:(id)options valueSource:(id)source;
- (id)valueForCharacteristicValues:(id)values;
- (id)characteristicValuesForValue:(id)value;
- (id)resultsForBatchReadResponse:(id)response;
- (void)getStatus:(out id *)status mainTextColor:(out id *)color supplementaryDescription:(out id *)description withBatchReadResponse:(id)response;
@end

#endif /* HFDictionaryValueControlItem_h */
