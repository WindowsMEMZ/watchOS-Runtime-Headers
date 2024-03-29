//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIModel_h
#define FIUIModel_h
@import Foundation;

#include "FIUIWeeklyGoalModel.h"

@class HKActivityCache, HKActivitySummary, HKCurrentActivityCacheQuery, HKHealthStore, NSDictionary, NSHashTable, NSMutableDictionary, _HKCurrentActivitySummaryQuery;
@protocol OS_dispatch_queue;

@interface FIUIModel : NSObject {
  /* instance variables */
  NSHashTable *_observers;
  NSMutableDictionary *_currentActivitySummaryQueryClients;
  NSMutableDictionary *_currentActivityCacheQueryClients;
  _HKCurrentActivitySummaryQuery *_queue_currentActivitySummaryQuery;
  HKCurrentActivityCacheQuery *_queue_currentActivityCacheQuery;
  long long _queue_activitySummaryQueryRetries;
  long long _queue_activityCacheQueryRetries;
  HKActivitySummary *_queue_currentActivitySummaryForClients;
  HKActivityCache *_queue_currentActivityCacheForClients;
  NSObject<OS_dispatch_queue> *_activityQueryClientQueue;
}

@property (readonly, nonatomic) FIUIWeeklyGoalModel *weeklyGoalModel;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSDictionary *currentActivitySummaryQueryCollectionIntervalOverrides;

/* class methods */
+ (id)dailyTotalQueryForDate:(id)date dataType:(id)type predicate:(id)predicate sendUpdates:(BOOL)updates handler:(id /* block */)handler;
+ (id)_dailyTotalsQueryFromDate:(id)date toDate:(id)date dataType:(id)type predicate:(id)predicate sendUpdates:(BOOL)updates handler:(id /* block */)handler;
+ (BOOL)isWheelchairUser;

/* instance methods */
- (id)init;
- (id)initWithHealthStore:(id)store;
- (void)_printStatisticsCollection:(id)collection;
- (void)_printUpdatedStatistics:(id)statistics;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)executeQuery:(id)query;
- (void)stopQuery:(id)query;
- (id)startCurrentActivitySummaryQueryWithHandler:(id /* block */)handler;
- (void)stopCurrentActivitySummaryQueryForClientToken:(id)token;
- (void)_queue_restartCurrentActivitySummaryQueryAfterError;
- (id)_createCurrentActivitySummaryQuery;
@end

#endif /* FIUIModel_h */
