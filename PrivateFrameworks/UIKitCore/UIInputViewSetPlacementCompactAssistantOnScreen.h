//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputViewSetPlacementCompactAssistantOnScreen_h
#define UIInputViewSetPlacementCompactAssistantOnScreen_h
@import Foundation;

#include "UIInputViewSetPlacementAssistantOnScreen.h"

@interface UIInputViewSetPlacementCompactAssistantOnScreen : UIInputViewSetPlacementAssistantOnScreen

@property (nonatomic) struct CGPoint { double x0; double x1; } offset;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)isCompactAssistantView;
- (id)applicatorInfoForOwner:(id)owner;
- (id)widthConstraintForInputViewSet:(id)set hostView:(id)view containerView:(id)view;
- (id)horizontalConstraintForInputViewSet:(id)set hostView:(id)view containerView:(id)view;
- (double)verticalOffset;
@end

#endif /* UIInputViewSetPlacementCompactAssistantOnScreen_h */
