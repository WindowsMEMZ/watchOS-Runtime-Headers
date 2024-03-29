//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKInteractiveAnimator_h
#define NTKInteractiveAnimator_h
@import Foundation;

@class CADisplayLink, NSMutableSet, UIGestureRecognizer;

@interface NTKInteractiveAnimator : NSObject {
  /* instance variables */
  NSMutableSet *_recycledAnimations;
  NSMutableSet *_activeAnimations;
  BOOL _running;
  BOOL _gestureEnded;
  double _targetProgress;
  double _currentProgress;
  CADisplayLink *_displayLink;
  double _lastFireTime;
}

@property (nonatomic) double smoothingDuration;
@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (nonatomic) BOOL latched;
@property (nonatomic) double progress;
@property (copy, nonatomic) id /* block */ beginHandler;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ endHandler;

/* instance methods */
- (id)init;
- (id)initWithGestureRecognizer:(id)recognizer;
- (void)dealloc;
- (void)beginAnimations;
- (void)endAnimations;
- (void)_reportBegin;
- (void)_reportProgress;
- (void)_reportEnd;
- (void)_gestureChanged:(id)changed;
- (void)_handleGestureBegan;
- (void)_updateAnimationForCurrentProgress;
- (void)_handleGestureEnded;
- (void)_checkLatchedIfUsingOrbGestureRecognizer;
- (void)_setTargetProgress:(double)progress;
- (void)_onDisplayLink:(id)link;
- (id)_anyAvailableAnimation;
- (void)_tearDown;
@end

#endif /* NTKInteractiveAnimator_h */
