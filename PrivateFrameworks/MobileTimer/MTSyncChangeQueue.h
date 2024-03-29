//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTSyncChangeQueue_h
#define MTSyncChangeQueue_h
@import Foundation;

#include "MTSyncChangeStore-Protocol.h"
#include "NAScheduler-Protocol.h"

@class NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MTSyncChangeQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<NAScheduler> *serializer;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *changesLoaded;
@property (retain, nonatomic) NSObject<MTSyncChangeStore> *changeStore;
@property (retain, nonatomic) NSMutableArray *changeQueue;

/* instance methods */
- (id)initWithChangeStore:(id)store;
- (void)loadChanges;
- (void)performBlockOnceChangesAreLoaded:(id /* block */)loaded async:(BOOL)async;
- (void)persistChanges;
- (void)enqueueChange:(id)change;
- (void)_enqueueAction:(id)action;
- (void)_enqueueChange:(id)change changeCompareBlock:(id /* block */)block;
- (void)dequeueChanges:(id)changes;
- (BOOL)hasPendingChanges;
- (id)pendingChanges;
- (void)removePendingChanges;
- (id)resolveChange:(id)change;
- (id)_resolveChange:(id)change;
- (id)_resolveChange:(id)change resolutionHandler:(id /* block */)handler;
@end

#endif /* MTSyncChangeQueue_h */
