//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORouteHypothesisMonitorWalkingDriving_h
#define GEORouteHypothesisMonitorWalkingDriving_h
@import Foundation;

#include "GEORouteHypothesisMonitor.h"

@interface GEORouteHypothesisMonitorWalkingDriving : GEORouteHypothesisMonitor
/* instance methods */
- (void)_recalculateETAWithRouteMatch:(id)match;
- (void)_fetchETAWithRouteMatch:(id)match;
- (void)_sendETARequestWithRouteMatch:(id)match updater:(id)updater;
- (void)checkRouteForLocation:(id)location;
- (BOOL)_checkForArrival:(id)arrival routeMatch:(id)match;
@end

#endif /* GEORouteHypothesisMonitorWalkingDriving_h */
