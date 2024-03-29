//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICActionImageButton_h
#define PUICActionImageButton_h
@import Foundation;

#include "PUICActionButton.h"

@class UIView;

@interface PUICActionImageButton : PUICActionButton {
  /* instance variables */
  BOOL _isAnimatingDown;
  BOOL _blendEnabled;
  UIView *_blendView;
}

@property (nonatomic) BOOL needsLongTitleLayout;

/* class methods */
+ (id)defaultLayoutFont;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBlendEnabled:(BOOL)enabled animated:(BOOL)animated;
- (void)disableBlend;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)setHighlighted:(BOOL)highlighted;
- (void)_animateTouchDown;
- (void)_animateTouchUp;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)tintColorDidChange;
- (BOOL)isImageButton;
- (void)_updateBackgroundImage;
- (id)_blendImage;
- (id)_backgroundImage;
- (id)_activeBackgroundImage;
- (id)_createBackgroundImageWithColor:(id)color;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* PUICActionImageButton_h */
