//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSwitchTableViewCell_h
#define HKSwitchTableViewCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "HKSwitchTableViewCellDelegate-Protocol.h"

@class NSString, UILabel, UISwitch;

@interface HKSwitchTableViewCell : UITableViewCell {
  /* instance variables */
  UILabel *_countLabel;
  UISwitch *_switch;
}

@property (weak, nonatomic) NSObject<HKSwitchTableViewCellDelegate> *delegate;
@property (nonatomic) BOOL shouldHideSwitch;
@property (nonatomic) BOOL on;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL centersIcon;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (copy, nonatomic) NSString *displayText;

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)dealloc;
- (id)_displayLabelFont;
- (void)_setupUI;
- (void)_updateFont;
- (void)_contextSizeCategoryChanged;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setCountText:(id)text;
- (void)setIconImage:(id)image;
- (BOOL)isOn;
- (void)setOn:(BOOL)on animated:(BOOL)animated;
- (void)updateAutomationIdentifiersIfNeeded;
- (void)updateAutomationIdentifiersWithBaseIdentifier:(id)identifier;
- (void)traitCollectionDidChange:(id)change;
- (void)switchValueChanged:(id)changed;
- (BOOL)isEnabled;
@end

#endif /* HKSwitchTableViewCell_h */
