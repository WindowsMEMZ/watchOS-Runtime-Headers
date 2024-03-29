//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 211.1.0.0.0
//
#ifndef ARUICountdownCountdown_h
#define ARUICountdownCountdown_h
@import Foundation;

#include "ARUICountdownDefaultAnimation.h"
#include "ARUICountdownAnimation-Protocol.h"

@interface ARUICountdownCountdown : ARUICountdownDefaultAnimation<ARUICountdownAnimation> {
  /* instance variables */
  unsigned long long _step;
  BOOL _cancelable;
}

@property (nonatomic) double percent;

/* class methods */
+ (id)identifier;

/* instance methods */
- (id)initWithPercent:(double)percent andStep:(unsigned long long)step cancelable:(BOOL)cancelable;
- (double)delay;
- (double)duration;
- (id)timingFunction;
- (BOOL)cancelable;
- (id)identifier;
- (id)description;
- (void)applyToCountdownView:(id)view completion:(id /* block */)completion;
- (unsigned long long)countdownStep;
@end

#endif /* ARUICountdownCountdown_h */
