//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef WCFocusRingShapeLayer_h
#define WCFocusRingShapeLayer_h
@import Foundation;

#include "CAShapeLayer.h"
#include "WatchControlSettingsObserver-Protocol.h"

@class CAShapeLayer, NSString;

@interface WCFocusRingShapeLayer : CAShapeLayer<WatchControlSettingsObserver>

@property (nonatomic) long long focusRingColor;
@property (nonatomic) BOOL increasedContrast;
@property (retain, nonatomic) CAShapeLayer *innerFocusOutlineLayer;
@property (retain, nonatomic) CAShapeLayer *outerFocusOutlineLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)clearLayer;
+ (id)focusLayerForUserInterfaceStyle:(long long)style;
+ (id)selectedLayerForUserInterfaceStyle:(long long)style;
+ (id)parentLayerForUserInterfaceStyle:(long long)style;
+ (id)selectedParentLayerForUserInterfaceStyle:(long long)style;

/* instance methods */
- (void)dealloc;
- (void)watchControlSettingsDidChange:(id)change;
- (void)setPath:(struct CGPath *)path;
- (void)updateCachedSettings;
- (void)updateFocusOutlinePath;
- (void)updateAppearance;
- (id)strokeColorForFocusOutline;
- (id)viewTintColor;
- (double)scaledOutlineWidth:(double)width;
@end

#endif /* WCFocusRingShapeLayer_h */
