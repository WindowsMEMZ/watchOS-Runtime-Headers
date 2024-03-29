//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSGestureMonitorWatch_h
#define CSGestureMonitorWatch_h
@import Foundation;

#include "CSGestureMonitor.h"
#include "CSLSWakeGestureObserver-Protocol.h"

@class CSLSWakeGestureMonitor, NSString;

@interface CSGestureMonitorWatch : CSGestureMonitor<CSLSWakeGestureObserver> {
  /* instance variables */
  CSLSWakeGestureMonitor *_gestureMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)_startMonitoringWithQueue:(id)queue;
- (void)_stopMonitoring;
- (void)wakeGestureRecognized:(id)recognized;
- (void)_didReceiveWakeGesture;
- (void)_notifyObserver:(id)observer;
@end

#endif /* CSGestureMonitorWatch_h */
