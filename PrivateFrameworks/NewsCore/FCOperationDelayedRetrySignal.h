//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCOperationDelayedRetrySignal_h
#define FCOperationDelayedRetrySignal_h
@import Foundation;

#include "FCOperationRetrySignal-Protocol.h"

@class NSString;

@interface FCOperationDelayedRetrySignal : NSObject<FCOperationRetrySignal> {
  /* instance variables */
  unsigned long long _signalTime;
  double _delay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelay:(double)delay;
- (void)onQueue:(id)queue signal:(id /* block */)signal;
@end

#endif /* FCOperationDelayedRetrySignal_h */
