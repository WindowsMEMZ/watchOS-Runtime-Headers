//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIMutableLocalVisibilitySettings_h
#define WNUIMutableLocalVisibilitySettings_h
@import Foundation;

#include "WNUILocalVisibilitySettings.h"

@interface WNUIMutableLocalVisibilitySettings : WNUILocalVisibilitySettings

@property (@dynamic, nonatomic) BOOL transitioning;
@property (@dynamic, nonatomic) long long contentState;
@property (@dynamic, nonatomic) unsigned long long lastSentLifecycleAction;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* WNUIMutableLocalVisibilitySettings_h */
