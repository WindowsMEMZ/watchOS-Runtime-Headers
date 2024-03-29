//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFBrightnessSettingsClient_h
#define WFBrightnessSettingsClient_h
@import Foundation;

#include "WFSettingsClient.h"
#include "WFDecimalValueSetting-Protocol.h"

@class NSString;

@interface WFBrightnessSettingsClient : WFSettingsClient<WFDecimalValueSetting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)createClientWithCompletionHandler:(id /* block */)handler;

/* instance methods */
- (void)getValueWithCompletionHandler:(id /* block */)handler;
- (void)setValue:(float)value completionHandler:(id /* block */)handler;
@end

#endif /* WFBrightnessSettingsClient_h */
