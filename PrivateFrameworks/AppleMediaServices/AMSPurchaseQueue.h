//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSPurchaseQueue_h
#define AMSPurchaseQueue_h
@import Foundation;

#include "AMSBagConsumer-Protocol.h"
#include "AMSPurchaseDelegate-Protocol.h"
#include "AMSPurchaseQueueBatchList.h"
#include "AMSPurchaseQueueConfiguration.h"
#include "AMSThreadSafeSet.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface AMSPurchaseQueue : NSObject<AMSPurchaseDelegate, AMSBagConsumer>

@property (retain, nonatomic) AMSPurchaseQueueBatchList *batches;
@property (retain, nonatomic) AMSPurchaseQueueConfiguration *config;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) AMSThreadSafeSet *preAuthenticatedDSIDs;
@property (nonatomic) BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)bagKeySet;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)enquePurchases:(id)purchases;
- (void)setSuspended:(BOOL)suspended logUUID:(id)uuid;
- (void)_handleNextPurchase;
- (id)_processPurchase:(id)purchase;
- (id)_createPurchasePromiseForTask:(id)task purchase:(id)purchase;
- (void)_handleResult:(id)result error:(id)error forPurchase:(id)purchase;
- (id)_performPreauthenticateForPurchaseTask:(id)task;
- (BOOL)isSuspended;
- (void)purchase:(id)purchase handleAuthenticateRequest:(id)request completion:(id /* block */)completion;
- (void)purchase:(id)purchase handleDialogRequest:(id)request completion:(id /* block */)completion;
- (void)purchase:(id)purchase handleEngagementRequest:(id)request completion:(id /* block */)completion;
@end

#endif /* AMSPurchaseQueue_h */
