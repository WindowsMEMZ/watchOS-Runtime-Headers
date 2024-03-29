//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputViewAnimationStyleDirectional_h
#define UIInputViewAnimationStyleDirectional_h
@import Foundation;

#include "UIInputViewAnimationStyle.h"

@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle

@property (nonatomic) int outDirection;

/* class methods */
+ (id)animationStyleAnimated:(BOOL)animated duration:(double)duration outDirection:(int)direction;

/* instance methods */
- (id)startPlacementForInputViewSet:(id)set currentPlacement:(id)placement windowScene:(id)scene;
- (id)endPlacementForInputViewSet:(id)set windowScene:(id)scene;
- (id)controllerForStartPlacement:(id)placement endPlacement:(id)placement;
- (BOOL)canDismissWithScrollView;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* UIInputViewAnimationStyleDirectional_h */
