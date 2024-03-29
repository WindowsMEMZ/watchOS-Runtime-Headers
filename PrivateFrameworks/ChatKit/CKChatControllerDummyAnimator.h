//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKChatControllerDummyAnimator_h
#define CKChatControllerDummyAnimator_h
@import Foundation;

#include "CAAnimationDelegate-Protocol.h"
#include "CKImpactEffectAnimationProvider-Protocol.h"
#include "CKSendAnimationManager-Protocol.h"

@class CAEmitterLayer, NSString;
@protocol OS_dispatch_group;

@interface CKChatControllerDummyAnimator : NSObject<CAAnimationDelegate, CKImpactEffectAnimationProvider>

@property (retain, nonatomic) CAEmitterLayer *dustEmitter;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *throwAnimationGroup;
@property (copy, nonatomic) id /* block */ popAnimationCompletionBlock;
@property (weak, nonatomic) NSObject<CKSendAnimationManager> *animationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
- (void)stopAnimationWithSendAnimationContext:(id)context;
- (void)_prepareToAnimateForSendAnimationContext:(id)context;
- (id /* block */)_animationCompletionBlockWithSendAnimationContext:(id)context;
- (void)beginAnimationWithSendAnimationContext:(id)context;
- (void)beginQuickReplyAnimationWithSendAnimationContext:(id)context;
- (double)_throwAnimationDurationScaleFactorForThrownBalloonAttributes:(id)attributes finalBalloonFrames:(id)frames;
- (void)_beginThrowAnimationWithContext:(id)context;
- (void)_configureQuickReplySendAnimationGroup:(id)group withSendAnimationContext:(id)context;
- (id)balloonViewFadeInAnimationForConvertedCurrentMediaTime:(double)time;
- (void)_beginImpactAnimationWithContext:(id)context;
- (void)_beginPopAnimationWithContext:(id)context;
- (void)_beginLoudAnimationsWithContext:(id)context;
- (void)_beginFocusAnimationWithContext:(id)context;
- (void)_beginGentleAnimationWithContext:(id)context;
@end

#endif /* CKChatControllerDummyAnimator_h */
