//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIChartHorizontalLineSeries_h
#define FIUIChartHorizontalLineSeries_h
@import Foundation;

#include "FIUIChartNumericSeries.h"

@class NSArray, UIColor;

@interface FIUIChartHorizontalLineSeries : FIUIChartNumericSeries {
  /* instance variables */
  NSArray *_dataPoints;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double lineWidth;
@property (nonatomic) double sidePadding;

/* instance methods */
- (void)layoutSubviews;
- (void)drawLayer:(id)layer inContext:(struct CGContext *)context;
@end

#endif /* FIUIChartHorizontalLineSeries_h */
