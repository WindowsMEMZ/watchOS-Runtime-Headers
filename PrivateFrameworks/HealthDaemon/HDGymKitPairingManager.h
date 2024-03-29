//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDGymKitPairingManager_h
#define HDGymKitPairingManager_h
@import Foundation;

#include "HDCurrentWorkoutObserver-Protocol.h"
#include "HDFitnessMachineConnectionInitiatorProtocol-Protocol.h"
#include "HDFitnessMachineSession.h"
#include "HDFitnessMachineSimulatorSupport.h"
#include "HDFitnessMachineStateTimers.h"
#include "HDFitnessMachineStateTimersDelegate-Protocol.h"
#include "HDGymKitPairingManagerDelegate-Protocol.h"
#include "HDGymKitSettings.h"
#include "HDGymKitSettingsDelegate-Protocol.h"
#include "HDNearFieldInterface.h"
#include "HDNearFieldInterfaceDelegate-Protocol.h"
#include "HDPowerAssertion.h"
#include "HDProfile.h"
#include "HDWatchAppStateMonitor.h"
#include "HDWatchAppStateMonitorDelegate-Protocol.h"

@class CSLSBacklightAssertion, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDGymKitPairingManager : NSObject<HDFitnessMachineStateTimersDelegate, HDGymKitSettingsDelegate, HDWatchAppStateMonitorDelegate, HDNearFieldInterfaceDelegate, HDCurrentWorkoutObserver, HDFitnessMachineConnectionInitiatorProtocol> {
  /* instance variables */
  HDNearFieldInterface *_nearFieldInterface;
  NSObject<OS_dispatch_queue> *_queue;
  HDPowerAssertion *_tagReadPowerAssertion;
  CSLSBacklightAssertion *_backlightAssertion;
  unsigned long long _bluetoothState;
  HDFitnessMachineStateTimers *_fitnessMachineStateTimers;
  HDWatchAppStateMonitor *_workoutAppStateMonitor;
  HDFitnessMachineSession *_fitnessMachineSession;
  HDProfile *_profile;
  unsigned long long _currentDiscovery;
  NSMutableDictionary *_connectionInitiatorClients;
  HDFitnessMachineSimulatorSupport *_simulatorSupport;
  BOOL _expressModeAssertionTaken;
  HDGymKitSettings *_gymKitSettings;
}

@property (weak, nonatomic) NSObject<HDGymKitPairingManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (void)dealloc;
- (id)_newNearFieldInterface;
- (id)_newWatchAppStateMonitor;
- (void)reset;
- (void)handleBLEConnectionCompletedSuccessfully:(BOOL)successfully;
- (void)gymKitSettings:(id)settings didChangeFromNFCPermission:(unsigned long long)nfcpermission toNFCPermission:(unsigned long long)nfcpermission;
- (void)nearFieldInterfaceDidEnterField:(id)field;
- (void)nearFieldInterfaceFieldDetectionDidEndUnexpectedly:(id)unexpectedly;
- (void)nearFieldInterfaceDidReadTag:(id)tag;
- (void)nearFieldInterfaceTagSessionDidEndUnexpectedly:(id)unexpectedly;
- (void)monitorDidDetectAppActivate:(id)activate;
- (void)monitorDidDetectAppDeactivate:(id)deactivate;
- (void)workoutManager:(id)manager didUpdateCurrentWorkout:(id)workout;
- (void)workoutManager:(id)manager currentWorkout:(id)workout didChangeToState:(long long)state;
- (void)stateTimersFieldDetectTimeout:(id)timeout;
- (void)stateTimersTagReadTimeout:(id)timeout;
- (void)stateTimersUserAcceptanceTimeout:(id)timeout;
- (void)registerConnectionInitiatorClient:(id)client withConnectionUUID:(id)uuid;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)uuid activityType:(unsigned long long)type withConnectionUUID:(id)uuid;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)uuid withConnectionUUID:(id)uuid;
- (void)workoutAppIsReady;
- (void)updatedFitnessMachine;
- (void)updatedFitnessMachineState:(unsigned long long)state fitnessMachineSessionUUID:(id)uuid;
- (void)updatedConnectionStateWithError:(id)error;
- (void)deliverError:(id)error;
- (void)simulateTapWithFitnessMachineType:(unsigned long long)type;
- (void)simulateAccept;
@end

#endif /* HDGymKitPairingManager_h */
