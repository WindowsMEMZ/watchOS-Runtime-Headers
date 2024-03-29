//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSHSleepMetricsEngine_h
#define HKSHSleepMetricsEngine_h
@import Foundation;

@class HKHealthStore;

@interface HKSHSleepMetricsEngine : NSObject {
  /* instance variables */
  HKHealthStore *_healthStore;
}

/* class methods */
+ (id)sleepMetricsForDaySummaries:(id)summaries;
+ (id)sleepMetricsForDaySummaries:(id)summaries inMorningIndexRange:(struct { long long x0; long long x1; })range;
+ (double)_timeIntervalForDate:(id)date sinceDate:(id)date calendar:(id)calendar;
+ (id)_dateComponentsForInterval:(double)interval sinceDate:(id)date calendar:(id)calendar;
+ (id)_firstInBedSegment:(id)segment;
+ (id)_lastInBedSegment:(id)segment;
+ (id)_firstAsleepSegment:(id)segment;
+ (id)_lastAsleepSegment:(id)segment;
+ (id)_firstSegmentMatchingSleepValues:(id)values inPeriods:(id)periods;
+ (id)_lastSegmentMatchingSleepValues:(id)values inPeriods:(id)periods;
+ (id)_computeStandardDeviationFor:(id)for;

/* instance methods */
- (id)initWithHealthStore:(id)store;
- (void)fetchSleepMetricsForMorningIndexRange:(struct { long long x0; long long x1; })range completion:(id /* block */)completion;
@end

#endif /* HKSHSleepMetricsEngine_h */
