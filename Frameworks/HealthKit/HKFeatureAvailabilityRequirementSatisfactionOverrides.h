//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKFeatureAvailabilityRequirementSatisfactionOverrides_h
#define HKFeatureAvailabilityRequirementSatisfactionOverrides_h
@import Foundation;

@class NSString, NSUserDefaults;

@interface HKFeatureAvailabilityRequirementSatisfactionOverrides : NSObject

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

/* instance methods */
- (id)initWithFeatureIdentifier:(id)identifier;
- (id)initWithUserDefaults:(id)defaults featureIdentifier:(id)identifier;
- (id)overriddenSatisfactionOfRequirementWithIdentifier:(id)identifier;
- (id)overriddenRequirementIdentifiers;
- (void)overrideSatisfactionOfRequirementWithIdentifier:(id)identifier isSatisfied:(id)satisfied;
- (void)resetAllRequirementSatisfactionOverrides;
@end

#endif /* HKFeatureAvailabilityRequirementSatisfactionOverrides_h */
