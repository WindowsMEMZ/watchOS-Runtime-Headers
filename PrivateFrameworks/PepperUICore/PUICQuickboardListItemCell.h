//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICQuickboardListItemCell_h
#define PUICQuickboardListItemCell_h
@import Foundation;

#include "PUICTableViewCell.h"

@class UILabel;

@interface PUICQuickboardListItemCell : PUICTableViewCell

@property (readonly, nonatomic) UILabel *itemLabel;
@property (nonatomic) long long layoutDirection;

/* class methods */
+ (id)labelFont;
+ (id)textFont;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)configureForText:(id)text width:(double)width;
- (void)visuallySelect;
- (BOOL)isSingleLine;
@end

#endif /* PUICQuickboardListItemCell_h */
