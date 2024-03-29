//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKTitleDetailOptionalButtonView_h
#define HKTitleDetailOptionalButtonView_h
@import Foundation;

#include "UIView.h"

@class NSArray, UIButton, UILabel;

@interface HKTitleDetailOptionalButtonView : UIView {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_detailLabel;
  UIButton *_button;
  id /* block */ _buttonAction;
  NSArray *_buttonPresentConstraints;
  NSArray *_buttonOmittedConstraints;
}

/* instance methods */
- (id)init;
- (void)setUp;
- (void)populateWithTitle:(id)title detail:(id)detail buttonText:(id)text buttonAction:(id /* block */)action;
- (id)_buttonConfigurationWithButtonTitle:(id)title;
- (void)buttonTapped;
@end

#endif /* HKTitleDetailOptionalButtonView_h */
