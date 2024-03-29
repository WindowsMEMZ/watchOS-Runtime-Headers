//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardKeyplaneTransition_h
#define UIKeyboardKeyplaneTransition_h
@import Foundation;

#include "UIKBKeyViewAnimator.h"
#include "UIKBTree.h"
#include "UIKeyboardKeyplaneTransitionDelegate-Protocol.h"
#include "UIView.h"

@class CADisplayLink, NSMutableArray;

@interface UIKeyboardKeyplaneTransition : NSObject {
  /* instance variables */
  double _currentProgress;
  double _liftOffProgress;
  double _finishProgress;
  double _finishDuration;
  double _finalTransitionStartTime;
  CADisplayLink *_displayLink;
  UIKBTree *_start;
  UIKBTree *_end;
  UIView *_startView;
  UIView *_endView;
  NSMutableArray *_transitionViews;
}

@property (retain, nonatomic) UIKBTree *keyboard;
@property (copy) id /* block */ completionBlock;
@property (weak, nonatomic) NSObject<UIKeyboardKeyplaneTransitionDelegate> *transitionDelegate;
@property (nonatomic) BOOL initiallyAtEnd;
@property (readonly, nonatomic) double nonInteractiveDuration;
@property (retain, nonatomic) UIKBKeyViewAnimator *keyViewAnimator;
@property (readonly, nonatomic) double startHeight;
@property (readonly, nonatomic) double endHeight;

/* instance methods */
- (void)dealloc;
- (void)rebuildWithStartKeyplane:(id)keyplane startView:(id)view endKeyplane:(id)keyplane endView:(id)view;
- (void)addTransitionView:(id)view startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)commitTransitionRebuild;
- (void)runNonInteractivelyWithCompletion:(id /* block */)completion;
- (void)cancelNonInteractiveAnimation;
- (void)updateWithProgress:(double)progress;
- (void)removeAllAnimations;
- (void)finalizeTransition;
- (void)transitionToFinalState:(id)state;
- (void)finishWithProgress:(double)progress completionBlock:(id /* block */)block;
- (BOOL)canDisplayTransitionFromKeyplane:(id)keyplane toKeyplane:(id)keyplane;
@end

#endif /* UIKeyboardKeyplaneTransition_h */
