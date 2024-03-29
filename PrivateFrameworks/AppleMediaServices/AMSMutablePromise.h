//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMutablePromise_h
#define AMSMutablePromise_h
@import Foundation;

#include "AMSPromise.h"

@interface AMSMutablePromise : AMSPromise
/* class methods */
+ (void)startTimeoutForPromise:(id)promise timeout:(double)timeout;
+ (id)promiseWithAll:(id)all;
+ (id)promiseWithAll:(id)all timeout:(double)timeout;
+ (id)promiseWithAny:(id)any;
+ (id)promiseWithAny:(id)any timeout:(double)timeout;
+ (id)promiseWithFlattenedPromises:(id)promises;
+ (BOOL)cancelPromise:(id)promise;
+ (BOOL)finishPromise:(id)promise withResult:(id)result;
+ (BOOL)finishPromise:(id)promise withError:(id)error;
+ (BOOL)finishPromise:(id)promise withResult:(id)result error:(id)error;
+ (BOOL)finishPromise:(id)promise withPromise:(id)promise;
+ (BOOL)_finishPromise:(id)promise withResult:(id)result error:(id)error logDuplicateFinishes:(BOOL)finishes;

/* instance methods */
- (id)initWithTimeout:(double)timeout;
- (void)startTimeout:(double)timeout;
- (id)promiseWithTimeout:(double)timeout;
- (id)catchWithBlock:(id /* block */)block;
- (id)continueWithBlock:(id /* block */)block;
- (id)thenWithBlock:(id /* block */)block;
- (BOOL)cancel;
- (BOOL)finishWithError:(id)error;
- (BOOL)finishWithPromise:(id)promise;
- (BOOL)finishWithResult:(id)result;
- (BOOL)finishWithResult:(id)result error:(id)error;
- (BOOL)finishWithPromiseResult:(id)result;
- (BOOL)_finishWithResult:(id)result error:(id)error logDuplicateFinishes:(BOOL)finishes;
@end

#endif /* AMSMutablePromise_h */
