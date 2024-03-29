//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPCSFetchAggregator_h
#define CKDPCSFetchAggregator_h
@import Foundation;

#include "CKDContainer.h"

@class CKCoalescer, NSMutableArray, NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CKDPCSFetchAggregator : NSObject

@property (weak, nonatomic) CKDContainer *container;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *opQueue;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSMutableArray *queuedFetches;
@property (retain, nonatomic) NSMutableArray *runningFetches;
@property (retain, nonatomic) CKCoalescer *fetchCoalescer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic) BOOL skipQueuedFetchCycleDetection;

/* instance methods */
- (id)init;
- (id)initWithContainer:(id)container;
- (void)dealloc;
- (void)_lockedFetchesAreReady;
- (void)_lockedTearDownFetchTimer;
- (void)_lockedRescheduleFetchTimer;
- (id)_lockedGetQueuedFetchForOperation:(id)operation ofClass:(Class)class;
- (BOOL)fetchRequestForExistingOperation:(id)operation isDependentOnOperation:(id)operation;
- (void)requestFetchOfRecordWithID:(id)id forOperation:(id)operation withCompletionHandler:(id /* block */)handler;
- (void)requestFetchOfShareWithID:(id)id forOperation:(id)operation withCompletionHandler:(id /* block */)handler;
- (void)requestFetchOfZoneWithID:(id)id forOperation:(id)operation withCompletionHandler:(id /* block */)handler;
- (void)cancelAllOperations;
@end

#endif /* CKDPCSFetchAggregator_h */
