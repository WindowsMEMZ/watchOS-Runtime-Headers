//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIKBHandwritingQuadCurvePointFIFO_h
#define TUIKBHandwritingQuadCurvePointFIFO_h
@import Foundation;

#include "TUIKBHandwritingPointFIFO.h"

@class NSMutableArray;

@interface TUIKBHandwritingQuadCurvePointFIFO : TUIKBHandwritingPointFIFO

@property (nonatomic) double scale;
@property (retain, nonatomic) NSMutableArray *prevPoints;
@property (nonatomic) struct { struct CGPoint { double x0; double x1; } x0; double x1; } lastPoint;
@property (copy) id /* block */ emissionHandler;

/* instance methods */
- (id)initWithFIFO:(id)fifo scale:(double)scale;
- (void)addPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })point;
- (void)flush;
- (void)clear;
@end

#endif /* TUIKBHandwritingQuadCurvePointFIFO_h */
