//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFFloatingLayer_h
#define WFFloatingLayer_h
@import Foundation;

#include "CALayer.h"

@class CAGradientLayer, UITraitCollection, WFGradient;

@interface WFFloatingLayer : CALayer

@property (nonatomic) BOOL colorizesShadow;
@property (nonatomic) BOOL usePillCornerRadius;
@property (nonatomic) double scalingFactor;
@property (nonatomic) double highlightedCornerRadius;
@property (nonatomic) BOOL appliesCornerRadiusDuringTouchDownOnly;
@property (weak, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (copy, nonatomic) WFGradient *gradient;
@property (nonatomic) BOOL pressed;

/* instance methods */
- (id)init;
- (void)applyConfiguration:(id)configuration;
- (id)baseColor;
- (void)updateBackgroundColor;
- (void)updateShadowColor;
- (void)setPressed:(BOOL)pressed animated:(BOOL)animated;
- (void)layoutSublayers;
- (BOOL)isPressed;
@end

#endif /* WFFloatingLayer_h */
