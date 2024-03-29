//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef SCWStartupQueue_h
#define SCWStartupQueue_h
@import Foundation;

#include "SCWAsyncSerialQueue.h"

@interface SCWStartupQueue : NSObject

@property (retain, nonatomic) SCWAsyncSerialQueue *startupTaskQueue;
@property (nonatomic) long long startupTaskDepth;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } startupTaskDepthLock;

/* instance methods */
- (id)initWithDeferredStartup:(BOOL)startup;
- (void)enqueueStartupBlock:(id /* block */)block;
- (void)executeAfterStartup:(id /* block */)startup;
@end

#endif /* SCWStartupQueue_h */
