//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKUITableViewCell_h
#define EKUITableViewCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "RowSeparatorView.h"

@class UIColor, UIVisualEffect, UIVisualEffectView;

@interface EKUITableViewCell : UITableViewCell {
  /* instance variables */
  UIVisualEffectView *_bottomRowSeparatorParentView;
  RowSeparatorView *_bottomSeparatorViewForNonOpaqueTables;
  UIVisualEffectView *_topRowSeparatorParentView;
  RowSeparatorView *_topSeparatorViewForNonOpaqueTables;
}

@property (nonatomic) BOOL drawsOwnRowSeparators;
@property (nonatomic) BOOL disableSelectedBackground;
@property (retain, nonatomic) UIColor *rowSeparatorColor;
@property (retain, nonatomic) UIVisualEffect *rowSeparatorVisualEffect;
@property (nonatomic) unsigned long long separatorEdges;
@property (nonatomic) BOOL usesInsetMargin;

/* class methods */
+ (id)reuseIdentifier;
+ (double)rowSeparatorThickness;
+ (BOOL)vibrant;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)_layoutSeparator;
- (id)separatorParentView;
- (id)separatorView;
- (void)updateRowSeparators;
- (void)updateConfigurationUsingState:(id)state;
- (void)_setMarginExtendsToFullWidth:(BOOL)width;
@end

#endif /* EKUITableViewCell_h */
