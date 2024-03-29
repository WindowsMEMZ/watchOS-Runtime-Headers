//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHealthQueryChartCacheQueryRequest_h
#define HKHealthQueryChartCacheQueryRequest_h
@import Foundation;

@class NSDate, NSDateComponents;

@interface HKHealthQueryChartCacheQueryRequest : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDateComponents *statisticsInterval;
@property (readonly, nonatomic) unsigned long long audience;

/* instance methods */
- (id)initWithStartDate:(id)date endDate:(id)date statisticsInterval:(id)interval audience:(unsigned long long)audience;
- (id)initWithStartDate:(id)date endDate:(id)date statisticsInterval:(id)interval;
@end

#endif /* HKHealthQueryChartCacheQueryRequest_h */
