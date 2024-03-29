//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHUISWatchComplicationsWidgetSceneClientSettingsDiffContext_h
#define CHUISWatchComplicationsWidgetSceneClientSettingsDiffContext_h
@import Foundation;

#include "CHUISWidgetSceneClientSettingsDiffContext.h"
#include "CHUISWatchComplicationsWidgetSceneClientSettings.h"

@class FBSSceneTransitionContext;

@interface CHUISWatchComplicationsWidgetSceneClientSettingsDiffContext : CHUISWidgetSceneClientSettingsDiffContext

@property (readonly, @dynamic, nonatomic) CHUISWatchComplicationsWidgetSceneClientSettings *prevClientSettings;
@property (readonly, @dynamic, nonatomic) CHUISWatchComplicationsWidgetSceneClientSettings *currClientSettings;
@property (readonly, @dynamic, nonatomic) FBSSceneTransitionContext *transitionContext;

/* instance methods */
- (id)initWithPreviousClientSettings:(id)settings currentClientSettings:(id)settings transitionContext:(id)context;
@end

#endif /* CHUISWatchComplicationsWidgetSceneClientSettingsDiffContext_h */
