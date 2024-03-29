//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPStoreModelRequestOperation_h
#define MPStoreModelRequestOperation_h
@import Foundation;

#include "MPAsyncOperation.h"
#include "MPModelResponse.h"
#include "MPStoreModelRequest.h"

@class NSOperation;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MPStoreModelRequestOperation : MPAsyncOperation {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessSerialQueue;
  NSOperation *_childOperation;
  MPModelResponse *_response;
  double _startExecutingTimeStamp;
  NSObject<OS_dispatch_source> *_timeoutTimerSource;
}

@property (readonly, nonatomic) double remainingTimeInterval;
@property (copy, nonatomic) MPStoreModelRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

/* instance methods */
- (id)init;
- (id)initWithRequest:(id)request responseHandler:(id /* block */)handler;
- (void)dealloc;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)error;
- (double)adjustTimeoutInterval:(double)interval;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)dictionary error:(id *)error;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)urlbag error:(id *)error;
- (void)produceResponseWithLoadedOutput:(id)output completion:(id /* block */)completion;
- (void)assertRunningInAccessQueue;
- (void)dispatchAsync:(id /* block */)async;
- (void)dispatchSync:(id /* block */)sync;
- (void)_finishWithResponse:(id)response error:(id)error;
- (void)_executeItemMetadataLoadForRequestedItemIdentifiers:(id)identifiers reason:(unsigned long long)reason requestContext:(id)context;
- (void)_executeURLLoadWithRequest:(id)request storeURLBag:(id)urlbag requestContext:(id)context;
- (void)_executeURLLoadWithRequests:(id)requests storeURLBag:(id)urlbag requestContext:(id)context;
- (void)_handleTimeout;
- (void)_tearDownTimeoutTimerSource;
- (id)_URLLoadRequestWithRequest:(id)request requestContext:(id)context;
@end

#endif /* MPStoreModelRequestOperation_h */
