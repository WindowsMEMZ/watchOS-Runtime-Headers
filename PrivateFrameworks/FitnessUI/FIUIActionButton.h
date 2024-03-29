//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIActionButton_h
#define FIUIActionButton_h
@import Foundation;

#include "UIButton.h"

@class UIColor, UIImageView;

@interface FIUIActionButton : UIButton

@property (retain, nonatomic) UIColor *imageViewTintColor;
@property (retain, nonatomic) UIColor *backgroundImageColor;
@property (nonatomic) BOOL animatingTouchDown;
@property (retain, nonatomic) UIImageView *transformingImageView;
@property (copy, nonatomic) id /* block */ touchUpAnimationCompleteHandler;

/* class methods */
+ (id)buttonWithTitle:(id)title color:(id)color icon:(id)icon;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)turnIntoSolidDotWithDuration:(double)duration completion:(id /* block */)completion;
- (void)_setupInternalTouchActions;
- (void)setImage:(id)image forState:(unsigned long long)state;
- (struct CGSize { double x0; double x1; })FIUIActionButtonSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)tintColorDidChange;
- (void)setEnabled:(BOOL)enabled;
- (void)_touchDown;
- (void)_touchUp;
- (void)_animateHighlighted:(BOOL)highlighted;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundImageFrame;
@end

#endif /* FIUIActionButton_h */
