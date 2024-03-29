//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 211.1.0.0.0
//
#ifndef ARUIUIntAnimation_h
#define ARUIUIntAnimation_h
@import Foundation;

#include "ARUIRingGroupAnimation-Protocol.h"
#include "ARUIRingGroupAnimationDelegate-Protocol.h"

@class CAMediaTimingFunction, NSString;

@interface ARUIUIntAnimation : NSObject<ARUIRingGroupAnimation> {
  /* instance variables */
  double _percent;
  id /* block */ _applier;
  BOOL _completed;
}

@property (weak, nonatomic) NSObject<ARUIRingGroupAnimationDelegate> *delegate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long startValue;
@property (readonly, nonatomic) unsigned long long currentValue;
@property (readonly, nonatomic) unsigned long long endValue;
@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)animationWithDuration:(double)duration startValue:(unsigned long long)value endValue:(unsigned long long)value timingFunction:(id)function applier:(id /* block */)applier;

/* instance methods */
- (id)initWithDuration:(double)duration startValue:(unsigned long long)value endValue:(unsigned long long)value timingFunction:(id)function applier:(id /* block */)applier;
- (void)dealloc;
- (void)update:(double)update;
- (BOOL)isAnimating;
- (void)completeAnimation;
@end

#endif /* ARUIUIntAnimation_h */
