//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPaymentProvisioningTransitAddBalanceViewController_h
#define NPKPaymentProvisioningTransitAddBalanceViewController_h
@import Foundation;

#include "NPKTransitTopUpValueSelectionViewController.h"
#include "NPKPaymentProvisioningTransitAddBalanceDelegate.h"

@interface NPKPaymentProvisioningTransitAddBalanceViewController : NPKTransitTopUpValueSelectionViewController

@property (retain, nonatomic) NPKPaymentProvisioningTransitAddBalanceDelegate *addBalanceDelegate;
@property (copy, nonatomic) id /* block */ didDisappear;

/* instance methods */
- (id)initWithPaymentSetupProduct:(id)product completion:(id /* block */)completion;
- (void)viewWillAppear:(BOOL)appear;
@end

#endif /* NPKPaymentProvisioningTransitAddBalanceViewController_h */
