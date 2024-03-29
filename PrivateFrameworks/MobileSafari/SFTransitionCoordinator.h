//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFTransitionCoordinator_h
#define SFTransitionCoordinator_h
@import Foundation;

#include "SFTransitionContext-Protocol.h"
#include "SFTransitionCoordinating-Protocol.h"

@class NSMutableArray, NSString;

@interface SFTransitionCoordinator : NSObject<SFTransitionCoordinating, SFTransitionContext> {
  /* instance variables */
  NSMutableArray *_animations;
  NSMutableArray *_completionBlocks;
  long long _keyframeAnimationMode;
}

@property (readonly, nonatomic) NSObject<SFTransitionCoordinating> *publicCoordinator;
@property (readonly, nonatomic) BOOL requiresKeyframeAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isTransition;
@property (readonly, nonatomic) BOOL usesKeyframeAnimations;

/* instance methods */
- (id)initWithAnimations:(id /* block */)animations completion:(id /* block */)completion;
- (void)invokeAnimations;
- (void)invokeCompletion;
- (void)performTransitionWithAnimation:(BOOL)animation inContextOfContainerView:(id)view;
- (void)disableKeyframeAnimations;
- (void)addAnimations:(id /* block */)animations;
- (void)addKeyframeWithRelativeStartTime:(double)time relativeDuration:(double)duration animations:(id /* block */)animations;
- (void)addRetargetableAnimations:(id /* block */)animations;
- (void)addCompletion:(id /* block */)completion;
@end

#endif /* SFTransitionCoordinator_h */
