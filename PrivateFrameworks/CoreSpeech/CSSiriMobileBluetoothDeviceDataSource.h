//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSiriMobileBluetoothDeviceDataSource_h
#define CSSiriMobileBluetoothDeviceDataSource_h
@import Foundation;

#include "AFInvalidating-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CSSiriMobileBluetoothDeviceDataSource : NSObject<AFInvalidating> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  struct BTSessionImpl * _session;
  struct BTLocalDeviceImpl * _localDevice;
  struct BTAccessoryManagerImpl * _accessoryManager;
  BOOL _attachingToSession;
  NSObject<OS_dispatch_group> *_sessionSetupGroup;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceProxiesLock;
  NSMutableDictionary *_deviceProxiesByAddress;
  NSMutableDictionary *_deviceProxiesByDeviceUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)invalidate;
- (void)_cleanUpDeviceProxies;
- (void)_detachFromSession;
- (void)_attachToSession;
- (void)_sessionAttached:(struct BTSessionImpl *)attached result:(int)result;
- (void)_sessionDetached:(struct BTSessionImpl *)detached;
- (void)_sessionTerminated:(struct BTSessionImpl *)terminated;
- (void)device:(struct BTDeviceImpl *)device serviceMask:(unsigned int)mask serviceEventType:(int)type serviceSpecificEvent:(unsigned int)event result:(int)result;
- (void)_setUpLocalDevice;
- (void)_tearDownLocalDevice;
- (void)localDevice:(struct BTLocalDeviceImpl *)device event:(int)event result:(int)result;
- (void)_setUpAccessoryManager;
- (void)_tearDownAccessoryManager;
- (void)accessoryManager:(struct BTAccessoryManagerImpl *)manager event:(int)event device:(struct BTDeviceImpl *)device state:(int)state;
- (void)_reloadForDevice:(struct BTDeviceImpl *)device;
- (id)_deviceProxies;
- (void)getBTDeviceWithAddress:(id)address completion:(id /* block */)completion;
- (void)getBTDeviceWithDeviceUID:(id)uid completion:(id /* block */)completion;
- (void)getBTLocalDeviceWithCompletion:(id /* block */)completion;
- (id)deviceWithAddress:(id)address;
- (id)deviceWithUID:(id)uid;
- (id)_deviceProxyWithAddress:(id)address createsIfAbsent:(BOOL)absent;
- (id)_deviceProxyWithUID:(id)uid createsIfAbsent:(BOOL)absent;
@end

#endif /* CSSiriMobileBluetoothDeviceDataSource_h */
