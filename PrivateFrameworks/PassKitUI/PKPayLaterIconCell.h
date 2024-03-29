//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterIconCell_h
#define PKPayLaterIconCell_h
@import Foundation;

#include "PKDashboardCollectionViewCell.h"

@class UIImage, UIView;

@interface PKPayLaterIconCell : PKDashboardCollectionViewCell {
  /* instance variables */
  UIView *_view;
  UIImage *_icon;
  UIView *_imageView;
}

@property (nonatomic) double minimumHeight;
@property (nonatomic) BOOL hasCircleBorder;
@property (nonatomic) BOOL appearInactive;

/* instance methods */
- (void)setIcon:(id)icon animated:(BOOL)animated;
- (void)setIconDate:(id)date animated:(BOOL)animated;
- (void)setView:(id)view;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds isTemplateLayout:(BOOL)layout;
- (void)_setupImageView;
- (void)_applyInactiveAppearance;
@end

#endif /* PKPayLaterIconCell_h */
