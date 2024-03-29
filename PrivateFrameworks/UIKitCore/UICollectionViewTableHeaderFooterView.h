//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICollectionViewTableHeaderFooterView_h
#define UICollectionViewTableHeaderFooterView_h
@import Foundation;

#include "UICollectionReusableView.h"
#include "UICollectionViewTableLayout.h"
#include "UICollectionViewTableLayoutAttributes.h"
#include "UIColor.h"
#include "UILabel.h"
#include "UITableViewHeaderFooterView.h"
#include "UIView.h"

@interface UICollectionViewTableHeaderFooterView : UICollectionReusableView

@property (retain, nonatomic) UITableViewHeaderFooterView *tableViewHeaderFooterView;
@property (readonly, nonatomic) UICollectionViewTableLayout *tableLayout;
@property (readonly, nonatomic) UICollectionViewTableLayoutAttributes *tableAttributes;
@property (retain, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL floating;

/* instance methods */
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithReuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)attributes;
- (id)preferredLayoutAttributesFittingAttributes:(id)attributes;
- (id)_tableLayout;
- (id)_tableAttributes;
@end

#endif /* UICollectionViewTableHeaderFooterView_h */
