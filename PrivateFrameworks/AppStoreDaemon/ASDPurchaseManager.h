//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDPurchaseManager_h
#define ASDPurchaseManager_h
@import Foundation;

#include "ASDServiceBroker.h"
#include "ASDServiceProvider-Protocol.h"

@class NSString;

@interface ASDPurchaseManager : NSObject<ASDServiceProvider> {
  /* instance variables */
  ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedManager;
+ (id)interface;

/* instance methods */
- (id)init;
- (id)adopt:(id)adopt;
- (id)adoptableBundleIdentifiers;
- (void)adoptionStatus:(BOOL)status withReplyHandler:(id /* block */)handler;
- (void)processPurchase:(id)purchase withResponseHandler:(id /* block */)handler;
- (void)startPurchase:(id)purchase withResultHandler:(id /* block */)handler;
- (void)checkAutomaticDownloadQueue;
- (void)checkPendingQueue;
- (void)checkPreflightForItemIdentifier:(id)identifier atURL:(id)url withReplyHandler:(id /* block */)handler;
- (void)renewReceiptForApplicationAtURL:(id)url withAppleID:(id)id password:(id)password forceSandbox:(BOOL)sandbox withCompletionHandler:(id /* block */)handler;
- (void)unadoptWithReplyHandler:(id /* block */)handler;
@end

#endif /* ASDPurchaseManager_h */
