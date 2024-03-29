//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDashboardCollectionViewCell_h
#define PKDashboardCollectionViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class UIView;

@interface PKDashboardCollectionViewCell : UICollectionViewCell {
  /* instance variables */
  UIView *_separatorView;
  BOOL _bottomSeparatorVisible;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousMaskBounds;
  unsigned long long _previousMaskType;
  BOOL _customHorizontalInset;
}

@property (nonatomic) BOOL wantsCustomAppearance;
@property (nonatomic) BOOL wantsDefaultHighlightBehavior;
@property (nonatomic) unsigned long long maskType;
@property (nonatomic) BOOL showsBottomSeparator;
@property (nonatomic) double horizontalInset;

/* class methods */
+ (double)defaultHorizontalInset;
+ (id)defaultBackgroundColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateMask;
- (void)setBottomSeparatorVisible:(BOOL)visible animated:(BOOL)animated;
- (double)_bottomSeparatorAlpha;
- (void)setHighlighted:(BOOL)highlighted;
@end

#endif /* PKDashboardCollectionViewCell_h */
