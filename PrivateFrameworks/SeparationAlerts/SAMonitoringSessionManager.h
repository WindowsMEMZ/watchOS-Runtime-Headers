//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef SAMonitoringSessionManager_h
#define SAMonitoringSessionManager_h
@import Foundation;

#include "SAAnalyticsServiceProtocol-Protocol.h"
#include "SAAudioAccessory.h"
#include "SADeviceRecord.h"
#include "SAGeoFenceRequestProtocol-Protocol.h"
#include "SAMonitoringSessionManagerServiceProtocol-Protocol.h"
#include "SAPersistenceManager.h"
#include "SAScenarioClassifierClientProtocol-Protocol.h"
#include "SATimeClientProtocol-Protocol.h"
#include "SATimeServiceProtocol-Protocol.h"
#include "SATravelTypeClassifierClientProtocol-Protocol.h"
#include "SATravelTypeClassifierServiceProtocol-Protocol.h"
#include "SAWithYouDetectorClientProtocol-Protocol.h"
#include "SAWithYouDetectorServiceProtocol-Protocol.h"
#include "TAEventProtocol-Protocol.h"

@class NSDate, NSHashTable, NSMutableDictionary, NSMutableSet, NSUUID, TALocationLite;
@protocol SAFenceManagerServiceProtocol><SAFenceManagerRequestProtocol;

@interface SAMonitoringSessionManager : NSObject<SAMonitoringSessionManagerServiceProtocol, SAScenarioClassifierClientProtocol, SAWithYouDetectorClientProtocol, SATimeClientProtocol, SATravelTypeClassifierClientProtocol>

@property (retain, nonatomic) NSObject<SATimeServiceProtocol> *clock;
@property (retain, nonatomic) NSObject<SAWithYouDetectorServiceProtocol> *withYouDetector;
@property (retain, nonatomic) NSObject<SAGeoFenceRequestProtocol> *fenceRequestServicer;
@property (retain, nonatomic) NSObject<SAFenceManagerServiceProtocol><SAFenceManagerRequestProtocol> *fenceManager;
@property (retain, nonatomic) NSHashTable *clients;
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDtoMonitoringSession;
@property (retain, nonatomic) TALocationLite *lastLocation;
@property (retain, nonatomic) SADeviceRecord *deviceRecord;
@property (retain, nonatomic) NSObject<SAAnalyticsServiceProtocol> *analytics;
@property (retain, nonatomic) NSObject<SATravelTypeClassifierServiceProtocol> *travelTypeClassifier;
@property (retain, nonatomic) NSMutableDictionary *devices;
@property (retain, nonatomic) NSMutableDictionary *safeLocations;
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDtoSafeLocationUUIDs;
@property (nonatomic) BOOL requestedPeriodicScan;
@property (nonatomic) unsigned long long disabledReasons;
@property (retain, nonatomic) NSDate *caLastAlertDate;
@property (nonatomic) long long caBroughtOutOnTravel;
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDtoAlertContext;
@property (nonatomic) unsigned long long caCurrentVehicularState;
@property (nonatomic) BOOL caIsVehicularBTHintOn;
@property (retain, nonatomic) SAPersistenceManager *persistenceManager;
@property (retain, nonatomic) SAAudioAccessory *audioAccessoryManager;
@property (retain, nonatomic) NSUUID *nextScheduledAlarmForPersistenceWrite;
@property (retain, nonatomic) NSUUID *scheduledAlarmForForceUpdateWithYouStatus;
@property (retain, nonatomic) NSObject<TAEventProtocol> *currentVisitOrLOIEvent;
@property (retain, nonatomic) NSObject<TAEventProtocol> *previousVisitOrLOIEvent;
@property (retain, nonatomic) NSDate *timeOfAttemptToLoadFromPersistence;
@property (nonatomic) BOOL isCompanionConnected;
@property (retain, nonatomic) NSMutableSet *devicesWithToBePopulatedTrackedTravelingStartLocation;
@property (retain, nonatomic) NSMutableSet *devicesWithPendingTransition;
@property (nonatomic) BOOL isInAirplaneMode;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL standby;

/* class methods */
+ (id)convertSAMonitoringSessionStateToString:(unsigned long long)string;

