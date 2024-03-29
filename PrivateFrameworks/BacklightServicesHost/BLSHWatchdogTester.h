//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHWatchdogTester_h
#define BLSHWatchdogTester_h
@import Foundation;

#include "BLSHWatchdogProvider.h"
#include "BLSHWatchdogProviderDelegate-Protocol.h"

@class NSMapTable;

@interface BLSHWatchdogTester : NSObject {
  /* instance variables */
  NSMapTable *_testables;
  unsigned long long _lock_nextTimerID;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BLSHWatchdogProvider *_watchdogProvider;
  NSObject<BLSHWatchdogProviderDelegate> *_watchdogProviderDelegate;
}

/* instance methods */
- (id)initWithWatchdogProviderDelegate:(id)delegate testables:(id)testables;
- (id)_watchdogProvider;
- (void)_triggerTestWatchdog:(id)watchdog;
@end

#endif /* BLSHWatchdogTester_h */
