//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCancelingAnimatedTransitioningHandler_h
#define PKCancelingAnimatedTransitioningHandler_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerInteractiveTransitioning-Protocol.h"

@class NSString, UIView, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface PKCancelingAnimatedTransitioningHandler : NSObject<UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {
  /* instance variables */
  UIViewController *_presentingVC;
  UIView *_presentingView;
  UIViewController *_presentedVC;
  UIView *_presentedView;
  NSObject<UIViewControllerContextTransitioning> *_transitionContext;
  BOOL _completed;
}

@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (copy, nonatomic) id /* block */ cancelationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;

/* instance methods */
- (void)_updateWithTransitionContext:(id)context;
- (void)animateTransition:(id)transition;
- (double)transitionDuration:(id)duration;
- (void)animationEnded:(BOOL)ended;
- (void)startInteractiveTransition:(id)transition;
@end

#endif /* PKCancelingAnimatedTransitioningHandler_h */
