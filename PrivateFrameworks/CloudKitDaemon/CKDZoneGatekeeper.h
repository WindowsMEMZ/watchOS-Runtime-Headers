//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDZoneGatekeeper_h
#define CKDZoneGatekeeper_h
@import Foundation;

#include "CKDZoneGatekeeperImplementation.h"

@interface CKDZoneGatekeeper : NSObject

@property (retain, nonatomic) CKDZoneGatekeeperImplementation *foreground;
@property (retain, nonatomic) CKDZoneGatekeeperImplementation *background;

/* class methods */
+ (id)gatekeeperForContainerID:(id)id accountID:(id)id;

/* instance methods */
- (id)initInternal;
- (void)registerWaiter:(id)waiter forZoneIDs:(id)ids expectDelayBeforeRequestBegins:(BOOL)begins completionHandler:(id /* block */)handler;
- (void)relinquishLocksForWaiter:(id)waiter deferRelinquish:(BOOL)relinquish;
- (BOOL)hasStatusToReport;
- (id)CKStatusReportArray;
@end

#endif /* CKDZoneGatekeeper_h */
