//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TKDownloadIndicatorView_h
#define TKDownloadIndicatorView_h
@import Foundation;

#include "UIView.h"

@class CADisplayLink, CAMediaTimingFunction, NSMutableArray;

@interface TKDownloadIndicatorView : UIView {
  /* instance variables */
  float _initialAnimatedProgress;
  float _currentAnimatedProgress;
  double _progressAnimationEndTime;
  double _progressAnimationStartTime;
  BOOL _isAnimatingProgress;
  CADisplayLink *_displayLink;
  NSMutableArray *_progressAnimationCompletionHandlers;
  CAMediaTimingFunction *_progressAnimationTimingFunction;
}

@property (nonatomic) float progress;

/* class methods */
+ (struct CGSize { double x0; double x1; })_intrinsicDownloadIndicatorViewSize;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)setProgress:(float)progress animated:(BOOL)animated completion:(id /* block */)completion;
- (void)_handleDisplayLinkDidFire:(id)fire;
- (void)_stopProgressAnimation;
@end

#endif /* TKDownloadIndicatorView_h */
