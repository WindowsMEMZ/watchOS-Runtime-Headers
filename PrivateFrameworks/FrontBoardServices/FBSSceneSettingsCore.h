//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSSceneSettingsCore_h
#define FBSSceneSettingsCore_h
@import Foundation;

#include "FBSCoreSettingsExtension.h"
#include "FBSDisplayConfiguration.h"
#include "FBSSceneSettings-Protocol.h"

@interface FBSSceneSettingsCore : FBSCoreSettingsExtension<FBSSceneSettings>

@property (copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (@dynamic, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double level;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) BOOL foreground;
@property (nonatomic) long long interruptionPolicy;
@property (nonatomic) BOOL occluded;
@property (nonatomic) BOOL clientFuture;
@property (nonatomic) char activityMode;
@property (nonatomic) char jetsamMode;
@property (nonatomic) BOOL prefersProcessTaskSuspensionWhileSceneForeground;

/* class methods */
+ (id)protocol;
+ (id)descriptionOfValue:(id)value forSetting:(id)setting;

/* instance methods */
- (void)frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)isForeground;
- (BOOL)isOccluded;
- (BOOL)isClientFuture;
@end

#endif /* FBSSceneSettingsCore_h */
