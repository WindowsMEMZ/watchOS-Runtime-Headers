//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKMonthTitleView_h
#define _HKMonthTitleView_h
@import Foundation;

#include "UIView.h"
#include "HKCalendarMonthTitleFormatting-Protocol.h"

@class UILabel, UIView;

@interface _HKMonthTitleView : UIView<HKCalendarMonthTitleFormatting> {
  /* instance variables */
  UIView *_dividerLine;
}

@property (retain, nonatomic) UILabel *monthTitle;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double dividerOriginX;
@property (nonatomic) double dividerWidth;
@property (nonatomic) BOOL highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_updateFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)_monthStringFromDate:(id)date;
- (void)setDate:(id)date;
- (void)traitCollectionDidChange:(id)change;
- (BOOL)isHighlighted;
@end

#endif /* _HKMonthTitleView_h */
