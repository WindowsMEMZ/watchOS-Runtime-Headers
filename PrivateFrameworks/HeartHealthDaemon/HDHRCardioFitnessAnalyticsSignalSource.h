//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHRCardioFitnessAnalyticsSignalSource_h
#define HDHRCardioFitnessAnalyticsSignalSource_h
@import Foundation;

#include "HKHRCardioFitnessAnalyticsSignalSource.h"

@class HDProfile;

@interface HDHRCardioFitnessAnalyticsSignalSource : HKHRCardioFitnessAnalyticsSignalSource {
  /* instance variables */
  HDProfile *_profile;
}

/* instance methods */
- (id)initWithProfile:(id)profile;
- (long long)bucketedAgeWithError:(id *)error;
- (id)biologicalSexStringWithError:(id *)error;
- (id)latestClassificationWithIsOnboarded:(BOOL)onboarded error:(id *)error;
- (id)_latestCardioFitnessValueWithError:(id *)error;
- (id)_classificationStringForCardioFitnessValue:(double)value age:(long long)age biologicalSex:(long long)sex;
- (id)_birthDateComponentsWithError:(id *)error;
- (long long)_biologicalSexWithError:(id *)error;
@end

#endif /* HDHRCardioFitnessAnalyticsSignalSource_h */
