//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASDeviceState_h
#define _PASDeviceState_h
@import Foundation;

@interface _PASDeviceState : NSObject
/* class methods */
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { undefined * x0; undefined * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; undefined * x6; undefined * x7; undefined * x8; } *)callbacks;
+ (void)setDefaultSystemCallbacks;
+ (BOOL)isClassCLocked;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)cunlocked;
+ (void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)s block:(id /* block */)block;
+ (BOOL)isUnlocked;
+ (int)lockState;
+ (id)registerForLockStateChangeNotifications:(id /* block */)notifications;
+ (void)unregisterForLockStateChangeNotifications:(id)notifications;
+ (void *)registerForAKSEventsNotifications:(id /* block */)notifications;
+ (void)unregisterForAKSEventsNotifications:(void *)notifications;
+ (BOOL)isDeviceFormattedForProtection;
+ (id)currentOsBuild;
@end

#endif /* _PASDeviceState_h */
