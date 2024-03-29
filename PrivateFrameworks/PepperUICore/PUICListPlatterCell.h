//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICListPlatterCell_h
#define PUICListPlatterCell_h
@import Foundation;

#include "PUICPlatterCell.h"

@class NSArray, NSLayoutConstraint, UILayoutGuide, UIView;

@interface PUICListPlatterCell : PUICPlatterCell {
  /* instance variables */
  UILayoutGuide *_contentLayoutGuide;
  BOOL _isRadioCell;
  NSLayoutConstraint *_topConstraint;
  NSLayoutConstraint *_bottomConstraint;
  NSLayoutConstraint *_leadingConstraint;
  NSArray *_leadingAccessoryConstraints;
  NSArray *_trailingAccessoryConstraints;
}

@property (retain, nonatomic) UIView *leadingAccessoryView;
@property (retain, nonatomic) UIView *trailingAccessoryView;

/* class methods */
+ (void)initialize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultContentInsets;
+ (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })leadingAccessoryInsets;
+ (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })trailingAccessoryInsets;
+ (double)minimumHeight;

/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })labelsFrame;
- (void)visuallySelect;
- (BOOL)isSingleLine;
- (id)labelToAnimate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)contentLayoutGuide;
- (void)applyLayoutAttributes:(id)attributes;
- (void)setLeadingSymbol:(id)symbol;
- (void)setUserInteractionEnabled:(BOOL)enabled;
@end

#endif /* PUICListPlatterCell_h */
