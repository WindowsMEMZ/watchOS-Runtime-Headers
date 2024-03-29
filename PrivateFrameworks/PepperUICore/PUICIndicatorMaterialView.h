//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICIndicatorMaterialView_h
#define PUICIndicatorMaterialView_h
@import Foundation;

#include "UIView.h"

@class CABackdropLayer, CAFilter, NSString, UIColor;

@interface PUICIndicatorMaterialView : UIView

@property (nonatomic) unsigned long long currentStyle;
@property (nonatomic) double currentAlpha;
@property (retain, nonatomic) UIColor *currentTintColor;
@property (nonatomic) BOOL cornersRounded;
@property (retain, nonatomic) CABackdropLayer *blurLayer;
@property (retain, nonatomic) CAFilter *blurFilter;
@property (retain, nonatomic) CAFilter *luminanceFilter;
@property (retain, nonatomic) CAFilter *contrastFilter;
@property (retain, nonatomic) CAFilter *colorMatrixFilter;
@property (retain, nonatomic) CAFilter *colorCurveFilter;
@property (nonatomic) BOOL performanceMode;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) BOOL isBackdropGroupSource;

/* instance methods */
- (id)init;
- (void)setTintColor:(id)color;
- (void)configureFiltersForInteractionMode;
- (void)applyMaterialStyle:(unsigned long long)style;
- (void)roundCorners;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame withAnimation:(BOOL)animation;
- (void)layoutSubviews;
- (void)hideVisualEffect;
- (void)showVisualEffect;
@end

#endif /* PUICIndicatorMaterialView_h */
