//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKWeekdayHeaderPaletteView_h
#define HKWeekdayHeaderPaletteView_h
@import Foundation;

#include "UIView.h"

@class NSMutableArray;

@interface HKWeekdayHeaderPaletteView : UIView {
  /* instance variables */
  NSMutableArray *_weekdayLabels;
}

/* class methods */
+ (id)weekdayFont;
+ (double)preferredHeight;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame shouldSupportRTL:(BOOL)rtl;
- (void)_updateFont;
- (void)layoutSubviews;
- (double)_xOriginForMonthViewWithIndex:(long long)index itemWidth:(double)width leftMargin:(double)margin;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* HKWeekdayHeaderPaletteView_h */
