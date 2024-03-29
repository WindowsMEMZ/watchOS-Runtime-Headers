//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRichComplicationRectangularDailyGraphView_h
#define NTKRichComplicationRectangularDailyGraphView_h
@import Foundation;

#include "NTKRichComplicationRectangularBaseView.h"

@class CLKUIColoringLabel, NSArray, UIColor, UILabel;

@interface NTKRichComplicationRectangularDailyGraphView : NTKRichComplicationRectangularBaseView {
  /* instance variables */
  double _timeLabelAndGridAlpha;
  double _noDataAlpha;
}

@property (readonly, nonatomic) double timeMarkerPadding;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cachedBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } graphRect;
@property (readonly, nonatomic) UIColor *noDataTextColor;
@property (readonly, nonatomic) UIColor *graphLabelAndGridColor;
@property (readonly, nonatomic) NSArray *timeMarkerLabels;
@property (readonly, nonatomic) CLKUIColoringLabel *titleLabel;
@property (readonly, nonatomic) UILabel *dailyHighLabel;
@property (readonly, nonatomic) UILabel *dailyLowLabel;
@property (retain, nonatomic) UIColor *accentColor;
@property (retain, nonatomic) UIColor *nonAccentColor;

/* class methods */
+ (id)dailyFormattedNoData;
+ (struct CGSize { double x0; double x1; })graphSize;

/* instance methods */
- (id)init;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)drawGraph:(struct CGContext *)graph rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)loadWithMetadata:(id)metadata;
- (void)resetToNoDataState:(id)state;
- (void)_addConstraints;
- (void)_addSubviews;
- (double)_calculateGraphXBasedOnRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect constants:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })constants;
- (id)_datesForGraphInTimezone:(id)timezone;
- (void)_drawVerticalHourLines:(struct CGContext *)lines rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect bottomLabelPadding:(double)padding;
- (double)_lineStrokeWidthGivenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_updateTimeMarkerLabelsForDates:(id)dates timezone:(id)timezone;
- (void)_applyPausedUpdate;
- (void)_handleTemplate:(id)template reason:(long long)reason;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawableGraphRect;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
@end

#endif /* NTKRichComplicationRectangularDailyGraphView_h */
