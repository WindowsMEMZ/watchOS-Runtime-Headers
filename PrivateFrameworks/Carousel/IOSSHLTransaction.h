//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef IOSSHLTransaction_h
#define IOSSHLTransaction_h
@import Foundation;

#include "FBTransaction.h"
#include "IOSSHLTransaction.h"

@class NSMutableDictionary;

@interface IOSSHLTransaction : FBTransaction {
  /* instance variables */
  NSMutableDictionary *_transactionContext;
}

@property (weak, nonatomic) IOSSHLTransaction *parent;

/* instance methods */
- (BOOL)_canBeInterrupted;
- (id)transactionContextObjectForKey:(id)key;
- (void)setTransactionContextObject:(id)object forKey:(id)key;
- (void)clearTransactionContextObjectForKey:(id)key;
- (void)addChildTransaction:(id)transaction;
- (BOOL)shouldWatchdog:(id *)watchdog;
- (double)watchdogTimeout;
@end

#endif /* IOSSHLTransaction_h */
