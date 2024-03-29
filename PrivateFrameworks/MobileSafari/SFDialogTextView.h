//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFDialogTextView_h
#define SFDialogTextView_h
@import Foundation;

#include "UIView.h"

@class CAGradientLayer, NSParagraphStyle, NSString, UIFont, UITextView;

@interface SFDialogTextView : UIView {
  /* instance variables */
  NSString *_title;
  NSString *_message;
  UIFont *_titleFont;
  UIFont *_messageFont;
  UIFont *_messageFontWithTitle;
  NSParagraphStyle *_titleParagraphStyle;
  UITextView *_textView;
  double _preferredMaxLayoutWidth;
  CAGradientLayer *_topGradient;
  CAGradientLayer *_bottomGradient;
}

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateTextContainerInset;
- (void)_updateText;
- (void)setTitle:(id)title;
- (void)setMessage:(id)message;
- (void)setPreferredMaxLayoutWidth:(double)width;
- (void)_updateFontStyling;
- (void)flashScrollIndicators;
@end

#endif /* SFDialogTextView_h */
