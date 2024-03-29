//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKQuantityDistributionChartPointData_h
#define HKQuantityDistributionChartPointData_h
@import Foundation;

#include "HKGraphSeriesChartData-Protocol.h"

@class HKUnit, NSArray, NSDate, NSString;

@interface HKQuantityDistributionChartPointData : NSObject<HKGraphSeriesChartData>

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double minimumValue;
@property (readonly, nonatomic) double maximumValue;
@property (readonly, nonatomic) double averageValue;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double minimumBucketValue;
@property (readonly, nonatomic) double bucketIncrement;
@property (readonly, nonatomic) NSArray *bucketCounts;
@property (readonly, nonatomic) NSArray *contextIdentifiers;
@property (readonly, nonatomic) HKUnit *unit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDistributionData:(id)data unit:(id)unit displayType:(id)type;
- (id)initWithDistributionData:(id)data bucketIncrement:(double)increment unit:(id)unit displayType:(id)type;
@end

#endif /* HKQuantityDistributionChartPointData_h */
