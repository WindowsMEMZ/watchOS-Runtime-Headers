//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2622.0.0.0.0
//
#ifndef ALCity_h
#define ALCity_h
@import Foundation;

@class NSDictionary, NSString;

@interface ALCity : NSObject {
  /* instance variables */
  NSString *_identifierForCPCity;
  BOOL _localizationAttempted;
}

@property (readonly, nonatomic) NSString *classicIdentifier;
@property (readonly, nonatomic) NSDictionary *properties;
@property (nonatomic) int identifier;
@property (retain, nonatomic) NSString *localeCode;
@property (retain, nonatomic) NSString *timeZone;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *yahooCode;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *unlocalizedName;
@property (retain, nonatomic) NSString *countryName;
@property (retain, nonatomic) NSString *unlocalizedCountryName;
@property (retain, nonatomic) NSString *countryOverride;
@property (retain, nonatomic) NSString *unlocalizedCountryOverride;
@property (nonatomic) BOOL displayNameIncludingCountryShowsOnlyCountry;

/* instance methods */
- (id)init;
- (id)initWithProperties:(id)properties;
- (id)initWithSQLRow:(char * *)sqlrow;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)ensureLocalized;
- (id)displayNameIncludingCountry:(BOOL)country withFormat:(id)format;
- (id)displayNameIncludingCountry:(BOOL)country;
- (id)description;
@end

#endif /* ALCity_h */
