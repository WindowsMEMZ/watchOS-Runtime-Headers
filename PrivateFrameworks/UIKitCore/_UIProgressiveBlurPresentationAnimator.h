//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIProgressiveBlurPresentationAnimator_h
#define _UIProgressiveBlurPresentationAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface _UIProgressiveBlurPresentationAnimator : NSObject<UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic) BOOL presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)alphaAnimationFactory;
+ (id)transformAnimationFactory;

/* instance methods */
- (id)initForPresenting:(BOOL)presenting;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (BOOL)isPresenting;
@end

#endif /* _UIProgressiveBlurPresentationAnimator_h */
