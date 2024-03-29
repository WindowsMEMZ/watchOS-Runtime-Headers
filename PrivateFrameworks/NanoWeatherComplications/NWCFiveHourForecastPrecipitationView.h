//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef NWCFiveHourForecastPrecipitationView_h
#define NWCFiveHourForecastPrecipitationView_h
@import Foundation;

#include "NWCFiveHourForecastConditionGlyphView.h"

@class NWMPrecipitationFormatter;

@interface NWCFiveHourForecastPrecipitationView : NWCFiveHourForecastConditionGlyphView

@property (retain, nonatomic) NWMPrecipitationFormatter *formatter;

/* instance methods */
- (id)_setupViewBuilderForDevice:(id)device;
- (id)dataFormatter;
@end

#endif /* NWCFiveHourForecastPrecipitationView_h */
