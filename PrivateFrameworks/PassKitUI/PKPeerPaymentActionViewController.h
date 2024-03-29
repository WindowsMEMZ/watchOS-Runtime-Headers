//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentActionViewController_h
#define PKPeerPaymentActionViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PKPeerPaymentActionController.h"
#include "PKPeerPaymentActionControllerDelegate-Protocol.h"
#include "PKPeerPaymentActionViewControllerDelegate-Protocol.h"

@class NSDecimalNumber, NSString, PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentAccountFeatureDescriptor, PKPeerPaymentWebService;
@protocol PKPassLibraryDataProvider;

@interface PKPeerPaymentActionViewController : UIViewController<PKPeerPaymentActionControllerDelegate> {
  /* instance variables */
  BOOL _viewHasAppeared;
  BOOL _dismissingViewController;
}

@property (weak, nonatomic) NSObject<PKPeerPaymentActionViewControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<PKPassLibraryDataProvider> *passLibraryDataProvider;
@property (retain, nonatomic) PKPeerPaymentAccount *account;
@property (readonly, nonatomic) PKPeerPaymentActionController *actionController;
@property (nonatomic) unsigned long long controllerAction;
@property (readonly, nonatomic) PKPeerPaymentWebService *webService;
@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) PKPeerPaymentAccountFeatureDescriptor *feature;
@property (copy, nonatomic) NSDecimalNumber *currentAmount;
@property (copy, nonatomic) NSDecimalNumber *cardBalance;
@property (copy, nonatomic) NSDecimalNumber *minBalance;
@property (copy, nonatomic) NSDecimalNumber *maxBalance;
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount;
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount;
@property (nonatomic) BOOL showCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)peerPaymentActionViewControllerForAction:(unsigned long long)action paymentPass:(id)pass webService:(id)service passLibraryDataProvider:(id)provider context:(long long)context;
+ (id)navigationBarBackgroundColor;

/* instance methods */
- (id)initWithPaymentPass:(id)pass webService:(id)service passLibraryDataProvider:(id)provider context:(long long)context;
- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidAppear:(BOOL)appear;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)peerPaymentActionController:(id)controller hasChangedState:(unsigned long long)state;
- (void)peerPaymentActionController:(id)controller requestPresentViewController:(id)controller;
- (id)presentationSceneIdentifierForPeerPaymentActionController:(id)controller;
- (id)presentationSceneBundleIdentifierForPeerPaymentActionController:(id)controller;
- (void)_cancelButtonPressed:(id)pressed;
- (void)_cancelledAction;
- (void)_performedAction;
- (void)willDismissViewController;
- (void)updateFirstResponder;
- (void)updateAccountValues;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)notification;
- (void)_handleApplicationDidBecomeActiveNotification:(id)notification;
- (id)_cancelBarButton;
@end

#endif /* PKPeerPaymentActionViewController_h */
