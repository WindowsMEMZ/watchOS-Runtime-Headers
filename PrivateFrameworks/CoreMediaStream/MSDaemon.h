//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSDaemon_h
#define MSDaemon_h
@import Foundation;

@class NSTimer;
@protocol OS_dispatch_queue;

@interface MSDaemon : NSObject

@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;
@property (retain, nonatomic) NSTimer *hysteresisTimer;
@property (nonatomic) BOOL stabilizedIsBusy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idleCountQueue;

/* instance methods */
- (id)init;
- (void)retainBusy;
- (void)releaseBusy;
- (BOOL)isBusy;
- (void)retainUIBusy;
- (void)releaseUIBusy;
- (void)retainPowerAssertion;
- (void)releasePowerAssertion;
- (void)_didChangeIdleBusyState:(BOOL)state;
- (void)didIdle;
- (void)didUnidle;
- (void)_hysteresisTimerDidFire:(id)fire;
- (void)stabilizedDidIdle;
- (void)stabilizedDidUnidle;
@end

#endif /* MSDaemon_h */
