//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPaidAccessChecker_h
#define FCPaidAccessChecker_h
@import Foundation;

#include "FCBundleSubscriptionProviderType-Protocol.h"
#include "FCCoreConfigurationManager-Protocol.h"
#include "FCPaidAccessCheckerType-Protocol.h"
#include "FCPurchaseProviderType-Protocol.h"

@interface FCPaidAccessChecker : NSObject<FCPaidAccessCheckerType> {
  /* instance variables */
  NSObject<FCCoreConfigurationManager> *_configurationManager;
}

@property (readonly, nonatomic) NSObject<FCBundleSubscriptionProviderType> *bundleSubscriptionProvider;
@property (readonly, nonatomic) NSObject<FCPurchaseProviderType> *purchaseProvider;

/* instance methods */
- (id)initWithPurchaseProvider:(id)provider bundleSubscriptionProvider:(id)provider configurationManager:(id)manager;
- (BOOL)canGetAccessToItemPaid:(BOOL)paid bundlePaid:(BOOL)paid channel:(id)channel;
- (BOOL)canGetSubscriptionToChannel:(id)channel;
- (BOOL)canGetBundleSubscriptionToChannel:(id)channel;
- (BOOL)isPreparedForUse;
- (void)prepareForUseWithCompletion:(id /* block */)completion;
@end

#endif /* FCPaidAccessChecker_h */
