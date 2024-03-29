//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHBacklightOSTimerProvider_h
#define BLSHBacklightOSTimerProvider_h
@import Foundation;

#include "BLSHOSTimerProviding-Protocol.h"

@class NSDate, NSString;

@interface BLSHBacklightOSTimerProvider : NSObject<BLSHOSTimerProviding>

@property (readonly, nonatomic) unsigned long long mach_continuous_time;
@property (readonly, nonatomic) NSDate *now;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)dateWithTimeIntervalSinceNow:(double)now;
- (id)scheduledTimerWithIdentifier:(id)identifier interval:(double)interval leewayInterval:(double)interval handler:(id /* block */)handler;
- (id)scheduledWakingTimerWithIdentifier:(id)identifier interval:(double)interval leewayInterval:(double)interval handler:(id /* block */)handler;
- (void)dispatchToMainQueueAfterSecondsDelay:(double)delay identifier:(id)identifier block:(id /* block */)block;
@end

#endif /* BLSHBacklightOSTimerProvider_h */
