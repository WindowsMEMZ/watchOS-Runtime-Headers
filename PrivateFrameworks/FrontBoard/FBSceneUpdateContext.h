//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSceneUpdateContext_h
#define FBSceneUpdateContext_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"

@class FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSString;
@protocol NSObject><NSCopying;

@interface FBSceneUpdateContext : NSObject<BSDescriptionProviding> {
  /* instance variables */
  BOOL _lifecycleExternallyManaged;
}

@property (readonly, copy, nonatomic) NSString *sceneID;
@property (readonly, nonatomic) unsigned long long transactionID;
@property (readonly, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) FBSSceneSettingsDiff *settingsDiff;
@property (readonly, weak, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (copy, nonatomic) NSObject<NSObject><NSCopying> *clientContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)contextWithSceneID:(id)id transactionID:(unsigned long long)id settings:(id)settings settingsDiff:(id)diff transitionContext:(id)context;

/* instance methods */
- (BOOL)isClientLifecycleExternallyManaged;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* FBSceneUpdateContext_h */
