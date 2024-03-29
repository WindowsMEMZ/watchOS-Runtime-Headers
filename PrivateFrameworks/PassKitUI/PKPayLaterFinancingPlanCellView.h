//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterFinancingPlanCellView_h
#define PKPayLaterFinancingPlanCellView_h
@import Foundation;

#include "UIView.h"
#include "PKProgressBar.h"

@class PKPayLaterFinancingPlan, UIActivityIndicatorView, UIImageView, UILabel;

@interface PKPayLaterFinancingPlanCellView : UIView {
  /* instance variables */
  PKPayLaterFinancingPlan *_financingPlan;
  unsigned long long _context;
  struct CGSize { double width; double height; } _disclosureViewSize;
  long long _rowIndex;
  UILabel *_primaryLabel;
  UILabel *_secondaryLabel;
  UILabel *_tertiaryLabel;
  UIImageView *_disclosureView;
  UIActivityIndicatorView *_spinner;
  PKProgressBar *_progressBar;
}

@property (nonatomic) BOOL showSpinner;

/* instance methods */
- (id)initWithFinancingPlan:(id)plan context:(unsigned long long)context rowIndex:(long long)index;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds isTemplateLayout:(BOOL)layout;
@end

#endif /* PKPayLaterFinancingPlanCellView_h */
