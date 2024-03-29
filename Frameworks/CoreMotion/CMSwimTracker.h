//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMSwimTracker_h
#define CMSwimTracker_h
@import Foundation;

#include "CMSwimTrackerInternal.h"

@interface CMSwimTracker : NSObject {
  /* instance variables */
  CMSwimTrackerInternal *_internal;
}

@property (readonly, nonatomic) CMSwimTrackerInternal *_internal;

/* class methods */
+ (BOOL)isAvailable;
+ (unsigned long long)maxSwimDataEntries;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)startUpdatesFromRecord:(id)record handler:(id /* block */)handler;
- (void)stopUpdates;
- (void)querySwimUpdatesFromRecord:(id)record handler:(id /* block */)handler;
- (void)querySWOLFSummaryWithSessionID:(id)id handler:(id /* block */)handler;
@end

#endif /* CMSwimTracker_h */
