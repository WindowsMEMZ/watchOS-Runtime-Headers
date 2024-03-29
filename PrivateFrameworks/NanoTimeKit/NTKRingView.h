//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRingView_h
#define NTKRingView_h
@import Foundation;

#include ".h"
#include "CLKMonochromeFilterProvider-Protocol.h"

@interface NTKRingView : 

@property (readonly, nonatomic) double ringWidth;
@property (readonly, nonatomic) double overlapWidth;
@property (readonly, nonatomic) double radius;
@property (nonatomic) double fillFraction;
@property (nonatomic) BOOL hidesOverlapShadow;
@property (nonatomic) BOOL shouldUseMonochromeAccentColor;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame radius:(double)radius ringWidth:(double)width overlapWidth:(double)width;
- (long long)filterStyle;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_drawBackgroundRings;
- (void)_drawRingWithRadius:(double)radius fillFraction:(double)fraction alpha:(double)alpha hidesOverlapShadow:(BOOL)shadow;
@end

#endif /* NTKRingView_h */
