//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterFinancingPlansFetcher_h
#define PKPayLaterFinancingPlansFetcher_h
@import Foundation;

#include "PKAccount.h"
#include "PKAccountService.h"
#include "PKAccountServiceObserver-Protocol.h"
#include "PKCurrencyAmount.h"
#include "PKPayLaterFinancingPlansFetcherRequest.h"

@class NSArray, NSCache, NSDate, NSHashTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface PKPayLaterFinancingPlansFetcher : NSObject<PKAccountServiceObserver> {
  /* instance variables */
  PKAccountService *_accountService;
  PKCurrencyAmount *_fallbackAmount;
  NSMutableArray *_pendingRequests;
  PKPayLaterFinancingPlansFetcherRequest *_currentRequest;
  NSCache *_financingPlanCache;
  NSCache *_installmentMonthCache;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestsLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
  NSObject<OS_dispatch_queue> *_workQueue;
  NSObject<OS_dispatch_queue> *_replyQueue;
  BOOL _hasDateRange;
  BOOL _updatingDateRange;
  NSMutableArray *_dateRangeCompletions;
  NSHashTable *_observers;
  NSDate *_oldestDate;
  NSDate *_newestDate;
  NSArray *_months;
}

@property (retain, nonatomic) PKAccount *payLaterAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_financingPlanStates;

/* instance methods */
- (id)initWithPayLaterAccount:(id)account;
- (void)dealloc;
- (id)cachedInstallmentsMonthWithStartDate:(id)date;
- (void)installmentsMonthWithDate:(id)date completion:(id /* block */)completion;
- (id)monthDates;
- (void)preflightDataIfNecessaryWithCompletion:(id /* block */)completion;
- (void)financingPlansWithQueries:(id)queries completion:(id /* block */)completion;
- (void)financingPlansWithQueryItems:(unsigned long long)items completion:(id /* block */)completion;
- (void)_addRequest:(id)request;
- (void)_executeNextRequestIfPossible;
- (void)_executeRequest:(id)request;
- (void)accountChanged:(id)changed;
- (void)accountFinancingPlanAdded:(id)added accountIdentifier:(id)identifier;
- (void)accountFinancingPlanRemoved:(id)removed accountIdentifier:(id)identifier;
- (void)accountFinancingPlanUpdated:(id)updated oldFinancingPlan:(id)plan accountIdentifier:(id)identifier;
- (void)_queue_financingPlanUpdated:(id)updated;
- (void)_queue_clearAllCache;
- (void)_queue_clearCacheWithMonths:(id)months;
- (void)_timeZoneChanged;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (void)_accessObserversWithHandler:(id /* block */)handler;
@end

#endif /* PKPayLaterFinancingPlansFetcher_h */
