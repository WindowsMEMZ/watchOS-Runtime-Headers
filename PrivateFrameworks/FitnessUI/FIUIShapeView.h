//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIShapeView_h
#define FIUIShapeView_h
@import Foundation;

#include "UIView.h"

@interface FIUIShapeView : UIView
/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setPath:(id)path;
- (void)setFillColor:(id)color;
- (void)setStrokeColor:(id)color;
- (void)setLineWidth:(double)width;
- (void)setStrokeEnd:(double)end;
- (id)shapeLayer;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
@end

#endif /* FIUIShapeView_h */
