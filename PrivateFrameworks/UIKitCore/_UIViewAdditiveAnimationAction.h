//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIViewAdditiveAnimationAction_h
#define _UIViewAdditiveAnimationAction_h
@import Foundation;

#include "CAAction-Protocol.h"
#include "UIView.h"
#include "UIViewPropertyAnimator.h"

@class CAAnimation;

@interface _UIViewAdditiveAnimationAction : NSObject<CAAction>

@property (readonly, retain, nonatomic) CAAnimation *pendingAnimation;
@property (readonly, retain, nonatomic) UIViewPropertyAnimator *animationObject;
@property (readonly, retain, nonatomic) UIView *view;

/* instance methods */
- (id)initWithPendingAnimation:(id)animation withAnimationObject:(id)object forView:(id)view;
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;
@end

#endif /* _UIViewAdditiveAnimationAction_h */
