//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKInteractiveChartBaselineRelativeStatFormatter_h
#define HKInteractiveChartBaselineRelativeStatFormatter_h
@import Foundation;

#include "HKInteractiveChartGenericStatFormatter.h"

@interface HKInteractiveChartBaselineRelativeStatFormatter : HKInteractiveChartGenericStatFormatter
/* instance methods */
- (id)formattedSelectedRangeLabelDataWithChartData:(id)data context:(long long)context;
- (id)_establishingBaselineSelectedRangeData;
- (id)_unavailableSelectedRangeData;
- (id)valueStringFromNumber:(id)number;
- (id)unitStringFromUnit:(id)unit number:(id)number;
@end

#endif /* HKInteractiveChartBaselineRelativeStatFormatter_h */
