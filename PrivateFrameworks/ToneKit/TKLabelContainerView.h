//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TKLabelContainerView_h
#define TKLabelContainerView_h
@import Foundation;

#include "UIView.h"

@class NSString, UIColor, UIFont, UILabel;

@interface TKLabelContainerView : UIView {
  /* instance variables */
  UILabel *_label;
}

@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) UIColor *labelTextColor;
@property (retain, nonatomic) UIColor *labelShadowColor;
@property (nonatomic) struct UIOffset { double x0; double x1; } labelShadowOffset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } labelPaddingInsets;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* TKLabelContainerView_h */
