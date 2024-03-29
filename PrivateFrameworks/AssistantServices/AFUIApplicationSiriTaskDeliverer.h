//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFUIApplicationSiriTaskDeliverer_h
#define AFUIApplicationSiriTaskDeliverer_h
@import Foundation;

#include "AFSiriTaskDelivering-Protocol.h"
#include "AFSiriTaskmaster.h"
#include "AFWatchdogTimer.h"

@class BKSApplicationStateMonitor, BKSProcessAssertion, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AFUIApplicationSiriTaskDeliverer : NSObject<AFSiriTaskDelivering> {
  /* instance variables */
  NSString *_appBundleIdentifier;
  BKSApplicationStateMonitor *_appStateMonitor;
  BKSProcessAssertion *_bKSAssertionForBgLaunch;
  AFWatchdogTimer *_assertionTimer;
  NSObject<OS_dispatch_group> *_bKSAssertionSetupGroup;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) AFSiriTaskmaster *taskmaster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAppBundleIdentifier:(id)identifier;
- (void)dealloc;
- (void)_startAppStateMonitoringForRequest:(id)request;
- (void)_processAssertionWasInvalidatedForRequest:(id)request;
- (void)processAssertionWasInvalidatedForRequest:(id)request;
- (void)_processAssertionWasAcquired:(BOOL)acquired;
- (void)deliverSiriTask:(id)task completionHandler:(id /* block */)handler;
- (void)siriTaskDidFinish;
- (void)_handleSuccessfulAppLaunchToBackground:(BOOL)background forRequest:(id)request completion:(id /* block */)completion;
- (void)_invalidateBackboardServices;
- (void)_invalidateAssertionTimer;
@end

#endif /* AFUIApplicationSiriTaskDeliverer_h */
