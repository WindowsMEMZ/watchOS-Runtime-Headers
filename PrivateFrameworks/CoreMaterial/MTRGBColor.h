//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 187.4.0.0.0
//
#ifndef MTRGBColor_h
#define MTRGBColor_h
@import Foundation;

#include "MTColor.h"

@interface MTRGBColor : MTColor

@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double alpha;

/* instance methods */
- (id)initWithRed:(double)red green:(double)green blue:(double)blue alpha:(double)alpha;
- (id)_initWithCGColor:(struct CGColor *)cgcolor;
- (id)_initWithDescription:(id)description;
- (struct CGColor *)CGColor;
- (id)colorDescription;
- (id)colorWithAlphaComponent:(double)component;
- (id)colorWithAdditionalAlphaComponent:(double)component;
- (id)colorBlendedWithColor:(id)color;
- (struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })sourceOverColorMatrix;
- (id)description;
- (id)_rgbColor;
@end

#endif /* MTRGBColor_h */
