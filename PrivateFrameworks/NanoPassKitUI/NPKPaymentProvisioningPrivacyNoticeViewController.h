//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPaymentProvisioningPrivacyNoticeViewController_h
#define NPKPaymentProvisioningPrivacyNoticeViewController_h
@import Foundation;

#include "UIViewController.h"
#include "NPKPaymentProvisioningHeaderView.h"

@interface NPKPaymentProvisioningPrivacyNoticeViewController : UIViewController {
  /* instance variables */
  NPKPaymentProvisioningHeaderView *_headerView;
}

@property (nonatomic) BOOL buttonsEnabled;
@property (copy, nonatomic) id /* block */ didCancel;

/* instance methods */
- (id)initWithFlowController:(id)controller paymentCredential:(id)credential paymentSetupProduct:(id)product completion:(id /* block */)completion;
- (id)initWithFlowController:(id)controller paymentCredential:(id)credential paymentSetupProduct:(id)product additionalDetailElements:(id)elements completion:(id /* block */)completion;
- (BOOL)prefersStatusBarHidden;
- (void)paymentProvisioningHeaderView:(id)view requestToLoadURL:(id)url;
@end

#endif /* NPKPaymentProvisioningPrivacyNoticeViewController_h */
