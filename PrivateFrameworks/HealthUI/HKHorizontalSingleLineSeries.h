//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHorizontalSingleLineSeries_h
#define HKHorizontalSingleLineSeries_h
@import Foundation;

#include "HKGraphSeries.h"
#include "HKAxisLabelDataSource-Protocol.h"

@class NSLock, NSString, UIColor, UIImage;

@interface HKHorizontalSingleLineSeries : HKGraphSeries<HKAxisLabelDataSource>

@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (nonatomic) double topInsetPercentageStorage;
@property (nonatomic) BOOL shouldConnectPointsStorage;
@property (retain, nonatomic) UIColor *baseColorStorage;
@property (nonatomic) double lineWidthStorage;
@property (nonatomic) double selectedLineWidthStorage;
@property (nonatomic) double markRadiusStorage;
@property (retain, nonatomic) UIImage *selectedPointMarkerImageStorage;
@property (nonatomic) double topInsetPercentage;
@property (nonatomic) BOOL shouldConnectPoints;
@property (retain, nonatomic) UIColor *baseColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double selectedLineWidth;
@property (nonatomic) double markRadius;
@property (retain, nonatomic) UIImage *selectedPointMarkerImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)drawSeriesWithBlockCoordinates:(id)coordinates axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect zoomLevelConfiguration:(id)configuration pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform renderContext:(struct CGContext *)context secondaryRenderContext:(id)context seriesRenderingDelegate:(id)delegate;
- (id)coordinatesForBlock:(id)block blockPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })path xAxis:(id)axis yAxis:(id)axis;
- (double)yCoordinateForLevel:(long long)level chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)supportsMultiTouchSelection;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })point blockCoordinate:(id)coordinate chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })point blockCoordinate:(id)coordinate chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })point blockCoordinate:(id)coordinate chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)blockCoordinate:(id)coordinate lessThan:(id)than;
- (BOOL)blockCoordinate:(id)coordinate greaterThan:(id)than;
- (id)cacheKeysForModelRange:(id)range zoomScale:(double)scale;
- (id)findAxisLabelsInModelRange:(id)range zoomScale:(double)scale;
- (struct CGPoint { double x0; double x1; })renderPositionForLabelLocation:(id)location rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect zoomScale:(double)scale contentOffset:(struct CGPoint { double x0; double x1; })offset constantOffset:(double)offset isHorizontal:(BOOL)horizontal optionalOffset:(struct CGPoint { double x0; double x1; })offset;
@end

#endif /* HKHorizontalSingleLineSeries_h */
