//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFWiFiHealthMonitor_h
#define SFWiFiHealthMonitor_h
@import Foundation;

@class CURetrier;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFWiFiHealthMonitor : NSObject {
  /* instance variables */
  BOOL _invalidateCalled;
  CURetrier *_wifiRetrier;
  unsigned long long _wifiStatusBadTicks;
  unsigned long long _wifiStatusGoodTicks;
  double _wifiStatusDebounceSecs;
  NSObject<OS_dispatch_source> *_wifiStatusDebounceTimer;
  long long _wifiStatusExternal;
  long long _wifiStatusInternal;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ statusHandler;

/* instance methods */
- (id)init;
- (id)description;
- (void)activate;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)reset;
- (void)_update;
- (void)_wifiEnsureStarted;
- (void)_wifiEnsureStopped;
- (void)_wifiStatusChangedExternal:(long long)external;
- (void)_wifiStatusChangedInternal:(long long)internal;
@end

#endif /* SFWiFiHealthMonitor_h */
