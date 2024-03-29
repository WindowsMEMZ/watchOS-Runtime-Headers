//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICarPlaySceneComponent_h
#define _UICarPlaySceneComponent_h
@import Foundation;

#include "UICarPlayApplicationSceneSettings.h"
#include "UIScene.h"
#include "UITraitCollection.h"
#include "_UIWindowSceneComponentProviding-Protocol.h"

@class NSString;

@interface _UICarPlaySceneComponent : NSObject<_UIWindowSceneComponentProviding> {
  /* instance variables */
  UIScene *_scene;
}

@property (readonly, nonatomic) UICarPlayApplicationSceneSettings *carPlaySceneSettings;
@property (readonly, nonatomic) BOOL disableFiveRowKeyboards;
@property (readonly, nonatomic) BOOL blackWallpaperModeEnabled;
@property (readonly, nonatomic) UITraitCollection *_traitOverrides;
@property (weak, nonatomic) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScene:(id)scene;
- (id)_settingsDiffActionsForScene:(id)scene;
- (void)_invalidateTraitOverrides;
- (void)_setScene:(id)scene;
@end

#endif /* _UICarPlaySceneComponent_h */
