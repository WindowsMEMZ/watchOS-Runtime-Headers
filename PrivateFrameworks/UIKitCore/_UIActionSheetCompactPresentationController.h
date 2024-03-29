//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIActionSheetCompactPresentationController_h
#define _UIActionSheetCompactPresentationController_h
@import Foundation;

#include "UIPresentationController.h"
#include "UIActionSheetPresentationControllerVisualStyle-Protocol.h"
#include "UILongPressGestureRecognizer.h"
#include "UITapGestureRecognizer.h"
#include "UIView.h"
#include "_UIActionSheetCompactPresentationControllerDelegate-Protocol.h"
#include "_UIAnimationCoordinator.h"
#include "_UIDimmingKnockoutBackdropView.h"

@class NSString;
@protocol UIView<UIActionSheetPresentationControllerDismissActionView;

@interface _UIActionSheetCompactPresentationController : UIPresentationController

@property (nonatomic) BOOL shouldAdoptPresentedAppearance;
@property (retain, nonatomic) UIView<UIActionSheetPresentationControllerDismissActionView> *dismissActionView;
@property (retain, nonatomic) UILongPressGestureRecognizer *dismissActionViewGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *dimmingViewDismissTapGestureRecognizer;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) _UIDimmingKnockoutBackdropView *backdropView;
@property (retain, nonatomic) _UIAnimationCoordinator *animationCoordinator;
@property (retain, nonatomic) NSObject<UIActionSheetPresentationControllerVisualStyle> *visualStyle;
@property (nonatomic) double pseudoAlertPreferredTop;
@property (nonatomic) BOOL hasPendingAnimatedLayout;
@property (copy, nonatomic) NSString *dismissActionTitle;
@property (nonatomic) BOOL avoidsKeyboardDisabled;
@property (nonatomic) BOOL dismissActionUsesShorterHeightWhenCompactVertically;
@property (weak, nonatomic) NSObject<_UIActionSheetCompactPresentationControllerDelegate> *actionSheetDelegate;

/* instance methods */
- (id)initWithPresentedViewController:(id)controller presentingViewController:(id)controller visualStyle:(id)style;
- (void)dealloc;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (BOOL)_shouldOccludeDuringPresentation;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_baseContentInsetsWithLeftMargin:(double *)margin rightMargin:(double *)margin;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)_transitionToPresentationController:(id)controller withTransitionCoordinator:(id)coordinator;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfPresentedViewControllerViewInSuperview;
- (void)_layoutViews;
- (void)_applyVisualAffordancesToViews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)presentationTransitionWillBegin;
- (void)_willRunTransitionForCurrentStateDeferred:(BOOL)deferred;
- (void)dismissalTransitionWillBegin;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (void)_subscribeToKeyboardNotifications;
- (void)_unsubscribeFromKeyboardNotifications;
- (void)_keyboardChanged:(id)changed;
- (void)_updateForKeyboardStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)beginPseudoAlertPresentationMode;
- (void)endPseudoAlertPresentationMode;
- (void)_dismiss;
- (void)_handleDismiss:(id)dismiss;
- (struct { BOOL x0; double x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGSize { double x0; double x1; } x3; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x4; double x5; BOOL x6; BOOL x7; struct CGSize { double x0; double x1; } x8; })_currentLayoutGeometry;
- (BOOL)_shouldDisableAvoidsKeyboard;
- (struct CGSize { double x0; double x1; })_minimumSizeForDismissButton;
- (double)_resizeAnimationDuration;
@end

#endif /* _UIActionSheetCompactPresentationController_h */
