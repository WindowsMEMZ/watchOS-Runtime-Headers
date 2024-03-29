//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFDeviceOperationWiFiSetup_h
#define SFDeviceOperationWiFiSetup_h
@import Foundation;

#include "SFSession.h"

@class CUBonjourBrowser, CUReachabilityMonitor, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationWiFiSetup : NSObject {
  /* instance variables */
  CUBonjourBrowser *_bonjourBrowser;
  NSString *_bonjourTestID;
  NSObject<OS_dispatch_source> *_bonjourTimer;
  BOOL _invalidateCalled;
  BOOL _reachabilityEnabled;
  CUReachabilityMonitor *_reachabilityMonitor;
  unsigned long long _startTicks;
  unsigned long long _startBonjourTestTicks;
  NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property (readonly, nonatomic) int bonjourTestState;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) double metricBonjourTestSeconds;
@property (readonly, nonatomic) double metricTotalSeconds;
@property (readonly, nonatomic) double metricWiFiSetupSeconds;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned int setupFlags;
@property (nonatomic) BOOL skipReachability;
@property (nonatomic) BOOL skipLocalReachability;
@property (retain, nonatomic) SFSession *sfSession;

/* instance methods */
- (id)init;
- (void)activate;
- (void)_activate;
- (void)_activate2;
- (void)invalidate;
- (void)_bonjourTestStart;
- (void)_bonjourTestFoundDevice:(id)device;
- (void)_bonjourTestTimeout;
- (void)_complete:(id)_complete;
- (void)_setupResponse:(id)response;
@end

#endif /* SFDeviceOperationWiFiSetup_h */
