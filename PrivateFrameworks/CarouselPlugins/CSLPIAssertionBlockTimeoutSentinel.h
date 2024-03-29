//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPIAssertionBlockTimeoutSentinel_h
#define CSLPIAssertionBlockTimeoutSentinel_h
@import Foundation;

#include "CSLPIAssertionBlockSentinelBase.h"

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSLPIAssertionBlockTimeoutSentinel : CSLPIAssertionBlockSentinelBase {
  /* instance variables */
  NSObject<OS_dispatch_source> *_timer;
  NSObject<OS_dispatch_queue> *_timerQueue;
}

@property (copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) double timeout;

/* instance methods */
- (id)initWithHandler:(id /* block */)handler timeout:(double)timeout;
- (void)dealloc;
@end

#endif /* CSLPIAssertionBlockTimeoutSentinel_h */
