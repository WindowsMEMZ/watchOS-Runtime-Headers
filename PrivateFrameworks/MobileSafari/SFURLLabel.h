//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFURLLabel_h
#define SFURLLabel_h
@import Foundation;

#include "UIVisualEffectView.h"

@class NSAttributedString, NSString, UIColor, UIFont, UIImageView, UILabel, UIView;

@interface SFURLLabel : UIVisualEffectView {
  /* instance variables */
  double _fadeOutDistance;
  UILabel *_label;
  UIImageView *_fadeOut;
  BOOL _needsUpdateSize;
  struct { UILabel *label; long long transitionCount; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousLabelFrame; } _textSizeTransitionContext;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL accessibilityIgnoresInvertColors;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } urlSize;
@property (readonly, nonatomic) double baselineOffsetFromBottom;
@property (readonly, nonatomic) double lastLineBaselineFrameOriginY;
@property (nonatomic) long long textAlignmentEdge;
@property (nonatomic) long long fadeOutEdge;
@property (weak, nonatomic) UIView *URLContainerClipView;
@property (readonly, nonatomic) double labelCapHeightInsetFromTop;
@property (readonly, nonatomic) BOOL isAnimatingTextSize;

/* instance methods */
- (id)init;
- (id)initWithFadeOutDistance:(double)distance;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unclippedContentRect;
- (BOOL)_needsMask;
- (void)_updateMask;
- (void)beginTextSizeAnimation;
- (void)endTextSizeAnimation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)accessibilityLabel;
- (void)_setNeedsUpdateSize;
- (void)_updateSizeIfNeeded;
- (void)_updateSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_preferredContentSizeCategoryDidChange;
@end

#endif /* SFURLLabel_h */
