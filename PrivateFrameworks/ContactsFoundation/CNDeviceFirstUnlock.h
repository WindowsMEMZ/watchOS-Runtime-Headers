//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNDeviceFirstUnlock_h
#define CNDeviceFirstUnlock_h
@import Foundation;

#include "CNFuture.h"
#include "CNUnfairLock.h"

@class NSMutableDictionary, NSOperationQueue;

@interface CNDeviceFirstUnlock : NSObject

@property (retain, nonatomic) CNUnfairLock *handlersLock;
@property (retain, nonatomic) NSMutableDictionary *unlockHandlers;
@property (retain, nonatomic) NSOperationQueue *workQueue;
@property (retain, nonatomic) CNFuture *firstUnlockFuture;
@property (readonly, nonatomic) BOOL isUnlockedSinceBoot;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addUnlockHandlerWithIdentifier:(id)identifier block:(id /* block */)block;
- (void)withHandlersLock_addHandlerWithIdentifier:(id)identifier block:(id /* block */)block;
- (void)withHandlersLock_registerForDeviceFirstUnlock;
- (void)removeUnlockHandlerWithIdentifier:(id)identifier;
- (void)withHandlersLock_cancelExistingOperationWithIdentifier:(id)identifier;
- (void)waitForAllOperationsToFinish;
- (long long)countOfUnlockHandlers;
@end

#endif /* CNDeviceFirstUnlock_h */
