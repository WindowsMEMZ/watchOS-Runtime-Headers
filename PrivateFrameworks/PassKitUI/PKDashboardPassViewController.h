//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDashboardPassViewController_h
#define PKDashboardPassViewController_h
@import Foundation;

#include "PKDashboardViewController.h"
#include "PKAccountServiceObserver-Protocol.h"
#include "PKDashboardAccountModulePresenter.h"
#include "PKDashboardMoreMenuFactory.h"
#include "PKDashboardMoreMenuFactoryDelegate-Protocol.h"
#include "PKDashboardPassFlowLayout.h"
#include "PKDashboardPassTilesItemPresenterDelegate-Protocol.h"
#include "PKDashboardPaymentPassDataSourceDelegate-Protocol.h"
#include "PKDashboardPaymentTransactionItemPresenter.h"
#include "PKForegroundActiveArbiterObserver-Protocol.h"
#include "PKInvalidatable-Protocol.h"
#include "PKPGSVTransitionInterstitialController.h"
#include "PKPGSVTransitionInterstitialProvider-Protocol.h"
#include "PKPassPresentationContext.h"
#include "_PKVisibilityBackdropView.h"
#include "_PKVisibilityBackdropViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, PKAccountService, PKPass, PKPaymentPass, UIButton;
@protocol OS_dispatch_queue, PKDashboardPassViewControllerDelegate><PKDashboardDelegate;

@interface PKDashboardPassViewController : PKDashboardViewController<PKForegroundActiveArbiterObserver, PKPGSVTransitionInterstitialProvider, _PKVisibilityBackdropViewDelegate, PKDashboardPassTilesItemPresenterDelegate, PKDashboardPaymentPassDataSourceDelegate, PKAccountServiceObserver, PKDashboardMoreMenuFactoryDelegate, PKInvalidatable> {
  /* instance variables */
  PKPGSVTransitionInterstitialController *_activeInterstitialController;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableArray *_sessionHandles;
  struct { BOOL foreground; BOOL foregroundActive; } _foregroundActiveState;
  unsigned int _deactivationReasons;
  unsigned char _visibility;
  BOOL _footerVisible;
  PKPaymentPass *_frontmostPaymentPass;
  _PKVisibilityBackdropView *_footerBackground;
  struct CGSize { double width; double height; } _defaultPasscodeButtonSize;
  UIButton *_passcodeButton;
  PKAccountService *_accountService;
  PKDashboardMoreMenuFactory *_moreMenuFactory;
  NSArray *_navBarButtonTypes;
  PKPassPresentationContext *_context;
}

@property (weak, @dynamic, nonatomic) NSObject<PKDashboardPassViewControllerDelegate><PKDashboardDelegate> *delegate;
@property (retain, nonatomic) PKPass *frontmostPass;
@property (readonly, nonatomic) PKDashboardPassFlowLayout *passFlowLayout;
@property (readonly, nonatomic) PKDashboardPaymentTransactionItemPresenter *transactionPresenter;
@property (readonly, nonatomic) PKDashboardAccountModulePresenter *accountModulePresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, @dynamic, nonatomic) BOOL invalidated;

/* instance methods */
- (id)initWithDataSource:(id)source presenters:(id)presenters layout:(id)layout;
- (id)initWithPass:(id)pass;
- (id)initWithPassGroupView:(id)view context:(id)context presentingViewController:(id)controller;
- (void)_setupNavigationItemsAnimated:(BOOL)animated;
- (id)navigationDashboardPassVC;
- (void)_updateNavigationItemsWithAccount:(id)account;
- (void)_displayAccountErrorIfNecessary;
- (void)dealloc;
- (void)invalidate;
- (void)loadView;
- (id)bigInfoButton;
- (id)moreInfoButton;
- (id)_dashboardInfoButtonWithImage:(id)image;
- (void)infoTapped:(id)tapped;
- (void)moreMenuTriggered:(id)triggered;
- (id)searchButton;
- (id)presentCardNumbersButtonForAccount:(id)account;
- (double)_navBarButtonSpaceWidth;
- (id)doneButton;
- (void)configureMoreMenuFactoryWithPass:(id)pass;
- (void)reloadMoreMenuItemsWithMenu:(id)menu;
- (id)_navigationBarButtonForType:(unsigned long long)type account:(id)account;
- (id)_shareNavigationBarButtonTypesForPass:(id)pass;
- (id)_navigationBarButtonTypesForAppleCardPass:(id)pass account:(id)account;
- (id)_navigationBarButtonTypesForPeerPaymentPass:(id)pass;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)reportEventForPassIfNecessary:(id)necessary;
- (void)viewSafeAreaInsetsDidChange;
- (void)traitCollectionDidChange:(id)change;
- (void)viewWillLayoutSubviews;
- (void)_afterDataSourceContentLoadedUpdateNavigationItemsForPass:(id)pass;
- (BOOL)isInvalidated;
- (void)_visibilityDidChange;
- (void)_updateDigitalCarKeyAssertion;
- (void)_updateFingerDetection;
- (void)_updateFooterAnimated:(BOOL)animated;
- (void)_createFooter;
- (void)_updatePasscodeButtonTitle;
- (id)_passcodeButtonTitle;
- (void)_updateDefaultPasscodeButtonSize;
- (void)_passcodeTapped:(id)tapped;
- (void)accountAdded:(id)added;
- (void)accountChanged:(id)changed;
- (void)accountRemoved:(id)removed;
- (void)_handleUpdatedAccount:(id)account accountRemoved:(BOOL)removed;
- (void)reloadNavigationBarAnimated:(BOOL)animated;
- (void)presentActivityDeletionConfirmationWithCompletion:(id /* block */)completion;
- (void)_performActivationStateUpdate:(id /* block */)update;
- (void)foregroundActiveArbiter:(id)arbiter didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })state;
- (void)foregroundActiveArbiter:(id)arbiter didUpdateDeactivationReasons:(unsigned int)reasons;
- (BOOL)_isDeactivated;
- (BOOL)_isBackgrounded;
- (BOOL)_isForegroundActive;
- (long long)visibilityBackdropView:(id)view preferredStyleForTraitCollection:(id)collection;
- (void)menuFactoryDidUpdateMenu:(id)menu;
- (id)interstitialProvider;
- (void)bindInterstitialController:(id)controller;
- (void)unbindInterstitialController:(id)controller;
- (id)leadingViewsForInterstitialController:(id)controller;
- (id)trailingViewsForInterstitialController:(id)controller;
- (void)passTilesItemPresenter:(id)presenter executeSEActionForPass:(id)pass tile:(id)tile withCompletion:(id /* block */)completion;
@end

#endif /* PKDashboardPassViewController_h */
