//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISplitViewControllerClassicImpl_h
#define UISplitViewControllerClassicImpl_h
@import Foundation;

#include "UIBarButtonItem.h"
#include "UIFocusContainerGuide.h"
#include "UIGestureRecognizer.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UILayoutContainerViewDelegate-Protocol.h"
#include "UIPopoverController.h"
#include "UIResponder.h"
#include "UISnapshotView.h"
#include "UISplitViewController.h"
#include "UISplitViewControllerDisplayModeBarButtonItem.h"
#include "UISplitViewControllerImpl-Protocol.h"
#include "UITapGestureRecognizer.h"
#include "UITraitCollection.h"
#include "UIView.h"
#include "UIViewController.h"

@class NSArray, NSString;
@protocol UISplitViewControllerDelegate;

@interface UISplitViewControllerClassicImpl : NSObject<UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UISplitViewControllerImpl> {
  /* instance variables */
  UISplitViewController *_svc;
  UIBarButtonItem *_barButtonItem;
  UISplitViewControllerDisplayModeBarButtonItem *_displayModeButtonItem;
  NSString *_buttonTitle;
  UIPopoverController *_hiddenPopoverController;
  UIView *_rotationSnapshotView;
  UIResponder *_postTransitionResponder;
  UISnapshotView *_collapsingMasterSnapshotView;
  UISnapshotView *_collapsingDetailSnapshotView;
  long long _rotatingFromOrientation;
  long long _lastPresentedOrientation;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rotatingFromMasterViewFrame;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rotatingToMasterViewFrame;
  UIView *_underBarSeparatorView;
  UITraitCollection *_traitCollectionWhenRemovedFromWindow;
  UIGestureRecognizer *_popoverPresentationGestureRecognizer;
  UITapGestureRecognizer *_menuGestureRecognizer;
  long long _effectiveTargetDisplayMode;
  long long _pendingDisplayModeChangeCount;
  long long _rotatingMasterChange;
  BOOL _useChangingBoundsLayout;
  long long _transitioningMasterChange;
  UITraitCollection *_transitioningToTraitCollection;
  long long _transitioningToInternalMode;
  long long _lastNotifiedDisplayMode;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewBoundsBeforeCollapse;
  long long _suspendedState;
  struct { unsigned int x :2 invalidDelegateHiddenMasterAspectRatios; unsigned int x :2 delegateHiddenMasterAspectRatios; unsigned int x :1 delegateImplementsShouldHide; unsigned int x :3 hidden; unsigned int x :1 masterOnSlide; unsigned int x :1 delegateWantsWillShowCallback; unsigned int x :1 delegateWantsWillHideCallback; unsigned int x :1 delegateWantsWillPresentCallback; unsigned int x :1 delegateSupportedInterfaceOrientations; unsigned int x :1 delegatePreferredInterfaceOrientationForPresentation; unsigned int x :1 delegateWantsShowViewController; unsigned int x :1 delegateWantsShowDetailViewController; unsigned int x :1 delegateWantsCollapseSecondaryViewController; unsigned int x :1 delegateWantsSeparateSecondaryViewController; unsigned int x :1 delegateWantsPrimaryViewControllerForCollapse; unsigned int x :1 delegateWantsPrimaryViewControllerForExpanding; unsigned int x :2 collapsedState; unsigned int x :2 primaryHidingState; unsigned int x :2 primaryHidingStateForCurrentOrientation; unsigned int x :1 delegateWantsWillChangeToDisplayMode; unsigned int x :1 delegateWantsTargetDisplayModeForAction; unsigned int x :1 delegateCanModifyFirstResponderOnTraitCollectionTransition; unsigned int x :1 pendingPresentMasterViewController; unsigned int x :1 pendingUpdateTargetDisplayMode; unsigned int x :1 collapsingClockwise; unsigned int x :1 firstResponderChangedFromPostTransitionResponder; unsigned int x :1 firstResponderChangedFromPostTransitionResponderToNil; unsigned int x :1 inWillTransitionToSize; unsigned int x :1 hasTransitioningToInternalMode; unsigned int x :1 delegateImplementsPrivateIsPrimaryVisible; unsigned int x :1 delegateImplementsPrivateCollapseSecondaryViewControllerWhileSuspended; unsigned int x :1 usesExtraWidePrimaryColumn; unsigned int x :1 usesDeviceOverlayPreferences; unsigned int x :1 prefersOverlayInRegularWidthPhone; } _splitViewControllerFlags;
  NSString *_displayModeButtonItemTitle;
}

