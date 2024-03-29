//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MSPNavigationListener_h
#define MSPNavigationListener_h
@import Foundation;

#include "GEONavigationListenerPrivateDelegate-Protocol.h"
#include "MSPNavigationListenerDelegate-Protocol.h"

@class GEONavigationGuidanceState, GEONavigationListener, GEOSharedNavState, NSString;
@protocol OS_os_transaction;

@interface MSPNavigationListener : NSObject<GEONavigationListenerPrivateDelegate> {
  /* instance variables */
  GEONavigationListener *_navigationListener;
  GEONavigationGuidanceState *_guidanceState;
  NSObject<OS_os_transaction> *_transaction;
  GEOSharedNavState *_state;
  BOOL _postedStateIsReady;
}

@property (retain, nonatomic) GEOSharedNavState *currentState;
@property (weak, nonatomic) NSObject<MSPNavigationListenerDelegate> *delegate;
@property (readonly, copy, nonatomic) NSString *navigationSessionIdentifier;
@property (readonly, nonatomic) BOOL isInNavigatingState;
@property (readonly, nonatomic) BOOL isCompatibleTransportType;
@property (readonly, nonatomic) BOOL isCompatibleNavigationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)_initPendingStateIfNeeded;
- (void)_initPendingStateIfNeededWithTransportType:(int)type isResumingMultipointRoute:(BOOL)route;
- (void)_checkStateIsReady;
- (void)dealloc;
- (BOOL)_isCompatibleTransportType:(int)type;
- (int)_currentTransportType;
- (BOOL)_currentlyArrivedAtWaypoint;
- (void)_updateRoute:(id)route;
- (BOOL)_updateTraffic:(id)traffic;
- (BOOL)_updateLocation:(id)location withRouteMatchedCoordinate:(struct { unsigned int x0; float x1; })coordinate;
- (BOOL)_updateWaypointsIfNeeded:(id)needed;
- (void)_updateCurrentWaypointIndexFromArrivalTimeInfo:(id)info;
- (BOOL)_updateArrivalTimeAndDistance:(id)distance;
- (void)_updateTransportTypeFromCurrentState;
- (int)_referenceFrameForDestination:(id)destination;
- (void)_updateTransaction;
- (void)navigationListener:(id)listener didChangeNavigationState:(unsigned long long)state transportType:(int)type;
- (void)navigationListener:(id)listener didUpdateGuidanceState:(id)state;
- (void)navigationListener:(id)listener didUpdateETA:(id)eta;
- (void)navigationListener:(id)listener didUpdateLocation:(id)location routeMatchedCoordinate:(struct { unsigned int x0; float x1; })coordinate;
- (void)navigationListener:(id)listener didUpdateRoute:(id)route;
- (void)navigationListener:(id)listener didUpdateTrafficForCurrentRoute:(id)route;
- (void)navigationListener:(id)listener didArriveAtWaypoint:(id)waypoint endOfLegIndex:(unsigned long long)index;
- (void)navigationListener:(id)listener didResumeNavigatingFromWaypoint:(id)waypoint endOfLegIndex:(unsigned long long)index;
- (int)_analyticsPipelineTransportModeForGEOTransportType:(int)type;
- (void)_performDelegateNotificationBlockIfReady:(id /* block */)ready;
@end

#endif /* MSPNavigationListener_h */
