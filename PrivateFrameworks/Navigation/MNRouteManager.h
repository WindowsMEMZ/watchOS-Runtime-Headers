//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNRouteManager_h
#define MNRouteManager_h
@import Foundation;

#include "MNActiveRouteInfo.h"
#include "MNLocationManagerObserver-Protocol.h"

@class GEOApplicationAuditToken, GEOCommonOptions, GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, GEORouteAttributes, GEORoutePreloader, NSArray, NSMutableArray, NSString;

@interface MNRouteManager : NSObject<MNLocationManagerObserver> {
  /* instance variables */
  MNActiveRouteInfo *_originalRouteInfo;
  GEORoutePreloader *_preloader;
  NSString *_tileLoaderClientIdentifier;
  GEOApplicationAuditToken *_auditToken;
}

@property (readonly, nonatomic) GEOComposedRoute *currentRoute;
@property (readonly, nonatomic) MNActiveRouteInfo *currentRouteInfo;
@property (readonly, nonatomic) NSArray *alternateRoutes;
@property (readonly, nonatomic) NSArray *allRoutes;
@property (readonly, nonatomic) NSArray *contingencyRouteSegments;
@property (readonly, nonatomic) NSArray *previewRoutes;
@property (nonatomic) unsigned long long selectedRouteIndex;
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property (readonly, nonatomic) GEODirectionsRequest *directionsRequest;
@property (readonly, nonatomic) GEODirectionsResponse *directionsResponse;
@property (readonly, nonatomic) GEOCommonOptions *commonOptions;
@property (readonly, nonatomic) NSString *requestingAppIdentifier;
@property (readonly, nonatomic) GEOComposedWaypoint *originalDestination;
@property (readonly, nonatomic) GEOComposedRoute *originalRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAuditToken:(id)token;
- (void)dealloc;
- (void)open;
- (void)close;
- (void)updateWithPreviewRoutes:(id)routes selectedRouteIndex:(unsigned long long)index;
- (void)updateWithStartNavigationDetails:(id)details;
- (void)updateForReroute:(id)reroute rerouteReason:(unsigned long long)reason request:(id)request response:(id)response;
- (void)updateForLocation:(id)location;
- (void)updateWithAlternateRoutes:(id)routes;
- (void)clearCurrentRoute;
- (void)_clearPreloader;
- (void)_updatePreloaderForRoute:(id)route;
- (void)locationManagerUpdatedLocation:(id)location;
- (void)locationManagerFailedToUpdateLocation:(id)location withError:(id)error;
- (void)locationManagerDidReset:(id)reset;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)updates;
- (void)locationManagerDidPauseLocationUpdates:(id)updates;
- (void)locationManagerDidResumeLocationUpdates:(id)updates;
- (void)locationManager:(id)manager didUpdateVehicleSpeed:(double)speed timestamp:(id)timestamp;
- (void)locationManager:(id)manager didUpdateVehicleHeading:(double)heading timestamp:(id)timestamp;
@end

#endif /* MNRouteManager_h */
