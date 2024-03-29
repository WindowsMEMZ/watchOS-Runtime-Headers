//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SASettingGetNoiseManagement_h
#define SASettingGetNoiseManagement_h
@import Foundation;

#include "SASettingGetValue.h"

@interface SASettingGetNoiseManagement : SASettingGetValue
/* class methods */
+ (id)getNoiseManagement;
+ (id)getNoiseManagementWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
@end

#endif /* SASettingGetNoiseManagement_h */
