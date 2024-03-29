//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFParsedForecastData_h
#define WFParsedForecastData_h
@import Foundation;

#include "WFAirQualityConditions.h"
#include "WFNextHourPrecipitation.h"
#include "WFWeatherConditions.h"

@class NSArray, NSData;

@interface WFParsedForecastData : NSObject

@property (retain, nonatomic) NSData *rawData;
@property (retain, nonatomic) WFAirQualityConditions *airQualityObservations;
@property (retain, nonatomic) WFWeatherConditions *currentConditions;
@property (retain, nonatomic) NSArray *lastTwentyFourHoursOfObservations;
@property (retain, nonatomic) NSArray *dailyForecasts;
@property (retain, nonatomic) NSArray *hourlyForecasts;
@property (retain, nonatomic) NSArray *pollenForecasts;
@property (retain, nonatomic) NSArray *changeForecasts;
@property (retain, nonatomic) NSArray *severeWeatherEvents;
@property (retain, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation;

/* instance methods */
- (id)objectForForecastType:(unsigned long long)type;
@end

#endif /* WFParsedForecastData_h */
