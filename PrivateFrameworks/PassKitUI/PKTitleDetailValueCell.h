//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTitleDetailValueCell_h
#define PKTitleDetailValueCell_h
@import Foundation;

#include "UICollectionViewListCell.h"
#include "PKTitleDetailValueTextView.h"

@class NSString, UIColor, UIFont, UIImage, UIImageView;

@interface PKTitleDetailValueCell : UICollectionViewListCell {
  /* instance variables */
  PKTitleDetailValueTextView *_textView;
  UIImageView *_checkmarkView;
  UIColor *_backgroundColor;
  UIFont *_defaultTitleFont;
  UIFont *_defaultDetailFont;
  UIFont *_defaultValueFont;
  UIColor *_defaultDetailColor;
}

@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIImage *detailIcon;
@property (retain, nonatomic) UIFont *detailFont;
@property (retain, nonatomic) UIColor *detailColor;
@property (copy, nonatomic) NSString *valueText;
@property (retain, nonatomic) UIFont *valueFont;
@property (retain, nonatomic) UIColor *valueColor;
@property (nonatomic) unsigned long long accessory;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) double verticalMargin;
@property (nonatomic) double labelPadding;

/* instance methods */
- (id)initWithSize:(struct CGSize { double x0; double x1; })size;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds isTemplateLayout:(BOOL)layout;
- (void)setHighlighted:(BOOL)highlighted;
- (void)_configureView;
- (void)_resetValues;
- (void)prepareForReuse;
@end

#endif /* PKTitleDetailValueCell_h */
