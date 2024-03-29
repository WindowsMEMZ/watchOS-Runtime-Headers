//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef NetPreferences_h
#define NetPreferences_h
@import Foundation;

@class NSString;

@interface NetPreferences : NSObject {
  /* instance variables */
  NSString *_buildVersion;
  NSString *_productVersion;
  BOOL _serviceDebugging;
  BOOL _isNetworkReachable;
}

@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;
@property (retain) NSString *acceptLanguageCode;
@property (nonatomic) BOOL networkReachable;
@property (readonly, nonatomic) NSString *UUID;

/* class methods */
+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

/* instance methods */
- (id)init;
- (void)resetLocale;
- (BOOL)isNetworkReachable;
- (id)_stocksUserAgent;
- (id)stocksCountryCode;
- (id)stocksLanguageCode;
- (id)stocksLanguageCodeForLanguage:(id)language;
- (id)_stocksAcceptLanguage;
- (void)addStocksHeadersToPostRequest:(id)request;
- (id)financeRequestAttributes;
- (id)_urlStringWithHost:(id)host;
- (id)fullQuoteURLOverrideForStock:(id)stock;
- (id)defaultBacksideLogoURL;
- (id)backsideLogoURL;
- (id)_cacheDirectoryPath;
- (id)logoButtonImage;
- (id)logoBacksideImage;
- (BOOL)serviceDebugging;
- (id)serviceDebuggingPath;
- (id)stocksYQLBaseURL;
- (id)signedRequestForURL:(id)url parameters:(id)parameters;
@end

#endif /* NetPreferences_h */
