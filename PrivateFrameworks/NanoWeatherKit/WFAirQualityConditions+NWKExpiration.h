//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef WFAirQualityConditions_NWKExpiration_h
#define WFAirQualityConditions_NWKExpiration_h
@import Foundation;

@interface WFAirQualityConditions (NWKExpiration)
/* class methods */
+ (id)nwm_longDescriptionForAirQualityConditions:(id)conditions atLocation:(id)location;
+ (id)nwm_shortDescriptionForAirQualityConditions:(id)conditions atLocation:(id)location;
+ (id)nwm_titleForAirQualityConditions:(id)conditions atLocation:(id)location;
+ (id)_nwm_descriptionForAirQualityConditions:(id)conditions atLocation:(id)location withExtension:(id)extension;
+ (id)_nwm_v2AirQualityConditionsDescriptionKeyForCategory:(unsigned long long)category atLocation:(id)location;

/* instance methods */
- (id)nwk_description;
- (BOOL)nwk_isExpired;
@end

#endif /* WFAirQualityConditions_NWKExpiration_h */
