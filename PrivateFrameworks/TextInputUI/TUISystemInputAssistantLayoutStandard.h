//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUISystemInputAssistantLayoutStandard_h
#define TUISystemInputAssistantLayoutStandard_h
@import Foundation;

#include "TUISystemInputAssistantLayout.h"

@interface TUISystemInputAssistantLayoutStandard : TUISystemInputAssistantLayout

@property (nonatomic) BOOL isSplit;
@property (nonatomic) double leftSplitWidth;
@property (nonatomic) double rightSplitWidth;

/* instance methods */
- (void)configureButtonBarsInViewSet:(id)set forApplicationAssistantItem:(id)item withSystemAssistantItem:(id)item withAssistantView:(id)view;
- (void)_layoutViewSet:(id)set forFixedCenterViewWidth:(double)width inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forAssistantView:(id)view;
- (void)_layoutViewSet:(id)set forFlexibleCenterViewInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forAssistantView:(id)view;
- (void)layoutViewSet:(id)set inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forAssistantView:(id)view;
- (void)setCurrentRectEdge:(unsigned long long)edge;
- (void)trackHorizontalMovement:(struct CGPoint { double x0; double x1; })movement;
- (unsigned long long)currentRectEdge;
@end

#endif /* TUISystemInputAssistantLayoutStandard_h */
