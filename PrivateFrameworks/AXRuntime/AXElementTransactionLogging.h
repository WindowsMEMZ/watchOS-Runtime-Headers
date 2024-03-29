//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXElementTransactionLogging_h
#define AXElementTransactionLogging_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AXElementTransactionLogging : NSObject {
  /* instance variables */
  NSMutableDictionary *_pendingTransactions;
  NSMutableDictionary *_pidsToBundleIDs;
  NSObject<OS_dispatch_queue> *_queue;
}

/* class methods */
+ (id)sharedLogger;
+ (id)transactionSummary;

/* instance methods */
- (id)init;
- (unsigned long long)willFetchAttribute:(long long)attribute forElement:(struct __AXUIElement *)element;
- (id)_appNameForUIElement:(struct __AXUIElement *)uielement pid:(int)pid;
- (void)failedTransaction:(unsigned long long)transaction;
- (void)finishedTransaction:(unsigned long long)transaction withValue:(void *)value;
- (void)finishedTransaction:(unsigned long long)transaction withValue:(void *)value amortization:(double)amortization;
@end

#endif /* AXElementTransactionLogging_h */
