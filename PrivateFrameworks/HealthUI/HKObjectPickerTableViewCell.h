//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKObjectPickerTableViewCell_h
#define HKObjectPickerTableViewCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "HKObjectPickerDetailView.h"

@class NSArray, NSAttributedString, NSString, UIImageView, UILabel, UIStackView, UIView;

@interface HKObjectPickerTableViewCell : UITableViewCell {
  /* instance variables */
  long long _presentationOptions;
}

@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIStackView *recordDetailStackView;
@property (retain, nonatomic) HKObjectPickerDetailView *patientDetailView;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UIImageView *checkboxView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView *secondSeparatorView;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (nonatomic) BOOL checked;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property (copy, nonatomic) NSArray *detailItems;
@property (copy, nonatomic) NSString *patientName;
@property (copy, nonatomic) NSArray *patientDetails;
@property (copy, nonatomic) NSString *baseAccessibilityIdentifier;

/* class methods */
+ (id)defaultReuseIdentifier;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier presentationOptions:(long long)options;
- (void)_setupSubviews;
- (void)_setupConstraints;
- (void)prepareForReuse;
- (void)_updateAccessibilityIdentifiers;
- (void)_updateRecordDetailAccessibilityIdentifiers;
@end

#endif /* HKObjectPickerTableViewCell_h */
