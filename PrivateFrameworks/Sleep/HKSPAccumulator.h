//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPAccumulator_h
#define HKSPAccumulator_h
@import Foundation;

#include "HKSPThrottler.h"
#include "NAScheduler-Protocol.h"

@class NSMutableSet;

@interface HKSPAccumulator : NSObject {
  /* instance variables */
  HKSPThrottler *_throttler;
  NSObject<NAScheduler> *_scheduler;
  NSMutableSet *_accumulatedValues;
}

/* instance methods */
- (id)initWithInterval:(double)interval updateBlock:(id /* block */)block;
- (id)initWithInterval:(double)interval updateBlock:(id /* block */)block scheduler:(id)scheduler;
- (id)initWithInterval:(double)interval updateBlock:(id /* block */)block scheduler:(id)scheduler mutexGenerator:(id /* block */)generator;
- (void)accumulateValue:(id)value;
- (void)accumulateValues:(id)values;
@end

#endif /* HKSPAccumulator_h */
