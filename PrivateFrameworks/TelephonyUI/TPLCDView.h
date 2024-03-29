//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1430.300.81.0.0
//
#ifndef TPLCDView_h
#define TPLCDView_h
@import Foundation;

#include "TPLCDBar.h"
#include "TPLCDSubImageView.h"
#include "TPLCDTextView.h"

@class UIView;

@interface TPLCDView : TPLCDBar {
  /* instance variables */
  UIView *_contentView;
  TPLCDTextView *_textView;
  TPLCDTextView *_labelView;
  TPLCDSubImageView *_imageView;
  unsigned int x :1 _layoutAsLabelled;
}

@property BOOL verticallyCenterTextViewIfLabelless;

/* class methods */
+ (double)defaultTextFontSize;
+ (double)defaultLabelFontSize;

/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullSizedContentViewFrame;
- (void)_resetContentViewFrame;
- (id)initWithDefaultSizeForOrientation:(long long)orientation;
- (BOOL)shouldCenterText;
- (BOOL)shouldCenterContentView;
- (void)setContentsAlpha:(double)alpha;
- (double)_labelVInset;
- (double)_textVInset;
- (void)setTextFontSize:(double)size;
- (void)setText:(id)text;
- (id)text;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_text1Frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageViewFrame;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)out finished:(id)finished context:(id)context;
- (void)setLabelFontSize:(double)size;
- (void)setLabel:(id)label;
- (void)setLabel:(id)label animate:(BOOL)animate;
- (id)label;
- (void)blinkLabel;
- (void)setSubImage:(id)image;
- (id)subImage;
- (void)setShadowColor:(id)color;
- (void)setLayoutAsLabelled:(BOOL)labelled;
- (void)setSecondLineText:(id)text;
- (id)secondLineText;
@end

#endif /* TPLCDView_h */
