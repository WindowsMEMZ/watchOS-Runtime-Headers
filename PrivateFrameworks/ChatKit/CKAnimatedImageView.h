//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKAnimatedImageView_h
#define CKAnimatedImageView_h
@import Foundation;

#include "UIImageView.h"
#include "CKAnimatedImage.h"
#include "IMAnimationTimerObserver-Protocol.h"

@class NSArray, NSString;

@interface CKAnimatedImageView : UIImageView<IMAnimationTimerObserver>

@property (copy, nonatomic) NSArray *frames;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (nonatomic) BOOL automaticallyObserveWindowForAnimationTimer;
@property (nonatomic) BOOL userExplicitlyUnpausedAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)didMoveToWindow;
- (void)updateAnimationTimerObserving;
- (void)animationTimerFired:(double)fired;
- (BOOL)animationExplicitlyResumed;
@end

#endif /* CKAnimatedImageView_h */
