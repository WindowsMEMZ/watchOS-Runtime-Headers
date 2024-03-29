//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarControlCenterIndicatorView_h
#define STUIStatusBarControlCenterIndicatorView_h
@import Foundation;

#include "STUIStatusBarImageView.h"

@class CAGradientLayer, CALayer;

@interface STUIStatusBarControlCenterIndicatorView : STUIStatusBarImageView {
  /* instance variables */
  BOOL _hidingWithMask;
  CALayer *_maskSolidLayer;
  CAGradientLayer *_maskGradientLayer;
}

@property (nonatomic) BOOL hideWithWipe;

/* instance methods */
- (void)_setupMaskView;
- (void)_updateMaskLayersFrames;
- (void)_updateMaskFrame;
- (void)layoutSubviews;
@end

#endif /* STUIStatusBarControlCenterIndicatorView_h */
