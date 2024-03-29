//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 707.0.47.0.0
//
#ifndef NSBundle_SensorKit_h
#define NSBundle_SensorKit_h
@import Foundation;

@interface NSBundle (SensorKit)
/* class methods */
+ (id)sk_bundleWithIdentifier:(id)identifier;
+ (BOOL)_sr_validateRequiredFieldsForBundleIdentifier:(id)identifier sensors:(id)sensors error:(id *)error;

/* instance methods */
- (id)sk_appName;
- (id)sk_studyName;
- (id)sk_privacyURL;
- (id)sk_usageDescription;
- (id)sk_requiredCategories;
- (id)sk_perCategoryDetailDescription;
- (long long)sr_bundleType;
- (id)sr_normalizedBundleIdentifier;
- (BOOL)_sr_validateRequiredFieldsForSensors:(id)sensors error:(id *)error;
@end

#endif /* NSBundle_SensorKit_h */
