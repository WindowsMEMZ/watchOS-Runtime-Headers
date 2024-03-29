//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSSceneUpdate_h
#define FBSSceneUpdate_h
@import Foundation;

#include "FBSSceneTransitionContext.h"
#include "FBSSettings.h"
#include "FBSSettingsDiff.h"

@interface FBSSceneUpdate : NSObject {
  /* instance variables */
  FBSSettings *_settings;
  FBSSettings *_previousSettings;
  FBSSettingsDiff *_diff;
  FBSSceneTransitionContext *_context;
}

/* instance methods */
- (id)settings;
- (id)previousSettings;
- (id)settingsDiff;
- (id)transitionContext;
- (void)inspect:(id /* block */)inspect;
@end

#endif /* FBSSceneUpdate_h */
