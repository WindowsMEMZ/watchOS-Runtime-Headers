//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIOnWristManager_h
#define CSLUIOnWristManager_h
@import Foundation;

#include "CSLDeviceLockDisableAssertion.h"
#include "CSLForcedOnWristAggdObserver.h"
#include "CSLLockStateObserver-Protocol.h"
#include "CSLOnWristDeviceState.h"
#include "CSLOnWristServerExportedInterface-Protocol.h"
#include "CSLWristDetectionSensor.h"
#include "CSLWristDetectionSensorDelegate-Protocol.h"
#include "MCProfileConnectionObserver-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class CSLPIBacklightAssertion, CSLPRFConcurrentObserverStore, CSLSafeMutableDictionary, NSDate, NSLock, NSMutableSet, NSString, NSXPCInterface, NSXPCListener;

@interface CSLUIOnWristManager : NSObject<NSXPCListenerDelegate, CSLOnWristServerExportedInterface, CSLWristDetectionSensorDelegate, MCProfileConnectionObserver, CSLLockStateObserver> {
  /* instance variables */
  CSLDeviceLockDisableAssertion *_onWristLockDisableAssertion;
  NSXPCListener *_listener;
  NSXPCInterface *_exportedInterface;
  NSXPCInterface *_remoteObjectInterface;
  NSMutableSet *_clientConnections;
  NSLock *_connectionsLock;
  CSLWristDetectionSensor *_wristDetectionSensor;
  unsigned long long _timestamp;
  NSDate *_datestamp;
  BOOL _allowWristDetectWhileCharging;
  CSLPRFConcurrentObserverStore *_onWristDeviceStateObservers;
  CSLForcedOnWristAggdObserver *_aggdObserver;
  BOOL _waitingForInitialWristDetect;
  BOOL _shouldIgnoreOffWristEvents;
  BOOL _isInitializing;
  unsigned long long _stateHandle;
  CSLPIBacklightAssertion *_offWristBacklightAssertion;
  CSLSafeMutableDictionary *_entitlementsByPID;
}

@property (readonly, nonatomic) long long onWristState;
@property (readonly, nonatomic) CSLOnWristDeviceState *onWristDeviceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithSensor:(id)sensor;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 :32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64] char x1[64] } x2; char x3[64] unsigned char x4[0] } *)stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char * x1; unsigned int x2; unsigned int x3; } *)hints;
- (void)invalidate;
- (void)initOnWrist;
- (void)dealloc;
- (id)cslsOnWristState;
- (BOOL)isForceOnWristEnabled;
- (BOOL)isDetectingOnWrist;
- (BOOL)isWristDetectionDisabled;
- (void)forceOnWristDetectForReason:(long long)reason;
- (void)getOnWristState:(id /* block */)state;
- (id)_getEntitlementsForConnection:(id)connection;
- (void)_setEntitlements:(id)entitlements forConnection:(id)connection;
- (void)forceOnWristUpdateForReason:(long long)reason;
- (void)_forceOnWristUpdateWithReason:(long long)reason;
- (void)requestWristDetectionDisabledStatusWithCompletion:(id /* block */)completion;
- (void)_notifyClients;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)_removeClientConnection:(id)connection;
- (void)_startObservingSystemState;
- (void)_stopObservingSystemState;
- (void)_noteBacklightWillTurnOff:(id)off;
- (void)_setOnWristDeviceState:(id)state;
- (void)_preventAOT;
- (void)_updateOnWristDeviceStateWithBlock:(id /* block */)block;
- (void)_accessClientConnectionsWithBlock:(id /* block */)block;
- (BOOL)wristDetectionSensor:(id)sensor canBeginForReason:(long long)reason;
- (void)wristDetectionSensorDidBegin:(id)begin;
- (void)wristDetectionSensorDidEnd:(id)end;
- (void)wristDetectionSensorDidUpdateOnWristStatus:(id)status;
- (BOOL)_canLockForSensorOffWristEvent;
- (void)_lockForInitialWristDetectIfNeeded;
- (void)deviceLockStateDidChange:(BOOL)change;
- (BOOL)_fakeAlwaysOnWrist;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)notification userInfo:(id)info;
- (BOOL)_wristDetectionEnabledRestriction;
- (void)_disableWristDetectionSettingChangedExternally;
- (void)_postDisableWristDetectionSettingChangedNotification;
- (BOOL)_wristDetectionDisabledPreference;
- (BOOL)_isWristDetectionDisabled;
- (void)_lockDeviceIfPossible:(id)possible;
- (void)_chargerStateDidChange:(id)change;
- (BOOL)_isDeviceCharging;
- (void)_setupDefaultObservers;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_onWristDeviceStateDidChange:(id)change;
- (BOOL)isEffectivelyOnWristForSOS;
@end

#endif /* CSLUIOnWristManager_h */
