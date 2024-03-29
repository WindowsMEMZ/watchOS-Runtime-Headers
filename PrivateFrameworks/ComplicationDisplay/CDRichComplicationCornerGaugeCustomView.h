//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CDRichComplicationCornerGaugeCustomView_h
#define CDRichComplicationCornerGaugeCustomView_h
@import Foundation;

#include "CDRichComplicationCornerBaseGaugeView.h"

@class UIView;

@interface CDRichComplicationCornerGaugeCustomView : CDRichComplicationCornerBaseGaugeView {
  /* instance variables */
  UIView *_outerView;
}

/* instance methods */
- (id)initWithFontFallback:(long long)fallback;
- (void)layoutSubviews;
- (id)_outerView;
@end

#endif /* CDRichComplicationCornerGaugeCustomView_h */
