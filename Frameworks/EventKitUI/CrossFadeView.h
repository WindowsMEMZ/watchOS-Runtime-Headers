//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef CrossFadeView_h
#define CrossFadeView_h
@import Foundation;

#include "UIView.h"

@class UIView;

@interface CrossFadeView : UIView

@property (readonly, nonatomic) UIView *startView;
@property (readonly, nonatomic) UIView *endView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } startFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } endFrame;
@property (nonatomic) BOOL scaleSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithStartView:(id)view endView:(id)view startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)animateToStartStateWithDuration:(double)duration completion:(id /* block */)completion;
- (void)animateToEndStateWithDuration:(double)duration completion:(id /* block */)completion;
- (void)springAnimateToStartStateWithTimingFunction:(int)function;
- (void)springAnimateToStartStateWithTimingFunction:(int)function completion:(id /* block */)completion;
- (void)springAnimateToEndStateWithTimingFunction:(int)function;
- (void)springAnimateToEndStateWithTimingFunction:(int)function completion:(id /* block */)completion;
- (void)setToStartState;
- (void)setToEndState;
- (void)haltAnimation;
- (id)description;
@end

#endif /* CrossFadeView_h */
