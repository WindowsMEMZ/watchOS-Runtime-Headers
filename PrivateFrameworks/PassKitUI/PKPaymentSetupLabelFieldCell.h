//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupLabelFieldCell_h
#define PKPaymentSetupLabelFieldCell_h
@import Foundation;

#include "PKPaymentSetupFieldCell.h"

@class UIButton;

@interface PKPaymentSetupLabelFieldCell : PKPaymentSetupFieldCell {
  /* instance variables */
  UIButton *_button;
}

/* instance methods */
- (void)pk_applyAppearance:(id)appearance;
- (id)init;
- (id)editableTextField;
- (void)setMinimumTextLabelWidth:(double)width;
- (double)minimumTextFieldOffset;
- (void)_updateDisplay:(BOOL)display;
- (void)_updateDisplayForFieldTypeLabel:(id)label;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_buttonTapped;
@end

#endif /* PKPaymentSetupLabelFieldCell_h */
