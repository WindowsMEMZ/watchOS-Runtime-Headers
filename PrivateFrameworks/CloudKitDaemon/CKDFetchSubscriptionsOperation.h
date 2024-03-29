//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDFetchSubscriptionsOperation_h
#define CKDFetchSubscriptionsOperation_h
@import Foundation;

#include "CKDDatabaseOperation.h"

@class NSArray;
@protocol CKFetchSubscriptionsOperationCallbacks;

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *subscriptionIDs;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;
@property (retain, @dynamic, nonatomic) NSObject<CKFetchSubscriptionsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ subscriptionFetchedProgressBlock;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (void)_handleSubscriptionFetched:(id)fetched withID:(id)id responseCode:(id)code;
- (int)operationType;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)error;
@end

#endif /* CKDFetchSubscriptionsOperation_h */
