//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHeartRateRecoveryManager_h
#define HDHeartRateRecoveryManager_h
@import Foundation;

#include "CSLSOnWristMonitorDelegate-Protocol.h"
#include "HDAssertionObserver-Protocol.h"
#include "HDPowerAssertion.h"

@class CSLSOnWristMonitor, HDAssertionManager, NSString;
@protocol OS_dispatch_queue;

@interface HDHeartRateRecoveryManager : NSObject<HDAssertionObserver, CSLSOnWristMonitorDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  HDAssertionManager *_assertionManager;
  HDPowerAssertion *_powerAssertion;
  CSLSOnWristMonitor *_onWristMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)createAndTakeAssertionForOwnerIdentifier:(id)identifier sessionStateController:(id)controller;
- (void)assertionManager:(id)manager assertionTaken:(id)taken;
- (void)assertionManager:(id)manager assertionInvalidated:(id)invalidated;
- (void)onWristMonitor:(id)monitor didUpdateOnWristState:(id)state fromState:(id)state;
@end

#endif /* HDHeartRateRecoveryManager_h */
