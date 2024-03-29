//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFInternalAppSettings_h
#define WFInternalAppSettings_h
@import Foundation;

#include "WFSettings-Protocol.h"
#include "WFWeatherEventsConfig.h"

@class NSDictionary, NSSet, NSString, NSURL;

@interface WFInternalAppSettings : NSObject<WFSettings>

@property (readonly, nonatomic) NSString *apiVersion;
@property (readonly, nonatomic) NSSet *aqiEnabledCountryCodes;
@property (readonly, nonatomic) NSString *apiVersionFallback;
@property (readonly, nonatomic) unsigned long long networkFailedAttemptsLimit;
@property (readonly, nonatomic) unsigned long long networkSwitchExpirationTimeInSeconds;
@property (readonly, nonatomic) unsigned long long locationNumDecimalsOfPrecision;
@property (readonly, nonatomic) WFWeatherEventsConfig *weatherEventsConfig;
@property (readonly, nonatomic) NSDictionary *widgetRefreshPolicy;
@property (readonly, nonatomic) NSURL *appAnalyticsEndpointUrl;
@property (readonly, nonatomic) float dataSamplingRate;
@property (readonly, nonatomic) float telemetrySamplingRate;
@property (readonly, nonatomic) float locationGeocodingSamplingRate;
@property (readonly, nonatomic) double userIdentifierResetTimeInterval;
@property (readonly, nonatomic) double privateUserIdentifierResetTimeInterval;
@property (readonly, nonatomic) double cachedGeocodeLocationExpirationTimeInterval;
@property (readonly, nonatomic) double locationUpdateMinTimeInterval;
@property (readonly, nonatomic) double locationUpdateMinDistance;
@property (readonly, nonatomic) BOOL disableForecastRequestCancelation;
@property (readonly, nonatomic) BOOL disablePriorityForecastRequestQueue;
@property (readonly, nonatomic) BOOL loadSavedCitiesFromKVSOnly;
@property (readonly, nonatomic) BOOL disableLimitReverseGeocoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* WFInternalAppSettings_h */
