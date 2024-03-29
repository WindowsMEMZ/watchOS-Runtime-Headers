//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIEditMenuInteractionMenuController_h
#define _UIEditMenuInteractionMenuController_h
@import Foundation;

#include "UIMenuController.h"
#include "UIEditMenuInteractionDelegate-Protocol.h"
#include "UIView.h"

@class NSArray, NSString, UIEditMenuInteraction;

@interface _UIEditMenuInteractionMenuController : UIMenuController<UIEditMenuInteractionDelegate> {
  /* instance variables */
  UIEditMenuInteraction *_currentMenuInteraction;
  NSArray *_extraMenuItems;
  UIView *_targetView;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
  BOOL _menuNeedsUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
@end

#endif /* _UIEditMenuInteractionMenuController_h */