@property (retain, nonatomic) UIViewController *_preservedDetailController;
@property (copy, nonatomic) id /* block */ _clearPreventRotationHook;
@property (readonly, nonatomic) unsigned long long lastFocusedChildViewControllerIndex;
@property (readonly, nonatomic) UIFocusContainerGuide *masterFocusContainerGuide;
@property (readonly, nonatomic) UIFocusContainerGuide *detailFocusContainerGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) NSObject<UISplitViewControllerDelegate> *delegate;
@property (nonatomic) BOOL presentsWithGesture;
@property (readonly, nonatomic) BOOL collapsed;
@property (nonatomic) long long preferredDisplayMode;
@property (nonatomic) double preferredPrimaryColumnWidthFraction;
@property (nonatomic) double minimumPrimaryColumnWidth;
@property (nonatomic) double maximumPrimaryColumnWidth;
@property (nonatomic) long long primaryEdge;
@property (nonatomic) float gutterWidth;
@property (nonatomic) BOOL hidesMasterViewInPortrait;
@property (nonatomic) BOOL prefersOverlayInRegularWidthPhone;
@property (nonatomic) BOOL usesDeviceOverlayPreferences;
@property (copy, nonatomic) NSString *_displayModeButtonItemTitle;
@property (nonatomic) BOOL usesExtraWidePrimaryColumn;
@property (nonatomic) long long primaryBackgroundStyle;
@property (nonatomic) long long _primaryOffscreenGestureMode;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) BOOL lockedForDelegateCallback;
@property (readonly, nonatomic) BOOL inCollapsingToProposedTopColumnCallback;
@property (readonly, nonatomic) BOOL inExpandingToProposedDisplayModeCallback;

/* class methods */
+ (double)_defaultGutterWidthInView:(id)view;

