//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHeartbeatSeriesBuilder_h
#define HKHeartbeatSeriesBuilder_h
@import Foundation;

#include "HKSeriesBuilder.h"

@class NSDate, NSMutableData, NSMutableDictionary;

@interface HKHeartbeatSeriesBuilder : HKSeriesBuilder {
  /* instance variables */
  NSDate *_startDate;
  NSMutableDictionary *_mutableMetadata;
  NSMutableData *_mutableHeartbeats;
  unsigned long long _count;
  double _lastHeartbeatTimeInterval;
}

/* class methods */
+ (unsigned long long)maximumCount;

/* instance methods */
- (id)initWithHealthStore:(id)store device:(id)device startDate:(id)date;
- (void)addHeartbeatWithTimeIntervalSinceSeriesStartDate:(double)date precededByGap:(BOOL)gap completion:(id /* block */)completion;
- (void)addMetadata:(id)metadata completion:(id /* block */)completion;
- (void)finishSeriesWithCompletion:(id /* block */)completion;
- (void)_resourceQueue_addHeartbeatWithTimeIntervalSinceSeriesStartDate:(double)date precededByGap:(BOOL)gap completion:(id /* block */)completion;
- (void)_resourceQueue_addMetadata:(id)metadata completion:(id /* block */)completion;
- (void)_resourceQueue_finishSeriesWithCompletion:(id /* block */)completion;
- (void)discard;
@end

#endif /* HKHeartbeatSeriesBuilder_h */
