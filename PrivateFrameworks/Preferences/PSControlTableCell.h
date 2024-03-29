//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSControlTableCell_h
#define PSControlTableCell_h
@import Foundation;

#include "PSTableCell.h"

@class UIControl;

@interface PSControlTableCell : PSTableCell

@property (retain, nonatomic) UIControl *control;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier specifier:(id)specifier;
- (void)refreshCellContentsWithSpecifier:(id)specifier;
- (id)newControl;
- (BOOL)canReload;
- (id)valueLabel;
- (void)dealloc;
- (id)controlValue;
- (void)controlChanged:(id)changed;
- (void)setCellEnabled:(BOOL)enabled;
@end

#endif /* PSControlTableCell_h */
