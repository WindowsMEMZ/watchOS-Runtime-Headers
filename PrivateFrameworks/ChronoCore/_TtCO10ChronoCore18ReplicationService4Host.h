//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _TtCO10ChronoCore18ReplicationService4Host_h
#define _TtCO10ChronoCore18ReplicationService4Host_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"

@interface ChronoCore.ReplicationService.Host : Swift._SwiftObject { // (Swift)
  /* instance variables */
   replicator;
   snapshotAssertionManager;
   subscriptions;
   queue;
   iconStore;
   remoteExtensionStore;
   extensionManager;
   hostService;
   placeholderService;
   remoteExtensionService;
   snapshotConfigurationService;
   snapshotService;
   stalenessService;
   timelineService;
   extensionReplicator;
   iconReplicator;
   placeholderReplicator;
   snapshotConfigurationReplicator;
   snapshotReplicator;
   timelineConfigurationReplicator;
   timelineReplicator;
}

@end

#endif /* _TtCO10ChronoCore18ReplicationService4Host_h */
