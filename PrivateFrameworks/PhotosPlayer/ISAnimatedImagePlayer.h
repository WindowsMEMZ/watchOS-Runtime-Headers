//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef ISAnimatedImagePlayer_h
#define ISAnimatedImagePlayer_h
@import Foundation;

#include "ISAnimatedImageTimer.h"
#include "ISChangeObserver-Protocol.h"

@class NSHashTable, NSString, PFAnimatedImage;

@interface ISAnimatedImagePlayer : NSObject<ISChangeObserver> {
  /* instance variables */
  NSHashTable *_weakDestinations;
  PFAnimatedImage *_image;
  ISAnimatedImageTimer *_timer;
  BOOL _hasStartedAnimating;
  BOOL _hasFinishedAnimating;
  double _timeAccumulator;
  double _previousFrameTime;
  BOOL _infiniteLoop;
  unsigned long long _remainingLoopCount;
}

@property (nonatomic) struct CGImage * currentImage;
@property (readonly, nonatomic) PFAnimatedImage *animatedImage;
@property (nonatomic) BOOL playing;
@property (nonatomic) unsigned long long displayedFrameIndex;
@property (nonatomic) BOOL allowFrameDrops;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAnimatedImage:(id)image;
- (void)dealloc;
- (void)registerDestination:(id)destination;
- (void)unregisterDestination:(id)destination;
- (void)_notifyDestinationsOfFrameChange;
- (void)_notifyDestinationsOfAnimationStart;
- (void)_notifyDestinationsOfAnimationEnd;
- (BOOL)_anyDestinationIsReady;
- (void)_seekToBeginning;
- (void)_setCurrentFrame:(struct CGImage *)frame;
- (BOOL)_shouldAnimate;
- (void)_resetAnimationState;
- (void)updateAnimation;
- (void)observable:(id)observable didChange:(unsigned long long)change context:(void *)context;
- (void)animationTimerFired:(double)fired;
- (BOOL)isPlaying;
@end

#endif /* ISAnimatedImagePlayer_h */
