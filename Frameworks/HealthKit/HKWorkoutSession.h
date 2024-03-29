//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKWorkoutSession_h
#define HKWorkoutSession_h
@import Foundation;

#include "HKHealthStore.h"
#include "HKLiveWorkoutBuilder.h"
#include "HKStateMachine.h"
#include "HKStateMachineDelegate-Protocol.h"
#include "HKTaskServerProxyProvider.h"
#include "HKWorkoutActivity.h"
#include "HKWorkoutConfiguration.h"
#include "HKWorkoutMirroringDataUpdate.h"
#include "HKWorkoutSessionDelegate-Protocol.h"
#include "HKWorkoutSessionTaskConfiguration.h"
#include "NSSecureCoding-Protocol.h"
#include "_HKXPCExportable-Protocol.h"

@class NSArray, NSDate, NSError, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HKWorkoutSession : NSObject<_HKXPCExportable, HKStateMachineDelegate, NSSecureCoding> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_clientQueue;
  HKWorkoutSessionTaskConfiguration *_configuration;
  HKTaskServerProxyProvider *_proxyProvider;
  NSError *_disconnectionError;
  NSObject<HKWorkoutSessionDelegate> *_strongDelegate;
  HKLiveWorkoutBuilder *_associatedWorkoutBuilder;
  HKStateMachine *_targetStateMachine;
  NSMutableArray *_dataUpdateQueue;
  HKWorkoutMirroringDataUpdate *_pendingDataUpdate;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) BOOL isGymKitSession;
@property (nonatomic) BOOL shouldStopPreviousSession;
@property (readonly, copy, nonatomic) NSArray *activityConfigurations;
@property (nonatomic) BOOL supportsAppRelaunchForRecovery;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long activityType;
@property (readonly) long long locationType;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;
@property (weak) NSObject<HKWorkoutSessionDelegate> *delegate;
@property (readonly) long long state;
@property (readonly) long long type;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly, copy) HKWorkoutActivity *currentActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)targetWorkoutSessionStateMachineForSessionUUID:(id)uuid;
+ (BOOL)_applicationHasRunningWorkout;
+ (id)clientInterface;
+ (id)serverInterface;
+ (BOOL)supportsSecureCoding;
+ (void)_unitTest_clearAllRunningWorkouts;

/* instance methods */
- (id)initWithActivityType:(unsigned long long)type locationType:(long long)type;
- (id)initWithConfiguration:(id)configuration error:(id *)error;
- (id)initWithHealthStore:(id)store configuration:(id)configuration error:(id *)error;
- (id)_initWithHealthStore:(id)store taskConfiguration:(id)configuration error:(id *)error;
- (void)dealloc;
- (void)_setupWithHealthStore:(id)store;
- (void)_recoverWithCompletion:(id /* block */)completion;
- (void)_queue_markRecoveryRequired;
- (BOOL)_queue_shouldAttemptRecovery;
- (void)_queue_resetStateMachineWithNewState:(long long)state;
- (id)_privateDelegate;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (void)client_didUpdateStartDate:(id)date endDate:(id)date;
- (void)client_didChangeToState:(long long)state date:(id)date;
- (void)client_didGenerateEvents:(id)events;
- (void)client_didFailWithError:(id)error;
- (void)client_synchronizeWithCompletion:(id /* block */)completion;
- (void)client_didSyncSessionEvent:(long long)event date:(id)date;
- (void)client_didSyncCurrentActivity:(id)activity;
- (void)client_didUpdateWorkoutConfiguration:(id)configuration;
- (void)client_didBeginActivity:(id)activity date:(id)date;
- (void)client_didEndActivity:(id)activity date:(id)date;
- (void)client_didSuggestWorkoutConfiguration:(id)configuration date:(id)date;
- (void)client_didReceiveDataFromRemoteWorkoutSession:(id)session completion:(id /* block */)completion;
- (void)client_remoteSessionDidRecover;
- (void)client_didDisconnectFromRemoteWithError:(id)error completion:(id /* block */)completion;
- (void)_queue_enqueueStateEvent:(long long)event date:(id)date completion:(id /* block */)completion;
- (void)stateMachine:(id)machine didIgnoreEvent:(long long)event state:(id)state;
- (void)stateMachine:(id)machine didTransition:(id)transition fromState:(id)state toState:(id)state date:(id)date error:(id)error;
- (void)prepare;
- (void)prepareWithCompletion:(id /* block */)completion;
- (void)startActivityWithDate:(id)date;
- (void)startActivityWithDate:(id)date completion:(id /* block */)completion;
- (void)stopActivityWithDate:(id)date;
- (void)stopActivityWithDate:(id)date completion:(id /* block */)completion;
- (void)end;
- (void)endWithCompletion:(id /* block */)completion;
- (void)pause;
- (void)pauseWithCompletion:(id /* block */)completion;
- (void)pauseWithDate:(id)date completion:(id /* block */)completion;
- (void)resume;
- (void)resumeWithCompletion:(id /* block */)completion;
- (void)resumeWithDate:(id)date completion:(id /* block */)completion;
- (id)associatedWorkoutBuilder;
- (id)associatedWorkoutBuilderWithDevice:(id)device goalType:(unsigned long long)type goal:(id)goal;
- (void)_setAssociatedWorkoutBuilder:(id)builder;
- (void)enableAutomaticDetectionForActivityConfigurations:(id)configurations;
- (void)beginNewActivityWithConfiguration:(id)configuration date:(id)date metadata:(id)metadata;
- (void)endCurrentActivityOnDate:(id)date;
- (void)startMirroringToCompanionDeviceWithCompletion:(id /* block */)completion;
- (void)stopMirroringToCompanionDeviceWithCompletion:(id /* block */)completion;
- (void)deprecated_sendDataToRemoteWorkoutSession:(id)session completion:(id /* block */)completion;
- (void)sendDataToRemoteWorkoutSession:(id)session completion:(id /* block */)completion;
- (void)_queue_sendPendingDataUpdateToRemoteWorkoutSession;
- (void)_enqueueDataUpdate:(id)update;
- (void)_dataUpdateWithUUID:(id)uuid didCompleteWithSuccess:(BOOL)success error:(id)error;
- (void)_queue_pendingDataUpdateDidCompleteWithSuccess:(BOOL)success error:(id)error;
- (void)_setupTaskServerWithCompletion:(id /* block */)completion;
- (void)_setupMirroredSessionTaskServerWithCompletion:(id /* block */)completion;
- (BOOL)_isInvalidatedMirroredSession;
- (BOOL)_queue_isInvalidatedMirroredSession;
- (id)_notMirroringError;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)startActivity;
- (void)stopActivity;
- (void)_unitTest_discardAssociatedWorkoutBuilder;
@end

#endif /* HKWorkoutSession_h */
