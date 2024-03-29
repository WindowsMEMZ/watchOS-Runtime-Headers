//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusActiveSceneObserver_h
#define _UIFocusActiveSceneObserver_h
@import Foundation;

#include "_UIFocusStateObserver.h"
#include "UIScene.h"

@interface _UIFocusActiveSceneObserver : _UIFocusStateObserver {
  /* instance variables */
  UIScene *_scene;
}

/* instance methods */
- (id)init;
- (id)initWithScene:(id)scene;
- (id)_initWithScene:(id)scene;
- (void)beginMonitoringContextChangesForWindow:(id)window;
- (void)stopMonitoringContextChangesForWindow:(id)window;
@end

#endif /* _UIFocusActiveSceneObserver_h */
