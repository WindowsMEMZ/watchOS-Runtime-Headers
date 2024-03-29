//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKStatisticsCollectionQuery_h
#define HKStatisticsCollectionQuery_h
@import Foundation;

#include "HKQuery.h"
#include "HKStatisticsCollection.h"
#include "HKStatisticsCollectionCacheSettings.h"
#include "HKStatisticsCollectionQueryClientInterface-Protocol.h"

@class NSDate, NSDateComponents, NSDateInterval, NSMutableArray, NSNumber, NSString;

@interface HKStatisticsCollectionQuery : HKQuery<HKStatisticsCollectionQueryClientInterface> {
  /* instance variables */
  NSMutableArray *_results;
  BOOL _hasReceivedInitialResults;
  BOOL _requireQuantityType;
}

@property (retain) NSNumber *lastAnchor;
@property (retain) HKStatisticsCollection *statisticsCollection;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) HKStatisticsCollectionCacheSettings *cacheSettings;
@property (copy, nonatomic) id /* block */ unitTest_finishedCachingStatisticsHandler;
@property (nonatomic) unsigned long long mergeStrategy;
@property (readonly) NSDate *anchorDate;
@property (readonly) unsigned long long options;
@property (readonly, copy) NSDateComponents *intervalComponents;
@property (copy, nonatomic) id /* block */ initialResultsHandler;
@property (copy, nonatomic) id /* block */ statisticsUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)interface;

/* instance methods */
- (id)initWithQuantityType:(id)type quantitySamplePredicate:(id)predicate options:(unsigned long long)options anchorDate:(id)date intervalComponents:(id)components;
- (id)initWithSampleType:(id)type samplePredicate:(id)predicate options:(unsigned long long)options anchorDate:(id)date intervalComponents:(id)components;
- (void)queue_populateConfiguration:(id)configuration;
- (void)queue_queryDidDeactivate:(id)deactivate;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)queue_deliverError:(id)error;
- (void)client_deliverStatisticsBatch:(id)batch resetStatistics:(BOOL)statistics isFinal:(BOOL)final anchor:(id)anchor query:(id)query;
- (void)client_deliverUpdatedStatistics:(id)statistics anchor:(id)anchor query:(id)query;
- (void)client_finishedCachingStatisticsWithCacheHits:(long long)hits error:(id)error;
- (void)_queue_deliverInitialStatisticsObjects:(id)objects anchor:(id)anchor queryUUID:(id)uuid;
- (void)_queue_deliverResetStatisticsObjects:(id)objects forQuery:(id)query;
- (void)_queue_deliverStatisticsObjects:(id)objects forQuery:(id)query;
- (BOOL)_predicateContainsStrictStartOrEndDateComparisonPredicate:(id)predicate;
- (BOOL)_comparisonPredicateContainsStrictStartOrEndDateComparisonPredicate:(id)predicate;
@end

#endif /* HKStatisticsCollectionQuery_h */
