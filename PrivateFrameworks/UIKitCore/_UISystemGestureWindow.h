//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISystemGestureWindow_h
#define _UISystemGestureWindow_h
@import Foundation;

#include "_UIRootWindow.h"
#include "UISystemGestureView.h"

@interface _UISystemGestureWindow : _UIRootWindow {
  /* instance variables */
  UISystemGestureView *_systemGestureView;
}

/* class methods */
+ (BOOL)_isSecure;

/* instance methods */
- (id)initWithDisplay:(id)display;
- (id)initWithScreen:(id)screen;
- (id)initWithDisplayConfiguration:(id)configuration;
- (BOOL)_extendsScreenSceneLifetime;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_appearsInLoupe;
- (BOOL)_shouldPrepareScreenForWindow;
- (BOOL)canBecomeKeyWindow;
- (id)_focusResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)_systemGestureView;
- (BOOL)_isSystemGestureWindow;
@end

#endif /* _UISystemGestureWindow_h */
