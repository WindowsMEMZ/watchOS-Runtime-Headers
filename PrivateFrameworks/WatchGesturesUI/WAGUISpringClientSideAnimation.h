//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGUISpringClientSideAnimation_h
#define WAGUISpringClientSideAnimation_h
@import Foundation;

#include "WAGUIClientSideAnimation.h"

@class CASpringAnimation;

@interface WAGUISpringClientSideAnimation : WAGUIClientSideAnimation {
  /* instance variables */
  CASpringAnimation *_springAnimation;
}

@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double velocity;
@property (nonatomic) double completionEpsilon;

/* class methods */
+ (id)criticallyDampedSpringAnimation;

/* instance methods */
- (id)init;
- (double)duration;
- (void)setDuration:(double)duration;
- (double)_solveForInput:(double)input;
- (void)_updateDuration;
@end

#endif /* WAGUISpringClientSideAnimation_h */
