//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterChangeFundingSourceViewController_h
#define PKPayLaterChangeFundingSourceViewController_h
@import Foundation;

#include "PKPayLaterViewController.h"
#include "PKPayLaterChangeFundingSourceSectionController.h"
#include "PKPayLaterChangeFundingSourceSectionControllerDelegate-Protocol.h"

@class NSString, PKAccountWebServiceFinancingPlanPaymentIntentResponse, PKPayLaterFinancingPlan, PKPayLaterPaymentIntentController, PKPayLaterPaymentSource, PKPaymentPass;

@interface PKPayLaterChangeFundingSourceViewController : PKPayLaterViewController<PKPayLaterChangeFundingSourceSectionControllerDelegate> {
  /* instance variables */
  PKPayLaterFinancingPlan *_financingPlan;
  PKPaymentPass *_payLaterPass;
  PKPayLaterPaymentIntentController *_paymentIntentController;
  PKPayLaterChangeFundingSourceSectionController *_sectionController;
  PKAccountWebServiceFinancingPlanPaymentIntentResponse *_intentDetails;
  PKPayLaterPaymentSource *_selectedPaymentSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFinancingPlan:(id)plan payLaterPass:(id)pass paymentIntentController:(id)controller;
- (void)preflightWithCompletion:(id /* block */)completion;
- (void)didSelectFundingSource:(id)source;
- (void)didUpdateAutoPayment:(BOOL)payment completion:(id /* block */)completion;
- (BOOL)_canChangeFundingSource;
- (void)_presentUnableToChangeFundingSourceAlert;
- (void)_presentChangeFundingSourceFlowWithPrimaryPaymentSource:(id)source completion:(id /* block */)completion;
- (void)viewDidLoad;
- (void)_updateSectionControllerAnimated:(BOOL)animated;
- (void)_turnOffAutoPaymentWithCompletion:(id /* block */)completion;
- (void)didUpdateFinancingPlan:(id)plan;
- (id)pageTag;
- (id)additionalAnalyticsDictionary;
@end

#endif /* PKPayLaterChangeFundingSourceViewController_h */
