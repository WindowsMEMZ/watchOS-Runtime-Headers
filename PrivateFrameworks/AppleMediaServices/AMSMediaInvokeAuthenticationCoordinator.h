//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMediaInvokeAuthenticationCoordinator_h
#define AMSMediaInvokeAuthenticationCoordinator_h
@import Foundation;

#include "AMSPromise.h"

@class NSMutableArray;

@interface AMSMediaInvokeAuthenticationCoordinator : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } queueLock;
@property (readonly, nonatomic) NSMutableArray *invokeAuthQueue;
@property (retain, nonatomic) AMSPromise *inflightAuthPromise;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)performAuthFromResponse:(id)response taskInfo:(id)info;
- (id)addToQueueAndPerformAuthFromResponseIfNeeded:(id)needed taskInfo:(id)info;
- (void)updateQueueIfNeeded;
- (void)_finishQueueWithAuthResult:(id)result queuedObjects:(id)objects;
@end

#endif /* AMSMediaInvokeAuthenticationCoordinator_h */
