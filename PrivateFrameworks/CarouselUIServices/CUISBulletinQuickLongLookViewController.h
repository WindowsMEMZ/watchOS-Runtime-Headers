//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISBulletinQuickLongLookViewController_h
#define CUISBulletinQuickLongLookViewController_h
@import Foundation;

#include "UIViewController.h"
#include "CUISAlertChevronView.h"
#include "CUISAlertHeaderView.h"
#include "CUISAlertHeaderViewDelegate-Protocol.h"
#include "CUISAlertPlatterView.h"
#include "CUISAlertPlatterViewCoordinator.h"
#include "CUISAlertPresentationPolicy.h"
#include "CUISAlertQuickLongLookScrollView.h"
#include "CUISBulletinActionMenu.h"
#include "CUISBulletinClientViewController.h"
#include "CUISBulletinClientViewControllerDelegate-Protocol.h"
#include "CUISBulletinQuickLongLook-Protocol.h"
#include "CUISBulletinQuickLongLookViewControllerWatchGesturesManager.h"
#include "CUISNotificationContentAnimating-Protocol.h"
#include "CUISNotificationContentClippingView.h"
#include "CUISNotificationContentEffectView.h"
#include "CUISQuickLongLookSlideDownDismissalAnimator.h"
#include "CUISSiriContextProvider-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class CSLSDetentsAssertion, NSDictionary, NSMutableArray, NSString, PUICDeepScrollViewNotchProvider, PUICScrollViewNotchProvider, UIView, WatchQuickAction;
@protocol CUISAlertHeaderViewDataSource, CUISBulletinQuickLongLookViewControllerDelegate;

@interface CUISBulletinQuickLongLookViewController : UIViewController<CUISBulletinClientViewControllerDelegate, CUISAlertHeaderViewDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, CUISBulletinQuickLongLook, CUISSiriContextProvider> {
  /* instance variables */
  BOOL _scrollToBottomOnResize;
  BOOL _pendingLayoutSubviews;
  BOOL _isPreparedForDismissal;
  NSMutableArray *_dismissalCompletionBlocks;
  BOOL _supportsModernUI;
}

@property (weak, nonatomic) NSObject<CUISBulletinQuickLongLookViewControllerDelegate> *delegate;
@property (retain, nonatomic) CUISBulletinActionMenu *menu;
@property (retain, nonatomic) CUISAlertHeaderView *header;
@property (retain, nonatomic) CUISAlertChevronView *topChevron;
@property (retain, nonatomic) CUISAlertQuickLongLookScrollView *scrollView;
@property (retain, nonatomic) CUISNotificationContentEffectView *contentEffectView;
@property (retain, nonatomic) CUISNotificationContentClippingView *contentClippingView;
@property (retain, nonatomic) CUISQuickLongLookSlideDownDismissalAnimator *slideDownAnimator;
@property (retain, nonatomic) PUICDeepScrollViewNotchProvider *notchProvider;
@property (weak, nonatomic) PUICScrollViewNotchProvider *activeNotchProvider;
@property (retain, nonatomic) UIView *topContainerView;
@property (nonatomic) struct CGSize { double x0; double x1; } contentFitSize;
@property (retain, nonatomic) CUISAlertPlatterView *headerCompatibilityPlatterView;
@property (retain, nonatomic) CUISAlertPlatterViewCoordinator *alertPlatterViewCoordinator;
@property (readonly, nonatomic) NSObject<CUISNotificationContentAnimating> *contentAnimator;
@property (readonly, nonatomic) NSObject<CUISNotificationContentAnimating> *contentEffectAnimator;
@property (readonly, nonatomic) BOOL supportsCoordinatedPlatters;
@property (retain, nonatomic) WatchQuickAction *dismissQuickAction;
@property (readonly, nonatomic) unsigned long long longLookHeaderStyle;
@property (retain, nonatomic) CUISBulletinQuickLongLookViewControllerWatchGesturesManager *watchGesturesManager;
@property (retain, nonatomic) CSLSDetentsAssertion *detentsAssertion;
@property (retain, nonatomic) NSDictionary *customInfo;
@property (retain, nonatomic) CUISBulletinClientViewController *clientContent;
@property (retain, nonatomic) NSObject<CUISAlertHeaderViewDataSource> *headerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CUISAlertPresentationPolicy *presentationPolicy;
@property (readonly) BOOL supportsBannerLook;

/* class methods */
+ (void)initialize;
+ (unsigned long long)presentationModeForHeaderStyle:(long long)style;
+ (long long)headerStyleForPresentationMode:(unsigned long long)mode;
+ (double)roundUpToHalfOrFullPoint:(double)point;

