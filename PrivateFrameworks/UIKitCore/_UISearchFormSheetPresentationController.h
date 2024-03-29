//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISearchFormSheetPresentationController_h
#define _UISearchFormSheetPresentationController_h
@import Foundation;

#include "UIPresentationController.h"
#include "UIView.h"
#include "_UISearchControllerPresenting-Protocol.h"
#include "_UISearchPresentationAssistant.h"

@class NSString;
@protocol UIPresentationController<_UISearchControllerPresenting;

@interface _UISearchFormSheetPresentationController : UIPresentationController<_UISearchControllerPresenting> {
  /* instance variables */
  _UISearchPresentationAssistant *_assistant;
  UIView *_wrapperView;
}

@property (readonly, retain, nonatomic) UIView *searchBarContainerView;
@property (readonly, nonatomic) BOOL shouldAccountForStatusBar;
@property (readonly, nonatomic) double statusBarAdjustment;
@property (readonly, nonatomic) BOOL searchBarToBecomeTopAttached;
@property (readonly, nonatomic) BOOL resultsUnderlapsSearchBar;
@property (readonly, nonatomic) BOOL searchBarCanContainScopeBar;
@property (readonly, nonatomic) BOOL searchBarShouldClipToBounds;
@property (readonly, nonatomic) double resultsControllerContentOffset;
@property (readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } finalFrameForContainerView;
@property (readonly, nonatomic) BOOL animatorShouldLayoutPresentationViews;
@property (readonly, nonatomic) BOOL forceObeyNavigationBarInsets;
@property (readonly, nonatomic) unsigned long long edgeForHidingNavigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPresentedViewController:(id)controller presentingViewController:(id)controller;
- (void)dealloc;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)end;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)end;
- (id)presentedView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)containerViewWillLayoutSubviews;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfPresentedViewControllerViewInSuperview;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)_shouldSubscribeToKeyboardNotifications;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (void)_presentedView:(id)view enableFormSheetAccoutrements:(BOOL)accoutrements;
- (void)traitCollectionDidChange:(id)change;
- (void)_transitionToWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionToPresentationController:(id)controller withTransitionCoordinator:(id)coordinator;
- (long long)adaptivePresentationStyle;
- (id)_presentedViewControllerForPresentationController:(id)controller traitCollection:(id)collection;
- (id)_presentationControllerForTraitCollection:(id)collection;
- (void)setContentVisible:(BOOL)visible;
@end

#endif /* _UISearchFormSheetPresentationController_h */
