//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIButtonBarItemView_h
#define TUIButtonBarItemView_h
@import Foundation;

#include "UIView.h"

@class UIBarButtonItem, UIBarButtonItemGroup, UIView, _UIButtonBarButton;

@interface TUIButtonBarItemView : UIView

@property (nonatomic) BOOL collapsedItem;
@property (retain, nonatomic) UIBarButtonItem *associatedItem;
@property (retain, nonatomic) UIBarButtonItemGroup *associatedGroup;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) _UIButtonBarButton *barButtonView;
@property (retain, nonatomic) UIView *customView;

/* instance methods */
- (BOOL)_isPad;
- (void)layoutSubviews;
- (BOOL)isCollapsedItem;
@end

#endif /* TUIButtonBarItemView_h */
