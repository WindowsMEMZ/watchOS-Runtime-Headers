//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXDeviceMonitor_h
#define AXDeviceMonitor_h
@import Foundation;

@class NSMutableSet, NSRunLoop;
@protocol AXDeviceMonitorDelegate;

@interface AXDeviceMonitor : NSObject {
  /* instance variables */
  NSRunLoop *_targetRunLoop;
  struct __IOHIDManager * _hidManager;
  unsigned long long _state;
  NSMutableSet *_devices;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _devicesLock;
}

@property (weak, nonatomic) NSObject<AXDeviceMonitorDelegate> *delegate;

/* class methods */
+ (id)bluetoothKeyboardDevices;

/* instance methods */
- (id)initWithMatchingDictionary:(id)dictionary callbackRunLoop:(id)loop;
- (id)initWithMatchingMultiple:(id)multiple callbackRunLoop:(id)loop;
- (void)_commonInitWithRunLoop:(id)loop;
- (void)dealloc;
- (id)copyDevices;
- (void)begin;
- (void)invalidate;
- (void)didAddDevice:(struct __IOHIDDevice *)device;
- (void)didRemoveDevice:(struct __IOHIDDevice *)device;
- (id)_existingDevicesForDevice:(struct __IOHIDDevice *)device;
- (void)informDelegate;
@end

#endif /* AXDeviceMonitor_h */
