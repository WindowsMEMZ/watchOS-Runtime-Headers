//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIWindowController_h
#define UIWindowController_h
@import Foundation;

#include "UITransitionView.h"
#include "UIViewController.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerInteractiveTransitioning-Protocol.h"
#include "UIWindow.h"

@interface UIWindowController : NSObject {
  /* instance variables */
  int _currentTransition;
  id _target;
  long long _didFinish;
  UIViewController *_fromViewController;
  UIViewController *_toViewController;
  struct CGPoint { double x; double y; } _beginOriginForToView;
  struct CGPoint { double x; double y; } _endOriginForToView;
  long long _toModalStyle;
  BOOL _needsDidAppear;
  BOOL _needsDidDisappear;
  NSObject<UIViewControllerAnimatedTransitioning> *_transitionController;
  NSObject<UIViewControllerInteractiveTransitioning> *_interactionController;
}

@property (weak, nonatomic) UIWindow *window;
@property (readonly, nonatomic) UITransitionView *transitionView;
@property (nonatomic) BOOL presenting;
@property (retain, nonatomic) NSObject<UIViewControllerAnimatedTransitioning> *_transitionController;
@property (retain, nonatomic) NSObject<UIViewControllerInteractiveTransitioning> *_interactionController;
@property (nonatomic) BOOL _interactiveTransition;

/* class methods */
+ (id)windowControllerForWindow:(id)window;
+ (void)windowWillBeDeallocated:(id)deallocated;

/* instance methods */
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })_originForViewController:(id)controller orientation:(long long)orientation actualStatusBarHeight:(double)height fullScreenLayout:(BOOL)layout inWindow:(id)window;
- (struct CGSize { double x0; double x1; })_flipSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForViewController:(id)controller transition:(int)transition orientation:(long long)orientation fullScreenLayout:(BOOL)layout inWindow:(id)window;
- (void)_prepareKeyboardForTransition:(int)transition fromView:(id)view;
- (void)_transplantView:(id)view toSuperview:(id)superview atIndex:(unsigned long long)index;
- (void)_transition:(int)_transition fromViewController:(id)controller toViewController:(id)controller target:(id)target didFinish:(long long)finish;
- (void)_transition:(int)_transition fromViewController:(id)controller toViewController:(id)controller target:(id)target didFinish:(long long)finish animation:(id /* block */)animation;
- (void)transitionViewDidStart:(id)start;
- (void)transitionViewDidCancel:(id)cancel fromView:(id)view toView:(id)view;
- (void)transitionViewDidComplete:(id)complete fromView:(id)view toView:(id)view removeFromView:(BOOL)view;
- (double)durationForTransition:(int)transition;
- (struct CGPoint { double x0; double x1; })_adjustOrigin:(struct CGPoint { double x0; double x1; })origin givenOtherOrigin:(struct CGPoint { double x0; double x1; })origin forTransition:(int)transition;
- (void)transitionView:(id)view startCustomTransitionWithDuration:(double)duration;
- (struct CGPoint { double x0; double x1; })transitionView:(id)view endOriginForFromView:(id)view forTransition:(int)transition defaultOrigin:(struct CGPoint { double x0; double x1; })origin;
- (struct CGPoint { double x0; double x1; })transitionView:(id)view beginOriginForToView:(id)view forTransition:(int)transition defaultOrigin:(struct CGPoint { double x0; double x1; })origin;
- (struct CGPoint { double x0; double x1; })transitionView:(id)view endOriginForToView:(id)view forTransition:(int)transition defaultOrigin:(struct CGPoint { double x0; double x1; })origin;
- (BOOL)transitionViewShouldUseViewControllerCallbacks;
- (void)_setTransitionController:(id)controller;
- (void)_setInteractionController:(id)controller;
- (BOOL)_isInteractiveTransition;
- (void)_setInteractiveTransition:(BOOL)transition;
@end

#endif /* UIWindowController_h */
