//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef NSBundle_HealthKit_h
#define NSBundle_HealthKit_h
@import Foundation;

@interface NSBundle (HealthKit)
/* class methods */
+ (id)hk_findContainedBundleWithIdentifier:(id)identifier directoryURL:(id)url;

/* instance methods */
- (id)hk_localizedReadAuthorizationUsageDescription;
- (id)hk_localizedWriteAuthorizationUsageDescription;
- (id)hk_localizedClinicalReadAuthorizationUsageDescription;
- (id)hk_localizedResearchStudyUsageDescription;
- (id)hk_extensionPointIdentifier;
- (id)hk_displayName;
- (id)hk_name;
- (id)hk_findContainedBundleWithIdentifier:(id)identifier;
@end

#endif /* NSBundle_HealthKit_h */
