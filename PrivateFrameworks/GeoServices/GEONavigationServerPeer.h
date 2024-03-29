//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEONavigationServerPeer_h
#define GEONavigationServerPeer_h
@import Foundation;

#include "GEONavdPeer.h"
#include "GEONavigationServer.h"
#include "GEONavigationServerRequestStateXPCInterface-Protocol.h"

@class NSString;

@interface GEONavigationServerPeer : GEONavdPeer<GEONavigationServerRequestStateXPCInterface>

@property (weak, nonatomic) GEONavigationServer *delegate;
@property (nonatomic) BOOL hasEntitlement;
@property (readonly, nonatomic) BOOL wantsRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)requestRoute;
- (void)requestETAUpdate;
- (void)requestRouteSummary;
- (void)requestTransitSummary;
- (void)requestGuidanceState;
- (void)requestActiveRouteDetailsData;
- (void)requestStepIndex;
- (void)requestStepNameInfo;
- (void)requestRideSelections;
- (void)requestPositionFromSign;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromDestination;
- (void)requestNavigationVoiceVolume;
- (void)requestUpdates;
- (void)dealloc;
@end

#endif /* GEONavigationServerPeer_h */
