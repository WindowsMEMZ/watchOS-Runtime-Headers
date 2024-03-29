//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIBatteryView_h
#define _UIBatteryView_h
@import Foundation;

#include "UIView.h"
#include "UIColor.h"
#include "UILabel.h"
#include "_UIBatteryViewAXHUDImageCacheInfo.h"
#include "_UIStatusBarView-Protocol.h"

@class CALayer, CAShapeLayer;

@interface _UIBatteryView : UIView<_UIStatusBarView>

@property (readonly, nonatomic) CAShapeLayer *bodyShapeLayer;
@property (readonly, nonatomic) CAShapeLayer *pinShapeLayer;
@property (readonly, nonatomic) CAShapeLayer *boltMaskShapeLayer;
@property (readonly, nonatomic) CAShapeLayer *boltShapeLayer;
@property (readonly, nonatomic) CAShapeLayer *percentFillShapeLayer;
@property (retain, nonatomic) UILabel *percentageLabel;
@property (retain, nonatomic) _UIBatteryViewAXHUDImageCacheInfo *accessibilityHUDImageCacheInfo;
@property (retain, nonatomic) CALayer *bodyLayer;
@property (retain, nonatomic) CALayer *pinLayer;
@property (retain, nonatomic) CALayer *boltMaskLayer;
@property (retain, nonatomic) CALayer *boltLayer;
@property (retain, nonatomic) CALayer *fillLayer;
@property (retain, nonatomic) CALayer *percentFillLayer;
@property (nonatomic) long long internalSizeCategory;
@property (nonatomic) BOOL rounded;
@property (nonatomic) BOOL showsPercentage;
@property (nonatomic) double bodyColorAlpha;
@property (nonatomic) double pinColorAlpha;
@property (copy, nonatomic) UIColor *inactiveColor;
@property (readonly, nonatomic) BOOL hasValidIconSize;
@property (nonatomic) long long sizeCategory;
@property (nonatomic) double chargePercent;
@property (nonatomic) long long chargingState;
@property (nonatomic) BOOL saverModeActive;
@property (nonatomic) long long lowBatteryMode;
@property (nonatomic) double lowBatteryChargePercentThreshold;
@property (readonly, nonatomic) BOOL lowBattery;
@property (nonatomic) BOOL showsInlineChargingIndicator;
@property (copy, nonatomic) UIColor *fillColor;
@property (copy, nonatomic) UIColor *bodyColor;
@property (copy, nonatomic) UIColor *pinColor;
@property (copy, nonatomic) UIColor *boltColor;
@property (nonatomic) long long iconSize;

/* class methods */
+ (struct CGSize { double x0; double x1; })_batterySizeForIconSize:(long long)size;
+ (struct CGSize { double x0; double x1; })_pinSizeForIconSize:(long long)size;
+ (double)_lineWidthAndInterspaceForIconSize:(long long)size;
+ (double)_outsideCornerRadiusForIconSize:(long long)size;
+ (double)_insideCornerRadiusForIconSize:(long long)size;
+ (id)_pinBezierPathForSize:(struct CGSize { double x0; double x1; })size isComplex:(BOOL)complex;
+ (id)_boltBezierPathForSize:(struct CGSize { double x0; double x1; })size;
+ (id)_boltMaskBezierPath;

/* instance methods */
- (void)_commonInit;
- (void)_createFillLayer;
- (void)_createBodyLayers;
- (void)_createBoltLayersWithSize:(struct CGSize { double x0; double x1; })size;
- (id)initWithSizeCategory:(long long)category;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)_batteryUnfilledColor;
- (id)_batteryFillColor;
- (id)_batteryTextColor;
- (BOOL)_batteryTextIsCutout;
- (struct CGSize { double x0; double x1; })_batterySizeForTraitCollection:(id)collection;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })_pinSizeForTraitCollection:(id)collection;
- (double)_lineWidthAndInterspaceForTraitCollection:(id)collection;
- (double)_outsideCornerRadiusForTraitCollection:(id)collection;
- (double)_insideCornerRadiusForTraitCollection:(id)collection;
- (double)_percentageFontSizeForIconSize:(long long)size;
- (double)_percentageFontSizeForTraitCollection:(id)collection;
- (double)_percentageFontCondensedWhenChargingForIconSize:(long long)size;
- (BOOL)_percentageFontCondensedWhenChargingForTraitCollection:(id)collection;
- (double)_percentTextVerticalAdjustmentForIconSize:(long long)size;
- (double)_percentTextVerticalAdjustmentForTraitCollection:(id)collection;
- (double)_percentTextXAdjustmentWhenFullForIconSize:(long long)size;
- (double)_percentTextXAdjustmentWhenFullForTraitCollection:(id)collection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_bodyRectForTraitCollection:(id)collection;
- (double)_batteryBoltPositionOffsetForTraitCollection:(id)collection;
- (void)_updateLightningBoltAndPercentagePosition;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateBodyLayers;
- (void)_updateBodyColors;
- (void)_updateFillColor;
- (void)_updateBatteryFillColor;
- (void)__updateFillLayer;
- (void)__resetBoltLayers;
- (void)_updateFillLayer;
- (void)_fillLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)frame cornerRadius:(double *)radius;
- (double)_percentageBatteryBoltScaleFactorMultiplier;
- (double)_batteryBoltScaleFactorMultiplier;
- (double)_batteryBoltLargeScaleFactor;
- (double)_batteryBoltSmallScaleFactor;
- (void)_updateBolt;
- (void)_notifyWillBeginAnimatingBoltToVisible:(BOOL)visible;
- (void)_notifyDidFinishAnimatingBoltToVisible:(BOOL)visible;
- (void)_willBeginAnimatingBoltToVisible:(BOOL)visible;
- (void)_didFinishAnimatingBoltToVisible:(BOOL)visible;
- (void)_updatePercentageFont;
- (void)_updatePercentage;
- (void)_updateTransform;
- (void)_unflipBoltIfNecessary;
- (BOOL)isLowBattery;
- (BOOL)_shouldShowBolt;
- (void)_updateForObservedTraitChange;
- (void)setRounded:(BOOL)rounded iconSize:(long long)size;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)accessibilityHUDRepresentation;
@end

#endif /* _UIBatteryView_h */
