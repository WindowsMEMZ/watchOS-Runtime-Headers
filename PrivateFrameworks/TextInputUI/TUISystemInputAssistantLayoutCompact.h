//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUISystemInputAssistantLayoutCompact_h
#define TUISystemInputAssistantLayoutCompact_h
@import Foundation;

#include "TUISystemInputAssistantLayoutStandard.h"

@interface TUISystemInputAssistantLayoutCompact : TUISystemInputAssistantLayoutStandard
/* instance methods */
- (void)_layoutViewSet:(id)set forFixedCenterViewWidth:(double)width inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forAssistantView:(id)view;
- (void)configureButtonBarsInViewSet:(id)set forApplicationAssistantItem:(id)item withSystemAssistantItem:(id)item withAssistantView:(id)view;
- (id)_buttonBarGroupSetForApplicationAssistantItem:(id)item withSystemInputAssistantItem:(id)item forAssistantView:(id)view;
- (void)invalidate:(id)invalidate;
@end

#endif /* TUISystemInputAssistantLayoutCompact_h */
