//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef SAScenarioClassifier_h
#define SAScenarioClassifier_h
@import Foundation;

#include "SAFenceManagerClientProtocol-Protocol.h"
#include "SAFenceManagerRequestProtocol-Protocol.h"
#include "SAScenarioClassifierServiceProtocol-Protocol.h"
#include "SATimeServiceProtocol-Protocol.h"
#include "SATravelTypeClassifierClientProtocol-Protocol.h"

@class CLCircularRegion, CLRegion, NSDate, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, NSUUID;

@interface SAScenarioClassifier : NSObject<SAScenarioClassifierServiceProtocol, SAFenceManagerClientProtocol, SATravelTypeClassifierClientProtocol>

@property (nonatomic) unsigned long long scenarioClassification;
@property (copy, nonatomic) NSUUID *deviceUuid;
@property (retain, nonatomic) NSHashTable *clients;
@property (copy, nonatomic) CLRegion *currentUnsafeLocation;
@property (copy, nonatomic) CLRegion *lastUnsafeLocation;
@property (retain, nonatomic) NSMutableSet *safeLocations;
@property (retain, nonatomic) NSMutableDictionary *statesBySafeLocation;
@property (copy, nonatomic) CLCircularRegion *currentVisit;
@property (readonly, copy, nonatomic) NSDate *scenarioChangeDate;
@property (retain, nonatomic) NSObject<SAFenceManagerRequestProtocol> *delegate;
@property (retain, nonatomic) NSObject<SATimeServiceProtocol> *timeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)convertSAScenarioClassToString:(unsigned long long)string;

/* instance methods */
- (id)initWithDeviceUuid:(id)uuid;
- (id)initWithDeviceUuid:(id)uuid scenarioClass:(unsigned long long)class unsafeLocation:(id)location;
- (void)dealloc;
- (BOOL)_setNewScenarioClass:(unsigned long long)class;
- (BOOL)_isInsideAnySafeLocation;
- (BOOL)_hasAllSafeLocationStatesKnown;
- (void)_notifyAllClientsOfScenarioChangeFrom:(unsigned long long)from to:(unsigned long long)to;
- (void)didChangeTravelTypeFrom:(unsigned long long)from to:(unsigned long long)to hints:(unsigned long long)hints;
- (void)addGeofence:(id)geofence;
- (void)removeGeofence:(id)geofence;
- (void)didDetermineState:(unsigned long long)state forUnsafeLocation:(id)location forDevice:(id)device;
- (void)didDetermineState:(unsigned long long)state forSafeLocation:(id)location forDevice:(id)device;
- (void)addClient:(id)client;
- (void)removeClient:(id)client;
- (void)ingestTAEvent:(id)taevent;
- (void)_addUnsafeLocation:(id)location;
- (void)_removeUnsafeLocation:(id)location;
- (id)_findSafeLocationWithUUID:(id)uuid;
- (void)_addSafeLocation:(id)location;
- (void)_removeSafeLocation:(id)location;
- (id)getCurrentTime;
@end

#endif /* SAScenarioClassifier_h */
