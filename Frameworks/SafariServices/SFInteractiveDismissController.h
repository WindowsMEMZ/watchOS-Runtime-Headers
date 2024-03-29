//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFInteractiveDismissController_h
#define SFInteractiveDismissController_h
@import Foundation;

#include "UIPercentDrivenInteractiveTransition.h"
#include "SFInteractiveDismissControllerDelegate-Protocol.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIScreenEdgePanGestureRecognizer, UIView, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface SFInteractiveDismissController : UIPercentDrivenInteractiveTransition<UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {
  /* instance variables */
  NSObject<UIViewControllerContextTransitioning> *_transitionContext;
  unsigned long long _dismissMode;
  long long _interactionState;
  double _timestamps[3];
  double _velocities[3];
  double _accelerations[3];
  UIView *_dimmingView;
}

@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) double totalDistance;
@property (nonatomic) double skipTimeStamp;
@property (nonatomic) double previousTimeStamp;
@property (nonatomic) double previousDisplacement;
@property (nonatomic) double previousVelocity;
@property (nonatomic) double previousAcceleration;
@property (nonatomic) double averageVelocity;
@property (nonatomic) double averageAcceleration;
@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *edgeSwipeGestureRecognizer;
@property (weak, nonatomic) UIViewController *viewControllerToBeDismissed;
@property (retain, nonatomic) UIView *edgeSwipeView;
@property (weak, nonatomic) NSObject<SFInteractiveDismissControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)startInteractiveTransition:(id)transition;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)swiped:(id)swiped;
- (double)_percentComplete:(id)complete;
- (void)_animateDismissalCancelTransition;
- (void)_animateDismissalCompleteTransition;
- (double)_translationCoefficient;
- (struct CGPoint { double x0; double x1; })translationForStatistics;
- (struct CGPoint { double x0; double x1; })velocityForStatistics;
- (void)_updateStatistics:(id)statistics firstSample:(BOOL)sample finalSample:(BOOL)sample;
- (BOOL)popGesture:(id)gesture withRemainingDuration:(double)duration shouldPopWithVelocity:(double *)velocity;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (void)_dismissAnimateTransition:(id)transition;
- (void)_presentAnimateTransition:(id)transition;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)interactionControllerForDismissal:(id)dismissal;
@end

#endif /* SFInteractiveDismissController_h */
