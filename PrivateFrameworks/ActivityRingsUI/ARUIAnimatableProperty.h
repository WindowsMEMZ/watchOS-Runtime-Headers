//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 211.1.0.0.0
//
#ifndef ARUIAnimatableProperty_h
#define ARUIAnimatableProperty_h
@import Foundation;

@class NSMutableArray;

@interface ARUIAnimatableProperty : NSObject {
  /* instance variables */
  id /* block */ _getter;
  id /* block */ _setter;
  NSMutableArray *_animations;
}

@property (retain, nonatomic) id startValue;
@property (retain, nonatomic) id endValue;
@property (retain, nonatomic) id currentValue;

/* instance methods */
- (id)initWithGetter:(id /* block */)getter setter:(id /* block */)setter;
- (void)setValueImmediate:(id)immediate;
- (void)addPropertyAnimation:(id)animation;
- (void)removeAllPropertyAnimations;
- (void)update:(double)update;
- (BOOL)isFinishedAnimating;
@end

#endif /* ARUIAnimatableProperty_h */
