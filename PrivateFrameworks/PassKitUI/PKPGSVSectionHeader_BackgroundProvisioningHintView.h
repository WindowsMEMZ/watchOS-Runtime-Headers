//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPGSVSectionHeader_BackgroundProvisioningHintView_h
#define PKPGSVSectionHeader_BackgroundProvisioningHintView_h
@import Foundation;

#include "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface PKPGSVSectionHeader_BackgroundProvisioningHintView : UIView {
  /* instance variables */
  UILabel *_backgroundProvisioningIndicatorLabel;
  UIActivityIndicatorView *_backgroundProvisioningActivityIndicator;
}

/* instance methods */
- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_layoutSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds isTemplateLayout:(BOOL)layout;
@end

#endif /* PKPGSVSectionHeader_BackgroundProvisioningHintView_h */
