//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPerformActionViewController_h
#define PKPerformActionViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PKPaymentAuthorizationCoordinatorDelegate-Protocol.h"
#include "PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h"
#include "PKPaymentAutoReloadSetupController.h"
#include "PKPaymentAutoReloadSetupControllerDelegate-Protocol.h"
#include "PKPaymentSetupDelegate-Protocol.h"
#include "PKPerformActionPassView.h"
#include "PKPerformActionViewControllerDelegate-Protocol.h"
#include "PKPerformActionViewDelegate-Protocol.h"

@class NSString, PKPaymentPass, PKPaymentPassAction, PKPaymentWebService, PKServiceProviderPurchase, UIActivityIndicatorView, UIBarButtonItem;
@protocol PKPaymentDataProvider, UIView<PKPerformActionView;

@interface PKPerformActionViewController : UIViewController<PKPerformActionViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAutoReloadSetupControllerDelegate, PKPaymentSetupDelegate> {
  /* instance variables */
  PKPerformActionPassView *_passView;
  UIActivityIndicatorView *_loadingSpinner;
  NSObject<PKPaymentDataProvider> *_paymentDataProvider;
  BOOL _remoteContentFetched;
  BOOL _fieldsVerified;
  PKServiceProviderPurchase *_completedPurchase;
  PKPaymentAutoReloadSetupController *_autoReloadSetupController;
  UIBarButtonItem *_button;
  UIBarButtonItem *_spinner;
}

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPaymentPassAction *action;
@property (readonly, nonatomic) UIView<PKPerformActionView> *actionView;
@property (retain, nonatomic) PKPaymentWebService *webService;
@property (weak, nonatomic) NSObject<PKPerformActionViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)alertControllerForUnableReason:(unsigned long long)reason action:(id)action displayableError:(id)error addCardActionHandler:(id /* block */)handler unavailableActionHandler:(id /* block */)handler cancelActionHandler:(id /* block */)handler;
+ (id)alertControllerForUnableReason:(unsigned long long)reason action:(id)action displayableError:(id)error addCardActionHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (id)initWithPass:(id)pass action:(id)action;
- (id)initWithPass:(id)pass action:(id)action paymentDataProvider:(id)provider;
- (id)initWithPass:(id)pass action:(id)action viewStyle:(long long)style paymentDataProvider:(id)provider;
- (void)autoReloadSetupController:(id)controller requestsPresentViewController:(id)controller;
- (void)autoReloadSetupController:(id)controller requestsDismissViewController:(id)controller;
- (void)autoReloadSetupControllerDidCompleteWithAmount:(id)amount threshold:(id)threshold;
- (void)didTapSetUpAutoReloadButton;
- (id)_actionViewForPass:(id)pass action:(id)action;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)updateFirstResponder;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldHidePassView;
- (void)updatePassViewVisibility;
- (void)traitCollectionDidChange:(id)change;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)shakeCard;
- (void)setRightBarButtonEnabled:(BOOL)enabled;
- (void)_showSpinner:(BOOL)spinner;
- (void)preflightWithCompletion:(id /* block */)completion;
- (void)_fetchRemoteContentIfNeeded;
- (void)_showLoadingView:(BOOL)view;
- (void)_reloadActionView;
- (void)_rightBarButtonPressed:(id)pressed;
- (void)_canPerformPaymentWithCompletion:(id /* block */)completion;
- (id)_generateGenericAlertWithCompletion:(id /* block */)completion;
- (void)_showGenericErrorAlert:(id /* block */)alert;
- (id)_generateNoActionsAvailableDueToRemoteActionFailureAlertWithCompletion:(id /* block */)completion;
- (id)_generateNoActionsAvailableDueToConflictErrorAlertWithCompletion:(id /* block */)completion;
- (void)_showNoActionsAvailableDueToRemoteActionFailureAlert;
- (void)_showNoActionsAvailableDueToConflictErrorAlert;
- (void)_presentPaymentSetupControllerWithAllowedPaymentNetworks:(id)networks;
- (void)_presentAddAnotherCardFlowWithTransitNetworkIdentifiers:(id)identifiers;
- (BOOL)_shouldPresentPaymentRequest:(long long)request;
- (void)paymentAuthorizationCoordinator:(id)coordinator didAuthorizePayment:(id)payment handler:(id /* block */)handler;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)finish;
- (void)paymentAuthorizationCoordinator:(id)coordinator didAuthorizePurchase:(id)purchase completion:(id /* block */)completion;
- (void)paymentSetupDidFinish:(id)finish;
- (void)_cancelButtonPressed:(id)pressed;
@end

#endif /* PKPerformActionViewController_h */
