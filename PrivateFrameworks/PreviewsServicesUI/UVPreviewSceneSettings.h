//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.20.7.0.0
//
#ifndef UVPreviewSceneSettings_h
#define UVPreviewSceneSettings_h
@import Foundation;

#include "PUICApplicationSceneSettings.h"

@interface UVPreviewSceneSettings : PUICApplicationSceneSettings

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } previewMaximumSize;
@property (readonly, nonatomic) long long previewSceneLayout;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)makeMutableCopy;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* UVPreviewSceneSettings_h */
