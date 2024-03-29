//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSwimmingWorkoutEventCollector_h
#define HDSwimmingWorkoutEventCollector_h
@import Foundation;

#include "HDWorkoutEventCollector.h"

@class CMSwimData, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDSwimmingWorkoutEventCollector : HDWorkoutEventCollector {
  /* instance variables */
  NSObject<OS_dispatch_source> *_fakeLapTimer;
  CMSwimData *_referenceSwimData;
  CMSwimData *_lastSwimData;
  NSDate *_currentSegmentStartDate;
  NSDate *_prevSegmentEndDate;
  NSObject<OS_dispatch_queue> *_workoutEventQueue;
  BOOL _shouldUpdateSegmentStartDate;
  NSDate *_lapStartDate;
}

/* class methods */
+ (BOOL)supportsWorkoutActivityType:(unsigned long long)type;
+ (BOOL)isAvailableInCurrentHardware;

/* instance methods */
- (id)initWithProfile:(id)profile delegate:(id)delegate;
- (void)startWithSessionId:(id)id;
- (void)stop;
- (void)requestPendingEventsThroughDate:(id)date completion:(id /* block */)completion;
- (void)dealloc;
- (void)unitTest_setCMWorkoutManager:(id)manager;
- (void)fakeActivityDetection:(id)detection workoutActivity:(id)activity;
@end

#endif /* HDSwimmingWorkoutEventCollector_h */
