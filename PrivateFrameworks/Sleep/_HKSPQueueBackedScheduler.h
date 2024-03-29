//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKSPQueueBackedScheduler_h
#define _HKSPQueueBackedScheduler_h
@import Foundation;

#include "HKSPQueueBackedScheduler-Protocol.h"
#include "NAScheduler-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface _HKSPQueueBackedScheduler : NSObject<HKSPQueueBackedScheduler>

@property (readonly, nonatomic) NSObject<NAScheduler> *scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (id)initWithScheduler:(id)scheduler queue:(id)queue;
- (id)afterDelay:(double)delay performBlock:(id /* block */)block;
- (void)performBlock:(id /* block */)block;
- (id)performCancelableBlock:(id /* block */)block;
- (void)suspend;
- (void)resume;
@end

#endif /* _HKSPQueueBackedScheduler_h */
