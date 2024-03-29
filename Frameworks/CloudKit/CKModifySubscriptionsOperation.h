//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKModifySubscriptionsOperation_h
#define CKModifySubscriptionsOperation_h
@import Foundation;

#include "CKDatabaseOperation.h"
#include "CKModifySubscriptionsOperationCallbacks-Protocol.h"
#include "CKModifySubscriptionsOperationInfo.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifySubscriptionsOperation : CKDatabaseOperation<CKModifySubscriptionsOperationCallbacks> {
  /* instance variables */
  NSMutableArray *_savedSubscriptions;
  NSMutableArray *_deletedSubscriptionIDs;
  NSMutableDictionary *_subscriptionsBySubscriptionIDs;
  NSMutableDictionary *_subscriptionErrors;
}

@property (readonly, @dynamic, nonatomic) NSObject<CKModifySubscriptionsOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, @dynamic, nonatomic) CKModifySubscriptionsOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perSubscriptionSaveBlock_wrapper;
@property (copy, nonatomic) id /* block */ perSubscriptionDeleteBlock_wrapper;
@property (copy, nonatomic) id /* block */ modifySubscriptionsCompletionBlock_wrapper;
@property (copy, nonatomic) NSArray *subscriptionsToSave;
@property (copy, nonatomic) NSArray *subscriptionIDsToDelete;
@property (copy, nonatomic) id /* block */ perSubscriptionSaveBlock;
@property (copy, nonatomic) id /* block */ perSubscriptionDeleteBlock;
@property (copy, nonatomic) id /* block */ modifySubscriptionsCompletionBlock;

/* class methods */
+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)tweaks;

/* instance methods */
- (id)init;
- (id)initWithSubscriptionsToSave:(id)save subscriptionIDsToDelete:(id)delete;
- (void)setModifySubscriptionsCompletionBlockIVar:(id /* block */)ivar;
- (void)fillOutOperationInfo:(id)info;
- (void)fillFromOperationInfo:(id)info;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)run;
- (void)handleSubscriptionSaveForSubscriptionID:(id)id error:(id)error;
- (void)handleSubscriptionDeleteForSubscriptionID:(id)id error:(id)error;
- (void)_finishOnCallbackQueueWithError:(id)error;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)error;
- (id)activityCreate;
@end

#endif /* CKModifySubscriptionsOperation_h */
