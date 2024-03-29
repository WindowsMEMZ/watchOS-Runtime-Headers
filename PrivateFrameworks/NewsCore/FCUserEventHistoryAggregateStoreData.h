//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCUserEventHistoryAggregateStoreData_h
#define FCUserEventHistoryAggregateStoreData_h
@import Foundation;

#include "FCUserEventHistoryAggregateCounts.h"

@interface FCUserEventHistoryAggregateStoreData : NSObject

@property (nonatomic) long long baselineTimestamp;
@property (nonatomic) long long baselineStatelessEventCount;
@property (nonatomic) long long baselineTotalEventCount;
@property (retain, nonatomic) FCUserEventHistoryAggregateCounts *aggregateCounts;

/* class methods */
+ (id)empty;

/* instance methods */
- (id)init;
@end

#endif /* FCUserEventHistoryAggregateStoreData_h */
