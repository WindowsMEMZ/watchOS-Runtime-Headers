//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNFuture_Protocol_h
#define CNFuture_Protocol_h
@import Foundation;

#include "CNFuture-Protocol.h"
#include "CNFutureImpl-Protocol.h"
#include "CNPromise-Protocol.h"

@class NSMutableArray, NSString;

@protocol CNFuture <NSObject>

@property (readonly) BOOL finished;
@property (readonly) BOOL cancelled;

/* instance methods */
- (id)result:(id *)result;
- (id)resultWithTimeout:(double)timeout error:(id *)error;
- (id)resultBeforeDate:(id)date error:(id *)error;
- (BOOL)cancel;
- (void)addSuccessBlock:(id /* block */)block;
- (void)addSuccessBlock:(id /* block */)block scheduler:(id)scheduler;
- (void)addFailureBlock:(id /* block */)block;
- (void)addFailureBlock:(id /* block */)block scheduler:(id)scheduler;
- (id)flatMap:(id /* block */)map;
- (id)recover:(id /* block */)recover;
- (BOOL)isFinished;
- (BOOL)isCancelled;
@end

#endif /* CNFuture_Protocol_h */
