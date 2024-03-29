//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLHistoryItemView_h
#define SCLHistoryItemView_h
@import Foundation;

#include "UIView.h"
#include "SCLUnlockHistoryItemFormatter.h"

@class NSArray, SCLHistoryGroup, SCLTimeIntervalsFormatter, UILabel;

@interface SCLHistoryItemView : UIView

@property (retain, nonatomic) NSArray *verticalLayoutConstraints;
@property (retain, nonatomic) NSArray *unconditionalConstraints;
@property (retain, nonatomic) UILabel *intervalLabel;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) SCLUnlockHistoryItemFormatter *historyItemFormatter;
@property (retain, nonatomic) SCLTimeIntervalsFormatter *intervalsFormatter;
@property (copy, nonatomic) SCLHistoryGroup *historyGroup;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
@end

#endif /* SCLHistoryItemView_h */
