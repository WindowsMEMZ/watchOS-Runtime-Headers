//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef WLEasyToHitCustomButton_h
#define WLEasyToHitCustomButton_h
@import Foundation;

#include "UIButton.h"

@interface WLEasyToHitCustomButton : UIButton

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } margins;

/* instance methods */
- (id)initWithMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
@end

#endif /* WLEasyToHitCustomButton_h */
