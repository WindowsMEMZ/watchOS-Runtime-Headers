//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICStatusBar_h
#define PUICStatusBar_h
@import Foundation;

#include "UIStatusBar.h"
#include "PUICStatusBarAppContextView.h"
#include "PUICStatusBarAppContextViewDataSource-Protocol.h"
#include "PUICStatusBarAppContextViewDelegate-Protocol.h"
#include "PUICStatusBarAppContextViewObserver-Protocol.h"
#include "PUICStatusBarGlobalContextViewAssertion.h"
#include "PUICStatusBarWindowSceneCoordinator.h"

@class NSString, UIViewController;
@protocol UIView<PUICStatusBarGlobalContext;

@interface PUICStatusBar : UIStatusBar<PUICStatusBarAppContextViewObserver, PUICStatusBarAppContextViewDelegate> {
  /* instance variables */
  unsigned int _appContextViewAssertionCount;
  unsigned int _globalContextViewAssertionCount;
  double _labelOffset;
  NSObject<PUICStatusBarAppContextViewDataSource> *_explicitDataSource;
  BOOL _needsAppContextUpdate;
  BOOL _animatedAppContextUpdate;
  PUICStatusBarGlobalContextViewAssertion *_globalContextAssertion;
  BOOL _initialTimeHidden;
  BOOL _initialIndicatorsHidden;
  BOOL _rendersAppContextView;
  PUICStatusBarWindowSceneCoordinator *_windowSceneCoordinator;
}

@property (nonatomic) BOOL hidden;
@property (retain, nonatomic) UIView<PUICStatusBarGlobalContext> *globalContextView;
@property (weak, nonatomic) UIViewController *keyViewController;
@property (nonatomic) BOOL shouldAnimateOnTitleContextChanges;
@property (retain, nonatomic) PUICStatusBarAppContextView *appContextView;
@property (nonatomic) BOOL titleViewChargeEnabled;
@property (nonatomic) unsigned long long layoutBehavior;
@property (nonatomic) unsigned long long timeStyle;
@property (nonatomic) BOOL suppressAirplaneModeIndicator;
@property (nonatomic) BOOL suppressDisconnectedIndicator;
@property (nonatomic) BOOL suppressChargingIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (void)_newAppContextCreated:(id)created;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameInSceneReferenceSpaceForStyle:(long long)style orientation:(long long)orientation inSceneWithReferenceSize:(struct CGSize { double x0; double x1; })size;
+ (double)heightForStyle:(long long)style orientation:(long long)orientation;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)didMoveToWindow;
- (void)_setFrameForStyle:(id)style;
- (void)dealloc;
- (void)_createAppContextViewIfNonNil;
- (void)_createGlobalContextViewIfNeeded;
- (BOOL)_shouldReverseLayoutDirection;
- (void)_layoutAppContextViewIfNeeded;
- (void)_layoutGlobalContextView;
- (void)_forceCreateSubviewsIfNeeded;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (BOOL)isTitleViewChargeEnabled;
- (void)setKeyViewController:(id)controller animated:(BOOL)animated;
- (id)keyViewController:(BOOL)controller;
- (void)updateApplicationContextAnimated:(BOOL)animated;
- (BOOL)isAppContextTitleTruncationAnimationRunning;
- (void)setApplicationContextDataSource:(id)source animated:(BOOL)animated;
- (id)currentApplicationContextDataSource;
- (void)setApplicationContextDelegate:(id)delegate;
- (id)currentApplicationContextDelegate;
- (void)takeDisableAppContextAnimationsAssertion;
- (void)releaseDisableAppContextAnimationsAssertion;
- (void)takeDisableTitleTruncationTimerAssertion;
- (void)releaseDisableTitleTruncationTimerAssertion;
- (id)takeAppContextAssertion;
- (id)takeAppContextAssertionAnimated:(BOOL)animated;
- (id)takeAppContextAssertionAnimated:(BOOL)animated duration:(double)duration;
- (void)releaseAppContextViewAssertion:(id)assertion;
- (void)titleTruncationAnimationWillBeginForAppContextView:(id)view durationOfFade:(double)fade;
- (void)titleTruncationAnimationDidCompleteForAppContextView:(id)view durationOfFade:(double)fade;
- (BOOL)navPressedForStatusBarAppContext:(id)context;
- (BOOL)titlePressedForStatusBarAppContext:(id)context;
- (BOOL)mayAnimateTitleChangesForStatusBarAppContext:(id)context;
- (BOOL)rightSideImageTappedForStatusBarAppContext:(id)context imageIndex:(unsigned long long)index;
- (BOOL)needsPhoneConnectivity;
- (void)setNeedsPhoneConnectivity:(BOOL)connectivity;
- (BOOL)isAirplaneModeIndicatorSuppressed;
- (BOOL)isDisconnectedIndicatorSuppressed;
- (BOOL)isChargingIndicatorSuppressed;
- (BOOL)isTimeHidden;
- (void)setTimeHidden:(BOOL)hidden animated:(BOOL)animated completion:(id /* block */)completion;
- (BOOL)areIndicatorsHidden;
- (void)setIndicatorsHidden:(BOOL)hidden animated:(BOOL)animated completion:(id /* block */)completion;
- (id)takeGlobalContextAssertion;
- (id)takeGlobalContextAssertionAnimated:(BOOL)animated;
- (id)takeGlobalContextAssertionAnimated:(BOOL)animated duration:(double)duration;
- (void)releaseGlobalContextViewAssertion:(id)assertion;
- (void)requestStyle:(long long)style animationParameters:(id)parameters;
- (void)requestStyle:(long long)style animated:(BOOL)animated;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)setHidden:(BOOL)hidden animationParameters:(id)parameters;
- (void)setStyleDelegate:(id)delegate;
- (void)setOrientation:(long long)orientation;
- (void)_setOverrideHeight:(double)height;
- (double)heightForOrientation:(long long)orientation;
- (void)setTintColor:(id)color withDuration:(double)duration;
- (double)currentHeight;
- (long long)currentStyle;
- (BOOL)isTranslucent;
- (BOOL)_isTransparent;
- (BOOL)isDoubleHeight;
- (void)forceUpdateDoubleHeightStatus;
- (void)_statusBarWillAnimateRotation;
- (void)_statusBarDidAnimateRotation;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_hiddenTransformForHideAnimationParameters:(id)parameters;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)_evaluateServerRegistration;
- (void)_updateShouldRasterize;
- (void)_handleBecomeKeyWindow:(id)window;
- (void)_handleResignKeyWindow:(id)window;
- (void)_handleCubicTitleViewUpdate:(id)update;
@end

#endif /* PUICStatusBar_h */
