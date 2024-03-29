//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIViewControllerTransitionContext_h
#define _UIViewControllerTransitionContext_h
@import Foundation;

#include "UIView.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerContextTransitioningEx-Protocol.h"
#include "UIViewControllerInteractiveTransitioning-Protocol.h"
#include "_UIViewControllerTransitionCoordinator.h"

@class NSArray, NSString;

@interface _UIViewControllerTransitionContext : NSObject<UIViewControllerContextTransitioningEx> {
  /* instance variables */
  double _previousPercentComplete;
  NSArray *_disabledViews;
  struct { unsigned int x :1 interactorImplementsCompletionSpeed; unsigned int x :1 interactorImplementsCompletionCurve; unsigned int x :1 transitionWasCancelled; unsigned int x :1 transitionIsCompleting; unsigned int x :1 transitionIsInterruptible; } _transitionContextFlags;
}

@property (nonatomic) BOOL initiallyInteractive;
@property (nonatomic) BOOL currentlyInteractive;
@property (nonatomic) BOOL interruptible;
@property (nonatomic) double _completionVelocity;
@property (nonatomic) long long _completionCurve;
@property (nonatomic) BOOL _transitionIsCompleting;
@property (retain, nonatomic) _UIViewControllerTransitionCoordinator *_auxContext;
@property (nonatomic) long long _state;
@property (copy, nonatomic) id /* block */ _interactiveUpdateHandler;
@property (copy, nonatomic) id /* block */ _postInteractiveCompletionHandler;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) BOOL _isPresentation;
@property (retain, nonatomic) NSArray *_containerViews;
@property (nonatomic) double _percentOffset;
@property (weak, nonatomic) NSObject<UIViewControllerAnimatedTransitioning> *_animator;
@property (weak, nonatomic) NSObject<UIViewControllerInteractiveTransitioning> *_interactor;
@property (nonatomic) BOOL _allowUserInteraction;
@property (nonatomic) BOOL rotating;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } affineTransform;
@property (readonly, nonatomic) BOOL animated;
@property (nonatomic) double _duration;
@property (copy, nonatomic) id /* block */ _willCompleteHandler;
@property (copy, nonatomic) id /* block */ _completionHandler;
@property (copy, nonatomic) id /* block */ _didCompleteHandler;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) BOOL interactive;
@property (readonly, nonatomic) BOOL transitionWasCancelled;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } targetTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_associatedTransitionContextForAnimationController:(id)controller;
+ (id)_associatedTransitionContextsForInteractionController:(id)controller;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_setContainerView:(id)view;
- (void)_setAnimator:(id)animator;
- (void)_setInteractor:(id)interactor;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_affineTransform;
- (BOOL)isInteractive;
- (id)_transitionCoordinator;
- (double)_previousPercentComplete;
- (void)_setPreviousPercentComplete:(double)complete;
- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)complete;
- (void)pauseInteractiveTransition;
- (void)updateInteractiveTransition:(double)transition;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)_stopInteractiveTransition;
- (void)completeTransition:(BOOL)transition;
- (id)viewControllerForKey:(id)key;
- (id)viewForKey:(id)key;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)controller;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)controller;
- (BOOL)_transitionIsInFlight;
- (void)_setTransitionIsInFlight:(BOOL)flight;
- (void)_setTransitionIsCompleting:(BOOL)completing;
- (BOOL)isInterruptible;
- (void)_setInterruptible:(BOOL)interruptible;
- (void)_setIsAnimated:(BOOL)animated;
- (void)_runAlongsideCompletions;
- (void)_interactivityDidChange:(BOOL)change;
- (void)__runAlongsideAnimations;
- (long long)_alongsideAnimationsCount;
- (void)_disableInteractionForViews:(id)views;
- (void)_enableInteractionForDisabledViews;
- (void)_setContainerViews:(id)views;
- (void)_setPercentOffset:(double)offset;
- (void)_setAllowUserInteraction:(BOOL)interaction;
- (BOOL)_isRotating;
- (void)_setRotating:(BOOL)rotating;
- (BOOL)isAnimated;
- (void)_setDuration:(double)duration;
- (void)_setWillCompleteHandler:(id /* block */)handler;
- (void)_setCompletionHandler:(id /* block */)handler;
- (void)_setDidCompleteHandler:(id /* block */)handler;
- (BOOL)_initiallyInteractive;
- (void)_setInitiallyInteractive:(BOOL)interactive;
- (BOOL)isCurrentlyInteractive;
- (void)_setCurrentlyInteractive:(BOOL)interactive;
- (void)_setCompletionVelocity:(double)velocity;
- (void)_setCompletionCurve:(long long)curve;
- (void)_setAuxContext:(id)context;
- (void)_setState:(long long)state;
- (void)_setInteractiveUpdateHandler:(id /* block */)handler;
- (void)_setPostInteractiveCompletionHandler:(id /* block */)handler;
- (void)_setPresentationStyle:(long long)style;
- (void)_setIsPresentation:(BOOL)presentation;
@end

#endif /* _UIViewControllerTransitionContext_h */
