//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDRequiredFeatureSettingsValidator_h
#define HDRequiredFeatureSettingsValidator_h
@import Foundation;

#include "HDFeatureSettingsValidating-Protocol.h"

@class NSArray;

@interface HDRequiredFeatureSettingsValidator : NSObject<HDFeatureSettingsValidating> {
  /* instance variables */
  NSArray *_requiredSettingsKeys;
}

/* instance methods */
- (id)initWithRequiredSettingsKeys:(id)keys;
- (id)featureSettingsGivenBaseSettings:(id)settings onboardingCompletion:(id)completion error:(id *)error;
@end

#endif /* HDRequiredFeatureSettingsValidator_h */
