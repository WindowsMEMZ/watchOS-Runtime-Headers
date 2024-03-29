//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSleepStageDurationChartPoint_h
#define HKSleepStageDurationChartPoint_h
@import Foundation;

#include "HKSleepDurationChartPoint.h"
#include "HKSleepChartPointUserInfo.h"
#include "HKSleepSleepChartPointUserInfoProvider-Protocol.h"

@class NSString;

@interface HKSleepStageDurationChartPoint : HKSleepDurationChartPoint<HKSleepSleepChartPointUserInfoProvider>

@property (nonatomic) double awakeValue;
@property (nonatomic) double asleepRemValue;
@property (nonatomic) double asleepCoreValue;
@property (nonatomic) double asleepDeepValue;
@property (nonatomic) double totalDurationValue;
@property (nonatomic) double maxDurationValue;
@property (retain, nonatomic) HKSleepChartPointUserInfo *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)chartPointsForSummaries:(id)summaries context:(id)context;

/* instance methods */
- (id)maxYValue;
- (id)allYValues;
@end

#endif /* HKSleepStageDurationChartPoint_h */
