//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIApplicationSceneTransitionContext_h
#define UIApplicationSceneTransitionContext_h
@import Foundation;

#include "FBSSceneTransitionContext.h"

@class NSDictionary, UISClickAttribution, UISPasteSharingToken;

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (nonatomic) unsigned long long lifecycleActionType;
@property (retain, nonatomic) NSDictionary *payload;
@property (nonatomic) BOOL forTesting;
@property (nonatomic) BOOL safeMode;
@property (nonatomic) double userLaunchEventTime;
@property (nonatomic) double execTime;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic) BOOL shouldTakeKeyboardFocus;
@property (nonatomic) BOOL waitForBackgroundTaskCompletion;
@property (retain, nonatomic) UISClickAttribution *clickAttribution;
@property (retain, nonatomic) UISPasteSharingToken *pasteSharingToken;
@property (nonatomic) long long statusBarAnimation;
@property (nonatomic) BOOL disableTouchCancellationOnRotation;

/* instance methods */
- (void)_setLifecycleActionType:(unsigned long long)type;
- (unsigned long long)_lifecycleActionType;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
- (BOOL)isUISubclass;
@end

#endif /* UIApplicationSceneTransitionContext_h */
