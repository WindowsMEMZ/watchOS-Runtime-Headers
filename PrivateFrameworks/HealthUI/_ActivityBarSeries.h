//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _ActivityBarSeries_h
#define _ActivityBarSeries_h
@import Foundation;

#include "HKBarSeries.h"
#include "HKActivityBarSeriesDelegate-Protocol.h"
#include "HKDisplayTypeController.h"
#include "HKFillStyle.h"
#include "HKUnitPreferenceController.h"

@interface _ActivityBarSeries : HKBarSeries

@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (retain, nonatomic) HKFillStyle *missedGoalUnselectedFillStyle;
@property (weak, nonatomic) NSObject<HKActivityBarSeriesDelegate> *activityBarDelegate;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
@property (nonatomic) long long activityDisplayTypeIdentifier;
@property (nonatomic) double lastLegendUpdateTime;

/* instance methods */
- (id)initWithUnitPreferenceController:(id)controller activityBarDelegate:(id)delegate displayTypeController:(id)controller;
- (BOOL)supportsMultiTouchSelection;
- (void)updateLegendsForTimeScope:(long long)scope range:(id)range drawingDuringScrolling:(BOOL)scrolling;
- (void)drawWithBlockCoordinates:(id)coordinates visibleBarCount:(long long)count pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform context:(struct CGContext *)context axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect seriesRenderingDelegate:(id)delegate;
- (void)_drawPath:(id)path withFillStyle:(id)style strokeStyle:(id)style axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect context:(struct CGContext *)context;
@end

#endif /* _ActivityBarSeries_h */
