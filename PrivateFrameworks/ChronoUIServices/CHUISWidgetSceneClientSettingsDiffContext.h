//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHUISWidgetSceneClientSettingsDiffContext_h
#define CHUISWidgetSceneClientSettingsDiffContext_h
@import Foundation;

#include "CHUISWidgetSceneClientSettings.h"

@class FBSSceneTransitionContext;

@interface CHUISWidgetSceneClientSettingsDiffContext : NSObject

@property (readonly, nonatomic) CHUISWidgetSceneClientSettings *prevClientSettings;
@property (readonly, nonatomic) CHUISWidgetSceneClientSettings *currClientSettings;
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext;

/* instance methods */
- (id)initWithPreviousClientSettings:(id)settings currentClientSettings:(id)settings transitionContext:(id)context;
@end

#endif /* CHUISWidgetSceneClientSettingsDiffContext_h */
