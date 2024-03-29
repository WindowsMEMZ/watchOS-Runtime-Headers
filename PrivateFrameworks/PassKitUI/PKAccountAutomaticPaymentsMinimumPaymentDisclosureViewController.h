//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController_h
#define PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController_h
@import Foundation;

#include "PKExplanationViewController.h"
#include "PKAccountAutomaticPaymentsController.h"

@interface PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController : PKExplanationViewController {
  /* instance variables */
  PKAccountAutomaticPaymentsController *_controller;
  unsigned long long _featureIdentifier;
}

/* instance methods */
- (id)initWithController:(id)controller;
- (void)viewDidLoad;
- (void)explanationViewDidSelectContinue:(id)continue;
@end

#endif /* PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController_h */
