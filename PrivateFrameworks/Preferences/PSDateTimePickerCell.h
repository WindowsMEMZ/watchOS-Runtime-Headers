//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSDateTimePickerCell_h
#define PSDateTimePickerCell_h
@import Foundation;

#include "PSTableCell.h"

@class UIDatePicker, UILabel;

@interface PSDateTimePickerCell : PSTableCell {
  /* instance variables */
  UIDatePicker *_datePicker;
  UILabel *_titleLabel;
}

/* class methods */
+ (double)preferredHeight;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier specifier:(id)specifier;
- (void)timeZoneChanged:(id)changed;
- (void)setTitle:(id)title;
- (id)datePicker;
- (void)dealloc;
@end

#endif /* PSDateTimePickerCell_h */
