//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRadiosPreferencesSettingsClient_h
#define WFRadiosPreferencesSettingsClient_h
@import Foundation;

#include "WFSettingsClient.h"

@class RadiosPreferences;

@interface WFRadiosPreferencesSettingsClient : WFSettingsClient

@property (readonly, nonatomic) RadiosPreferences *radiosPreferences;

/* class methods */
+ (void)createClientWithCompletionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithRadiosPreferences:(id)preferences;
@end

#endif /* WFRadiosPreferencesSettingsClient_h */
