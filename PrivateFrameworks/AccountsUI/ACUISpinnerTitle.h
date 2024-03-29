//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 331.0.0.0.0
//
#ifndef ACUISpinnerTitle_h
#define ACUISpinnerTitle_h
@import Foundation;

#include "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface ACUISpinnerTitle : UIView {
  /* instance variables */
  UILabel *_titleView;
  UIActivityIndicatorView *_spinner;
}

/* instance methods */
- (id)initWithTitle:(id)title;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didMoveToWindow;
@end

#endif /* ACUISpinnerTitle_h */
