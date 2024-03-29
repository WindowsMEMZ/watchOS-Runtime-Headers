//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKBezierPathElement_h
#define NTKBezierPathElement_h
@import Foundation;

@interface NTKBezierPathElement : NSObject

@property (nonatomic) int type;
@property (nonatomic) unsigned long long pointCount;
@property (nonatomic) struct CGPoint { double x0; double x1; } * points;
@property (nonatomic) double length;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } endPoint;

/* instance methods */
- (id)initWithStartPoint:(struct CGPoint { double x0; double x1; })point pathElement:(const struct CGPathElement { int x0; struct CGPoint * x1; } *)element;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })pointOnPathForX:(double)x;
- (unsigned long long)numberOfPointsForCGPathElementType:(int)type;
- (double)computeLength;
@end

#endif /* NTKBezierPathElement_h */
