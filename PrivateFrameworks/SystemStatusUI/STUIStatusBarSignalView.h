//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarSignalView_h
#define STUIStatusBarSignalView_h
@import Foundation;

#include "STUIStatusBarPersistentAnimationView.h"
#include "STUIStatusBarDisplayable-Protocol.h"

@class NSString, UIAccessibilityHUDItem, UIColor;

@interface STUIStatusBarSignalView : STUIStatusBarPersistentAnimationView<STUIStatusBarDisplayable>

@property (nonatomic) BOOL smallSize;
@property (nonatomic) BOOL rounded;
@property (nonatomic) long long iconSize;
@property (nonatomic) long long numberOfBars;
@property (nonatomic) long long numberOfActiveBars;
@property (nonatomic) long long signalMode;
@property (copy, nonatomic) UIColor *inactiveColor;
@property (copy, nonatomic) UIColor *activeColor;
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
+ (struct CGSize { double x0; double x1; })_intrinsicContentSizeForNumberOfBars:(long long)bars iconSize:(long long)size;

/* instance methods */
- (void)_colorsDidChange;
- (void)_iconSizeDidChange;
- (void)_updateBars;
- (void)_updateActiveBars;
- (void)_updateFromMode:(long long)mode;
- (void)applyStyleAttributes:(id)attributes;
@end

#endif /* STUIStatusBarSignalView_h */
