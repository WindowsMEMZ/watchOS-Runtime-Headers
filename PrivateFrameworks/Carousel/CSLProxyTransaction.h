//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLProxyTransaction_h
#define CSLProxyTransaction_h
@import Foundation;

#include "BSTransaction.h"
#include "BSTransactionObserver-Protocol.h"

@class BSTransaction, NSString;

@interface CSLProxyTransaction : BSTransaction<BSTransactionObserver>

@property (readonly, nonatomic) BSTransaction *proxiedTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTransaction:(id)transaction;
- (void)_begin;
- (void)_didComplete;
- (void)_willFailWithReason:(id)reason;
- (id)_descriptionProem;
- (void)transactionDidComplete:(id)complete;
@end

#endif /* CSLProxyTransaction_h */
