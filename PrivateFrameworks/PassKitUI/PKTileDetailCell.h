//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTileDetailCell_h
#define PKTileDetailCell_h
@import Foundation;

#include "UICollectionViewListCell.h"

@class NSString, UIColor, UIImageView, UILabel, UIView;

@interface PKTileDetailCell : UICollectionViewListCell {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  UILabel *_textLabel;
  UILabel *_detailLabel;
  UILabel *_textSubtitleLabel;
  UIView *_seperatorForCustomView;
  UIView *_seperatorForText;
  UIImageView *_accessoryView;
  UIColor *_backgroundColor;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textSubtitle;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIView *customView;
@property (nonatomic) unsigned long long accessory;

/* instance methods */
- (id)initWithSize:(struct CGSize { double x0; double x1; })size;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setHighlighted:(BOOL)highlighted;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds isTemplateLayout:(BOOL)layout;
- (void)_configureView;
- (void)prepareForReuse;
@end

#endif /* PKTileDetailCell_h */
