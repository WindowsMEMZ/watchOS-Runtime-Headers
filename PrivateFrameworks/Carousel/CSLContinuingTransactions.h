//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLContinuingTransactions_h
#define CSLContinuingTransactions_h
@import Foundation;

#include "BSTransactionObserver-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface CSLContinuingTransactions : NSObject<BSTransactionObserver>

@property (readonly, nonatomic) NSArray *transactions;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)addTransaction:(id)transaction;
- (void)transactionDidComplete:(id)complete;
@end

#endif /* CSLContinuingTransactions_h */
