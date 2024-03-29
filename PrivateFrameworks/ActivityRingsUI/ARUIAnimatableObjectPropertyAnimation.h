//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 211.1.0.0.0
//
#ifndef ARUIAnimatableObjectPropertyAnimation_h
#define ARUIAnimatableObjectPropertyAnimation_h
@import Foundation;

@interface ARUIAnimatableObjectPropertyAnimation : NSObject {
  /* instance variables */
  id /* block */ _animationTimingFunction;
  double _currentAnimationTime;
}

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) id _startValue;
@property (retain, nonatomic) id _endValue;
@property (retain, nonatomic) id _currentValue;

/* class methods */
+ (id /* block */)timingFunctionForMediaTimingFunction:(id)function;
+ (id /* block */)linearTimingFunction;
+ (id)animationWithDuration:(double)duration timingFunction:(id /* block */)function completion:(id /* block */)completion;

/* instance methods */
- (void)_setStartValue:(id)value;
- (void)_setEndValue:(id)value;
- (void)_setCurrentValue:(id)value;
- (void)update:(double)update;
- (void)_updateWithProgress:(float)progress;
- (BOOL)isFinishedAnimating;
- (id)valueByAddingCurrentValueToValue:(id)value;
- (void)callAndReleaseCompletionHandler;
@end

#endif /* ARUIAnimatableObjectPropertyAnimation_h */
