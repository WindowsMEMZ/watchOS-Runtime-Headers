//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKObjectPickerNoDataTableViewCell_h
#define HKObjectPickerNoDataTableViewCell_h
@import Foundation;

#include "UITableViewCell.h"

@class NSString, UIButton, UILabel, UIStackView;

@interface HKObjectPickerNoDataTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSString *explanationText;
@property (nonatomic) BOOL showLearnMoreButton;
@property (retain, nonatomic) UIButton *learnMoreButton;

/* class methods */
+ (id)defaultReuseIdentifier;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)_setupSubviews;
- (void)prepareForReuse;
@end

#endif /* HKObjectPickerNoDataTableViewCell_h */
