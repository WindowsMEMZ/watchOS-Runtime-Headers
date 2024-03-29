//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISwipeActionPullView_h
#define UISwipeActionPullView_h
@import Foundation;

#include "UIView.h"
#include "UIColor.h"
#include "UIContextualAction.h"
#include "UISwipeActionButton.h"
#include "UISwipeActionPullViewDelegate-Protocol.h"
#include "UISwipeActionVisualStyle-Protocol.h"
#include "UIView.h"
#include "_UISwipeActionButtonDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface UISwipeActionPullView : UIView<_UISwipeActionButtonDelegate> {
  /* instance variables */
  UIView *_clippingView;
  NSMutableArray *_buttons;
  NSArray *_actions;
  UISwipeActionButton *_pressedButton;
  BOOL _swipeActionsDidChange;
  BOOL _isTentative;
  double _minimumOffset;
  unsigned long long _style;
}

@property (retain, nonatomic) NSObject<UISwipeActionVisualStyle> *visualStyle;
@property (nonatomic) double roundedStyleCornerRadius;
@property (weak, nonatomic) NSObject<UISwipeActionPullViewDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long cellEdge;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (copy, nonatomic) UIColor *backgroundPullColor;
@property (readonly, nonatomic) UIContextualAction *primarySwipeAction;
@property (readonly, nonatomic) double currentOffset;
@property (readonly, nonatomic) double openThreshold;
@property (readonly, nonatomic) double confirmationThreshold;
@property (readonly, nonatomic) UIColor *primaryActionColor;
@property (readonly, nonatomic) BOOL primaryActionIsDestructive;
@property (readonly, nonatomic) BOOL hasActions;
@property (nonatomic) BOOL buttonsUnderlapSwipedView;
@property (nonatomic) BOOL autosizesButtons;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame cellEdge:(unsigned long long)edge style:(unsigned long long)style;
- (double)_directionalMultiplier;
- (unsigned long long)_swipeActionCount;
- (Class)_buttonClass;
- (double)_paddingToSwipedView;
- (double)_interButtonPadding;
- (double)_totalInterButtonPadding;
- (void)_setupClippingViewIfNeeded;
- (void)_rebuildButtons;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)_setWidth:(double)width;
- (void)_setLayerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)_layoutClippingLayer;
- (void)resetView;
- (void)freeze;
- (void)configureWithSwipeActions:(id)actions;
- (void)moveToOffset:(double)offset extraOffset:(double)offset animator:(id)animator usingSpringWithStiffness:(double)stiffness initialVelocity:(double)velocity;
- (void)_performAction:(id)action offset:(double)offset extraOffset:(double)offset;
- (id)sourceViewForAction:(id)action;
- (void)_tappedButton:(id)button;
- (void)_pressedButton:(id)button;
- (void)_unpressedButton:(id)button;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (double)_roundedStyleCornerRadius;
- (void)_setRoundedStyleCornerRadius:(double)radius;
@end

#endif /* UISwipeActionPullView_h */
