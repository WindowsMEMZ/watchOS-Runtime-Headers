//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKBlurEffectBalloonView_h
#define CKBlurEffectBalloonView_h
@import Foundation;

#include "CKImageBalloonView.h"

@class UIView, UIVisualEffectView;

@interface CKBlurEffectBalloonView : CKImageBalloonView

@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIView *commSafetyBadgeView;

/* instance methods */
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
@end

#endif /* CKBlurEffectBalloonView_h */
