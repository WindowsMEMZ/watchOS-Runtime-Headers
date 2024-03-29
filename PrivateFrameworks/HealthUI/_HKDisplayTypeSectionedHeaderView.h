//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKDisplayTypeSectionedHeaderView_h
#define _HKDisplayTypeSectionedHeaderView_h
@import Foundation;

#include "UICollectionReusableView.h"

@class NSLayoutConstraint, NSString, UILabel, UIView;

@interface _HKDisplayTypeSectionedHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSLayoutConstraint *titleTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleWithNoTopMargin;
@property (retain, nonatomic) NSLayoutConstraint *titleWithTopMargin;

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)traitCollectionDidChange:(id)change;
- (void)prepareForReuse;
- (void)_updatePreferredTitleFont;
@end

#endif /* _HKDisplayTypeSectionedHeaderView_h */