/* instance methods */
- (id)initWithWithYouDetector:(id)detector fenceRequestServicer:(id)servicer fenceManager:(id)manager travelTypeClassifier:(id)classifier clock:(id)clock deviceRecord:(id)record analytics:(id)analytics persistenceManager:(id)manager audioAccessoryManager:(id)manager;
- (void)requestToStartBackgroundScanning;
- (void)requestToStopBackgroundScanning;
- (void)requestToFetchLastVisit;
- (void)configureBackgroundScanning;
- (void)bootstrapMonitoringSessionRecord:(id)record;
- (BOOL)monitoringSessionState:(unsigned long long)state matchesWithScenarioClass:(unsigned long long)class;
- (void)checkForDevicesNeedingTransition;
- (void)forceStandbyMode:(id)mode;
- (BOOL)allDevicesInSafeLocation;
- (BOOL)anyDeviceInUnsafeLocation;
- (void)createMonitoringDevice:(id)device;
- (void)cancelMonitoringDevice:(id)device;
- (void)attemptToPopulateTrackedTravelingStartLocationForDevice:(id)device;
- (void)changeMonitoringSessionState:(id)state toState:(unsigned long long)state;
- (long long)determineTrackedTravelingCount;
- (BOOL)needPeriodicScan;
- (void)stopPeriodicScans;
- (void)stopPeriodicScansIfNotNeeded;
- (void)startPeriodicScans;
- (void)startPeriodicScansIfNeeded;
- (unsigned long long)getMoreSpecificSADeviceType:(id)type;
- (long long)checkInEarStatus:(id)status;
- (void)handleSeparationForDeviceUUID:(id)uuid withSafeLocationRecommendation:(id)recommendation context:(id)context;
- (void)handleGeofenceExitedForDeviceUUID:(id)uuid;
- (BOOL)_isOnlyMonitoringDisconnectedCompanionDevice;
- (BOOL)addTravelFenceForDevice:(id)device;
- (void)removeTravelFenceForDevice:(id)device;
- (void)storeSeparationLocation:(id)location;
- (void)notifyWhileTraveling:(id)traveling isBookendingTravel:(BOOL)travel;
- (void)notifyWhenLeftBehind:(id)behind;
- (void)notifyLeftBehind:(id)behind withRegion:(id)region isEarlyVehicularTrigger:(BOOL)trigger;
- (void)notifyEarlyLeftBehind:(id)behind;
- (id)createLocationFromCircularRegion:(id)region forDevice:(id)device withContext:(unsigned long long)context;
- (void)addDevice:(id)device isLastDeviceEvent:(BOOL)event;
- (void)modifyDevice:(id)device;
- (void)removeDeviceWithUUID:(id)uuid isLastDeviceEvent:(BOOL)event;
- (void)handleNewSafeLocation:(id)location;
- (void)handleModifiedSafeLocation:(id)location;
- (void)handleRemovedSafeLocation:(id)location;
- (void)setSafeLocations:(id)locations forDeviceUUID:(id)uuid;
- (void)addSafeLocation:(id)location forDeviceUUID:(id)uuid;
- (void)removeSafeLocation:(id)location forDeviceUUID:(id)uuid;
- (void)removeAndStopSafeLocationsForDeviceUUID:(id)uuid;
- (void)startSafeLocation:(id)location forDevice:(id)device;
- (void)stopSafeLocation:(id)location forDevice:(id)device;
- (void)handleModifiedSafeLocation:(id)location forDeviceUUID:(id)uuid;
- (void)removeDevicesIfNeededPerEvent:(id)event;
- (void)addDevicesIfNeededPerEvent:(id)event;
- (void)addSafeLocationsIfNeededPerNewSet:(id)set forDevice:(id)device;
- (void)removeSafeLocationsIfNeededPerNewSet:(id)set forDevice:(id)device;
- (BOOL)isWithinCurrentVisitOrLOI:(id)loi;
- (BOOL)shouldIssueBookendedNotificationBasedOnLocationForDevice:(id)device;
- (BOOL)shouldIssueBookendedNotificationBasedOnTimeForDevice:(id)device;
- (BOOL)shouldIssueBookendedNotificationForDevice:(id)device;
- (void)ingestTAEvent:(id)taevent;
- (void)updateDevicesWithSafeLocations:(id)locations;
- (id)computeRemovedSafeLocations:(id)locations;
- (void)updateSafeLocations:(id)locations;
- (void)updateLocation:(id)location;
- (void)handleGeofenceEvent:(id)event;
- (void)setUpTravelingGeofencesOnAirplaneModeToggleOffIfNeeded;
- (void)removeDisableReason:(unsigned long long)reason;
- (void)addDisableReason:(unsigned long long)reason;
- (void)handleSystemStateChanged:(id)changed;
- (void)didChangeScenarioClassFrom:(unsigned long long)from to:(unsigned long long)to forDevice:(id)device;
- (BOOL)isAnyInTrackedInUnsafeLocation;
- (BOOL)isAnyTrackedWhileTraveling;
- (void)addClient:(id)client;
- (void)removeClient:(id)client;
- (unsigned long long)stateForDeviceUUID:(id)uuid;
- (unsigned long long)scenarioClassForDeviceUUID:(id)uuid;
- (long long)earlyVehicularTriggerForDeviceUUID:(id)uuid;
- (void)didForceUpdateWithYouStatus;
- (void)checkReunion:(unsigned long long)reunion to:(unsigned long long)to forDeviceWithUUID:(id)uuid;
- (BOOL)deviceShouldTransitionWithLastScenarioChangeDate:(id)date lastWithYouDate:(id)date;
- (void)updatedWithYouStatusFrom:(unsigned long long)from to:(unsigned long long)to forDeviceWithUUID:(id)uuid;
- (id)getLastScenarioChangeDateAmongAllDevices;
- (void)scheduleNextForceUpdateWithYouStatusFromReferenceDate:(id)date forAlertForDevice:(id)device alertType:(unsigned long long)type;
- (BOOL)_isOnlyMonitoringCompanionDevice;
- (void)scheduleNextPersistenceWrite;
- (double)timeDelayForRetryScanForAlertForDeviceUUID:(id)uuid alertType:(unsigned long long)type;
- (BOOL)enoughTimeHasPassedBeforeSurfacingAlert:(id)alert forAlertForDevice:(id)device alertType:(unsigned long long)type;
- (double)minimumTimeSinceScenarioTransitionForAlertForDeviceUUID:(id)uuid alertType:(unsigned long long)type;
- (void)alarmFiredForUUID:(id)uuid;
- (void)didChangeTravelTypeFrom:(unsigned long long)from to:(unsigned long long)to hints:(unsigned long long)hints;
@end

#endif /* SAMonitoringSessionManager_h */
