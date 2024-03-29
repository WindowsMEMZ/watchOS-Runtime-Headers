//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef StoreKitService_h
#define StoreKitService_h
@import Foundation;

#include "ASDStoreKitClientProtocol-Protocol.h"

@class NSString;

@interface StoreKitService : NSObject<ASDStoreKitClientProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)shouldProcessStoreKitPurchase:(id)purchase;
+ (void)processStoreKitPurchase:(id)purchase withResultHandler:(id /* block */)handler;
+ (id)storeKitServiceWithErrorHandler:(id /* block */)handler;
+ (id)_serviceConnection;
+ (void)_serviceConnectionInvalidated;
+ (id)_storeKitServiceInterface;
+ (id)_storeKitClientInterface;

/* instance methods */
- (void)removedEntitlementsForProductIdentifiers:(id)identifiers;
- (void)updatedTransactions:(id)transactions;
- (void)removedTransactions:(id)transactions;
- (void)downloadAdded:(id)added;
- (void)downloadStatusChanged:(id)changed;
- (void)downloadRemoved:(id)removed;
- (void)storefrontChanged:(id)changed;
- (void)askToShowMessageWithReplyBlock:(id /* block */)block;
- (void)hasAnyMessageListenersWithReply:(id /* block */)reply;
- (void)pendingMessages:(id)messages;
- (void)shouldContinueTransaction:(id)transaction withNewStorefront:(id)storefront replyBlock:(id /* block */)block;
- (void)handleAuthenticateRequest:(id)request resultHandler:(id /* block */)handler;
- (void)handleDialogRequest:(id)request resultHandler:(id /* block */)handler;
- (void)handleEngagementRequest:(id)request resultHandler:(id /* block */)handler;
- (void)receivedStatuses:(id)statuses;
- (void)receivedTransactions:(id)transactions;
@end

#endif /* StoreKitService_h */
