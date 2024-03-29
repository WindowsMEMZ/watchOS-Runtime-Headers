//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.0.0.0.0
//
#ifndef RCOperationThrottler_h
#define RCOperationThrottler_h
@import Foundation;

#include "RCOperationThrottler-Protocol.h"

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface RCOperationThrottler : NSObject<RCOperationThrottler> {
  /* instance variables */
  NSObject<OS_dispatch_source> *_dispatchSource;
  NSObject<OS_dispatch_queue> *_serialQueue;
  NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
}

@property BOOL suspended;

/* instance methods */
- (id)init;
- (id)initWithDelegate:(id)delegate;
- (id)initWithDelegate:(id)delegate updateQueue:(id)queue;
- (void)dealloc;
- (void)tickleWithCompletion:(id /* block */)completion;
- (void)addCompletionForCurrentOperation:(id /* block */)operation;
- (void)tickle;
@end

#endif /* RCOperationThrottler_h */
