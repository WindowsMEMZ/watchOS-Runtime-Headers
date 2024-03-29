//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIWindowAnimationController_h
#define _UIWindowAnimationController_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIWindow.h"

@class NSString;

@interface _UIWindowAnimationController : NSObject<UIViewControllerAnimatedTransitioning>

@property (nonatomic) UIWindow *window;
@property (nonatomic) BOOL shouldCrossfade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)animationControllerWithWindow:(id)window;

/* instance methods */
- (id)initWithWindow:(id)window;
- (double)transitionDuration:(id)duration;
- (void)_performCrossfadeAnimationWithContext:(id)context windowGeometryUpdatingBlock:(id /* block */)block;
- (void)_performLayoutAnimationWithContext:(id)context windowGeometryUpdatingBlock:(id /* block */)block;
- (void)animateTransition:(id)transition;
@end

#endif /* _UIWindowAnimationController_h */
