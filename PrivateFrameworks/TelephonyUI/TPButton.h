//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1430.300.81.0.0
//
#ifndef TPButton_h
#define TPButton_h
@import Foundation;

#include "UIButton.h"

@class _UIBackdropView;

@interface TPButton : UIButton {
  /* instance variables */
  int _color;
  _UIBackdropView *_backdropView;
}

@property (nonatomic) BOOL blursBackground;
@property (nonatomic) BOOL roundsCorners;
@property (nonatomic) BOOL usesOverlayBlendingForContents;

/* class methods */
+ (id)defaultStandardFont;
+ (double)defaultHeight;
+ (double)defaultHeightForColor:(int)color;
+ (double)defaultWidthForSideButton;
+ (double)defaultWidthForCenterButton;
+ (double)maxWidthForCenterButton;

/* instance methods */
- (void)setHighlighted:(BOOL)highlighted;
- (void)setEnabled:(BOOL)enabled;
- (void)setSelected:(BOOL)selected;
- (void)setButtonColor:(int)color;
- (id)initWithTitle:(id)title icon:(id)icon color:(int)color frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBackgroundColor:(id)color;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (int)buttonColor;
- (void)layoutSubviews;
- (void)setImage:(id)image forState:(unsigned long long)state;
- (void)_animationWillBegin;
- (void)_animationDidEnd;
- (void)setPlusSeparatedTitle:(id)title;
- (void)setMinimumTitleFontSize:(double)size;
- (void)setMinimumTitleFontSize:(double)size maximumTitleFontSize:(double)size;
- (void)setTitleImagePadding:(double)padding;
- (void)setIconVerticalOffset:(double)offset;
- (void)setTitleVerticalOffset:(double)offset;
- (void)setDisabledButtonColor:(int)color;
@end

#endif /* TPButton_h */
