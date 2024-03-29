//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EFOperationQueueScheduler_h
#define EFOperationQueueScheduler_h
@import Foundation;

#include "EFScheduler-Protocol.h"

@class NSOperationQueue, NSString;

@interface EFOperationQueueScheduler : NSObject<EFScheduler> {
  /* instance variables */
  NSOperationQueue *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMaxConcurrentOperationCount:(long long)count;
- (void)performBlock:(id /* block */)block;
- (void)performSyncBlock:(id /* block */)block;
- (void)performSyncBarrierBlock:(id /* block */)block;
- (void)performVoucherPreservingBlock:(id /* block */)block;
- (id)performCancelableBlock:(id /* block */)block;
- (id)afterDelay:(double)delay performBlock:(id /* block */)block;
- (id)performWithObject:(id)object;
@end

#endif /* EFOperationQueueScheduler_h */
