//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBHandwritingStrokeView_h
#define UIKBHandwritingStrokeView_h
@import Foundation;

#include "UIView.h"
#include "UIKBHandwritingView.h"

@interface UIKBHandwritingStrokeView : UIView

@property (readonly, nonatomic) struct CGContext * bitmapContext;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } aggregateInvalidRect;
@property (weak, nonatomic) UIKBHandwritingView *keyView;

/* instance methods */
- (void)dealloc;
- (BOOL)_wantsDeepDrawing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })handwritingPointToRect:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })rect;
- (void)createBitmapIfNeeded;
- (void)updateInkColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToBitmapCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coordinates;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToViewCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coordinates;
- (void)addHandwritingPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })point;
- (void)addTrapezoidFromFirstPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })point secondPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })point;
- (void)clearRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct { struct CGPoint { double x0; double x1; } x0; double x1; })viewPointFromDataPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })point;
- (void)redrawStrokesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)displayAggregateInvalidRect;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* UIKBHandwritingStrokeView_h */
