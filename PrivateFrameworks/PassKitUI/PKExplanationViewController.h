//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKExplanationViewController_h
#define PKExplanationViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PKExplanationView.h"
#include "PKExplanationViewControllerDelegate-Protocol.h"
#include "PKExplanationViewDelegate-Protocol.h"
#include "PKPaymentSetupPresentationProtocol-Protocol.h"

@class NSString, UIActivityIndicatorView, UIBarButtonItem;

@interface PKExplanationViewController : UIViewController<PKPaymentSetupPresentationProtocol, PKExplanationViewDelegate> {
  /* instance variables */
  UIBarButtonItem *_spinningItem;
  UIBarButtonItem *_hiddenRightBarButtonItem;
  UIActivityIndicatorView *_activityIndicatorView;
  BOOL _showingSpinner;
  BOOL _wasBackHidden;
}

@property (weak, nonatomic) NSObject<PKExplanationViewControllerDelegate> *explanationViewControllerDelegate;
@property (readonly, nonatomic) long long context;
@property (nonatomic) BOOL showCancelButton;
@property (nonatomic) BOOL showDoneButton;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) BOOL prefersCloseButtonOnLeft;
@property (readonly, nonatomic) PKExplanationView *explanationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithContext:(long long)context;
- (void)loadView;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewWillLayoutSubviews;
- (void)_cancelPressed;
- (void)_donePressed;
- (void)_dismissViewController;
- (void)showNavigationBarSpinner:(BOOL)spinner;
- (void)showSpinner:(BOOL)spinner;
- (void)_setNavigationBarEnabled:(BOOL)enabled;
- (unsigned long long)paymentSetupMarker;
- (BOOL)paymentSetupMarkerRemovalIsInclusive;
@end

#endif /* PKExplanationViewController_h */
