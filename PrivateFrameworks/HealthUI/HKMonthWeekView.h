//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMonthWeekView_h
#define HKMonthWeekView_h
@import Foundation;

#include "HKCalendarWeekView.h"

@class CALayer, NSArray;

@interface HKMonthWeekView : HKCalendarWeekView {
  /* instance variables */
  BOOL _displaysMonthTitle;
  BOOL _displaysTopBorderLine;
  BOOL _isRTL;
  CALayer *_topBorderLine;
}

@property (readonly, nonatomic) NSArray *accessoryViews;
@property (nonatomic) BOOL accessoryContentsFetched;

/* instance methods */
- (id)initWithDateCache:(id)cache displaysMonthTitle:(BOOL)title displaysTopBorderLine:(BOOL)line;
- (void)clearAccessoryViews;
- (Class)cellClass;
- (Class)monthTitleClass;
- (BOOL)supportsRTL;
- (BOOL)containsMonthTitle;
- (void)selectedCalendarDay:(id)day;
- (id)cellMatchingDate:(id)date;
- (void)setTitleHighlighted:(BOOL)highlighted;
- (void)setMonthWeekStart:(id)start;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTopBorderLine;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* HKMonthWeekView_h */
