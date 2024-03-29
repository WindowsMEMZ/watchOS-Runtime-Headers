//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKFetchSubscriptionsOperation_h
#define CKFetchSubscriptionsOperation_h
@import Foundation;

#include "CKDatabaseOperation.h"
#include "CKFetchSubscriptionsOperationCallbacks-Protocol.h"
#include "CKFetchSubscriptionsOperationInfo.h"

@class NSArray, NSMutableDictionary;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation<CKFetchSubscriptionsOperationCallbacks> {
  /* instance variables */
  NSArray *_subscriptions;
  NSMutableDictionary *_subscriptionsBySubscriptionID;
  NSMutableDictionary *_subscriptionErrors;
}

@property (readonly, @dynamic, nonatomic) NSObject<CKFetchSubscriptionsOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, @dynamic, nonatomic) CKFetchSubscriptionsOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perSubscriptionCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ fetchSubscriptionCompletionBlock_wrapper;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;
@property (copy, nonatomic) NSArray *subscriptionIDs;
@property (copy, nonatomic) id /* block */ perSubscriptionCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchSubscriptionCompletionBlock;

/* class methods */
+ (id)fetchAllSubscriptionsOperation;
+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)tweaks;

/* instance methods */
- (id)init;
- (void)setFetchSubscriptionCompletionBlockIVar:(id /* block */)ivar;
- (id)initWithSubscriptionIDs:(id)ids;
- (void)fillOutOperationInfo:(id)info;
- (void)fillFromOperationInfo:(id)info;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)run;
- (void)handleSubscriptionFetchForSubscriptionID:(id)id subscription:(id)subscription error:(id)error;
- (void)_finishOnCallbackQueueWithError:(id)error;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)error;
- (id)activityCreate;
@end

#endif /* CKFetchSubscriptionsOperation_h */
