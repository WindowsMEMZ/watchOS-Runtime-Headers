//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKAnnotatedHorizontalLineSeries_h
#define HKAnnotatedHorizontalLineSeries_h
@import Foundation;

#include "HKGraphSeries.h"

@class NSDictionary, NSLock;

@interface HKAnnotatedHorizontalLineSeries : HKGraphSeries

@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (retain, nonatomic) NSDictionary *horizontalLineStylesStorage;
@property (nonatomic) double valueOutlineWidthStorage;
@property (retain, nonatomic) NSDictionary *horizontalLineStyles;
@property (nonatomic) double valueOutlineWidth;

/* instance methods */
- (id)init;
- (void)drawSeriesWithBlockCoordinates:(id)coordinates axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect zoomLevelConfiguration:(id)configuration pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform renderContext:(struct CGContext *)context secondaryRenderContext:(id)context seriesRenderingDelegate:(id)delegate;
- (id)_horizontalLineSeriesStyleForBlockCoordinate:(id)coordinate;
- (id)_defaultLineStyle;
- (id)_defaultLabelStyle;
- (id)_stringValueForCoordinate:(id)coordinate valueStyle:(id)style;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForString:(id)string coordinate:(id)coordinate valueAttributes:(id)attributes rectsToAvoid:(id)avoid;
- (id)coordinatesForBlock:(id)block blockPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })path xAxis:(id)axis yAxis:(id)axis;
- (BOOL)supportsMultiTouchSelection;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })point blockCoordinate:(id)coordinate chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (double)xAxisSelectedCoordinate:(double)coordinate blockCoordinate:(id)coordinate chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })point blockCoordinate:(id)coordinate chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })point blockCoordinate:(id)coordinate chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)blockCoordinate:(id)coordinate lessThan:(id)than;
- (BOOL)blockCoordinate:(id)coordinate greaterThan:(id)than;
@end

#endif /* HKAnnotatedHorizontalLineSeries_h */
