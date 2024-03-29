//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKUIInviteesViewConflictSearchCell_h
#define EKUIInviteesViewConflictSearchCell_h
@import Foundation;

#include "UITableViewCell.h"

@class NSArray, UIActivityIndicatorView, UIColor, UILabel;

@interface EKUIInviteesViewConflictSearchCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSArray *persistentConstraints;
@property (nonatomic) double leftInset;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UIColor *originalLabelFontColor;

/* class methods */
+ (id)_grayTextColor;
+ (id)_labelFont;
+ (id)_showMoreLocalizedString;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)updateConstraints;
- (void)setInitialSearchInProgressState;
- (void)setNoAvailableTimesStateWithNumberOfExistingTimes:(unsigned long long)times hasError:(BOOL)error;
- (void)setShowMoreState;
- (void)setAvailabilityRequestInProgressState;
- (void)_setText:(id)text textColor:(id)color spinnerEnabled:(BOOL)enabled;
@end

#endif /* EKUIInviteesViewConflictSearchCell_h */
