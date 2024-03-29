//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKRelativeLineSeries_h
#define HKRelativeLineSeries_h
@import Foundation;

#include "HKLineSeries.h"

@class UIColor;

@interface HKRelativeLineSeries : HKLineSeries {
  /* instance variables */
  long long _chartSizeClass;
}

@property (readonly, copy, nonatomic) UIColor *color;
@property (readonly, copy, nonatomic) UIColor *unavailableColor;
@property (readonly, nonatomic) double indeterminateLozengeLineWidth;
@property (readonly, nonatomic) double indeterminateLozengeHollowLineRatio;

/* instance methods */
- (id)initFromLineSeries:(id)series color:(id)color unavailableColor:(id)color indeterminateLozengeLineWidth:(double)width chartSizeClass:(long long)class;
- (void)drawSeriesWithBlockCoordinates:(id)coordinates axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect zoomLevelConfiguration:(id)configuration pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform renderContext:(struct CGContext *)context secondaryRenderContext:(id)context seriesRenderingDelegate:(id)delegate;
- (void)_drawIndeterminateLozengesForBlockCoordinates:(id)coordinates pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform renderContext:(struct CGContext *)context seriesRenderingDelegate:(id)delegate;
- (void)_drawIndeterminateLozengeForCoordinate:(id)coordinate context:(struct CGContext *)context seriesRenderingDelegate:(id)delegate;
- (id)_colorForUserInfo:(id)info;
- (id)coordinatesForBlock:(id)block blockPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })path xAxis:(id)axis yAxis:(id)axis;
- (BOOL)supportsMultiTouchSelection;
- (BOOL)_shouldForceGapBetweenUserInfo:(id)info andUserInfo:(id)info;
- (BOOL)_isUserInfoIndeterminateRelativeValue:(id)value;
- (double)_indeterminateLozengeValueForUserInfo:(id)info;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })point blockCoordinate:(id)coordinate chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })point blockCoordinate:(id)coordinate chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })point blockCoordinate:(id)coordinate chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect blockCoordinate:(id)coordinate;
- (BOOL)blockCoordinate:(id)coordinate lessThan:(id)than;
- (BOOL)blockCoordinate:(id)coordinate greaterThan:(id)than;
@end

#endif /* HKRelativeLineSeries_h */
