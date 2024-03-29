//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHealthQueryFetchOperation_h
#define HKHealthQueryFetchOperation_h
@import Foundation;

#include "HKChartCacheFetchOperation.h"

@class HKHealthStore, NSArray;

@interface HKHealthQueryFetchOperation : HKChartCacheFetchOperation {
  /* instance variables */
  HKHealthStore *_healthStore;
  id /* block */ _lockedClientCompletion;
  id /* block */ _lockedFetchOperationManager;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _callbackLock;
}

@property (retain, nonatomic) NSArray *queries;

/* instance methods */
- (id)initWithHealthStore:(id)store operationDescription:(id)description completion:(id /* block */)completion;
- (void)startOperationWithCompletion:(id /* block */)completion;
- (void)stopOperation;
- (void)completedWithResults:(id)results error:(id)error;
@end

#endif /* HKHealthQueryFetchOperation_h */
