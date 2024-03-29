//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKFitnessMachineConnectionInitiator_h
#define _HKFitnessMachineConnectionInitiator_h
@import Foundation;

#include "HKFitnessMachineConnectionInitiatorClientInterface-Protocol.h"
#include "HKTaskServerProxyProvider.h"
#include "_HKXPCExportable-Protocol.h"

@class NSString, NSUUID;
@protocol _HKFitnessMachineConnectionInitiatorDelegate;

@interface _HKFitnessMachineConnectionInitiator : NSObject<HKFitnessMachineConnectionInitiatorClientInterface, _HKXPCExportable> {
  /* instance variables */
  atomic BOOL _requiresRegistration;
  HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, nonatomic) NSUUID *UUID;
@property (weak, nonatomic) NSObject<_HKFitnessMachineConnectionInitiatorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)taskIdentifier;

/* instance methods */
- (id)initWithHealthStore:(id)store;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)registerClientIfNeeded;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)uuid activityType:(unsigned long long)type;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)uuid;
- (void)_fetchProxyWithHandler:(id /* block */)handler;
- (void)clientRemote_updatedConnectionState:(unsigned long long)state fitnessMachineSessionUUID:(id)uuid;
- (void)clientRemote_updatedFitnessMachine:(id)machine fitnessMachineSessionUUID:(id)uuid;
- (void)clientRemote_updatedFitnessMachineState:(unsigned long long)state fitnessMachineSessionUUID:(id)uuid;
- (void)clientRemote_workoutAppReady;
- (void)clientRemote_encounteredError:(id)error;
- (void)_simulateTapWithFitnessMachineType:(unsigned long long)type;
- (void)_simulateAccept;
@end

#endif /* _HKFitnessMachineConnectionInitiator_h */
