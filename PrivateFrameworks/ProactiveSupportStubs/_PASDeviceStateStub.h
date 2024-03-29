//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASDeviceStateStub_h
#define _PASDeviceStateStub_h
@import Foundation;

#include "_PASDeviceState.h"

@interface _PASDeviceStateStub : _PASDeviceState
/* class methods */
+ (void)startMockingSystem;
+ (void)stopMockingSystem;
+ (void)setLockState:(int)state;
+ (void)setClassCLocked:(BOOL)clocked;
+ (void)setLockStateAKS:(int)aks;
+ (void)setDeviceFormattedForProtection:(BOOL)protection;
+ (void)setCurrentOsBuild:(id)build;
@end

#endif /* _PASDeviceStateStub_h */
