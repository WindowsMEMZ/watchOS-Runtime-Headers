//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef RMDeviceIDCell_h
#define RMDeviceIDCell_h
@import Foundation;

#include "PSTableCell.h"

@interface RMDeviceIDCell : PSTableCell
/* class methods */
+ (id)specifierWithTitle:(id)title value:(id)value;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier specifier:(id)specifier;
- (void)layoutSubviews;
@end

#endif /* RMDeviceIDCell_h */
