//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _ActivityRemoteDataGatherer_h
#define _ActivityRemoteDataGatherer_h
@import Foundation;

#include "HKActivitySummaryDataProvider.h"
#include "HKActivitySummaryDataProviderObserver-Protocol.h"

@class NSArray, NSDateInterval, NSString;

@interface _ActivityRemoteDataGatherer : NSObject<HKActivitySummaryDataProviderObserver>

@property (retain, nonatomic) NSDateInterval *monthDateInterval;
@property (retain, nonatomic) NSDateInterval *sixMonthDateInterval;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) HKActivitySummaryDataProvider *activitySummaryProvider;
@property (retain, nonatomic) NSArray *monthActivitySummaries;
@property (retain, nonatomic) NSArray *sixMonthActivitySummaries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithActivitySummaryDataProvider:(id)provider monthDateInterval:(id)interval sixMonthDateInterval:(id)interval completion:(id /* block */)completion;
- (void)dealloc;
- (void)gatherData;
- (id)_dateRangeFromInterval:(id)interval;
- (id)_chartDataSourceQueryDataFromSummaries:(id)summaries;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)summaries;
@end

#endif /* _ActivityRemoteDataGatherer_h */
