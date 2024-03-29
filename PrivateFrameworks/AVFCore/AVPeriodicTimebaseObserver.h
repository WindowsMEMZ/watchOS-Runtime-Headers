//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVPeriodicTimebaseObserver_h
#define AVPeriodicTimebaseObserver_h
@import Foundation;

#include "AVTimebaseObserver.h"

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver {
  /* instance variables */
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _intervalRequested;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastIntervalUsed;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPeriodicFireTime;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastNonperiodicFireTime;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastStopTime;
  unsigned int _sequenceNum;
  id /* block */ _block;
}

/* instance methods */
- (id)initWithTimebase:(struct OpaqueCMTimebase *)timebase interval:(struct { long long x0; int x1; unsigned int x2; long long x3; })interval queue:(id)queue block:(id /* block */)block;
- (void)dealloc;
- (void)_fireBlockForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)_effectiveRateChanged;
- (void)_resetNextFireTime;
- (void)_handleTimeDiscontinuity;
@end

#endif /* AVPeriodicTimebaseObserver_h */
