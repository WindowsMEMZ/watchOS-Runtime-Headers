//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFPowerManager_h
#define HMFPowerManager_h
@import Foundation;

#include "HMFObject.h"

@protocol OS_dispatch_queue;

@interface HMFPowerManager : HMFObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) BOOL running;
@property (readonly, nonatomic) struct IONotificationPort * notificationPort;
@property (readonly, nonatomic) unsigned int interestNotification;
@property (readonly) BOOL hasBattery;
@property (readonly) long long batteryState;
@property (readonly) float batteryLevel;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)updateBatteryState:(unsigned int)state;
- (void)_registerForPowerSourceNotifications;
- (void)_deregisterForPowerSourceNotifications:(BOOL)notifications;
- (BOOL)isRunning;
@end

#endif /* HMFPowerManager_h */
