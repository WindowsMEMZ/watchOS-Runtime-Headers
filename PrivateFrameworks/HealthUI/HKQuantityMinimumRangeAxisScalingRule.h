//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKQuantityMinimumRangeAxisScalingRule_h
#define HKQuantityMinimumRangeAxisScalingRule_h
@import Foundation;

#include "HKAbstractMinimumRangeScalingRule.h"
#include "HKInteractiveChartQuantityDefaultAxisBoundsProvider-Protocol.h"
#include "HKValueRange.h"

@class HKQuantity, HKUnit, NSDictionary;

@interface HKQuantityMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule<HKInteractiveChartQuantityDefaultAxisBoundsProvider> {
  /* instance variables */
  HKQuantity *_defaultYAxisRangeQuantity;
  HKQuantity *_minimumQuantity;
  HKQuantity *_maximumQuantity;
  HKQuantity *_anchorQuantity;
  NSDictionary *_axisRangeQuantityOverrides;
}

@property (retain, nonatomic) HKValueRange *noDataAxisBounds;
@property (retain, nonatomic) HKUnit *unit;

/* class methods */
+ (id)ruleWithDefaultYAxisRange:(id)range axisRangeOverrides:(id)overrides;
+ (id)ruleWithDefaultYAxisRange:(id)range minimumValue:(id)value maximumValue:(id)value axisRangeOverrides:(id)overrides;
+ (id)ruleWithDefaultYAxisRange:(id)range minimumValue:(id)value maximumValue:(id)value axisRangeOverrides:(id)overrides noDataAxisBounds:(id)bounds;
+ (id)ruleWithDefaultYAxisRange:(id)range anchorValue:(id)value;

/* instance methods */
- (BOOL)isCompatibleWithQuantityType:(id)type;
- (void)_convertQuantities;
- (id)noDataStartingRange;
- (id)description;
@end

#endif /* HKQuantityMinimumRangeAxisScalingRule_h */
