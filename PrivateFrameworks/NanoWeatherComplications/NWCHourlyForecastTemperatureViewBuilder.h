//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef NWCHourlyForecastTemperatureViewBuilder_h
#define NWCHourlyForecastTemperatureViewBuilder_h
@import Foundation;

#include "NWCHourlyForecastViewBuildable-Protocol.h"

@class CLKDevice, NSString;

@interface NWCHourlyForecastTemperatureViewBuilder : NSObject<NWCHourlyForecastViewBuildable>

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDevice:(id)device;
- (id)createHourlyForecastView;
@end

#endif /* NWCHourlyForecastTemperatureViewBuilder_h */
