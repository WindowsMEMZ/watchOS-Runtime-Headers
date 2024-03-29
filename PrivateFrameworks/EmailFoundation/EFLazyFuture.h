//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EFLazyFuture_h
#define EFLazyFuture_h
@import Foundation;

#include "EFFuture.h"
#include "EFPromise.h"
#include "EFScheduler-Protocol.h"

@class NSConditionLock;

@interface EFLazyFuture : EFFuture {
  /* instance variables */
  NSConditionLock *_stateLock;
  NSObject<EFScheduler> *_scheduler;
  id /* block */ _block;
  EFPromise *_promise;
}

/* instance methods */
- (id)initWithScheduler:(id)scheduler block:(id /* block */)block;
- (id)delegate;
- (void)setDelegate:(id)delegate;
- (BOOL)run;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (BOOL)tryCancel;
- (void)addSuccessBlock:(id /* block */)block;
- (void)onScheduler:(id)scheduler addSuccessBlock:(id /* block */)block;
- (void)addFailureBlock:(id /* block */)block;
- (void)onScheduler:(id)scheduler addFailureBlock:(id /* block */)block;
- (id)resultBeforeDate:(id)date error:(id *)error;
- (id)resultIfAvailable:(id *)available;
@end

#endif /* EFLazyFuture_h */
