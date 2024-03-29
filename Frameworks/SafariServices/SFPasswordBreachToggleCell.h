//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFPasswordBreachToggleCell_h
#define SFPasswordBreachToggleCell_h
@import Foundation;

#include "UITableViewCell.h"

@class UISwitch;
@protocol SFPasswordBreachToggleCellDelegate;

@interface SFPasswordBreachToggleCell : UITableViewCell {
  /* instance variables */
  UISwitch *_toggleSwitch;
  NSObject<SFPasswordBreachToggleCellDelegate> *_delegate;
}

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier delegate:(id)delegate;
- (void)setCurrentPasswordBreachState:(BOOL)state;
- (void)_userToggledBreachDetection:(id)detection;
@end

#endif /* SFPasswordBreachToggleCell_h */
