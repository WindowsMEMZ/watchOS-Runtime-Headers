//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKActivitySummaryQuery_h
#define HKActivitySummaryQuery_h
@import Foundation;

#include "HKQuery.h"
#include "HKActivitySummaryQueryClientInterface-Protocol.h"

@class NSMutableArray, NSString;

@interface HKActivitySummaryQuery : HKQuery<HKActivitySummaryQueryClientInterface> {
  /* instance variables */
  BOOL _initialHandlerCalled;
  NSMutableArray *_pendingActivitySummaries;
}

@property (nonatomic) BOOL shouldIncludeActivitySummaryPrivateProperties;
@property (nonatomic) BOOL shouldIncludeActivitySummaryStatistics;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL orderByDateAscending;
@property (nonatomic) unsigned long long limit;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)interface;
+ (Class)configurationClass;

/* instance methods */
- (id)initWithPredicate:(id)predicate resultsHandler:(id /* block */)handler;
- (void)setShouldIncludePrivateActivitySummaryProperties:(BOOL)properties;
- (void)client_deliverActivitySummaries:(id)summaries isFinalBatch:(BOOL)batch clearPendingBatches:(BOOL)batches queryUUID:(id)uuid;
- (void)queue_populateConfiguration:(id)configuration;
- (void)queue_queryDidDeactivate:(id)deactivate;
- (void)queue_validate;
- (void)queue_deliverError:(id)error;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
@end

#endif /* HKActivitySummaryQuery_h */
