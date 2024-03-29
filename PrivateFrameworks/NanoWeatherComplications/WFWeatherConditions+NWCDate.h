//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef WFWeatherConditions_NWCDate_h
#define WFWeatherConditions_NWCDate_h
@import Foundation;

@interface WFWeatherConditions (NWCDate)
/* class methods */
+ (id)nwc_ultravioletIndexCategoryColorSpectrum;
+ (id)nwc_ultravioletIndexCategoryColorUnknown;
+ (id)nwc_ultravioletIndexCategoryColorForNumber:(id)number;
+ (id)nwc_noDataImageForComplicationFamily:(long long)family;
+ (id)nwc_symbolNameForTimeOfDay:(unsigned long long)day code:(unsigned long long)code;

/* instance methods */
- (unsigned long long)nwc_ultravioletIndexCategory;
- (id)nwc_ultravioletIndexCategoryColor;
- (id)nwc_ultravioletIndexRiskDescription;
- (unsigned long long)_code;
- (BOOL)isTypeOfPrecipitation;
- (unsigned long long)simplifiedPrecipitationCondition;
- (id)nwc_conditionImageForTimeOfDay:(unsigned long long)day withScale:(long long)scale;
- (id)nwc_symbolNameForTimeOfDay:(unsigned long long)day;
- (unsigned long long)_nwc_code;
- (id)nwc_date;
- (id)nwc_expirationDate;
@end

#endif /* WFWeatherConditions_NWCDate_h */
