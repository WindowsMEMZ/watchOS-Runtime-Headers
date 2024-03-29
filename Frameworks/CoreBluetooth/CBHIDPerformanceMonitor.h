//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 172.8.0.0.0
//
#ifndef CBHIDPerformanceMonitor_h
#define CBHIDPerformanceMonitor_h
@import Foundation;

#include "CBActivatable-Protocol.h"

@class NSArray;
@protocol OS_dispatch_queue;

@interface CBHIDPerformanceMonitor : NSObject<CBActivatable> {
  /* instance variables */
  BOOL _activateCalled;
  BOOL _invalidateCalled;
  BOOL _invalidateDone;
}

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) id /* block */ excessiveIntervalHandler;
@property (nonatomic) double intervalMs;
@property (copy, nonatomic) id /* block */ summaryHandler;
@property (nonatomic) double testSeconds;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

/* instance methods */
- (id)init;
- (void)activateWithCompletion:(id /* block */)completion;
- (void)_activateWithCompletion:(id /* block */)completion;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
@end

#endif /* CBHIDPerformanceMonitor_h */
