//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBWorkspaceServiceDispatchingQueue_h
#define FBWorkspaceServiceDispatchingQueue_h
@import Foundation;

#include "BSServiceDispatchingQueue-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface FBWorkspaceServiceDispatchingQueue : NSObject<BSServiceDispatchingQueue> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_targetQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)_initWithTargetQueue:(id)queue;
- (void)assertBarrierOnQueue;
- (id)backingQueueIfExists;
- (void)performAsync:(id /* block */)async;
- (void)performAsync:(id /* block */)async withHandoff:(id)handoff;
@end

#endif /* FBWorkspaceServiceDispatchingQueue_h */
