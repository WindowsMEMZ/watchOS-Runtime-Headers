//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2144.60.1.0.0
//
#ifndef IAPAudioCallbackInfo_h
#define IAPAudioCallbackInfo_h
@import Foundation;

@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject {
  /* instance variables */
  undefined * _deviceStateChangedCallback;
  void * _deviceStateChangedContext;
  undefined * _volumeChangedCallback;
  void * _volumeChangedContext;
  undefined * _pauseOnHeadphoneDisconnectChangedCallback;
  void * _pauseOnHeadphoneDisconnectChangedContext;
  undefined * _volumeControlSupportChangedCallback;
  void * _volumeControlSupportChangedContext;
  CPDistributedNotificationCenter *_dnCenter;
  CPDistributedNotificationCenter *_dnCenteriAP2;
  NSLock *_lock;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)_handleiAPDaemonDied:(id)died;
- (id)init;
- (void)dealloc;
- (void)setupDeviceStateChangedCallback:(undefined *)callback withContext:(void *)context andRunLoop:(struct __CFRunLoop *)loop;
- (void)clearDeviceStateChangedCallback;
- (void)setupVolumeChangedCallback:(undefined *)callback withContext:(void *)context andRunLoop:(struct __CFRunLoop *)loop;
- (void)clearVolumeChangedCallback;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(undefined *)callback withContext:(void *)context andRunLoop:(struct __CFRunLoop *)loop;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)setupVolumeControlSupportChangedCallback:(undefined *)callback withContext:(void *)context andRunLoop:(struct __CFRunLoop *)loop;
- (void)clearVolumeControlSupportChangedCallback;
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop *)loop;
- (void)_deviceStateChanged:(id)changed;
- (void)_volumeChanged:(id)changed;
- (void)_pauseOnHeadphoneDisconnectChanged:(id)changed;
- (void)_volumeControlSupportChanged:(id)changed;
@end

#endif /* IAPAudioCallbackInfo_h */
