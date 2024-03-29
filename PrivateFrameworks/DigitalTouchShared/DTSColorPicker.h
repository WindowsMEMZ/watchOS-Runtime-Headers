//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 571.0.0.0.0
//
#ifndef DTSColorPicker_h
#define DTSColorPicker_h
@import Foundation;

#include "UIView.h"
#include "DTSColorPickerDelegate-Protocol.h"
#include "ETPaletteCircleView.h"

@class NSArray, UIColor, UILongPressGestureRecognizer;

@interface DTSColorPicker : UIView

@property (retain, nonatomic) NSArray *paletteCircles;
@property (retain, nonatomic) ETPaletteCircleView *selectedCircle;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;
@property (weak, nonatomic) NSObject<DTSColorPickerDelegate> *delegate;
@property (readonly, nonatomic) UIColor *selectedColor;
@property (nonatomic) BOOL dimmed;
@property (nonatomic) unsigned long long colorCircleSize;
@property (readonly, nonatomic) double colorCircleDiameter;
@property (readonly, nonatomic) double colorCircleHorizontalSpacing;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)createPaletteCirclesWithParentView:(id)view;
- (void)selectCircle:(id)circle completion:(id /* block */)completion;
- (void)paletteCircleTapped:(id)tapped;
- (void)didReceiveLongPress:(id)press;
- (void)showColorWheel;
- (BOOL)isDimmed;
@end

#endif /* DTSColorPicker_h */
