//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupPurchaseViewController_h
#define PKPaymentSetupPurchaseViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PKPaymentAuthorizationCoordinatorDelegate-Protocol.h"
#include "PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h"
#include "PKPaymentSetupDelegate-Protocol.h"
#include "PKPaymentSetupPurchaseAmountView.h"
#include "PKPaymentSetupPurchaseAmountViewDelegate-Protocol.h"
#include "PKPaymentSetupPurchaseController.h"
#include "PKPaymentSetupPurchaseControllerDelegate-Protocol.h"
#include "PKPaymentSetupPurchaseViewControllerFlowDelegate-Protocol.h"
#include "PKPaymentSetupViewControllerDelegate-Protocol.h"
#include "PKViewControllerPreflightable-Protocol.h"

@class NSDecimalNumber, NSLayoutConstraint, NSString, PKPaymentAuthorizationCoordinator, PKPaymentProvisioningController, PKPaymentProvisioningMethodMetadata, PKPaymentSetupProduct, PKServiceProviderPurchase, UIActivityIndicatorView, UIImage, UIImageView, UILabel;

@interface PKPaymentSetupPurchaseViewController : UIViewController<PKPaymentSetupPurchaseAmountViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentSetupPurchaseControllerDelegate, PKPaymentSetupDelegate, PKViewControllerPreflightable> {
  /* instance variables */
  BOOL _didPurchase;
  BOOL _snapshotNeedsCorners;
  unsigned char _visibility;
}

@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) long long setupContext;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (retain, nonatomic) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata;
@property (retain, nonatomic) UIImageView *passView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) PKPaymentSetupPurchaseAmountView *amountView;
@property (retain, nonatomic) NSLayoutConstraint *amountViewBottomHeightConstraint;
@property (copy, nonatomic) NSDecimalNumber *currentAmount;
@property (retain, nonatomic) PKPaymentAuthorizationCoordinator *authorizationCoordinator;
@property (retain, nonatomic) PKServiceProviderPurchase *purchase;
@property (nonatomic) BOOL fieldsVerified;
@property (nonatomic) BOOL acceptedTerms;
@property (retain, nonatomic) UIImage *cardImage;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly, nonatomic) PKPaymentSetupProduct *product;
@property (readonly, nonatomic) PKPaymentSetupPurchaseController *purchaseController;
@property (weak, nonatomic) NSObject<PKPaymentSetupPurchaseViewControllerFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProvisioningController:(id)controller context:(long long)context setupDelegate:(id)delegate product:(id)product;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidAppear:(BOOL)appear;
- (void)preflightWithCompletion:(id /* block */)completion;
- (void)shakeCard;
- (void)didUpdateAmount:(id)amount isValid:(BOOL)valid;
- (void)transferBalanceFromExistingCard;
- (void)paymentSetupPurchaseAmountViewDidLayoutKeyboard:(id)keyboard;
- (void)paymentAuthorizationCoordinator:(id)coordinator didAuthorizePayment:(id)payment handler:(id /* block */)handler;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)finish;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)coordinator;
- (void)paymentAuthorizationCoordinator:(id)coordinator didAuthorizePurchase:(id)purchase completion:(id /* block */)completion;
- (void)viewControllerDidTerminateSetupFlow:(id)flow;
- (void)viewController:(id)controller didShowProvisioningError:(id)error;
- (void)paymentSetupDidFinish:(id)finish;
- (BOOL)_shouldHideImage;
- (BOOL)_isCompactHeight;
- (void)_createSubviews;
- (void)_createConstraints;
- (id)_rightBarButton;
- (id)_spinnerBarButton;
- (void)showSpinner:(BOOL)spinner;
- (void)showKeyPad;
- (void)_showSpinner:(BOOL)spinner;
- (void)_rightBarButtonPressed:(id)pressed;
- (void)_presetPaymentRequest:(id)request forResultType:(long long)type;
- (void)_presentTermsAndConditionsWithCompletion:(id /* block */)completion;
- (struct CGSize { double x0; double x1; })_imageSize;
- (void)_updateBottomHeightConstraint;
@end

#endif /* PKPaymentSetupPurchaseViewController_h */
