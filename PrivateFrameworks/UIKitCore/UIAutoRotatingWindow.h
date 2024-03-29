//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAutoRotatingWindow_h
#define UIAutoRotatingWindow_h
@import Foundation;

#include "UIApplicationRotationFollowingWindow.h"

@interface UIAutoRotatingWindow : UIApplicationRotationFollowingWindow {
  /* instance variables */
  long long _interfaceOrientation;
  BOOL _unknownOrientation;
}

/* instance methods */
- (void)commonInit;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame attached:(BOOL)attached;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame debugName:(id)name windowScene:(id)scene;
- (void)updateForOrientation:(long long)orientation;
- (void)_didRemoveSubview:(id)subview;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
@end

#endif /* UIAutoRotatingWindow_h */
