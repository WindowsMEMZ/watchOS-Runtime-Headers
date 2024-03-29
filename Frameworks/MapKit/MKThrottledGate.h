//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKThrottledGate_h
#define MKThrottledGate_h
@import Foundation;

@class NSMutableArray, VKTimer;
@protocol OS_dispatch_queue;

@interface MKThrottledGate : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  int _maxAvailableTickets;
  double _availableTickets;
  double _refreshRate;
  NSMutableArray *_waitingJobs;
  VKTimer *_timer;
}

/* instance methods */
- (id)initWithMax:(int)max refreshRate:(double)rate queue:(id)queue;
- (void)dealloc;
- (id)description;
- (void)_ensureTimer;
- (void)dispatch:(id /* block */)dispatch;
- (void)_timerFired:(id)fired;
- (BOOL)_replenishAvailableJobsIfNecessary;
- (BOOL)_dispatchWaitingJobsIfNecessary;
@end

#endif /* MKThrottledGate_h */
