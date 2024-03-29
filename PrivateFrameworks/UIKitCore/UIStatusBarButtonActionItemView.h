//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStatusBarButtonActionItemView_h
#define UIStatusBarButtonActionItemView_h
@import Foundation;

#include "UIStatusBarItemView.h"
#include "UIButton.h"

@class CALayer;

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {
  /* instance variables */
  UIButton *_button;
  UIButton *_externalButton;
}

@property (nonatomic) BOOL selected;
@property (retain, nonatomic) CALayer *ringLayer;
@property (readonly, nonatomic) BOOL extendsHitTestingFrame;

/* instance methods */
- (id)_createButton;
- (id)highlightImage;
- (BOOL)allowsUserInteraction;
- (double)updateContentsAndWidth;
- (void)didUpdateFocusInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (void)layoutSubviews;
- (void)_triggerButtonWithAction:(long long)action;
- (void)_pressButton:(id)button;
- (void)_doubleTapButton:(id)button;
- (void)_pressAndHoldButton:(id)button;
- (long long)buttonType;
- (BOOL)showsTouchWhenHighlighted;
- (BOOL)usesAdvancedActions;
- (BOOL)canBecomeFocused;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)pressesBegan:(id)began withEvent:(id)event;
- (void)pressesCancelled:(id)cancelled withEvent:(id)event;
- (void)pressesEnded:(id)ended withEvent:(id)event;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentsImageFrame;
- (void)setLayerHighlightImage:(id)image;
@end

#endif /* UIStatusBarButtonActionItemView_h */
