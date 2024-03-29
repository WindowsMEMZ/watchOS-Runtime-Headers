//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef NWKForecastManager_h
#define NWKForecastManager_h
@import Foundation;

#include "NWKForecastConnectionDelegate-Protocol.h"
#include "NWKLocationConnection.h"
#include "NWKLocationConnectionDelegate-Protocol.h"
#include "NWKRoutineForecastConnection.h"
#include "NWKRoutineForecastObservable-Protocol.h"
#include "NWKUnfairLockCache.h"

@class NSArray, NSHashTable, NSMutableDictionary, NSString, NSTimer, WFLocation;

@interface NWKForecastManager : NSObject<NWKForecastConnectionDelegate, NWKLocationConnectionDelegate, NWKRoutineForecastObservable>

@property (nonatomic) BOOL useStaticLocationCache;
@property (nonatomic) Class forecastConnectionKind;
@property (retain, nonatomic) NSMutableDictionary *ephemeralConnections;
@property (retain, nonatomic) NSTimer *ephemeralConnectionCleanupTimer;
@property (retain, nonatomic) NWKUnfairLockCache *forecastCache;
@property (retain, nonatomic) NWKUnfairLockCache *forecastConnectionCache;
@property (nonatomic) BOOL dataRequestIsUserInitiated;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NWKLocationConnection *locationConnection;
@property (readonly, nonatomic) NSArray *forecastConnections;
@property (retain, nonatomic) NWKRoutineForecastConnection *routineForecastConnection;
@property (retain, nonatomic) NSArray *staticLocations;
@property (retain, nonatomic) WFLocation *localLocation;
@property (retain, nonatomic) WFLocation *selectedLocation;
@property (nonatomic) BOOL metricObservationMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithLocationConnectionKind:(Class)kind;
- (id)initWithLocationConnectionKind:(Class)kind forecastConnectionKind:(Class)kind;
- (id)initWithLocationConnectionKind:(Class)kind forecastConnectionKind:(Class)kind useStaticLocationCache:(BOOL)cache;
- (void)addLocationToList:(id)list;
- (void)removeLocationFromList:(id)list;
- (void)removeForecastForLocation:(id)location;
- (void)removeForecastConnectionForLocation:(id)location;
- (id)forecastForLocation:(id)location;
- (void)validConditionsForLocation:(id)location forDate:(id)date fetchHandler:(id /* block */)handler;
- (id)validConditionsForLocation:(id)location forDate:(id)date;
- (id)locationWithLocationID:(id)id;
- (id)locationWithLocationKey:(id)key;
- (unsigned long long)indexOfLocationInStaticLocations:(id)locations;
- (unsigned long long)indexOfLocationKeyInStaticLocations:(id)locations;
- (BOOL)isLocationInStaticLocations:(id)locations;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)pauseAllConnectionsWithCompletion:(id /* block */)completion;
- (void)resumeConnectionsForLocationListAndLocations:(id)locations connectionKey:(id)key completion:(id /* block */)completion;
- (void)pauseForecastConnectionForCoreLocation:(id)location;
- (void)pauseForecastConnectionForCoreLocation:(id)location completion:(id /* block */)completion;
- (void)pauseForecastConnectionForLocation:(id)location;
- (void)pauseForecastConnectionForLocation:(id)location completion:(id /* block */)completion;
- (void)resumeCachedForecastConnectionForLocation:(id)location;
- (void)resumeForecastConnectionForCoreLocation:(id)location;
- (void)resumeForecastConnectionForCoreLocation:(id)location completion:(id /* block */)completion;
- (void)resumeForecastConnectionForLocation:(id)location;
- (void)resumeForecastConnectionForLocation:(id)location completion:(id /* block */)completion;
- (void)resumeForecastConnectionForLocation:(id)location forecastTypesFlags:(unsigned long long)flags completion:(id /* block */)completion;
- (void)pauseLocationConnection;
- (void)pauseLocationConnectionWithCompletion:(id /* block */)completion;
- (void)resumeLocationConnectionWithTrackedLocationSensitivity:(BOOL)sensitivity;
- (void)resumeLocationConnection;
- (void)resumeLocationConnectionWithCompletion:(id /* block */)completion;
- (void)resumeLocationConnectionWithTrackedLocationSensitivity:(BOOL)sensitivity completion:(id /* block */)completion;
- (void)pauseRoutineForecastConnectionWithCompletion:(id /* block */)completion;
- (void)resumeRoutineForecastConnectionForInterval:(id)interval lastUpdateToken:(unsigned long long)token completion:(id /* block */)completion;
- (void)_enumerateObserversWithBlock:(id /* block */)block;
- (id)_notifyObserver:(id)observer ofUpdatedStaticLocations:(id)locations previousStaticLocations:(id)locations;
- (void)_notifyObserversOfUpdatedLocationForecast:(id)forecast;
- (void)_notifyObserversOfUpdatedLocalLocationMonitorState:(long long)state;
- (void)_notifyObserversOfUpdatedDisplayName:(id)name forLocation:(id)location;
- (void)_notifyObserversOfUpdatedTimeZone:(id)zone forLocation:(id)location;
- (void)_notifyObserversOfUpdatedLocalLocation:(id)location previousLocalLocation:(id)location;
- (void)_notifyObserversOfUpdatedSelectedLocation:(id)location previousSelectedLocation:(id)location;
- (void)_notifyObserversOfUpdatedStaticLocations:(id)locations previousStaticLocations:(id)locations;
- (void)_notifyObserversOfUpdatedRoutineForecast:(id)forecast previousRoutineForecast:(id)forecast;
- (void)connection:(id)connection forecastUpdatedAt:(id)at token:(unsigned long long)token currentConditions:(id)conditions hourlyForecasts:(id)forecasts dailyForecasts:(id)forecasts airQuality:(id)quality nextHourPrecipitation:(id)precipitation severeWeatherEvents:(id)events forLocation:(id)location;
- (void)connection:(id)connection isUpdatingForecast:(BOOL)forecast forLocation:(id)location error:(id)error;
- (void)forecastConnectionInterrupted:(id)interrupted;
- (void)locationConnectionInterrupted:(id)interrupted;
- (void)connection:(id)connection updateLocalLocationMonitorState:(long long)state;
- (void)connection:(id)connection updateLocation:(id)location withDisplayName:(id)name;
- (void)connection:(id)connection updateLocation:(id)location withTimeZone:(id)zone;
- (void)connection:(id)connection updateLocalLocationWithLocation:(id)location;
- (void)connection:(id)connection updateSelectedLocationWithLocation:(id)location;
- (void)connection:(id)connection updateStaticLocationsWithLocations:(id)locations;
- (void)routineForecast:(id)forecast;
- (void)cacheForecast:(unsigned long long)forecast updatedAt:(id)at currentConditions:(id)conditions currentAirQualityConditions:(id)conditions nextHourPrecipitation:(id)precipitation severeWeatherEvents:(id)events hourlyForecastConditions:(id)conditions dailyForecastConditions:(id)conditions forLocation:(id)location completion:(id /* block */)completion;
- (void)_repopulateLocationData:(id)data withLocation:(id)location;
- (BOOL)shouldUseStaticLocationCache;
- (BOOL)isDataRequestUserInitiated;
- (BOOL)isInMetricObservationMode;
@end

#endif /* NWKForecastManager_h */