/* instance methods */
- (id)initWithClientViewController:(id)controller customInfo:(id)info;
- (id)initWithClientViewController:(id)controller customInfo:(id)info supportsModernUI:(BOOL)ui;
- (id)_setupCustomInfoHeaderStyle:(id)style controller:(id)controller;
- (void)dealloc;
- (void)_cleanupViews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)quickboardDidDismissed;
- (void)_requestFirstResponder;
- (id)_menuScrollView;
- (void)setUpConstraints;
- (void)viewWillLayoutSubviews;
- (void)_layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateClientContentFrame;
- (void)preloadIconsWithCompletion:(id /* block */)completion;
- (void)reloadHeaderInfo;
- (void)_updateHeaderFrame;
- (void)_updateContentFitSize;
- (void)_scrollToBottom;
- (void)_scrollToButtons;
- (BOOL)shouldHandleTapAtPoint:(struct CGPoint { double x0; double x1; })point inHeaderView:(BOOL)view;
- (void)_didTapBody:(id)body;
- (BOOL)allowsCrownButtonDismissal;
- (BOOL)hasPresentedViewController;
- (void)prepareDismissal;
- (void)prepareDismissalWithCompletion:(id /* block */)completion;
- (void)_performDismissalCompletionBlocks;
- (void)clientViewControllerRequestsDismissal:(id)dismissal;
- (void)clientViewControllerPerformedAction:(id)action;
- (void)_clientViewControllerPerformedAction;
- (void)clientViewController:(id)controller requestPerformActionResponse:(id)response completion:(id /* block */)completion;
- (void)clientViewController:(id)controller requestActionCompletionForActionResponse:(id)response;
- (void)clientViewControllerNeedsResizeViews:(id)views;
- (void)clientViewControllerRequestsScrollToBottom:(id)bottom;
- (void)clientViewControllerRequestsAutoScrollToBottom:(id)bottom;
- (void)clientViewControllerRequestsScrollToActionButtons:(id)buttons;
- (void)clientViewController:(id)controller scrollToContentOffset:(double)offset animated:(BOOL)animated;
- (void)clientViewController:(id)controller requestsReloadHeaderWithCustomInfo:(id)info;
- (void)clientViewControllerInvalidateBlurredHeaderContent:(id)content;
- (id)clientViewControllerGetScrollView:(id)view;
- (id)clientViewControllerGetBackgroundView:(id)view;
- (void)clientViewController:(id)controller insertTemporaryBackground:(id)background;
- (void)setCustomScrollViewNotchProvider:(id)provider;
- (void)clientViewControllerDidChangeGestureActionViews:(id)views;
- (void)didTapIconInHeaderView:(id)view;
- (void)didTapQuickLookInHeaderView:(id)view;
- (void)styleDidChangeForHeaderView:(id)view;
- (BOOL)wantsLayoutToLongLookIconGuide;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)bannerDismissedForHeaderView:(id)view;
- (BOOL)_shouldUseContentOffset:(struct CGPoint { double x0; double x1; })offset inClientView:(struct CGPoint { double x0; double x1; } *)view;
- (struct CGPoint { double x0; double x1; })_contentOffsetInClientView;
- (void)scrollViewDidScroll:(id)scroll;
- (void)enableMinorDetentsIfNecessary;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)_handleScrollDidEnd:(id)end;
- (BOOL)_scrollViewPastTopThreshold:(double)threshold;
- (BOOL)_draggedPastTopThreshold;
- (void)_addClientView;
- (void)setPresentationMode:(unsigned long long)mode;
- (unsigned long long)presentationMode;
- (void)setQuickLongLookDelegate:(id)delegate;
- (void)animateInQuickLookWithDuration:(double)duration completion:(id /* block */)completion;
- (void)_didFinishAnimatingToLongLook;
- (void)_setupQuickAction;
- (void)_setupGestureInteractions;
- (void)animateInLongLookWithDuration:(double)duration completion:(id /* block */)completion;
- (id)animationContextWithCompletion:(id /* block */)completion;
- (void)animateToLongLookIfReadyWithCompletion:(id /* block */)completion;
- (void)completeAnimateToLongLook:(BOOL)look completion:(id /* block */)completion;
- (void)addAlertPlatterViewCoordinatorIfNecessaryWithAnimationContext:(id)context bannerMode:(BOOL)mode;
- (void)animateDismissLongLookWithCompletion:(id /* block */)completion;
- (void)animateSlideDownDismissLongLookWithCompletion:(id /* block */)completion;
- (BOOL)hasSelectedAction;
- (id)childViewControllerForStatusBarHidden;
- (void)setActionMenu:(id)menu;
- (void)_setEllipticScrollingEnabled:(BOOL)enabled;
- (void)alertBackgroundDidChange;
- (id)alertSuppressionContexts;
- (id)headerActionLaunchOptions;
- (void)willAnimateToLongLook;
- (void)animateBannerDismissalWithScaleTransform:(BOOL)transform completion:(id /* block */)completion;
- (id)createSiriContext;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
@end

#endif /* CUISBulletinQuickLongLookViewController_h */
