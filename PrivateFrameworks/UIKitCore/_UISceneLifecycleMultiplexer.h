//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISceneLifecycleMultiplexer_h
#define _UISceneLifecycleMultiplexer_h
@import Foundation;

#include "UIApplicationSceneSettings.h"
#include "UIScene.h"

@interface _UISceneLifecycleMultiplexer : NSObject {
  /* instance variables */
  UIScene *_uiSceneOfRecord;
  UIApplicationSceneSettings *_transitionalLifecycleState;
  struct { unsigned int x :1 completedLaunch; unsigned int x :1 activatedOnce; } _multiplexerFlags;
}

@property (readonly, nonatomic) BOOL activatedOnce;
@property (readonly, nonatomic) BOOL lifecycleWantsUnnecessaryDelayForSceneDelivery;
@property (readonly, nonatomic) long long applicationState;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) BOOL suspendedEventsOnly;
@property (readonly, nonatomic) BOOL suspendedUnderLock;
@property (readonly, nonatomic) BOOL runningInTaskSwitcher;

/* class methods */
+ (id)sharedInstance;
+ (id)mostActiveSceneWithTest:(id /* block */)test;
+ (id)_mostActiveSceneIncludingInternal:(BOOL)internal withTest:(id /* block */)test;
+ (long long)_compareLifecycleStateOfScene:(id)scene toScene:(id)scene;
+ (id)mostActiveScene;
+ (id)mostActiveWindowSceneOnScreen:(id)screen;
+ (id)_mostActiveSceneForApplicationState;
+ (void)configureInitialDeactivationReasons:(unsigned long long)reasons;

/* instance methods */
- (id)initForAppSingleton:(id)singleton;
- (BOOL)isActive;
- (BOOL)isTrackingScene:(id)scene;
- (void)completeApplicationLaunchWithFBSScene:(id)fbsscene transitionContext:(id)context;
- (void)noteApplicationLaunchCompleted;
- (void)uiScene:(id)scene transitionedFromState:(id)state withTransitionContext:(id)context;
- (void)forceExitWithTransitionContext:(id)context scene:(id)scene;
- (void)collectBackingStores;
- (void)_performBlock:(id /* block */)block withApplicationOfDeactivationReasons:(unsigned long long)reasons fromReasons:(unsigned long long)reasons;
- (void)_evalTransitionToSettings:(id)settings fromSettings:(id)settings forceExit:(BOOL)exit withTransitionStore:(struct { id x0; id x1; })store;
- (void)_scheduleFirstCommit;
- (BOOL)_prepareForClientSuspensionWithScene:(id)scene;
- (void)_globalTestRelatedActivationActionsForFirstActivation:(BOOL)activation foreground:(BOOL)foreground interfaceStyle:(long long)style transitionContext:(id)context;
@end

#endif /* _UISceneLifecycleMultiplexer_h */
