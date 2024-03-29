//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarBatteryView_h
#define STUIStatusBarBatteryView_h
@import Foundation;

#include "_UIBatteryView.h"
#include "STUIStatusBarDisplayable-Protocol.h"

@class NSString, UIAccessibilityHUDItem;

@interface STUIStatusBarBatteryView : _UIBatteryView<STUIStatusBarDisplayable>

@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })_batterySizeForIconSize:(long long)size;
+ (struct CGSize { double x0; double x1; })_pinSizeForIconSize:(long long)size;
+ (double)_lineWidthAndInterspaceForIconSize:(long long)size;
+ (double)_outsideCornerRadiusForIconSize:(long long)size;
+ (double)_insideCornerRadiusForIconSize:(long long)size;
+ (struct CGSize { double x0; double x1; })_statusBarIntrinsicContentSizeForIconSize:(long long)size;

/* instance methods */
- (double)_percentageFontSizeForIconSize:(long long)size;
- (double)_percentageFontCondensedWhenChargingForIconSize:(long long)size;
- (double)_percentTextVerticalAdjustmentForIconSize:(long long)size;
- (double)_percentTextXAdjustmentWhenFullForIconSize:(long long)size;
- (void)applyStyleAttributes:(id)attributes;
- (BOOL)hasValidIconSize;
- (double)_percentageBatteryBoltScaleFactorMultiplier;
- (double)_batteryBoltScaleFactorMultiplier;
@end

#endif /* STUIStatusBarBatteryView_h */
