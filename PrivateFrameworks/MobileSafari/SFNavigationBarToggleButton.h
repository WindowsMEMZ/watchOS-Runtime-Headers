//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFNavigationBarToggleButton_h
#define SFNavigationBarToggleButton_h
@import Foundation;

#include "SFClickableButton.h"
#include "SFToggleBackgroundView.h"

@class UIColor, UIImage, UIImageSymbolConfiguration, UIImageView, UIView;

@interface SFNavigationBarToggleButton : SFClickableButton {
  /* instance variables */
  UIImageView *_defaultStateImageView;
  UIImageView *_selectedStateImageView;
  UIImageView *_secondaryImageView;
  UIImageView *_tertiaryImageView;
  SFToggleBackgroundView *_selectedStateMaskView;
  UIView *_selectedStateFillView;
  UIView *_badgeView;
  unsigned long long _inputMode;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *secondaryImage;
@property (retain, nonatomic) UIColor *secondaryImageColor;
@property (retain, nonatomic) UIImage *tertiaryImage;
@property (retain, nonatomic) UIColor *tertiaryImageColor;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) double minimumSideMargin;
@property (nonatomic) BOOL showsBadge;
@property (nonatomic) BOOL drawsLightGlyph;
@property (nonatomic) double resizableBackgroundCornerRadius;
@property (nonatomic) long long cornerRoundingMode;
@property (nonatomic) double insetFromBackground;
@property (nonatomic) BOOL usesInsetFromBackground;
@property (retain, nonatomic) UIColor *glyphTintColor;
@property (nonatomic) BOOL highlightsBackground;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIView *tiplessPopoverSourceView;

/* class methods */
+ (struct CGSize { double x0; double x1; })glyphSize;
+ (id)formatMenuImage;
+ (id)readerImage;
+ (id)translationImage;
+ (id)extensionsImage;

/* instance methods */
- (id)initWithImage:(id)image forInputMode:(unsigned long long)mode;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setSelected:(BOOL)selected;
@end

#endif /* SFNavigationBarToggleButton_h */
