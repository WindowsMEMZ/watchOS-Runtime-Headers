//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef _WatchCompanionClientSideAnimationEngine_h
#define _WatchCompanionClientSideAnimationEngine_h
@import Foundation;

@class CADisplayLink, NSMutableSet;

@interface _WatchCompanionClientSideAnimationEngine : NSObject {
  /* instance variables */
  NSMutableSet *_animations;
  CADisplayLink *_displayLink;
  NSMutableSet *_finishedAnimations;
}

/* class methods */
+ (id)sharedEngine;

/* instance methods */
- (id)init;
- (void)startAnimation:(id)animation;
- (void)updateAnimation:(id)animation;
- (void)stopAnimation:(id)animation;
- (BOOL)isRunningAnimation:(id)animation;
- (void)_updateDisplayLink;
- (void)_ensureDisplayLink;
- (void)_tearDownDisplayLink;
- (void)_onDisplayLink:(id)link;
@end

#endif /* _WatchCompanionClientSideAnimationEngine_h */
