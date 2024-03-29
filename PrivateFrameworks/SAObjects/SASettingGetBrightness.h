//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SASettingGetBrightness_h
#define SASettingGetBrightness_h
@import Foundation;

#include "SASettingGetFloat.h"

@interface SASettingGetBrightness : SASettingGetFloat
/* class methods */
+ (id)getBrightness;
+ (id)getBrightnessWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
@end

#endif /* SASettingGetBrightness_h */
