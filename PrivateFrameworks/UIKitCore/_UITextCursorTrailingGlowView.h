//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextCursorTrailingGlowView_h
#define _UITextCursorTrailingGlowView_h
@import Foundation;

#include "UIView.h"
#include "CAAnimationDelegate-Protocol.h"
#include "UIDictationGlowEffect.h"
#include "_UIShapeView.h"

@class CABasicAnimation, NSString;

@interface _UITextCursorTrailingGlowView : UIView<CAAnimationDelegate> {
  /* instance variables */
  _UIShapeView *_shapeView;
  UIDictationGlowEffect *_dictationGlowEffect;
  CABasicAnimation *_animation;
  double _animationStartTime;
  BOOL _needsToUpdateAnimation;
}

@property (copy, nonatomic) id /* block */ transitionBlock;
@property (nonatomic) BOOL trailingAnimationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_updateShapeAndAnimate;
- (void)_animate;
- (struct CGPath *)pathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)setTintColor:(id)color;
- (void)cursorDidMoveToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame fromPreviousFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame isNewLine:(BOOL)line;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })estimatedCurrentFrame;
- (void)animationDidStart:(id)start;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
- (BOOL)isTrailingAnimationEnabled;
@end

#endif /* _UITextCursorTrailingGlowView_h */
