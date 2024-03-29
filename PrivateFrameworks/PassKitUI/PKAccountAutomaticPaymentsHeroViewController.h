//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountAutomaticPaymentsHeroViewController_h
#define PKAccountAutomaticPaymentsHeroViewController_h
@import Foundation;

#include "PKExplanationViewController.h"
#include "PKAccountAutomaticPaymentsController.h"
#include "PKAccountTermsAndConditionsController.h"
#include "PKPaymentSetupViewControllerDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString;

@interface PKAccountAutomaticPaymentsHeroViewController : PKExplanationViewController<PKPaymentSetupViewControllerDelegate, UITextViewDelegate> {
  /* instance variables */
  PKAccountAutomaticPaymentsController *_controller;
  unsigned long long _featureIdentifier;
  PKAccountTermsAndConditionsController *_termsController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithController:(id)controller;
- (void)viewDidLoad;
- (BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (void)viewWillLayoutSubviews;
- (void)explanationViewDidSelectContinue:(id)continue;
- (void)viewControllerDidTerminateSetupFlow:(id)flow;
@end

#endif /* PKAccountAutomaticPaymentsHeroViewController_h */
