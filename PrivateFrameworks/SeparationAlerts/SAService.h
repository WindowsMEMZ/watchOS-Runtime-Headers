//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef SAService_h
#define SAService_h
@import Foundation;

#include "SABluetoothScanRequestProtocol-Protocol.h"
#include "SADeviceRecord.h"
#include "SAFenceManager.h"
#include "SAFenceManagerClientProtocol-Protocol.h"
#include "SAGeoFenceRequestProtocol-Protocol.h"
#include "SALocationRequestProtocol-Protocol.h"
#include "SAMonitoringSessionManager.h"
#include "SAMonitoringSessionManagerClientProtocol-Protocol.h"
#include "SAPersistenceManager.h"
#include "SAPowerLog.h"
#include "SAPowerLogClientProtocol-Protocol.h"
#include "SAServiceServiceProtocol-Protocol.h"
#include "SATime.h"
#include "SATimeEventRequestProtocol-Protocol.h"
#include "SATravelTypeClassifier.h"
#include "SAWithYouDetector.h"

@class NSHashTable, NSString;

@interface SAService : NSObject<SAMonitoringSessionManagerClientProtocol, SAFenceManagerClientProtocol, SAPowerLogClientProtocol, SAServiceServiceProtocol, SAGeoFenceRequestProtocol, SABluetoothScanRequestProtocol, SALocationRequestProtocol, SATimeEventRequestProtocol>

@property (retain, nonatomic) NSHashTable *clients;
@property (retain, nonatomic) SATime *clock;
@property (retain, nonatomic) SADeviceRecord *deviceRecord;
@property (retain, nonatomic) SAWithYouDetector *withYouDetector;
@property (retain, nonatomic) SAMonitoringSessionManager *monitoringSessionManager;
@property (retain, nonatomic) SAFenceManager *fenceManager;
@property (retain, nonatomic) SATravelTypeClassifier *travelTypeClassifier;
@property (retain, nonatomic) SAPowerLog *powerLogger;
@property (retain, nonatomic) SAPersistenceManager *persistenceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAnalytics:(id)analytics isReplay:(BOOL)replay audioAccessoryManager:(id)manager;
- (void)addClient:(id)client;
- (void)removeClient:(id)client;
- (void)enableMonitoringForSeparations:(BOOL)separations;
- (void)notifySeparationsForDevices:(id)devices withLocation:(id)location withContext:(id)context;
- (void)requestBluetoothScanForTypes:(unsigned long long)types;
- (void)requestLocationForType:(unsigned long long)type;
- (void)addGeofence:(id)geofence;
- (void)removeGeofence:(id)geofence;
- (void)requestStateForRegion:(id)region;
- (void)scheduleSATimeEvent:(double)event forAlarm:(id)alarm;
- (void)cancelSATimeEventForAlarm:(id)alarm;
- (void)startBackgroundScanning;
- (void)stopBackgroundScanning;
- (void)stopLongAggressiveScan;
- (void)fetchLastVisit;
- (void)ingestTAEvent:(id)taevent;
- (void)updatedMonitoringState:(unsigned long long)state forDeviceUUID:(id)uuid;
@end

#endif /* SAService_h */
