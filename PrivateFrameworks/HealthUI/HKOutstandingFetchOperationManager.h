//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKOutstandingFetchOperationManager_h
#define HKOutstandingFetchOperationManager_h
@import Foundation;

#include "HKFetchOperationDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface HKOutstandingFetchOperationManager : NSObject<HKFetchOperationDelegate> {
  /* instance variables */
  BOOL _needsRebalanceFetchOperations;
  NSMutableArray *_pendingNormalPriorityFetchOperations;
  NSMutableArray *_pendingHighPriorityFetchOperations;
  NSMutableArray *_activeFetchOperations;
}

@property (nonatomic) long long maxConcurrentFetchOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)setSharedOperationManager:(id)manager;
+ (id)sharedOperationManager;

/* instance methods */
- (id)initWithMaxConcurrentFetchOperations:(long long)operations;
- (void)addFetchOperations:(id)operations;
- (void)addFetchOperation:(id)operation;
- (void)removeFetchOperations:(id)operations;
- (void)removeFetchOperation:(id)operation;
- (BOOL)_removeFetchOperationFromPendingOperations:(id)operations;
- (BOOL)_removeFetchOperationFromActiveOperations:(id)operations;
- (void)_setNeedsRebalanceFetchOperations;
- (void)_rebalanceFetchOperations;
- (void)_fillActiveFetchOperations;
- (BOOL)_noHighPriorityActiveOperations;
- (void)_executeFetchOperation:(id)operation;
- (void)_logOperationStart:(id)start;
- (void)_logOperationCompletion:(id)completion;
- (void)fetchOperationDidUpdatePriority:(id)priority;
@end

#endif /* HKOutstandingFetchOperationManager_h */
