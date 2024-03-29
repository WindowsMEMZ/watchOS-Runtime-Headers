//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalDispatchQueueAsyncBlockPerformer_h
#define CalDispatchQueueAsyncBlockPerformer_h
@import Foundation;

#include "CalAsyncBlockPerformer-Protocol.h"

@protocol OS_dispatch_queue;

@interface CalDispatchQueueAsyncBlockPerformer : NSObject<CalAsyncBlockPerformer>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (id)performAsync:(id /* block */)async;
- (id)performAfterDelay:(double)delay block:(id /* block */)block;
@end

#endif /* CalDispatchQueueAsyncBlockPerformer_h */
