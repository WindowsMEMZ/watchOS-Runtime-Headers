//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIMotionEffectCoreMotionEventProvider_h
#define _UIMotionEffectCoreMotionEventProvider_h
@import Foundation;

#include "_UIMotionEffectEventProvider.h"

@class CMMotionManager, NSOperationQueue;

@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {
  /* instance variables */
  CMMotionManager *_motionManager;
  NSOperationQueue *_motionEventQueue;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setSlowUpdatesEnabled:(BOOL)enabled;
- (void)startGeneratingEvents;
- (void)stopGeneratingEvents;
- (id)currentEvent;
- (BOOL)shouldLogEvents;
- (double)fastUpdateIntervalForLogs;
- (double)slowUpdateIntervalForLogs;
@end

#endif /* _UIMotionEffectCoreMotionEventProvider_h */
