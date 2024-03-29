//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHRHealthLiteDataCollector_h
#define HDHRHealthLiteDataCollector_h
@import Foundation;

#include "HDDataCollector-Protocol.h"
#include "HDDiagnosticObject-Protocol.h"
#include "HDHealthDaemonReadyObserver-Protocol.h"
#include "HDHeartRateDataCollector-Protocol.h"

@class CMCatherineFeeder, HDBradycardiaDataAggregator, HDDataCollectorConfiguration, HDDataCollectorState, HDDeviceEntity, HDHeartRateDataAggregator, HDProfile, HDTachycardiaDataAggregator, NSString;
@protocol OS_dispatch_queue;

@interface HDHRHealthLiteDataCollector : NSObject<HDDiagnosticObject, HDHealthDaemonReadyObserver, HDDataCollector, HDHeartRateDataCollector> {
  /* instance variables */
  HDProfile *_profile;
  NSObject<OS_dispatch_queue> *_queue;
  BOOL _heartRateEnabledInPrivacy;
  int _privacyPreferencesNotificationToken;
  HDHeartRateDataAggregator *_heartRateAggregator;
  HDTachycardiaDataAggregator *_tachycardiaAggregator;
  HDBradycardiaDataAggregator *_bradycardiaAggregator;
  HDDataCollectorConfiguration *_heartRateCollectionConfiguration;
  HDDataCollectorConfiguration *_tachycardiaCollectionConfiguration;
  HDDataCollectorConfiguration *_bradycardiaCollectionConfiguration;
  HDDataCollectorState *_heartRateCollectionState;
  HDDataCollectorState *_tachycardiaCollectionState;
  HDDataCollectorState *_bradycardiaCollectionState;
  CMCatherineFeeder *_catherineFeeder;
  HDDeviceEntity *_localDeviceEntity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (void)dealloc;
- (void)daemonReady:(id)ready;
- (void)beginCollectionForDataAggregator:(id)aggregator lastPersistedSensorDatum:(id)datum;
- (void)dataAggregator:(id)aggregator wantsCollectionWithConfiguration:(id)configuration;
- (id)deviceForDataAggregator:(id)aggregator;
- (id)sourceForDataAggregator:(id)aggregator;
- (id)identifierForDataAggregator:(id)aggregator;
- (void)dataCollector:(id)collector didCollectHeartRate:(id)rate device:(id)device source:(id)source;
- (void)_queue_updateAllCollectionTypes;
- (void)_queue_updateHeartRateCollectionType;
- (void)_queue_updateTachycardiaCollectionType;
- (void)_queue_updateBradycardiaCollectionType;
- (void)_queue_createHealthLiteManager;
- (void)_startObservingCurrentWorkoutChanges;
- (void)_workoutManagerStateDidChange;
- (void)_startObservingAssertionManagerChanges;
- (void)_assertionManagerStateChanged:(id)changed;
- (BOOL)_queue_shouldStreamReducedRateHeartRateUpdates;
- (BOOL)_queue_hasHeartRateClientsWithoutWorkouts;
- (void)_queue_privacyPreferencesDidChange;
- (id)diagnosticDescription;
- (void)_registerPowerLogEvent:(id)event;
- (void)_setCatherineFeeder:(id)feeder;
@end

#endif /* HDHRHealthLiteDataCollector_h */
