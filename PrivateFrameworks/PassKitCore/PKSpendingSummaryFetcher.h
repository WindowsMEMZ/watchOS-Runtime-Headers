//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSpendingSummaryFetcher_h
#define PKSpendingSummaryFetcher_h
@import Foundation;

#include "PKAccount.h"
#include "PKAccountServiceObserver-Protocol.h"
#include "PKPaymentDataProviderDelegate-Protocol.h"
#include "PKPaymentDefaultDataProvider.h"
#include "PKTransactionSourceCollection.h"

@class NSArray, NSCache, NSCalendar, NSDate, NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface PKSpendingSummaryFetcher : NSObject<PKPaymentDataProviderDelegate, PKAccountServiceObserver> {
  /* instance variables */
  PKTransactionSourceCollection *_transactionSourceCollection;
  PKAccount *_account;
  NSCache *_weeklySummaryItemsPerStartDate;
  NSCache *_monthlySummaryItemsPerStartDate;
  NSCache *_yearlySummaryItemsPerStartDate;
  NSDate *_oldestTransactionDate;
  NSDate *_newestTransactionDate;
  NSObject<OS_dispatch_queue> *_workQueue;
  NSObject<OS_dispatch_queue> *_replyQueue;
  PKPaymentDefaultDataProvider *_paymentDataProvider;
  NSCalendar *_currentCalendar;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
  NSHashTable *_observers;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestsLock;
  NSMutableOrderedSet *_pendingRequests;
  NSMutableDictionary *_blockPendingRequests;
  BOOL _processingRequest;
  NSArray *_statements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)summaryWithTransactions:(id)transactions transactionSourceCollection:(id)collection currency:(id)currency type:(unsigned long long)type startDate:(id)date endDate:(id)date lastSummary:(id)summary;
+ (id)_summaryWithTransactions:(id)transactions currency:(id)currency type:(unsigned long long)type startDate:(id)date endDate:(id)date lastSummary:(id)summary;
+ (id)_spendingMerchantsFromTransaction:(id)transaction currencyCode:(id)code;
+ (id)_spendingCategoriesFromTransactions:(id)transactions currencyCode:(id)code;
+ (id)_sortedTransactions:(id)transactions ascending:(BOOL)ascending;
+ (id)previousStartOfWeekFromDate:(id)date;
+ (id)nextStartOfWeekFromDate:(id)date;

/* instance methods */
- (id)initWithTransactionSourceCollection:(id)collection account:(id)account;
- (void)dealloc;
- (void)_resetCurrentCalendar;
- (void)availableSummaries:(id /* block */)summaries;
- (id)cachedSpendingSummaryStartingWithDate:(id)date type:(unsigned long long)type;
- (id)_cachedSpendingSummaryStartingWithDate:(id)date type:(unsigned long long)type withLastPeriodChange:(BOOL)change;
- (void)spendingSummaryStartingWithDate:(id)date type:(unsigned long long)type includingLastPeriodChange:(BOOL)change completion:(id /* block */)completion;
- (void)_processNextRequest;
- (void)_spendingSummaryStartingWithDate:(id)date endDate:(id)date type:(unsigned long long)type withLastPeriodChange:(BOOL)change completion:(id /* block */)completion;
- (id)_cacheForType:(unsigned long long)type;
- (void)transactionSourceIdentifier:(id)identifier didReceiveTransaction:(id)transaction;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (void)_accessObserversWithHandler:(id /* block */)handler;
- (void)statementsChangedForAccountIdentifier:(id)identifier;
- (void)_timeZoneChanged:(id)changed;
@end

#endif /* PKSpendingSummaryFetcher_h */
