//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSmoothingTask_h
#define HDSmoothingTask_h
@import Foundation;

#include "HDDaemonTransaction.h"

@class HKWorkout, NSArray;

@interface HDSmoothingTask : NSObject {
  /* instance variables */
  BOOL _isTimedOut;
  HKWorkout *_workout;
  NSArray *_routes;
  NSArray *_unsmoothedLocations;
  id /* block */ _completionHandler;
  HDDaemonTransaction *_transaction;
  unsigned long long _smoothingAttempts;
  double _smoothingTaskTimeout;
}

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* HDSmoothingTask_h */
