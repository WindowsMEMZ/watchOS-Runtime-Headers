//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKInteractiveChartActivityData_h
#define HKInteractiveChartActivityData_h
@import Foundation;

#include "HKGraphSeriesChartData-Protocol.h"

@class HKActivitySummary, NSString;

@interface HKInteractiveChartActivityData : NSObject<HKGraphSeriesChartData>

@property (retain, nonatomic) HKActivitySummary *activitySummaryData;
@property (nonatomic) long long activityValue;
@property (readonly, nonatomic) BOOL hasActivityGoal;
@property (readonly, nonatomic) BOOL activityValueGoalMet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
@end

#endif /* HKInteractiveChartActivityData_h */
