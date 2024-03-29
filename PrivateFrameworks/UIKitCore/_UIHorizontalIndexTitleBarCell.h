//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIHorizontalIndexTitleBarCell_h
#define _UIHorizontalIndexTitleBarCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "UILabel.h"
#include "UIView.h"
#include "_UIFocusFastScrollingIndexBarEntry.h"

@interface _UIHorizontalIndexTitleBarCell : UICollectionViewCell

@property (retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *entry;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *roundedCornersBackground;

/* class methods */
+ (id)cellFont;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)preferredLayoutAttributesFittingAttributes:(id)attributes;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)change;
- (void)didUpdateFocusInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (void)setSelected:(BOOL)selected;
- (void)updateForEntry:(id)entry;
- (double)_maxCellWidth;
- (BOOL)_isAnotherIndexTitleCellFocused;
- (void)_updateColors;
@end

#endif /* _UIHorizontalIndexTitleBarCell_h */
