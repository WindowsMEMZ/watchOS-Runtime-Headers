//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStatusBarQuietModeItemView_h
#define UIStatusBarQuietModeItemView_h
@import Foundation;

#include "UIStatusBarIndicatorItemView.h"
#include "CAAnimationDelegate-Protocol.h"

@class NSString;

@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView<CAAnimationDelegate> {
  /* instance variables */
  BOOL _hideForAction;
  BOOL _registeredForNotifications;
  BOOL _inactive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (BOOL)updateForNewData:(id)data actions:(int)actions;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
- (void)_triggerAction:(id)action;
- (void)setVisible:(BOOL)visible frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration;
- (double)_visibleAlpha;
- (void)setVisible:(BOOL)visible;
- (id)accessibilityHUDRepresentation;
@end

#endif /* UIStatusBarQuietModeItemView_h */
