//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASReachabilityQueryOperation_h
#define ASReachabilityQueryOperation_h
@import Foundation;

#include "NSOperation.h"
#include "ASReachabilityStatusCache.h"
#include "IDSBatchIDQueryControllerDelegate-Protocol.h"

@class IDSBatchIDQueryController, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_source;

@interface ASReachabilityQueryOperation : NSOperation<IDSBatchIDQueryControllerDelegate> {
  /* instance variables */
  BOOL _finished;
  BOOL _executing;
  NSMutableSet *_remainingDestinations;
  IDSBatchIDQueryController *_batchQueryController;
  NSObject<OS_dispatch_source> *timer;
  NSMutableDictionary *_rawIDSDestinationToOriginalDestination;
  NSMutableDictionary *_results;
}

@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) ASReachabilityStatusCache *statusCache;
@property (copy, nonatomic) NSSet *destinations;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (void)start;
- (void)finish;
- (void)_queryTimedOut;
- (void)batchQueryController:(id)controller updatedDestinationsStatus:(id)status onService:(id)service error:(id)error;
@end

#endif /* ASReachabilityQueryOperation_h */
