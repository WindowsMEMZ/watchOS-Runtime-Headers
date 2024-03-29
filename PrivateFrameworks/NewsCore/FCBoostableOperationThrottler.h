//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCBoostableOperationThrottler_h
#define FCBoostableOperationThrottler_h
@import Foundation;

#include "FCBoostableOperationThrottlerDelegate-Protocol.h"
#include "FCOperationThrottler-Protocol.h"

@protocol OS_dispatch_queue;

@interface FCBoostableOperationThrottler : NSObject<FCOperationThrottler>

@property (weak, nonatomic) NSObject<FCBoostableOperationThrottlerDelegate> *delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue;
@property (nonatomic) BOOL workPending;
@property (nonatomic) long long workPendingQualityOfService;
@property (nonatomic) unsigned long long workPendingMergedData;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } workPendingLock;
@property (nonatomic) unsigned long long mergedData;
@property BOOL suspended;

/* instance methods */
- (id)init;
- (id)initWithDelegate:(id)delegate;
- (id)initWithDelegate:(id)delegate queue:(id)queue;
- (void)tickleWithQualityOfService:(long long)service;
- (void)tickleWithQualityOfService:(long long)service completion:(id /* block */)completion;
- (void)tickleWithQualityOfService:(long long)service data:(unsigned long long)data completion:(id /* block */)completion;
- (void)boostToQualityOfService:(long long)service;
- (void)tickle;
- (void)tickleWithCompletion:(id /* block */)completion;
@end

#endif /* FCBoostableOperationThrottler_h */
