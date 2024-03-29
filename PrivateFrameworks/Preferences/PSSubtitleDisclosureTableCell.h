//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSSubtitleDisclosureTableCell_h
#define PSSubtitleDisclosureTableCell_h
@import Foundation;

#include "PSTableCell.h"

@class UILabel;

@interface PSSubtitleDisclosureTableCell : PSTableCell

@property (retain, nonatomic) UILabel *valueLabel;

/* class methods */
+ (long long)cellStyle;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier specifier:(id)specifier;
- (void)_valueLabelForSpecifier:(id)specifier;
- (void)layoutSubviews;
- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)specifier;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* PSSubtitleDisclosureTableCell_h */
