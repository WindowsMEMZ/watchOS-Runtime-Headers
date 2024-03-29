//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIButtonConfigurationVisualProviderTVOS_h
#define UIButtonConfigurationVisualProviderTVOS_h
@import Foundation;

#include "UIButtonConfigurationVisualProvider.h"
#include "_UIFloatingContentView.h"
#include "_UIFloatingContentViewDelegate-Protocol.h"

@class NSString;

@interface UIButtonConfigurationVisualProviderTVOS : UIButtonConfigurationVisualProvider<_UIFloatingContentViewDelegate> {
  /* instance variables */
  _UIFloatingContentView *_floatingContentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)cleanupForVisualProvider:(id)provider;
- (void)layoutSubviews;
- (id)effectiveContentView;
- (id)_floatingContentView;
- (void)_updateBackgroundViewWithConfiguration:(id)configuration;
- (void)_layoutFloatingContentView;
- (BOOL)_hasRemovedPlatterForState:(unsigned long long)state;
- (void)_updateContentBackdropView;
- (void)didUpdateFocusInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (void)setSelected:(BOOL)selected;
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
- (void)floatingContentView:(id)view isTransitioningFromState:(unsigned long long)state toState:(unsigned long long)state;
@end

#endif /* UIButtonConfigurationVisualProviderTVOS_h */
