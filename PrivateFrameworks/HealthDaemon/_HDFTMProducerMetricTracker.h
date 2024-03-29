//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDFTMProducerMetricTracker_h
#define _HDFTMProducerMetricTracker_h
@import Foundation;

@class _HKExpiringCompletionTimer;
@protocol OS_dispatch_queue;

@interface _HDFTMProducerMetricTracker : NSObject {
  /* instance variables */
  _HKExpiringCompletionTimer *_timer;
  id /* block */ _timeoutHandler;
  NSObject<OS_dispatch_queue> *_queue;
  BOOL _paused;
  BOOL _metricAvailable;
}

/* instance methods */
@end

#endif /* _HDFTMProducerMetricTracker_h */
