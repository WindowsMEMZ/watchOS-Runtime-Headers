//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFWeatherDataServiceAPIConfiguration_h
#define WFWeatherDataServiceAPIConfiguration_h
@import Foundation;

#include "WFAPIConfigurationProtocol-Protocol.h"
#include "WFForecastDataParser-Protocol.h"

@class NSString;

@interface WFWeatherDataServiceAPIConfiguration : NSObject<WFAPIConfigurationProtocol>

@property (retain, nonatomic) Class forecastRequestFormatterClass;
@property (retain, nonatomic) NSObject<WFForecastDataParser> *forecastParser;
@property (readonly, nonatomic) NSString *environment;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVersion:(id)version environment:(id)environment;
- (id)hostUrl;
- (id)forecastRequestForTypes:(unsigned long long)types location:(id)location units:(int)units date:(id)date error:(id *)error rules:(id)rules options:(id)options;
- (id)parseForecast:(unsigned long long)forecast data:(id)data location:(id)location units:(int)units locale:(id)locale date:(id)date error:(id *)error rules:(id)rules;
- (id)aqiRequestForScaleNamed:(id)named language:(id)language;
- (id)parseAQIScaleNamed:(id)named data:(id)data error:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* WFWeatherDataServiceAPIConfiguration_h */
