//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterFinancingPlanCostSectionController_h
#define PKPayLaterFinancingPlanCostSectionController_h
@import Foundation;

#include "PKPayLaterSectionController.h"
#include "PKAccountTermsAndConditionsController.h"
#include "PKPayLaterButtonRow.h"
#include "PKPayLaterTitleDetailRow.h"

@class NSDateFormatter, PKPayLaterFinancingPlan, PKPaymentPass;

@interface PKPayLaterFinancingPlanCostSectionController : PKPayLaterSectionController {
  /* instance variables */
  NSDateFormatter *_transactionDateFormatter;
  PKPayLaterButtonRow *_loanAgreementButton;
  PKPaymentPass *_payLaterPass;
  PKPayLaterTitleDetailRow *_loanIdentifierRow;
  PKAccountTermsAndConditionsController *_termsController;
}

@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan;

/* instance methods */
- (id)initWithFinancingPlan:(id)plan payLaterAccount:(id)account delegate:(id)delegate;
- (id)identifiers;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (Class)headerViewClassForSectionIdentifier:(id)identifier;
- (id)footerContentForSectionIdentifier:(id)identifier;
- (void)configureHeaderView:(id)view forSectionIdentifier:(id)identifier;
- (void)_configureCostSummarySection:(id)section;
- (void)_configureLoanAgreementSection:(id)section;
- (void)_configureIssuerBrandSection:(id)section;
@end

#endif /* PKPayLaterFinancingPlanCostSectionController_h */
