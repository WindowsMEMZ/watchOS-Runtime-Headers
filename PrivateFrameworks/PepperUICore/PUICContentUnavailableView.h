//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICContentUnavailableView_h
#define PUICContentUnavailableView_h
@import Foundation;

#include "UIView.h"
#include "PUICButton.h"

@class NSString, UIImage, UIImageView, UILabel, UIScrollView;

@interface PUICContentUnavailableView : UIView {
  /* instance variables */
  UIScrollView *_scrollView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) PUICButton *actionButton;
@property (nonatomic) double scrollViewMinimumTopInset;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (nonatomic) float hyphenationFactor;
@property (nonatomic) BOOL centerContentVertically;

/* class methods */
+ (void)_setupLayoutSpec;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)_actionButtonPressed:(id)pressed;
- (void)_initialize;
- (void)_initializeFonts;
- (id)_preferredFont;
- (id)_preferredTitleFont;
- (void)_handleContentSizeCategoryDidChange:(id)change;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* PUICContentUnavailableView_h */
