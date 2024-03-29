//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDeveloperDockMonitor_h
#define CSLDeveloperDockMonitor_h
@import Foundation;

#include "CSLChargingChangeObserver-Protocol.h"
#include "CSLDeveloperDockMonitorDelegate-Protocol.h"
#include "CSLLockStateObserver-Protocol.h"

@class NSString;

@interface CSLDeveloperDockMonitor : NSObject<CSLChargingChangeObserver, CSLLockStateObserver> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _isOnDeveloperDock;
}

@property (weak, nonatomic) NSObject<CSLDeveloperDockMonitorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (BOOL)_isUSBHostFamilyKey:(unsigned int)key;
- (void)_checkIfDeveloperDockConnected:(id)connected;
- (void)_withLock:(id /* block */)lock;
- (void)_setOnDeveloperDock:(BOOL)dock;
- (BOOL)isOnDeveloperDock;
- (void)onCharger;
- (void)offCharger;
- (void)deviceLockStateDidChange:(BOOL)change;
@end

#endif /* CSLDeveloperDockMonitor_h */
