//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKCarouselLocationManager_h
#define NTKCarouselLocationManager_h
@import Foundation;

#include "NTKLocationManager.h"
#include "CLLocationManagerDelegate-Protocol.h"
#include "NTKLocationCoordinator.h"
#include "NTKLocationCoordinatorDelegate-Protocol.h"

@class CLInUseAssertion, CLLocation, CLLocationManager, NSDate, NSLock, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface NTKCarouselLocationManager : NTKLocationManager<CLLocationManagerDelegate, NTKLocationCoordinatorDelegate> {
  /* instance variables */
  NTKLocationCoordinator *_locationCoordinator;
  CLLocation *_currentLocation;
  CLLocation *_previousLocation;
  unsigned long long _handlerCounter;
  unsigned long long _state;
  NSMutableDictionary *_locationUpdateHandlers;
  CLLocationManager *_locationManager;
  CLInUseAssertion *_locationInUseAssertion;
  NSObject<OS_dispatch_queue> *_queue;
  NSDate *_lastLocationUpdateDate;
  NSLock *_locationAccessLock;
  NSLock *_tokenAccessLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_locationFromDefaults;
+ (void)_saveLocationIntoDefaultsWithLocation:(id)location;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)currentLocation;
- (id)previousLocation;
- (id)anyLocation;
- (id)startLocationUpdatesWithIdentifier:(id)identifier handler:(id /* block */)handler;
- (id)startLocationUpdatesWithIdentifier:(id)identifier wantsGroundElevation:(BOOL)elevation handler:(id /* block */)handler;
- (void)stopLocationUpdatesForToken:(id)token;
- (void)_debugUpdateToLocationWithLatitude:(double)latitude longitude:(double)longitude;
- (id)_debugLastUpdateDate;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)locationManagerDidChangeAuthorization:(id)authorization;
- (void)_didReceiveLocation:(id)location;
- (void)_updateLocation:(id)location;
- (void)_discardLocations;
- (void)_updateGroundElevationRequesting;
- (void)_requestMonitoringIfPossible;
- (void)_startMonitoring;
- (void)_cancelMonitoring;
- (void)_notifyUpdateHandlersWithError:(id)error;
- (void)requestCancelMonitoringFromLocationCoordinator:(id)coordinator;
- (void)requestStartMonitoringFromLocationCoordinator:(id)coordinator;
- (void)requestDiscardLocationsFromLocationCoordinator:(id)coordinator;
@end

#endif /* NTKCarouselLocationManager_h */
