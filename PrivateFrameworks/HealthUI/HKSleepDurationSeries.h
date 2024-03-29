//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSleepDurationSeries_h
#define HKSleepDurationSeries_h
@import Foundation;

#include "HKBarSeries.h"
#include "HKLineSeriesPointMarkerStyle.h"
#include "HKStrokeStyle.h"

@class NSArray, NSLock, UIImage;

@interface HKSleepDurationSeries : HKBarSeries

@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (retain, nonatomic) UIImage *goalLineMarkerImageStorage;
@property (copy, nonatomic) NSArray *defaultFillStylesStorage;
@property (copy, nonatomic) NSArray *highlightedFillStylesStorage;
@property (copy, nonatomic) NSArray *inactiveFillStylesStorage;
@property (copy, nonatomic) HKStrokeStyle *goalLineStrokeStyleStorage;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *goalLineMarkerStyleStorage;
@property (nonatomic) BOOL extendGoalLineToAxisStorage;
@property (copy, nonatomic) id /* block */ startOfDayTransformStorage;
@property (nonatomic) BOOL hideInBedDataStorage;
@property (nonatomic) BOOL hideAsleepDataStorage;
@property (copy, nonatomic) NSArray *defaultFillStyles;
@property (copy, nonatomic) NSArray *highlightedFillStyles;
@property (copy, nonatomic) NSArray *inactiveFillStyles;
@property (copy, nonatomic) HKStrokeStyle *goalLineStrokeStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *goalLineMarkerStyle;
@property (nonatomic) BOOL extendGoalLineToAxis;
@property (copy, nonatomic) id /* block */ startOfDayTransform;
@property (nonatomic) BOOL hideInBedData;
@property (nonatomic) BOOL hideAsleepData;

/* instance methods */
- (id)init;
- (id)goalLineMarkerImage;
- (void)_rebuildPointMarkerImages;
- (BOOL)supportsMultiTouchSelection;
- (void)clearCaches;
- (id)coordinatesForBlock:(id)block blockPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })path xAxis:(id)axis yAxis:(id)axis;
- (double)barWidthForVisibleBarCount:(long long)count axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect minimumSpacing:(double)spacing;
- (void)drawSeriesWithBlockCoordinates:(id)coordinates axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect zoomLevelConfiguration:(id)configuration pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform renderContext:(struct CGContext *)context secondaryRenderContext:(id)context seriesRenderingDelegate:(id)delegate;
- (void)drawWithBlockCoordinates:(id)coordinates visibleBarCount:(long long)count pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform context:(struct CGContext *)context axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect seriesRenderingDelegate:(id)delegate;
- (void)addGoalLinePathsToCoordinate:(id)coordinate goalLinePath:(id)path goalLineMarkerPoints:(id)points previousCoordinateGoal:(id)goal axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)_currentGoal:(id)goal differentFrom:(id)from;
- (void)_drawGoalLinePath:(id)path context:(struct CGContext *)context;
- (void)_drawGoalLineMarkers:(id)markers context:(struct CGContext *)context goalLineMarkerImage:(id)image;
- (void)_drawPaths:(id)paths withFillStyles:(id)styles strokeStyle:(id)style axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect context:(struct CGContext *)context;
- (BOOL)_dataIsHidden:(long long)hidden;
- (void)_addAnnotationForValue:(double)value axisAnnotationDelegate:(id)delegate;
- (void)_addGoalAnnotationAtLocation:(double)location axisAnnotationDelegate:(id)delegate;
- (id)_durationAbbreviatedFormatter;
- (id)_durationShortFormatter;
- (id)_stringForDuration:(double)duration;
@end

#endif /* HKSleepDurationSeries_h */
