//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplyOfferCreditCardView_h
#define PKApplyOfferCreditCardView_h
@import Foundation;

#include "UIView.h"

@class UIButton, UILabel, UIView;

@interface PKApplyOfferCreditCardView : UIView {
  /* instance variables */
  UIView *_dividerLeft;
  UIView *_dividerRight;
}

@property (retain, nonatomic) UILabel *creditLimitTitleLabel;
@property (retain, nonatomic) UILabel *aprForPurchaseTitleLabel;
@property (retain, nonatomic) UILabel *feeTitleLabel;
@property (retain, nonatomic) UILabel *creditLimitLabel;
@property (retain, nonatomic) UILabel *aprForPurchaseLabel;
@property (retain, nonatomic) UILabel *feeLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIButton *termsLinkButton;

/* instance methods */
- (id)initWithTermsLinkAction:(id)action actionTitle:(id)title;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)showSchumerBox;
@end

#endif /* PKApplyOfferCreditCardView_h */
