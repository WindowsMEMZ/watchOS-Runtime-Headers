//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef TWRClockFaceSceneSettings_h
#define TWRClockFaceSceneSettings_h
@import Foundation;

#include "PUICApplicationSceneSettings.h"
#include "TWRClockFaceSceneSettings-Protocol.h"

@class NSSet, NSString;

@interface TWRClockFaceSceneSettings : PUICApplicationSceneSettings<TWRClockFaceSceneSettings>

@property (readonly, copy, nonatomic) NSSet *pauseReasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* TWRClockFaceSceneSettings_h */
