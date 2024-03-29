//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIFocusAnimationCoordinator_h
#define UIFocusAnimationCoordinator_h
@import Foundation;

#include "UIFocusUpdateContext.h"
#include "_UIFocusAnimationConfiguration.h"

@class NSMutableArray;

@interface UIFocusAnimationCoordinator : NSObject

@property (retain, nonatomic) _UIFocusAnimationConfiguration *focusingConfiguration;
@property (retain, nonatomic) _UIFocusAnimationConfiguration *unfocusingConfiguration;
@property (readonly, nonatomic) NSMutableArray *focusingAnimations;
@property (readonly, nonatomic) NSMutableArray *legacyFocusingAnimations;
@property (readonly, nonatomic) NSMutableArray *unfocusingAnimations;
@property (readonly, nonatomic) NSMutableArray *legacyUnfocusingAnimations;
@property (readonly, nonatomic) NSMutableArray *focusingCompletions;
@property (readonly, nonatomic) NSMutableArray *unfocusingCompletions;
@property (readonly, nonatomic) UIFocusUpdateContext *focusUpdateContext;
@property (readonly, copy, nonatomic) _UIFocusAnimationConfiguration *activeConfiguration;
@property (readonly, nonatomic) BOOL locked;
@property (readonly, nonatomic) double unfocusingRepositionAnimationDuration;
@property (readonly, nonatomic) long long activeFocusAnimation;
@property (readonly, nonatomic) unsigned long long animationOptions;
@property (readonly, nonatomic) double animationDelay;
@property (readonly, nonatomic) double activeAnimationDuration;
@property (readonly, nonatomic) double focusingAnimationDuration;
@property (readonly, nonatomic) double unfocusingAnimationDuration;

/* class methods */
+ (id)_focusingAnimationCoordinatorWithConfiguration:(id)configuration inContext:(id)context;
+ (id)_unfocusingAnimationCoordinatorWithConfiguration:(id)configuration inContext:(id)context;
+ (id)_focusAnimationCoordinatorForAnimationType:(long long)type withConfiguration:(id)configuration inContext:(id)context;

/* instance methods */
- (id)init;
- (id)_initWithFocusUpdateContext:(id)context;
- (void)_configureWithFocusUpdateContext:(id)context;
- (unsigned long long)_animationOptions;
- (double)_animationDelay;
- (double)_activeAnimationDuration;
- (double)_focusingAnimationDuration;
- (double)_unfocusingAnimationDuration;
- (double)_unfocusingRepositionAnimationDuration;
- (void)_setConfiguration:(id)configuration forFocusAnimation:(long long)animation;
- (id)_configurationForFocusAnimation:(long long)animation;
- (id)_activeConfiguration;
- (void)_prepareForFocusAnimation:(long long)animation;
- (void)_consumeBlocks:(id)blocks;
- (void)_consumeBlocks:(id)blocks withAnimationContext:(id)context;
- (void)addCoordinatedAnimations:(id /* block */)animations completion:(id /* block */)completion;
- (void)addCoordinatedAnimationsForAnimation:(long long)animation animations:(id /* block */)animations completion:(id /* block */)completion;
- (void)addCoordinatedFocusingAnimations:(id /* block */)animations completion:(id /* block */)completion;
- (void)addCoordinatedUnfocusingAnimations:(id /* block */)animations completion:(id /* block */)completion;
- (void)_animate;
- (void)_animateFocusAnimation:(long long)animation;
- (void)_cancelFocusAnimation:(long long)animation;
- (id)_focusUpdateContext;
- (BOOL)_isLocked;
@end

#endif /* UIFocusAnimationCoordinator_h */
