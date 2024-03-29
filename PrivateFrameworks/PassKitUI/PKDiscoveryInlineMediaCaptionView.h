//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDiscoveryInlineMediaCaptionView_h
#define PKDiscoveryInlineMediaCaptionView_h
@import Foundation;

#include "PKDiscoveryShelfView.h"

@class NSString, UILabel;

@interface PKDiscoveryInlineMediaCaptionView : PKDiscoveryShelfView {
  /* instance variables */
  UILabel *_captionLabel;
  NSString *_captionText;
}

/* instance methods */
- (id)initWithCaptionText:(id)text;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* PKDiscoveryInlineMediaCaptionView_h */
