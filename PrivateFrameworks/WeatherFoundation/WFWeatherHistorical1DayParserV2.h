//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFWeatherHistorical1DayParserV2_h
#define WFWeatherHistorical1DayParserV2_h
@import Foundation;

#include "WFForecastDataParser-Protocol.h"

@class NSString;

@interface WFWeatherHistorical1DayParserV2 : NSObject<WFForecastDataParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)parseForecastData:(id)data types:(unsigned long long)types location:(id)location locale:(id)locale date:(id)date error:(id *)error;
- (id)parseForecastData:(id)data types:(unsigned long long)types location:(id)location locale:(id)locale date:(id)date error:(id *)error rules:(id)rules;
- (id)parseHistoricalForecast:(id)forecast location:(id)location date:(id)date error:(id *)error;
- (id)parseHistoricalForecastConditionsFromObservations:(id)observations forDate:(id)date;
- (id)parseForecastConditionsFromObservations:(id)observations;
@end

#endif /* WFWeatherHistorical1DayParserV2_h */
