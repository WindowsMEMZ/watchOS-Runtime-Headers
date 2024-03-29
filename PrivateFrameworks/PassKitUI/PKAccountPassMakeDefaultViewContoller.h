//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountPassMakeDefaultViewContoller_h
#define PKAccountPassMakeDefaultViewContoller_h
@import Foundation;

#include "PKExplanationViewController.h"
#include "PKAccountFlowController.h"
#include "PKAccountFlowControllerDelegate-Protocol.h"
#include "PKPaymentSetupViewControllerDelegate-Protocol.h"
#include "PKViewControllerPreflightable-Protocol.h"

@class CLInUseAssertion, NSString, PKAccountPostProvisioningContent;

@interface PKAccountPassMakeDefaultViewContoller : PKExplanationViewController<PKAccountFlowControllerDelegate, PKViewControllerPreflightable> {
  /* instance variables */
  PKAccountFlowController *_accountController;
  NSObject<PKPaymentSetupViewControllerDelegate> *_delegate;
  unsigned long long _featureIdentifier;
  PKAccountPostProvisioningContent *_makeDefaultPostProvisioningContent;
  CLInUseAssertion *_inUseAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountFlowController:(id)controller context:(long long)context setupDelegate:(id)delegate;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)preflightWithCompletion:(id /* block */)completion;
- (BOOL)_willPerformProvisioningActions;
- (void)explanationViewDidSelectContinue:(id)continue;
- (void)explanationViewDidSelectSetupLater:(id)later;
- (void)accountFlowController:(id)controller requestsPresentationOfViewController:(id)controller;
- (void)accountFlowController:(id)controller requestsPresentationOfDisplayableError:(id)error;
- (void)_presentViewController:(id)controller;
- (void)_presentDisplayableError:(id)error;
- (void)_terminateSetupFlow;
- (void)_reportEventForPassIfNecessary:(id)necessary;
@end

#endif /* PKAccountPassMakeDefaultViewContoller_h */
