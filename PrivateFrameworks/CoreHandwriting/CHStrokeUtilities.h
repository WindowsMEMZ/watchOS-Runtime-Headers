//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 445.201.0.0.0
//
#ifndef CHStrokeUtilities_h
#define CHStrokeUtilities_h
@import Foundation;

@interface CHStrokeUtilities : NSObject
/* class methods */
+ (void)getAddedStrokes:(id *)strokes removedStrokeIdentifiers:(id *)identifiers inStrokeProvider:(id)provider lastGroupingResult:(id)result shouldCancel:(id /* block */)cancel;
+ (id)strokeForIdentifier:(id)identifier inStrokeProvider:(id)provider;
+ (id)strokeIdentifiersForData:(id)data withStrokeProvider:(id)provider;
+ (id)encodedStrokeIdentifiers:(id)identifiers withStrokeProvider:(id)provider;
+ (void)enumeratePointsForStroke:(id)stroke interpolationType:(long long)type resolution:(long long)resolution usingBlock:(id /* block */)block;
+ (BOOL)isPointEnumerationSupportedForStroke:(id)stroke;
+ (double)durationOfStrokesInStrokeGroup:(id)group strokeProvider:(id)provider;
+ (double)speedForFinalTimeRange:(double)range stroke:(id)stroke;
+ (double)arcLengthForStroke:(id)stroke;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxOfPoints:(const void *)points rotatedAroundPoint:(struct CGPoint { double x0; double x1; })point byAngle:(double)angle;
+ (struct vector<CGRect, std::allocator<CGRect>> { struct CGRect * x0; struct CGRect * x1; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect * x0; } x2; })horizontallyOverlappedChunks:(const void *)chunks;
+ (double)horizonatalOverlapOfIndividualStrokeBounds:(const void *)bounds otherStrokeBounds:(const void *)bounds;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unionStrokeBounds:(const void *)bounds usingStrokeCountLimit:(long long)limit reverseOrder:(BOOL)order;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unionStrokeBounds:(const void *)bounds aroundXPosition:(double)xposition usingOneSideStrokeCountLimit:(long long)limit;
+ (id)createDrawingForStrokes:(id)strokes cancellationBlock:(id /* block */)block;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint * x0; struct CGPoint * x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint * x0; } x2; })convexHullForStroke:(id)stroke;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint * x0; struct CGPoint * x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint * x0; } x2; })convexHullForStrokes:(id)strokes inDrawing:(id)drawing;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint * x0; struct CGPoint * x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint * x0; } x2; })convexHullForPoints:(void *)points;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint * x0; struct CGPoint * x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint * x0; } x2; })enlargedConvexHull:(const void *)hull withMargin:(double)margin;
+ (double)circumferenceRatioOfCircleFittedToPoints:(const void *)points circleCenter:(struct CGPoint { double x0; double x1; } *)center circleRadius:(double *)radius;
+ (double)vectorMeanWithoutOutliers:(void *)outliers;
+ (double)lineOrientationForStrokePoints:(const void *)points error:(double *)error;
+ (double)threePointsOrientationWithOrigin:(struct CGPoint { double x0; double x1; })origin pointA:(struct CGPoint { double x0; double x1; })a pointB:(struct CGPoint { double x0; double x1; })b;
+ (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })point toSegmentFromPoint:(struct CGPoint { double x0; double x1; })point toPoint:(struct CGPoint { double x0; double x1; })point;
+ (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })point toRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectangle;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint * x0; struct CGPoint * x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint * x0; } x2; })regularizedPathFromPoints:(const void *)points delta:(double)delta gamma:(double)gamma outError:(double *)error;
+ (BOOL)isStrokeClassificationText:(long long)text;
@end

#endif /* CHStrokeUtilities_h */
