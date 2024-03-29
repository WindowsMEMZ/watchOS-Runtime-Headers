//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputViewSetPlacementAssistantOnScreenForNonKeyboard_h
#define UIInputViewSetPlacementAssistantOnScreenForNonKeyboard_h
@import Foundation;

#include "UIInputViewSetPlacementWrapper.h"
#include "NSSecureCoding-Protocol.h"

@interface UIInputViewSetPlacementAssistantOnScreenForNonKeyboard : UIInputViewSetPlacementWrapper<NSSecureCoding>
/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)horizontalConstraintForInputViewSet:(id)set hostView:(id)view containerView:(id)view;
- (id)verticalConstraintForInputViewSet:(id)set hostView:(id)view containerView:(id)view;
- (id)widthConstraintForInputViewSet:(id)set hostView:(id)view containerView:(id)view;
@end

#endif /* UIInputViewSetPlacementAssistantOnScreenForNonKeyboard_h */
