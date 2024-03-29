//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSCapacityBarCell_h
#define PSCapacityBarCell_h
@import Foundation;

#include "PSTableCell.h"
#include "PSCapacityBarLegendView.h"
#include "PSCapacityBarView.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIColor, UIFont, UILabel, UIStackView;

@interface PSCapacityBarCell : PSTableCell {
  /* instance variables */
  double _tableWidth;
  NSMutableArray *_normalConstraints;
  NSMutableArray *_largeConstraints;
  NSMutableArray *_legendConstraints;
  NSMutableArray *_commonConstraints;
  NSLayoutConstraint *_barHeightConstraint;
  UILabel *_titleLabel;
  UILabel *_sizeLabel;
  UILabel *_loadingLabel;
  PSCapacityBarView *_barView;
  UIStackView *_legendView;
  NSArray *_legends;
  PSCapacityBarLegendView *_otherLegend;
  UIFont *_legendFont;
  UIFont *_bigFont;
  UIColor *_legendTextColor;
  BOOL _hideLegend;
  BOOL _showOtherLegend;
  BOOL _forceLoading;
  BOOL _sizesAreMem;
  NSString *_sizeFormat;
}

/* class methods */
+ (id)specifierWithTitle:(id)title;
+ (id)specifierWithTitle:(id)title useStandardFontSizeForSizeLabel:(BOOL)label;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier specifier:(id)specifier;
- (void)initializeViews;
- (void)createNormalConstraints;
- (void)createLargeConstraints;
- (void)createCommonConstraints;
- (void)addVerticalLegends;
- (void)addHorizontalLegends;
- (void)updateConstraints;
- (void)createLegends:(id)legends;
- (id)usageString:(id)string;
- (void)refreshCellContentsWithSpecifier:(id)specifier;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* PSCapacityBarCell_h */
