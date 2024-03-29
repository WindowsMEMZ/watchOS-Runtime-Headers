//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLEcoModeConfirmationAlertViewController_h
#define CSLEcoModeConfirmationAlertViewController_h
@import Foundation;

#include "CUISAlertViewController.h"
#include "CSLEcoModeConfirmationAlertViewControllerDelegate-Protocol.h"
#include "CSLEcoModeConfirmationView.h"
#include "CSLEcoModeConfirmationViewButtonProtocol-Protocol.h"
#include "CUISAlertAnimatedTransitioning-Protocol.h"

@class NSString;

@interface CSLEcoModeConfirmationAlertViewController : CUISAlertViewController<CUISAlertAnimatedTransitioning, CSLEcoModeConfirmationViewButtonProtocol>

@property (nonatomic) BOOL hasCalledDismiss;
@property (weak, nonatomic) CSLEcoModeConfirmationView *confirmationView;
@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) NSObject<CSLEcoModeConfirmationAlertViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)buttonPressed:(id)pressed withResult:(BOOL)result;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (id)alert;
- (id)alertActionAtIndex:(unsigned long long)index;
- (id)animationControllerForPresentation;
- (id)animationControllerForDismissal;
- (void)callDidDismissIfNeededWithShouldEnterEcoMode:(BOOL)mode;
- (void)displayAlert:(BOOL)alert withCompletion:(id /* block */)completion;
- (void)dismissAlert:(BOOL)alert withCompletion:(id /* block */)completion;
- (void)_createTopLevelViewsIfNecessary;
- (void)_destroyTopLevelViews;
- (void)animateAlertTransition:(id)transition;
- (double)alertTransitionDuration:(id)duration;
@end

#endif /* CSLEcoModeConfirmationAlertViewController_h */
