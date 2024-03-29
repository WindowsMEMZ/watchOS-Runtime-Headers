//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _TtC10ChronoCore15LocationService_h
#define _TtC10ChronoCore15LocationService_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"

@interface ChronoCore.LocationService : Swift._SwiftObject { // (Swift)
  /* instance variables */
   extManager;
   extManagerSubscription;
   graceStore;
   inUseAssertionType;
   authMonitorType;
   significantChangeMonitorType;
   graceStoreFlushInterval;
   inUseNanosecondsOfGrace;
   serialProcessingQueue;
   lock;
   invalidated;
   extInfoByIdentifier;
   graceStoreFlushPending;
   graceState;
   graceTimer;
   authMonitorByIdentifier;
   publisherLock;
   significantChangeMonitor;
   _authPermissionsChangedPublisher;
   _significantLocationChangedPublisher;
}

@end

#endif /* _TtC10ChronoCore15LocationService_h */
