//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSSceneTransitionContext_h
#define FBSSceneTransitionContext_h
@import Foundation;

#include "FBSSettings.h"
#include "FBSMutableSettings-Protocol.h"
#include "FBSSceneTransitionContext-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class BKSAnimationFenceHandle, BSAnimationSettings, BSProcessHandle, FBProcessExecutionContext, FBSceneUpdateContext, FBWatchdogTransitionContext, NSSet, NSString, RBSProcessHandle;

@interface FBSSceneTransitionContext : FBSSettings<FBSSceneTransitionContext, NSCopying, NSMutableCopying, FBSMutableSettings>

@property (copy, @dynamic, nonatomic) BSAnimationSettings *animationSettings;
@property (retain, @dynamic, nonatomic) BKSAnimationFenceHandle *animationFence;
@property (copy, @dynamic, nonatomic) NSSet *actions;
@property (retain, @dynamic, nonatomic) BSProcessHandle *originatingProcess;
@property (retain, @dynamic, nonatomic) FBProcessExecutionContext *executionContext;
@property (retain, @dynamic, nonatomic) RBSProcessHandle *clientProcessHandle;
@property (retain, @dynamic, nonatomic) FBSceneUpdateContext *updateContext;
@property (retain, @dynamic, nonatomic) FBWatchdogTransitionContext *watchdogTransitionContext;
@property (@dynamic, nonatomic) BOOL allowCPUThrottling;
@property (@dynamic, nonatomic) BOOL runningBoardAssertionDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)subclassExtension;
+ (id)transitionContext;
+ (Class)_baseClass;
+ (Class)_mutableClass;
+ (id)_settingsExtensionsForSceneExtension:(Class)extension;

/* instance methods */
- (id)initWithSettings:(id)settings;
- (id)transientLocalClientSettings;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBSSceneTransitionContext_h */
