//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardSplitTransitionView_h
#define UIKeyboardSplitTransitionView_h
@import Foundation;

#include "UIView.h"
#include "UIKeyboardKeyplaneTransitionDelegate-Protocol.h"
#include "UIKeyboardSliceSet.h"

@class CADisplayLink, NSArray;
@protocol UIKeyboardSplitTransitionDataSource;

@interface UIKeyboardSplitTransitionView : UIView {
  /* instance variables */
  double _currentProgress;
  double _liftOffProgress;
  double _finishProgress;
  double _finishDuration;
  double _finalTransitionStartTime;
  CADisplayLink *_displayLink;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startFrame;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endFrame;
  NSObject<UIKeyboardKeyplaneTransitionDelegate> *_transitionDelegate;
  NSObject<UIKeyboardSplitTransitionDataSource> *_transitionDataSource;
  BOOL _centerFilled;
  BOOL _isRebuilding;
  BOOL _isSplitTranslation;
  UIKeyboardSliceSet *_sliceSet;
}

@property (copy) id /* block */ completionBlock;
@property (weak, nonatomic) NSObject<UIKeyboardKeyplaneTransitionDelegate> *splitTransitionDelegate;
@property (weak, nonatomic) NSObject<UIKeyboardSplitTransitionDataSource> *splitTransitionDataSource;
@property (readonly) NSArray *shadowLayers;
@property (readonly) NSArray *backgroundLayers;

/* instance methods */
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)topDropShadow;
- (id)centerDropShadow;
- (id)outerCenterDropShadow;
- (id)bottomDropShadow;
- (void)initializeLayers;
- (id)colorsForBackgroundLayer:(int)layer;
- (struct CGSize { double x0; double x1; })sizeForShadowLayer:(int)layer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectEnclosingKeyplane:(id)keyplane;
- (void)rebuildTransitionForSplitStyleChange:(id)change;
- (BOOL)shouldAllowRubberiness;
- (void)transformForProgress:(double)progress;
- (void)rebuildFromKeyplane:(id)keyplane toKeyplane:(id)keyplane startToken:(id)token endToken:(id)token keyboardType:(long long)type orientation:(long long)orientation;
- (void)rebuildControlKeys:(unsigned long long)keys;
- (BOOL)transitionIsVisible;
- (void)finalizeTransition;
- (void)transitionToFinalState:(id)state;
- (void)finishWithProgress:(double)progress completionBlock:(id /* block */)block;
- (void)updateWithProgress:(double)progress;
- (BOOL)canDisplayTransition;
- (struct CGImage *)defaultKeyboardImage;
- (struct CGImage *)splitKeyboardImage;
- (struct CGImage *)keyImageWithToken:(id)token;
- (BOOL)showIntlKey;
- (BOOL)showDictationKey;
@end

#endif /* UIKeyboardSplitTransitionView_h */
