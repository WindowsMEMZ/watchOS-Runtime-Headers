//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentAddDebitCardViewController_h
#define PKPaymentAddDebitCardViewController_h
@import Foundation;

#include "PKExplanationViewController.h"
#include "PKExplanationViewDelegate-Protocol.h"
#include "PKPaymentSetupDelegate-Protocol.h"
#include "PKPaymentSetupViewControllerDelegate-Protocol.h"
#include "PKPeerPaymentSetupFlowController.h"
#include "PKPeerPaymentSetupFlowControllerDataSource-Protocol.h"

@class NSString;

@interface PKPaymentAddDebitCardViewController : PKExplanationViewController<PKExplanationViewDelegate, PKPaymentSetupDelegate, PKPeerPaymentSetupFlowControllerDataSource> {
  /* instance variables */
  PKPeerPaymentSetupFlowController *_peerPaymentSetupFlowController;
  NSObject<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *bodyText;
@property (nonatomic) BOOL showDebitCardHeroView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPeerPaymentSetupFlowController:(id)controller;
- (void)viewDidLoad;
- (BOOL)shouldPushTerms;
- (void)explanationViewDidSelectContinue:(id)continue;
- (void)explanationViewDidSelectSetupLater:(id)later;
- (void)paymentSetupDidFinish:(id)finish;
- (void)_setupLater;
- (void)_presentPaymentSetupController;
- (void)_handleProvisioningError:(id)error;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)controller;
- (void)_terminateSetupFlow;
@end

#endif /* PKPaymentAddDebitCardViewController_h */
