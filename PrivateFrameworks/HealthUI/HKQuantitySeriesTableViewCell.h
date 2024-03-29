//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKQuantitySeriesTableViewCell_h
#define HKQuantitySeriesTableViewCell_h
@import Foundation;

#include "UITableViewCell.h"

@class NSArray;

@interface HKQuantitySeriesTableViewCell : UITableViewCell

@property (retain, nonatomic) NSArray *currentConstraints;

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)traitCollectionDidChange:(id)change;
- (void)_configureLabels;
- (void)_configureLayoutForTraitCollection:(id)collection;
- (id)_makeConstraints;
- (id)_makeAccessibilityConstraints;
@end

#endif /* HKQuantitySeriesTableViewCell_h */
