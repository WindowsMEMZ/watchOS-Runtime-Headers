//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSMutableDisplayModeSettings_h
#define SBSMutableDisplayModeSettings_h
@import Foundation;

#include "SBSDisplayModeSettings.h"

@interface SBSMutableDisplayModeSettings : SBSDisplayModeSettings

@property (@dynamic, nonatomic) unsigned long long scale;
@property (@dynamic, nonatomic) long long overscanCompensation;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SBSMutableDisplayModeSettings_h */
