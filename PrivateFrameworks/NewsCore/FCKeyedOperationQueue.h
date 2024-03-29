//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCKeyedOperationQueue_h
#define FCKeyedOperationQueue_h
@import Foundation;

#include "FCKeyedOperationQueueDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSOrderedSet;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface FCKeyedOperationQueue : NSObject {
  /* instance variables */
  NSMutableOrderedSet *_mutableKeyQueue;
  NSMutableSet *_keysForExecutingOperations;
  long long _maxConcurrentOperationCount;
  NSMutableDictionary *_cancelHandlersByKey;
  NSObject<OS_dispatch_group> *_operationExecutionGroup;
}

@property (readonly, weak, nonatomic) NSObject<FCKeyedOperationQueueDelegate> *delegate;
@property (copy, nonatomic) NSOrderedSet *keyQueue;
@property (nonatomic) BOOL suspended;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;

/* instance methods */
- (id)init;
- (id)initWithDelegate:(id)delegate maxConcurrentOperationCount:(long long)count;
- (void)notifyWhenAllOperationsAreFinishedUsingBlock:(id /* block */)block;
- (BOOL)isSuspended;
@end

#endif /* FCKeyedOperationQueue_h */
