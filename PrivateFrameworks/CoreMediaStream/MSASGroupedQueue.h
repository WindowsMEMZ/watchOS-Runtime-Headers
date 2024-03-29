//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSASGroupedQueue_h
#define MSASGroupedQueue_h
@import Foundation;

#include "MSASServerSideModel.h"
#include "MSTimerGate.h"

@protocol OS_dispatch_queue;

@interface MSASGroupedQueue : NSObject

@property (retain, nonatomic) MSTimerGate *idleTimerGate;
@property (retain, nonatomic) MSTimerGate *stalenessTimerGate;
@property (weak, nonatomic) MSASServerSideModel *model;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic) int maxGroupedCallbackEventBatchCount;
@property (nonatomic) double maxGroupedCallbackEventIdleInterval;
@property (nonatomic) double maxGroupedCallbackEventStaleness;
@property (readonly, nonatomic) BOOL isAssertingBusyAssertion;
@property (nonatomic) BOOL isShuttingDown;

/* instance methods */
- (id)init;
- (void)assertBusyAssertion;
- (void)deassertBusyAssertion;
- (void)workQueueAssertBusyAssertion;
- (void)workQueueDeassertBusyAssertion;
- (BOOL)memberQueueIsAssertingBusyAssertion;
- (void)memberQueueSetIsAssertingBusyAssertion:(BOOL)assertion;
- (void)shutDownFlush:(BOOL)flush completionBlock:(id /* block */)block;
- (void)flushQueueCompletionBlock:(id /* block */)block;
- (BOOL)hasEnqueuedItems;
- (void)workQueueFlushQueue;
- (void)workQueueRestartIdleTimer;
- (void)workQueueClearIdleTimer;
- (void)workQueueRestartStalenessTimer;
- (void)workQueueClearStalenessTimer;
- (void)workQueueDidEnqueueFirstItem;
- (void)workQueueDidEnqueueSubsequentItem;
@end

#endif /* MSASGroupedQueue_h */