/* instance methods */
- (id)initWithSplitViewController:(id)controller;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForChildContentContainer:(id)container;
- (void)_commonInit;
- (void)_initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (void)_loadNewSubviews:(id)subviews;
- (BOOL)_shouldPersistViewWhenCoding;
- (void)loadView;
- (void)unloadViewForced:(BOOL)forced;
- (long long)_effectivePrimaryHidingState;
- (long long)_primaryHidingState;
- (void)_setPrimaryHidingState:(long long)state;
- (long long)_primaryHidingStateForCurrentOrientation;
- (void)_setPrimaryHidingStateForCurrentOrientation:(long long)orientation;
- (BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
- (BOOL)_iPhoneShouldUseOverlayIfRegularWidth;
- (long long)_currentInterfaceIdiom;
- (BOOL)_isMasterViewShown;
- (id)_primaryDimmingView;
- (void)_invalidateHidesMasterViewForAspectRatio:(long long)ratio;
- (BOOL)_isHidesMasterInPortraitInvalid;
- (BOOL)_isHidesMasterInLandscapeInvalid;
- (void)_setDelegateHidesMaster:(BOOL)master inAspectRatio:(long long)ratio;
- (BOOL)_defersUpdateDelegateHiddenMasterAspectRatios;
- (void)_updateDelegateHiddenMasterAspectRatios;
- (void)_addOrRemovePopoverPresentationGestureRecognizer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_masterViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_masterViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_detailViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_detailViewFrame;
- (void)_setupHiddenPopoverControllerWithViewController:(id)controller;
- (void)_viewControllerHiding:(id)hiding;
- (double)primaryColumnWidth;
- (struct CGSize { double x0; double x1; })_screenSizeInMainScene:(BOOL)scene;
- (BOOL)_usesExtraWidePrimaryColumn;
- (void)_setUsesExtraWidePrimaryColumn:(BOOL)column;
- (struct CGSize { double x0; double x1; })_preferredContentSize;
- (double)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize { double x0; double x1; })size;
- (double)_primaryColumnWidthForSize:(struct CGSize { double x0; double x1; })size;
- (double)_primaryColumnWidthForSize:(struct CGSize { double x0; double x1; })size isCompact:(BOOL)compact;
- (BOOL)_isExpanding;
- (BOOL)isCollapsed;
- (BOOL)_isCollapsed;
- (void)_setCollapsedState:(long long)state;
- (id)_primaryViewControllerForCollapsing;
- (id)_primaryViewControllerForExpanding;
- (id)_secondaryViewControllerForCollapsing;
- (void)_collapseSecondaryViewController:(id)controller ontoPrimaryViewController:(id)controller;
- (id)_separateSecondaryViewControllerFromPrimaryViewController:(id)controller;
- (BOOL)_canDisplayHostedMaster;
- (BOOL)_isBasicallyHorizontallyCompact;
- (void)_setMasterOverrideTraitCollectionActive:(BOOL)active;
- (id)_childContainingSender:(id)sender;
- (id)_primaryContentResponder;
- (void)showViewController:(id)controller sender:(id)sender;
- (void)showDetailViewController:(id)controller sender:(id)sender;
- (void)_willShowCollapsedDetailViewController:(id)controller inTargetController:(id)controller;
- (void)_prepareForCompactLayout;
- (void)_animateTransitionFromTraitCollection:(id)collection withTransitionCoordinator:(id)coordinator;
- (void)_separateMasterAndDetailWithTransitionCoordinator:(id)coordinator;
- (void)_collapseMasterAndDetailWithTransitionCoordinator:(id)coordinator;
- (void)_collapseMaster:(id)master andDetail:(id)detail withTransitionCoordinator:(id)coordinator;
- (void)_didTransitionTraitCollection;
- (void)_didChangeToFirstResponder:(id)responder;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (id)_deepestUnambiguousResponder;
- (void)_removeCollapsingSnapshotViews;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)container withParentContainerSize:(struct CGSize { double x0; double x1; })size;
- (void)willTransitionToTraitCollection:(id)collection withTransitionCoordinator:(id)coordinator;
- (void)traitCollectionDidChange:(id)change;
- (void)_setupUnderBarSeparatorView;
- (BOOL)_hasMasterViewController;
- (id)masterViewController;
- (id)detailViewController;
- (BOOL)hidesMasterViewInLandscape;
- (BOOL)_hidesMasterViewInCurrentOrientation;
- (BOOL)_hidesMasterViewInOrientation:(long long)orientation medusaState:(long long)state;
- (void)_showMasterViewAnimated:(BOOL)animated;
- (double)_masterPresentationAnimationDuration;
- (BOOL)_effectivePresentsWithGesture;
- (BOOL)_layoutPrimaryOnRight;
- (long long)displayMode;
- (id)_defaultDisplayModes;
- (long long)_defaultTargetDisplayMode;
- (void)_changeToDisplayMode:(long long)mode forCurrentOrientationOnly:(BOOL)only;
- (void)_displayModeWillChangeTo:(long long)to;
- (void)_displayModeDidChange;
- (void)_updateTargetDisplayMode;
- (void)_popoverController:(id)controller willChangeToVisible:(BOOL)visible;
- (void)_popoverController:(id)controller didChangeFromVisible:(BOOL)visible;
- (void)_cacheEffectiveTargetDisplayMode;
- (long long)_effectiveTargetDisplayMode;
- (void)_triggerDisplayModeAction:(id)action;
- (void)_updateDisplayModeButtonItem;
- (id)displayModeButtonItem;
- (void)_displayModeBarButtonItemWasUsedForFirstTime:(id)time;
- (void)_setDisplayModeButtonItemTitle:(id)title;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (BOOL)_optsOutOfPopoverControllerHierarchyCheck;
- (void)_layoutContainerViewDidMoveToWindow:(id)window;
- (BOOL)_shouldPreventAutorotation;
- (void)_layoutContainerViewWillMoveToWindow:(id)window;
- (void)_willBeginSnapshotSession;
- (void)_didEndSnapshotSession;
- (BOOL)_isMasterPopoverVisible;
- (void)_presentMasterViewController:(BOOL)controller;
- (unsigned long long)_targetEdgeForPopover;
- (void)_dismissMasterViewController:(BOOL)controller;
- (void)toggleMasterVisible:(id)visible;
- (void)_descendantWillPresentViewController:(id)controller modalSourceViewController:(id)controller presentationController:(id)controller animated:(BOOL)animated;
- (struct CGSize { double x0; double x1; })_contentSizeForChildViewController:(id)controller inPopoverController:(id)controller;
- (void)popoverWillAppear:(id)appear;
- (BOOL)_shouldUseRelativeInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)controller insetsAreAbsolute:(BOOL *)absolute;
- (void)_marginInfoForChild:(id)child leftMargin:(double *)margin rightMargin:(double *)margin;
- (void)_updateChildContentMargins;
- (double)_contentMarginForChildViewController:(id)controller;
- (void)_setUpFocusContainerGuides;
- (unsigned long long)_lastFocusedChildViewControllerIndex;
- (id)_orderedPreferredFocusedViewControllers;
- (id)preferredFocusedView;
- (id)preferredFocusEnvironments;
- (id)_overridingPreferredFocusEnvironment;
- (BOOL)shouldUpdateFocusInContext:(id)context;
- (void)_didUpdateFocusInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (id)_multitaskingDragExclusionRects;
- (void)_setPrimaryOffscreenGestureMode:(long long)mode;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredLeadingStatusBarStyle;
- (long long)preferredTrailingStatusBarStyle;
- (long long)preferredCenterStatusBarStyle;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)orientation;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_hasPreferredInterfaceOrientationForPresentation;
- (BOOL)_handlesCounterRotationForPresentation;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)_isRotating;
- (long long)_internalModeForTraitCollection:(id)collection orientation:(long long)orientation viewSize:(struct CGSize { double x0; double x1; })size medusaState:(long long)state;
- (long long)_prepareToTransitionToViewSize:(struct CGSize { double x0; double x1; })size fromOrientation:(long long)orientation toOrientation:(long long)orientation duration:(double)duration;
- (void)_animateTransitionToOrientation:(long long)orientation duration:(double)duration masterChange:(long long)change;
- (void)_completeTransitionFromOrientation:(long long)orientation masterChange:(long long)change;
- (BOOL)_isTransitioningFromCollapsedToSeparated;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)snapshotMasterView;
- (void)snapshotAllViews;
- (void)snapshotForRotationFromInterfaceOrientation:(long long)orientation toInterfaceOrientation:(long long)orientation masterChange:(long long)change;
- (void)willRotateToInterfaceOrientation:(long long)orientation duration:(double)duration;
- (void)willAnimateRotationToInterfaceOrientation:(long long)orientation duration:(double)duration;
- (void)didRotateFromInterfaceOrientation:(long long)orientation;
- (void)_updateMasterViewControllerFrame;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_setDetailViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)__viewWillLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)_getRotationContentSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; double x5; int x6; } *)settings;
- (long long)_medusaState;
- (long long)_medusaStateForOrientation:(long long)orientation viewWidth:(double)width;
- (id)_allContainedViewControllers;
- (void)encodeRestorableStateWithCoder:(id)coder;
- (void)decodeRestorableStateWithCoder:(id)coder;
- (id)_additionalViewControllersToCheckForUserActivity;
- (id)_effectiveActivityItemsConfiguration;
- (id)_traitCollectionForChildEnvironment:(id)environment;
- (BOOL)_shouldShowNSToolbarSidebarToggle;
- (BOOL)_isAnimating;
- (double)_primaryDividerPosition;
- (double)_supplementaryDividerPosition;
- (id)_deepestActionResponder;
- (id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)controller;
- (void)_setPreservedDetailController:(id)controller;
- (void)_setClearPreventRotationHook:(id /* block */)hook;
- (id)_masterFocusContainerGuide;
- (id)_detailFocusContainerGuide;
@end

#endif /* UISplitViewControllerClassicImpl_h */
