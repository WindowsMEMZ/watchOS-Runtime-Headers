//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNTraceNavigationUpdateRecorder_h
#define MNTraceNavigationUpdateRecorder_h
@import Foundation;

#include "MNNavigationSessionObserver-Protocol.h"
#include "MNTraceRecorder.h"

@class NSString;

@interface MNTraceNavigationUpdateRecorder : NSObject<MNNavigationSessionObserver> {
  /* instance variables */
  MNTraceRecorder *_traceRecorder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTraceRecorder:(id)recorder;
- (void)_recordRouteChangeWithRouteInfo:(id)info reason:(unsigned long long)reason;
- (void)navigationSession:(id)session didSwitchToNewTransportType:(int)type newRoute:(id)route;
- (void)navigationSession:(id)session didReroute:(id)reroute withLocation:(id)location withAlternateRoutes:(id)routes rerouteReason:(unsigned long long)reason;
- (void)navigationSession:(id)session didResumeNavigatingFromWaypoint:(id)waypoint endOfLegIndex:(unsigned long long)index reason:(unsigned long long)reason;
@end

#endif /* MNTraceNavigationUpdateRecorder_h */
