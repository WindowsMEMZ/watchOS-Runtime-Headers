//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMNetworkAvailability_h
#define IMNetworkAvailability_h
@import Foundation;

#include "IMDispatchTimer.h"

@class NSString;

@interface IMNetworkAvailability : NSObject {
  /* instance variables */
  NSString *_guid;
  IMDispatchTimer *_timer;
  double _timeout;
  double _wifiTimeout;
  double _startTime;
  unsigned long long _flags;
  unsigned long long _options;
  id /* block */ _completionBlock;
}

@property (nonatomic) void * context;

/* instance methods */
- (id)initWithFlags:(unsigned long long)flags options:(unsigned long long)options timeout:(double)timeout wifiTimeout:(double)timeout completionBlock:(id /* block */)block;
- (id)initWithFlags:(unsigned long long)flags timeout:(double)timeout wifiTimeout:(double)timeout completionBlock:(id /* block */)block;
- (void)dealloc;
- (void)_cancel;
- (void)_timerHit:(id)hit;
- (void)_setTimer;
- (void)start;
- (void)cancel;
- (id)mobileNetworkManager;
@end

#endif /* IMNetworkAvailability_h */
