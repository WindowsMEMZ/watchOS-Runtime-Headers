//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterCalendarMonthHeaderView_h
#define PKPayLaterCalendarMonthHeaderView_h
@import Foundation;

#include "UIView.h"

@class PKPayLaterInstallmentsMonth, UILabel;

@interface PKPayLaterCalendarMonthHeaderView : UIView {
  /* instance variables */
  PKPayLaterInstallmentsMonth *_installmentsMonth;
  UILabel *_totalDueLabel;
  UILabel *_totalDueAmountLabel;
  UILabel *_totalPaidLabel;
  UILabel *_totalPaidAmountLabel;
}

/* instance methods */
- (id)initWithInstallmentsMonth:(id)month;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds isTemplateLayout:(BOOL)layout;
- (double)_layoutLabelsSideBySide:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })side isTemplateLayout:(BOOL)layout;
- (double)_layoutLabelsStacked:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stacked isTemplateLayout:(BOOL)layout;
@end

#endif /* PKPayLaterCalendarMonthHeaderView_h */
