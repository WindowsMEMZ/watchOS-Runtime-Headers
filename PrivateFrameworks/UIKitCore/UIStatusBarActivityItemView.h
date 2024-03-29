//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStatusBarActivityItemView_h
#define UIStatusBarActivityItemView_h
@import Foundation;

#include "UIStatusBarItemView.h"
#include "UIActivityIndicatorView.h"

@interface UIStatusBarActivityItemView : UIStatusBarItemView {
  /* instance variables */
  UIActivityIndicatorView *_activityIndicator;
  UIActivityIndicatorView *_accessibilityHUDIndicator;
  BOOL _slowActivity;
  BOOL _syncActivity;
}

/* instance methods */
- (BOOL)updateForNewData:(id)data actions:(int)actions;
- (long long)_activityIndicatorStyle;
- (void)_startAnimating;
- (void)_stopAnimating;
- (void)setVisible:(BOOL)visible;
- (double)updateContentsAndWidth;
- (double)shadowPadding;
- (id)accessibilityHUDRepresentation;
@end

#endif /* UIStatusBarActivityItemView_h */
