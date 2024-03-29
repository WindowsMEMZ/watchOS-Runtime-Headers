//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKUIFocusBannerTableViewCell_h
#define EKUIFocusBannerTableViewCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "EKUIFocusBannerTableViewCellDelegate-Protocol.h"

@class NSArray, UIButton, UIListContentView;

@interface EKUIFocusBannerTableViewCell : UITableViewCell {
  /* instance variables */
  UIButton *_focusFilterToggleButton;
  UIListContentView *_listContentView;
  NSArray *_constraints;
}

@property (nonatomic) BOOL on;
@property (weak, nonatomic) NSObject<EKUIFocusBannerTableViewCellDelegate> *delegate;

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier;
- (void)_tapped;
- (void)traitCollectionDidChange:(id)change;
- (void)_updateView;
- (id)_configuration;
- (id)_focusFilterButtonConfiguration;
@end

#endif /* EKUIFocusBannerTableViewCell_h */
