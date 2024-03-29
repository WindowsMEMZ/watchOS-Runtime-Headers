//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarActivityView_h
#define STUIStatusBarActivityView_h
@import Foundation;

#include "UIView.h"
#include "STUIStatusBarCycleAnimation.h"
#include "STUIStatusBarDisplayable-Protocol.h"

@class CAGradientLayer, CALayer, NSString, UIAccessibilityHUDItem, UIColor;

@interface STUIStatusBarActivityView : UIView<STUIStatusBarDisplayable>

@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CALayer *mainLayer;
@property (retain, nonatomic) CAGradientLayer *barLayer;
@property (retain, nonatomic) CALayer *pointLayer;
@property (nonatomic) double thickness;
@property (retain, nonatomic) STUIStatusBarCycleAnimation *cycleAnimation;
@property (nonatomic) BOOL isSlow;
@property (copy, nonatomic) UIColor *color;

/* instance methods */
- (void)applyStyleAttributes:(id)attributes;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)startAnimating;
- (void)stopAnimatingWithCompletionHandler:(id /* block */)handler;
- (void)_stopAnimatingWithStoppingAnimations:(BOOL)animations completionHandler:(id /* block */)handler;
- (double)_thicknessForTraitCollection:(id)collection;
- (void)_displayScaleChanged;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
@end

#endif /* STUIStatusBarActivityView_h */
